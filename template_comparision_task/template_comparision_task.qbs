import qbs

CppApplication {
    consoleApplication: true
    cpp.cxxLanguageVersion: "c++23"
    cpp.includePaths: product.sourceDirectory

    Group {
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }

    Group {
        name: "C++"
        prefix: "**/"
        files: [
            "*.h","*.cpp"
        ]
    }
}
