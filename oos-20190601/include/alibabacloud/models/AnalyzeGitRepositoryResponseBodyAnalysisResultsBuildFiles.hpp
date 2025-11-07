// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODYANALYSISRESULTSBUILDFILES_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODYANALYSISRESULTSBUILDFILES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
    };
    AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles() = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles(const AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles &) = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles(AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles &&) = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles() = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& operator=(const AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles &) = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& operator=(AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileType_ == nullptr
        && return this->paths_ == nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


  protected:
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
