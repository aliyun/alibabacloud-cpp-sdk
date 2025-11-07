// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODYANALYSISRESULTS_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODYANALYSISRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class AnalyzeGitRepositoryResponseBodyAnalysisResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeGitRepositoryResponseBodyAnalysisResults& obj) { 
      DARABONBA_PTR_TO_JSON(BuildFiles, buildFiles_);
      DARABONBA_PTR_TO_JSON(BuildType, buildType_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeGitRepositoryResponseBodyAnalysisResults& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildFiles, buildFiles_);
      DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    AnalyzeGitRepositoryResponseBodyAnalysisResults() = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResults(const AnalyzeGitRepositoryResponseBodyAnalysisResults &) = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResults(AnalyzeGitRepositoryResponseBodyAnalysisResults &&) = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeGitRepositoryResponseBodyAnalysisResults() = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResults& operator=(const AnalyzeGitRepositoryResponseBodyAnalysisResults &) = default ;
    AnalyzeGitRepositoryResponseBodyAnalysisResults& operator=(AnalyzeGitRepositoryResponseBodyAnalysisResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildFiles_ == nullptr
        && return this->buildType_ == nullptr && return this->runtimeType_ == nullptr; };
    // buildFiles Field Functions 
    bool hasBuildFiles() const { return this->buildFiles_ != nullptr;};
    void deleteBuildFiles() { this->buildFiles_ = nullptr;};
    inline const vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles> & buildFiles() const { DARABONBA_PTR_GET_CONST(buildFiles_, vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles>) };
    inline vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles> buildFiles() { DARABONBA_PTR_GET(buildFiles_, vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles>) };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResults& setBuildFiles(const vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles> & buildFiles) { DARABONBA_PTR_SET_VALUE(buildFiles_, buildFiles) };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResults& setBuildFiles(vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles> && buildFiles) { DARABONBA_PTR_SET_RVALUE(buildFiles_, buildFiles) };


    // buildType Field Functions 
    bool hasBuildType() const { return this->buildType_ != nullptr;};
    void deleteBuildType() { this->buildType_ = nullptr;};
    inline string buildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResults& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string runtimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline AnalyzeGitRepositoryResponseBodyAnalysisResults& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    std::shared_ptr<vector<Models::AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles>> buildFiles_ = nullptr;
    std::shared_ptr<string> buildType_ = nullptr;
    std::shared_ptr<string> runtimeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
