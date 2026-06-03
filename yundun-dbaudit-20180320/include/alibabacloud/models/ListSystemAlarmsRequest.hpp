// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMALARMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMALARMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class ListSystemAlarmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemAlarmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemAlarmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListSystemAlarmsRequest() = default ;
    ListSystemAlarmsRequest(const ListSystemAlarmsRequest &) = default ;
    ListSystemAlarmsRequest(ListSystemAlarmsRequest &&) = default ;
    ListSystemAlarmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemAlarmsRequest() = default ;
    ListSystemAlarmsRequest& operator=(const ListSystemAlarmsRequest &) = default ;
    ListSystemAlarmsRequest& operator=(ListSystemAlarmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmType_ == nullptr
        && this->beginDate_ == nullptr && this->endDate_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr; };
    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline int32_t getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, 0) };
    inline ListSystemAlarmsRequest& setAlarmType(int32_t alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline ListSystemAlarmsRequest& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListSystemAlarmsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSystemAlarmsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListSystemAlarmsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSystemAlarmsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<int32_t> alarmType_ {};
    // This parameter is required.
    shared_ptr<string> beginDate_ {};
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
