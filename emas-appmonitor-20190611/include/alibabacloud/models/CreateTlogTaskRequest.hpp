// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETLOGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETLOGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class CreateTlogTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTlogTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliYunCurrentPk, aliYunCurrentPk_);
      DARABONBA_PTR_TO_JSON(AliYunMainPk, aliYunMainPk_);
      DARABONBA_PTR_TO_JSON(AliYunName, aliYunName_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CollectionNums, collectionNums_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(DeviceJson, deviceJson_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NotifySettingJson, notifySettingJson_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTlogTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliYunCurrentPk, aliYunCurrentPk_);
      DARABONBA_PTR_FROM_JSON(AliYunMainPk, aliYunMainPk_);
      DARABONBA_PTR_FROM_JSON(AliYunName, aliYunName_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CollectionNums, collectionNums_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(DeviceJson, deviceJson_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NotifySettingJson, notifySettingJson_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateTlogTaskRequest() = default ;
    CreateTlogTaskRequest(const CreateTlogTaskRequest &) = default ;
    CreateTlogTaskRequest(CreateTlogTaskRequest &&) = default ;
    CreateTlogTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTlogTaskRequest() = default ;
    CreateTlogTaskRequest& operator=(const CreateTlogTaskRequest &) = default ;
    CreateTlogTaskRequest& operator=(CreateTlogTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliYunCurrentPk_ == nullptr
        && this->aliYunMainPk_ == nullptr && this->aliYunName_ == nullptr && this->appKey_ == nullptr && this->appVersion_ == nullptr && this->beginDate_ == nullptr
        && this->brand_ == nullptr && this->city_ == nullptr && this->clusterId_ == nullptr && this->collectionNums_ == nullptr && this->days_ == nullptr
        && this->deviceJson_ == nullptr && this->endDate_ == nullptr && this->errorType_ == nullptr && this->model_ == nullptr && this->notifySettingJson_ == nullptr
        && this->os_ == nullptr && this->osVersion_ == nullptr && this->sourceType_ == nullptr && this->taskName_ == nullptr; };
    // aliYunCurrentPk Field Functions 
    bool hasAliYunCurrentPk() const { return this->aliYunCurrentPk_ != nullptr;};
    void deleteAliYunCurrentPk() { this->aliYunCurrentPk_ = nullptr;};
    inline string getAliYunCurrentPk() const { DARABONBA_PTR_GET_DEFAULT(aliYunCurrentPk_, "") };
    inline CreateTlogTaskRequest& setAliYunCurrentPk(string aliYunCurrentPk) { DARABONBA_PTR_SET_VALUE(aliYunCurrentPk_, aliYunCurrentPk) };


    // aliYunMainPk Field Functions 
    bool hasAliYunMainPk() const { return this->aliYunMainPk_ != nullptr;};
    void deleteAliYunMainPk() { this->aliYunMainPk_ = nullptr;};
    inline string getAliYunMainPk() const { DARABONBA_PTR_GET_DEFAULT(aliYunMainPk_, "") };
    inline CreateTlogTaskRequest& setAliYunMainPk(string aliYunMainPk) { DARABONBA_PTR_SET_VALUE(aliYunMainPk_, aliYunMainPk) };


    // aliYunName Field Functions 
    bool hasAliYunName() const { return this->aliYunName_ != nullptr;};
    void deleteAliYunName() { this->aliYunName_ = nullptr;};
    inline string getAliYunName() const { DARABONBA_PTR_GET_DEFAULT(aliYunName_, "") };
    inline CreateTlogTaskRequest& setAliYunName(string aliYunName) { DARABONBA_PTR_SET_VALUE(aliYunName_, aliYunName) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline CreateTlogTaskRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline CreateTlogTaskRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline int64_t getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, 0L) };
    inline CreateTlogTaskRequest& setBeginDate(int64_t beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline CreateTlogTaskRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CreateTlogTaskRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateTlogTaskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // collectionNums Field Functions 
    bool hasCollectionNums() const { return this->collectionNums_ != nullptr;};
    void deleteCollectionNums() { this->collectionNums_ = nullptr;};
    inline int64_t getCollectionNums() const { DARABONBA_PTR_GET_DEFAULT(collectionNums_, 0L) };
    inline CreateTlogTaskRequest& setCollectionNums(int64_t collectionNums) { DARABONBA_PTR_SET_VALUE(collectionNums_, collectionNums) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline string getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, "") };
    inline CreateTlogTaskRequest& setDays(string days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // deviceJson Field Functions 
    bool hasDeviceJson() const { return this->deviceJson_ != nullptr;};
    void deleteDeviceJson() { this->deviceJson_ = nullptr;};
    inline string getDeviceJson() const { DARABONBA_PTR_GET_DEFAULT(deviceJson_, "") };
    inline CreateTlogTaskRequest& setDeviceJson(string deviceJson) { DARABONBA_PTR_SET_VALUE(deviceJson_, deviceJson) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline CreateTlogTaskRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline CreateTlogTaskRequest& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateTlogTaskRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // notifySettingJson Field Functions 
    bool hasNotifySettingJson() const { return this->notifySettingJson_ != nullptr;};
    void deleteNotifySettingJson() { this->notifySettingJson_ = nullptr;};
    inline string getNotifySettingJson() const { DARABONBA_PTR_GET_DEFAULT(notifySettingJson_, "") };
    inline CreateTlogTaskRequest& setNotifySettingJson(string notifySettingJson) { DARABONBA_PTR_SET_VALUE(notifySettingJson_, notifySettingJson) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline CreateTlogTaskRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline CreateTlogTaskRequest& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateTlogTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateTlogTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<string> aliYunCurrentPk_ {};
    shared_ptr<string> aliYunMainPk_ {};
    // This parameter is required.
    shared_ptr<string> aliYunName_ {};
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    shared_ptr<string> appVersion_ {};
    shared_ptr<int64_t> beginDate_ {};
    shared_ptr<string> brand_ {};
    shared_ptr<string> city_ {};
    shared_ptr<string> clusterId_ {};
    shared_ptr<int64_t> collectionNums_ {};
    shared_ptr<string> days_ {};
    shared_ptr<string> deviceJson_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<string> errorType_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> notifySettingJson_ {};
    // This parameter is required.
    shared_ptr<string> os_ {};
    shared_ptr<string> osVersion_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
