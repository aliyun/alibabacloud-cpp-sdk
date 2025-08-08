// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADUSERAPPTOMSARESPONSEBODYRESULTCONTENTDATAAPKINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADUSERAPPTOMSARESPONSEBODYRESULTCONTENTDATAAPKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadUserAppToMsaResponseBodyResultContentDataApkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadUserAppToMsaResponseBodyResultContentDataApkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AfterMd5, afterMd5_);
      DARABONBA_PTR_TO_JSON(AfterSize, afterSize_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_TO_JSON(BeforeMd5, beforeMd5_);
      DARABONBA_PTR_TO_JSON(BeforeSize, beforeSize_);
      DARABONBA_PTR_TO_JSON(ClassForest, classForest_);
      DARABONBA_PTR_TO_JSON(EnhanceMapping, enhanceMapping_);
      DARABONBA_PTR_TO_JSON(EnhanceRules, enhanceRules_);
      DARABONBA_PTR_TO_JSON(EnhancedClasses, enhancedClasses_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UploadUserAppToMsaResponseBodyResultContentDataApkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterMd5, afterMd5_);
      DARABONBA_PTR_FROM_JSON(AfterSize, afterSize_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_FROM_JSON(BeforeMd5, beforeMd5_);
      DARABONBA_PTR_FROM_JSON(BeforeSize, beforeSize_);
      DARABONBA_PTR_FROM_JSON(ClassForest, classForest_);
      DARABONBA_PTR_FROM_JSON(EnhanceMapping, enhanceMapping_);
      DARABONBA_PTR_FROM_JSON(EnhanceRules, enhanceRules_);
      DARABONBA_PTR_FROM_JSON(EnhancedClasses, enhancedClasses_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UploadUserAppToMsaResponseBodyResultContentDataApkInfo() = default ;
    UploadUserAppToMsaResponseBodyResultContentDataApkInfo(const UploadUserAppToMsaResponseBodyResultContentDataApkInfo &) = default ;
    UploadUserAppToMsaResponseBodyResultContentDataApkInfo(UploadUserAppToMsaResponseBodyResultContentDataApkInfo &&) = default ;
    UploadUserAppToMsaResponseBodyResultContentDataApkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadUserAppToMsaResponseBodyResultContentDataApkInfo() = default ;
    UploadUserAppToMsaResponseBodyResultContentDataApkInfo& operator=(const UploadUserAppToMsaResponseBodyResultContentDataApkInfo &) = default ;
    UploadUserAppToMsaResponseBodyResultContentDataApkInfo& operator=(UploadUserAppToMsaResponseBodyResultContentDataApkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterMd5_ != nullptr
        && this->afterSize_ != nullptr && this->appCode_ != nullptr && this->appPackage_ != nullptr && this->beforeMd5_ != nullptr && this->beforeSize_ != nullptr
        && this->classForest_ != nullptr && this->enhanceMapping_ != nullptr && this->enhanceRules_ != nullptr && this->enhancedClasses_ != nullptr && this->id_ != nullptr
        && this->label_ != nullptr && this->progress_ != nullptr && this->status_ != nullptr && this->taskType_ != nullptr && this->versionCode_ != nullptr
        && this->versionName_ != nullptr; };
    // afterMd5 Field Functions 
    bool hasAfterMd5() const { return this->afterMd5_ != nullptr;};
    void deleteAfterMd5() { this->afterMd5_ = nullptr;};
    inline string afterMd5() const { DARABONBA_PTR_GET_DEFAULT(afterMd5_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setAfterMd5(string afterMd5) { DARABONBA_PTR_SET_VALUE(afterMd5_, afterMd5) };


    // afterSize Field Functions 
    bool hasAfterSize() const { return this->afterSize_ != nullptr;};
    void deleteAfterSize() { this->afterSize_ = nullptr;};
    inline int64_t afterSize() const { DARABONBA_PTR_GET_DEFAULT(afterSize_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setAfterSize(int64_t afterSize) { DARABONBA_PTR_SET_VALUE(afterSize_, afterSize) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appPackage Field Functions 
    bool hasAppPackage() const { return this->appPackage_ != nullptr;};
    void deleteAppPackage() { this->appPackage_ = nullptr;};
    inline string appPackage() const { DARABONBA_PTR_GET_DEFAULT(appPackage_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setAppPackage(string appPackage) { DARABONBA_PTR_SET_VALUE(appPackage_, appPackage) };


    // beforeMd5 Field Functions 
    bool hasBeforeMd5() const { return this->beforeMd5_ != nullptr;};
    void deleteBeforeMd5() { this->beforeMd5_ = nullptr;};
    inline string beforeMd5() const { DARABONBA_PTR_GET_DEFAULT(beforeMd5_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setBeforeMd5(string beforeMd5) { DARABONBA_PTR_SET_VALUE(beforeMd5_, beforeMd5) };


    // beforeSize Field Functions 
    bool hasBeforeSize() const { return this->beforeSize_ != nullptr;};
    void deleteBeforeSize() { this->beforeSize_ = nullptr;};
    inline int64_t beforeSize() const { DARABONBA_PTR_GET_DEFAULT(beforeSize_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setBeforeSize(int64_t beforeSize) { DARABONBA_PTR_SET_VALUE(beforeSize_, beforeSize) };


    // classForest Field Functions 
    bool hasClassForest() const { return this->classForest_ != nullptr;};
    void deleteClassForest() { this->classForest_ = nullptr;};
    inline string classForest() const { DARABONBA_PTR_GET_DEFAULT(classForest_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setClassForest(string classForest) { DARABONBA_PTR_SET_VALUE(classForest_, classForest) };


    // enhanceMapping Field Functions 
    bool hasEnhanceMapping() const { return this->enhanceMapping_ != nullptr;};
    void deleteEnhanceMapping() { this->enhanceMapping_ = nullptr;};
    inline const Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping & enhanceMapping() const { DARABONBA_PTR_GET_CONST(enhanceMapping_, Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping) };
    inline Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping enhanceMapping() { DARABONBA_PTR_GET(enhanceMapping_, Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setEnhanceMapping(const Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping & enhanceMapping) { DARABONBA_PTR_SET_VALUE(enhanceMapping_, enhanceMapping) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setEnhanceMapping(Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping && enhanceMapping) { DARABONBA_PTR_SET_RVALUE(enhanceMapping_, enhanceMapping) };


    // enhanceRules Field Functions 
    bool hasEnhanceRules() const { return this->enhanceRules_ != nullptr;};
    void deleteEnhanceRules() { this->enhanceRules_ = nullptr;};
    inline const vector<string> & enhanceRules() const { DARABONBA_PTR_GET_CONST(enhanceRules_, vector<string>) };
    inline vector<string> enhanceRules() { DARABONBA_PTR_GET(enhanceRules_, vector<string>) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setEnhanceRules(const vector<string> & enhanceRules) { DARABONBA_PTR_SET_VALUE(enhanceRules_, enhanceRules) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setEnhanceRules(vector<string> && enhanceRules) { DARABONBA_PTR_SET_RVALUE(enhanceRules_, enhanceRules) };


    // enhancedClasses Field Functions 
    bool hasEnhancedClasses() const { return this->enhancedClasses_ != nullptr;};
    void deleteEnhancedClasses() { this->enhancedClasses_ = nullptr;};
    inline const vector<string> & enhancedClasses() const { DARABONBA_PTR_GET_CONST(enhancedClasses_, vector<string>) };
    inline vector<string> enhancedClasses() { DARABONBA_PTR_GET(enhancedClasses_, vector<string>) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setEnhancedClasses(const vector<string> & enhancedClasses) { DARABONBA_PTR_SET_VALUE(enhancedClasses_, enhancedClasses) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setEnhancedClasses(vector<string> && enhancedClasses) { DARABONBA_PTR_SET_RVALUE(enhancedClasses_, enhancedClasses) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UploadUserAppToMsaResponseBodyResultContentDataApkInfo& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    std::shared_ptr<string> afterMd5_ = nullptr;
    std::shared_ptr<int64_t> afterSize_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appPackage_ = nullptr;
    std::shared_ptr<string> beforeMd5_ = nullptr;
    std::shared_ptr<int64_t> beforeSize_ = nullptr;
    std::shared_ptr<string> classForest_ = nullptr;
    std::shared_ptr<Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfoEnhanceMapping> enhanceMapping_ = nullptr;
    std::shared_ptr<vector<string>> enhanceRules_ = nullptr;
    std::shared_ptr<vector<string>> enhancedClasses_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<int64_t> progress_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> versionCode_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
