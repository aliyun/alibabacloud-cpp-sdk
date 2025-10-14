// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORREQUESTTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORREQUESTTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchCreateInstantSiteMonitorRequestTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateInstantSiteMonitorRequestTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateInstantSiteMonitorRequestTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    BatchCreateInstantSiteMonitorRequestTaskList() = default ;
    BatchCreateInstantSiteMonitorRequestTaskList(const BatchCreateInstantSiteMonitorRequestTaskList &) = default ;
    BatchCreateInstantSiteMonitorRequestTaskList(BatchCreateInstantSiteMonitorRequestTaskList &&) = default ;
    BatchCreateInstantSiteMonitorRequestTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateInstantSiteMonitorRequestTaskList() = default ;
    BatchCreateInstantSiteMonitorRequestTaskList& operator=(const BatchCreateInstantSiteMonitorRequestTaskList &) = default ;
    BatchCreateInstantSiteMonitorRequestTaskList& operator=(BatchCreateInstantSiteMonitorRequestTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->ispCities_ == nullptr && return this->optionsJson_ == nullptr && return this->taskName_ == nullptr && return this->taskType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline BatchCreateInstantSiteMonitorRequestTaskList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline string ispCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
    inline BatchCreateInstantSiteMonitorRequestTaskList& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string optionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline BatchCreateInstantSiteMonitorRequestTaskList& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline BatchCreateInstantSiteMonitorRequestTaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline BatchCreateInstantSiteMonitorRequestTaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The URL or IP address that is monitored by the task.
    // 
    // >  You must create at least one site monitoring task. You must specify all of the `Address`, `TaskName`, and `TaskType` parameters in each request.
    std::shared_ptr<string> address_ = nullptr;
    // The detection points. If you leave this parameter empty, the system randomly selects three detection points.
    // 
    // The value is a `JSON array`. Example: `{"city":"546","isp":"465"},{"city":"572","isp":"465"},{"city":"738","isp":"465"}`. The values of the city field indicate Beijing, Hangzhou, and Qingdao.
    // 
    // For information about how to obtain detection points, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html).
    std::shared_ptr<string> ispCities_ = nullptr;
    // The extended options of the protocol that is used by the site monitoring task. The options vary based on the protocol.
    std::shared_ptr<string> optionsJson_ = nullptr;
    // The name of the site monitoring task.
    // 
    // The name must be 4 to 100 characters in length, and can contain letters, digits, and underscores (_).
    // 
    // >  You must create at least one site monitoring task. You must specify all of the `Address`, `TaskName`, and `TaskType` parameters in each request.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the site monitoring task.
    // 
    // Valid values: HTTP, PING, TCP, UDP, DNS, SMTP, POP3, and FTP.
    // 
    // >  You must create at least one site monitoring task. You must specify all of the `Address`, `TaskName`, and `TaskType` parameters in each request.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
