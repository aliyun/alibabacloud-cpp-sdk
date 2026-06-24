// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class CreateScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataLimitId, dataLimitId_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(IntervalDay, intervalDay_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OssScanPath, ossScanPath_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RunHour, runHour_);
      DARABONBA_PTR_TO_JSON(RunMinute, runMinute_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(ScanRangeContent, scanRangeContent_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskUserName, taskUserName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLimitId, dataLimitId_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(IntervalDay, intervalDay_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OssScanPath, ossScanPath_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RunHour, runHour_);
      DARABONBA_PTR_FROM_JSON(RunMinute, runMinute_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(ScanRangeContent, scanRangeContent_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskUserName, taskUserName_);
    };
    CreateScanTaskRequest() = default ;
    CreateScanTaskRequest(const CreateScanTaskRequest &) = default ;
    CreateScanTaskRequest(CreateScanTaskRequest &&) = default ;
    CreateScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScanTaskRequest() = default ;
    CreateScanTaskRequest& operator=(const CreateScanTaskRequest &) = default ;
    CreateScanTaskRequest& operator=(CreateScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataLimitId_ == nullptr
        && this->featureType_ == nullptr && this->intervalDay_ == nullptr && this->lang_ == nullptr && this->ossScanPath_ == nullptr && this->resourceType_ == nullptr
        && this->runHour_ == nullptr && this->runMinute_ == nullptr && this->scanRange_ == nullptr && this->scanRangeContent_ == nullptr && this->sourceIp_ == nullptr
        && this->taskName_ == nullptr && this->taskUserName_ == nullptr; };
    // dataLimitId Field Functions 
    bool hasDataLimitId() const { return this->dataLimitId_ != nullptr;};
    void deleteDataLimitId() { this->dataLimitId_ = nullptr;};
    inline int64_t getDataLimitId() const { DARABONBA_PTR_GET_DEFAULT(dataLimitId_, 0L) };
    inline CreateScanTaskRequest& setDataLimitId(int64_t dataLimitId) { DARABONBA_PTR_SET_VALUE(dataLimitId_, dataLimitId) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline CreateScanTaskRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // intervalDay Field Functions 
    bool hasIntervalDay() const { return this->intervalDay_ != nullptr;};
    void deleteIntervalDay() { this->intervalDay_ = nullptr;};
    inline int32_t getIntervalDay() const { DARABONBA_PTR_GET_DEFAULT(intervalDay_, 0) };
    inline CreateScanTaskRequest& setIntervalDay(int32_t intervalDay) { DARABONBA_PTR_SET_VALUE(intervalDay_, intervalDay) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateScanTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ossScanPath Field Functions 
    bool hasOssScanPath() const { return this->ossScanPath_ != nullptr;};
    void deleteOssScanPath() { this->ossScanPath_ = nullptr;};
    inline string getOssScanPath() const { DARABONBA_PTR_GET_DEFAULT(ossScanPath_, "") };
    inline CreateScanTaskRequest& setOssScanPath(string ossScanPath) { DARABONBA_PTR_SET_VALUE(ossScanPath_, ossScanPath) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline CreateScanTaskRequest& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // runHour Field Functions 
    bool hasRunHour() const { return this->runHour_ != nullptr;};
    void deleteRunHour() { this->runHour_ = nullptr;};
    inline int32_t getRunHour() const { DARABONBA_PTR_GET_DEFAULT(runHour_, 0) };
    inline CreateScanTaskRequest& setRunHour(int32_t runHour) { DARABONBA_PTR_SET_VALUE(runHour_, runHour) };


    // runMinute Field Functions 
    bool hasRunMinute() const { return this->runMinute_ != nullptr;};
    void deleteRunMinute() { this->runMinute_ = nullptr;};
    inline int32_t getRunMinute() const { DARABONBA_PTR_GET_DEFAULT(runMinute_, 0) };
    inline CreateScanTaskRequest& setRunMinute(int32_t runMinute) { DARABONBA_PTR_SET_VALUE(runMinute_, runMinute) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline int32_t getScanRange() const { DARABONBA_PTR_GET_DEFAULT(scanRange_, 0) };
    inline CreateScanTaskRequest& setScanRange(int32_t scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };


    // scanRangeContent Field Functions 
    bool hasScanRangeContent() const { return this->scanRangeContent_ != nullptr;};
    void deleteScanRangeContent() { this->scanRangeContent_ = nullptr;};
    inline string getScanRangeContent() const { DARABONBA_PTR_GET_DEFAULT(scanRangeContent_, "") };
    inline CreateScanTaskRequest& setScanRangeContent(string scanRangeContent) { DARABONBA_PTR_SET_VALUE(scanRangeContent_, scanRangeContent) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateScanTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateScanTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskUserName Field Functions 
    bool hasTaskUserName() const { return this->taskUserName_ != nullptr;};
    void deleteTaskUserName() { this->taskUserName_ = nullptr;};
    inline string getTaskUserName() const { DARABONBA_PTR_GET_DEFAULT(taskUserName_, "") };
    inline CreateScanTaskRequest& setTaskUserName(string taskUserName) { DARABONBA_PTR_SET_VALUE(taskUserName_, taskUserName) };


  protected:
    // The unique ID of the data asset. The asset can be an instance, a database, or a bucket. Call the [DescribeDataLimits](~~DescribeDataLimits~~) operation to obtain this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataLimitId_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The interval in days between two consecutive custom scan tasks. The value must be between 1 and 2147483648.
    // 
    // This parameter is required.
    shared_ptr<int32_t> intervalDay_ {};
    // The language of the request and response.
    // 
    // - **zh**: Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The scan scope for OSS assets. You can specify a prefix, a suffix, or a regular expression to match objects.
    shared_ptr<string> ossScanPath_ {};
    // The type of resource to query. Valid values:
    // 
    // - **1**: MaxCompute.
    // 
    // - **2**: OSS.
    // 
    // - **3**: AnalyticDB.
    // 
    // - **4**: Tablestore.
    // 
    // - **5**: RDS.
    // 
    // - **6**: a self-managed database.
    // 
    // This parameter is required.
    shared_ptr<int64_t> resourceType_ {};
    // The hour at which the next scan task runs.
    // 
    // This parameter is required.
    shared_ptr<int32_t> runHour_ {};
    // The minute at which the next scan task runs.
    // 
    // This parameter is required.
    shared_ptr<int32_t> runMinute_ {};
    // The matching rule for the scan scope of the custom scan task. This parameter takes effect only when you configure the **ScanRangeContent** parameter. Valid values:
    // 
    // - **0**: full match.
    // 
    // - **1**: prefix match.
    // 
    // - **2**: suffix match.
    // 
    // - **3**: regular expression match.
    // 
    // This parameter is required.
    shared_ptr<int32_t> scanRange_ {};
    // The content to match for the scan of structured data assets. This parameter is used with the ScanRange parameter.
    // 
    // > If you set ScanRange to 0, the scan matches the exact value of this parameter. If you set ScanRange to 1, the scan matches items that have the prefix specified by this parameter. For example, if you set this parameter to \\`test/abc\\`, file paths that start with \\`test/abc\\` are matched. If you set ScanRange to 2, the scan matches items that have the suffix specified by this parameter. If you set ScanRange to 3, the scan matches items that match the regular expression specified by this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> scanRangeContent_ {};
    // This parameter is deprecated.
    shared_ptr<string> sourceIp_ {};
    // The name of the scan task.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The account that creates the scan task.
    shared_ptr<string> taskUserName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
