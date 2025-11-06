// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTUSERAPPASYNCENHANCEINMSARESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTUSERAPPASYNCENHANCEINMSARESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(AfterMd5, afterMd5_);
      DARABONBA_PTR_TO_JSON(AfterSize, afterSize_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_TO_JSON(AssetsFileList, assetsFileList_);
      DARABONBA_PTR_TO_JSON(BeforeMd5, beforeMd5_);
      DARABONBA_PTR_TO_JSON(BeforeSize, beforeSize_);
      DARABONBA_PTR_TO_JSON(ClassForest, classForest_);
      DARABONBA_PTR_TO_JSON(EnhanceMapping, enhanceMapping_);
      DARABONBA_PTR_TO_JSON(EnhanceRules, enhanceRules_);
      DARABONBA_PTR_TO_JSON(EnhancedAssetsFiles, enhancedAssetsFiles_);
      DARABONBA_PTR_TO_JSON(EnhancedClasses, enhancedClasses_);
      DARABONBA_PTR_TO_JSON(EnhancedSoFiles, enhancedSoFiles_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(SoFileList, soFileList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterMd5, afterMd5_);
      DARABONBA_PTR_FROM_JSON(AfterSize, afterSize_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_FROM_JSON(AssetsFileList, assetsFileList_);
      DARABONBA_PTR_FROM_JSON(BeforeMd5, beforeMd5_);
      DARABONBA_PTR_FROM_JSON(BeforeSize, beforeSize_);
      DARABONBA_PTR_FROM_JSON(ClassForest, classForest_);
      DARABONBA_PTR_FROM_JSON(EnhanceMapping, enhanceMapping_);
      DARABONBA_PTR_FROM_JSON(EnhanceRules, enhanceRules_);
      DARABONBA_PTR_FROM_JSON(EnhancedAssetsFiles, enhancedAssetsFiles_);
      DARABONBA_PTR_FROM_JSON(EnhancedClasses, enhancedClasses_);
      DARABONBA_PTR_FROM_JSON(EnhancedSoFiles, enhancedSoFiles_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(SoFileList, soFileList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData() = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData(const StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData &) = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData(StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData &&) = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData() = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& operator=(const StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData &) = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& operator=(StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterMd5_ == nullptr
        && return this->afterSize_ == nullptr && return this->appCode_ == nullptr && return this->appPackage_ == nullptr && return this->assetsFileList_ == nullptr && return this->beforeMd5_ == nullptr
        && return this->beforeSize_ == nullptr && return this->classForest_ == nullptr && return this->enhanceMapping_ == nullptr && return this->enhanceRules_ == nullptr && return this->enhancedAssetsFiles_ == nullptr
        && return this->enhancedClasses_ == nullptr && return this->enhancedSoFiles_ == nullptr && return this->id_ == nullptr && return this->label_ == nullptr && return this->progress_ == nullptr
        && return this->soFileList_ == nullptr && return this->status_ == nullptr && return this->taskType_ == nullptr && return this->versionCode_ == nullptr && return this->versionName_ == nullptr; };
    // afterMd5 Field Functions 
    bool hasAfterMd5() const { return this->afterMd5_ != nullptr;};
    void deleteAfterMd5() { this->afterMd5_ = nullptr;};
    inline string afterMd5() const { DARABONBA_PTR_GET_DEFAULT(afterMd5_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setAfterMd5(string afterMd5) { DARABONBA_PTR_SET_VALUE(afterMd5_, afterMd5) };


    // afterSize Field Functions 
    bool hasAfterSize() const { return this->afterSize_ != nullptr;};
    void deleteAfterSize() { this->afterSize_ = nullptr;};
    inline int64_t afterSize() const { DARABONBA_PTR_GET_DEFAULT(afterSize_, 0L) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setAfterSize(int64_t afterSize) { DARABONBA_PTR_SET_VALUE(afterSize_, afterSize) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appPackage Field Functions 
    bool hasAppPackage() const { return this->appPackage_ != nullptr;};
    void deleteAppPackage() { this->appPackage_ = nullptr;};
    inline string appPackage() const { DARABONBA_PTR_GET_DEFAULT(appPackage_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setAppPackage(string appPackage) { DARABONBA_PTR_SET_VALUE(appPackage_, appPackage) };


    // assetsFileList Field Functions 
    bool hasAssetsFileList() const { return this->assetsFileList_ != nullptr;};
    void deleteAssetsFileList() { this->assetsFileList_ = nullptr;};
    inline const vector<string> & assetsFileList() const { DARABONBA_PTR_GET_CONST(assetsFileList_, vector<string>) };
    inline vector<string> assetsFileList() { DARABONBA_PTR_GET(assetsFileList_, vector<string>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setAssetsFileList(const vector<string> & assetsFileList) { DARABONBA_PTR_SET_VALUE(assetsFileList_, assetsFileList) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setAssetsFileList(vector<string> && assetsFileList) { DARABONBA_PTR_SET_RVALUE(assetsFileList_, assetsFileList) };


    // beforeMd5 Field Functions 
    bool hasBeforeMd5() const { return this->beforeMd5_ != nullptr;};
    void deleteBeforeMd5() { this->beforeMd5_ = nullptr;};
    inline string beforeMd5() const { DARABONBA_PTR_GET_DEFAULT(beforeMd5_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setBeforeMd5(string beforeMd5) { DARABONBA_PTR_SET_VALUE(beforeMd5_, beforeMd5) };


    // beforeSize Field Functions 
    bool hasBeforeSize() const { return this->beforeSize_ != nullptr;};
    void deleteBeforeSize() { this->beforeSize_ = nullptr;};
    inline int64_t beforeSize() const { DARABONBA_PTR_GET_DEFAULT(beforeSize_, 0L) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setBeforeSize(int64_t beforeSize) { DARABONBA_PTR_SET_VALUE(beforeSize_, beforeSize) };


    // classForest Field Functions 
    bool hasClassForest() const { return this->classForest_ != nullptr;};
    void deleteClassForest() { this->classForest_ = nullptr;};
    inline string classForest() const { DARABONBA_PTR_GET_DEFAULT(classForest_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setClassForest(string classForest) { DARABONBA_PTR_SET_VALUE(classForest_, classForest) };


    // enhanceMapping Field Functions 
    bool hasEnhanceMapping() const { return this->enhanceMapping_ != nullptr;};
    void deleteEnhanceMapping() { this->enhanceMapping_ = nullptr;};
    inline const vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping> & enhanceMapping() const { DARABONBA_PTR_GET_CONST(enhanceMapping_, vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping>) };
    inline vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping> enhanceMapping() { DARABONBA_PTR_GET(enhanceMapping_, vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhanceMapping(const vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping> & enhanceMapping) { DARABONBA_PTR_SET_VALUE(enhanceMapping_, enhanceMapping) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhanceMapping(vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping> && enhanceMapping) { DARABONBA_PTR_SET_RVALUE(enhanceMapping_, enhanceMapping) };


    // enhanceRules Field Functions 
    bool hasEnhanceRules() const { return this->enhanceRules_ != nullptr;};
    void deleteEnhanceRules() { this->enhanceRules_ = nullptr;};
    inline const vector<string> & enhanceRules() const { DARABONBA_PTR_GET_CONST(enhanceRules_, vector<string>) };
    inline vector<string> enhanceRules() { DARABONBA_PTR_GET(enhanceRules_, vector<string>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhanceRules(const vector<string> & enhanceRules) { DARABONBA_PTR_SET_VALUE(enhanceRules_, enhanceRules) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhanceRules(vector<string> && enhanceRules) { DARABONBA_PTR_SET_RVALUE(enhanceRules_, enhanceRules) };


    // enhancedAssetsFiles Field Functions 
    bool hasEnhancedAssetsFiles() const { return this->enhancedAssetsFiles_ != nullptr;};
    void deleteEnhancedAssetsFiles() { this->enhancedAssetsFiles_ = nullptr;};
    inline const vector<string> & enhancedAssetsFiles() const { DARABONBA_PTR_GET_CONST(enhancedAssetsFiles_, vector<string>) };
    inline vector<string> enhancedAssetsFiles() { DARABONBA_PTR_GET(enhancedAssetsFiles_, vector<string>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhancedAssetsFiles(const vector<string> & enhancedAssetsFiles) { DARABONBA_PTR_SET_VALUE(enhancedAssetsFiles_, enhancedAssetsFiles) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhancedAssetsFiles(vector<string> && enhancedAssetsFiles) { DARABONBA_PTR_SET_RVALUE(enhancedAssetsFiles_, enhancedAssetsFiles) };


    // enhancedClasses Field Functions 
    bool hasEnhancedClasses() const { return this->enhancedClasses_ != nullptr;};
    void deleteEnhancedClasses() { this->enhancedClasses_ = nullptr;};
    inline const vector<string> & enhancedClasses() const { DARABONBA_PTR_GET_CONST(enhancedClasses_, vector<string>) };
    inline vector<string> enhancedClasses() { DARABONBA_PTR_GET(enhancedClasses_, vector<string>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhancedClasses(const vector<string> & enhancedClasses) { DARABONBA_PTR_SET_VALUE(enhancedClasses_, enhancedClasses) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhancedClasses(vector<string> && enhancedClasses) { DARABONBA_PTR_SET_RVALUE(enhancedClasses_, enhancedClasses) };


    // enhancedSoFiles Field Functions 
    bool hasEnhancedSoFiles() const { return this->enhancedSoFiles_ != nullptr;};
    void deleteEnhancedSoFiles() { this->enhancedSoFiles_ = nullptr;};
    inline const vector<string> & enhancedSoFiles() const { DARABONBA_PTR_GET_CONST(enhancedSoFiles_, vector<string>) };
    inline vector<string> enhancedSoFiles() { DARABONBA_PTR_GET(enhancedSoFiles_, vector<string>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhancedSoFiles(const vector<string> & enhancedSoFiles) { DARABONBA_PTR_SET_VALUE(enhancedSoFiles_, enhancedSoFiles) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setEnhancedSoFiles(vector<string> && enhancedSoFiles) { DARABONBA_PTR_SET_RVALUE(enhancedSoFiles_, enhancedSoFiles) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // soFileList Field Functions 
    bool hasSoFileList() const { return this->soFileList_ != nullptr;};
    void deleteSoFileList() { this->soFileList_ = nullptr;};
    inline const vector<string> & soFileList() const { DARABONBA_PTR_GET_CONST(soFileList_, vector<string>) };
    inline vector<string> soFileList() { DARABONBA_PTR_GET(soFileList_, vector<string>) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setSoFileList(const vector<string> & soFileList) { DARABONBA_PTR_SET_VALUE(soFileList_, soFileList) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setSoFileList(vector<string> && soFileList) { DARABONBA_PTR_SET_RVALUE(soFileList_, soFileList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentData& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    std::shared_ptr<string> afterMd5_ = nullptr;
    std::shared_ptr<int64_t> afterSize_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appPackage_ = nullptr;
    std::shared_ptr<vector<string>> assetsFileList_ = nullptr;
    std::shared_ptr<string> beforeMd5_ = nullptr;
    std::shared_ptr<int64_t> beforeSize_ = nullptr;
    std::shared_ptr<string> classForest_ = nullptr;
    std::shared_ptr<vector<Models::StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping>> enhanceMapping_ = nullptr;
    std::shared_ptr<vector<string>> enhanceRules_ = nullptr;
    std::shared_ptr<vector<string>> enhancedAssetsFiles_ = nullptr;
    std::shared_ptr<vector<string>> enhancedClasses_ = nullptr;
    std::shared_ptr<vector<string>> enhancedSoFiles_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<int64_t> progress_ = nullptr;
    std::shared_ptr<vector<string>> soFileList_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> versionCode_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
