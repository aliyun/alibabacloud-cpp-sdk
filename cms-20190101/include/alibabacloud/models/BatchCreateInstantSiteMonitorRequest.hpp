// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchCreateInstantSiteMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateInstantSiteMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateInstantSiteMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    BatchCreateInstantSiteMonitorRequest() = default ;
    BatchCreateInstantSiteMonitorRequest(const BatchCreateInstantSiteMonitorRequest &) = default ;
    BatchCreateInstantSiteMonitorRequest(BatchCreateInstantSiteMonitorRequest &&) = default ;
    BatchCreateInstantSiteMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateInstantSiteMonitorRequest() = default ;
    BatchCreateInstantSiteMonitorRequest& operator=(const BatchCreateInstantSiteMonitorRequest &) = default ;
    BatchCreateInstantSiteMonitorRequest& operator=(BatchCreateInstantSiteMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
        DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
        DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->ispCities_ == nullptr && this->optionsJson_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline TaskList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // ispCities Field Functions 
      bool hasIspCities() const { return this->ispCities_ != nullptr;};
      void deleteIspCities() { this->ispCities_ = nullptr;};
      inline string getIspCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
      inline TaskList& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


      // optionsJson Field Functions 
      bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
      void deleteOptionsJson() { this->optionsJson_ = nullptr;};
      inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
      inline TaskList& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The URL or IP address of the site monitoring task.
      // 
      // > You must create at least one site monitoring task. The `Address`, `TaskName`, and `TaskType` parameters are required.
      shared_ptr<string> address_ {};
      // The information about the detection points. If you leave this parameter empty, the system randomly selects three detection points.
      // 
      // The value must be a `JSONArray`. For example, `[{"city":"546","isp":"465"},{"city":"572","isp":"465"},{"city":"738","isp":"465"}]` corresponds to Beijing, Hangzhou, and Qingdao.
      // 
      // For more information about how to obtain detection point information, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html).
      shared_ptr<string> ispCities_ {};
      // The advanced extension options for the protocol type of the site monitoring task. Different protocol types correspond to different extension options.
      shared_ptr<string> optionsJson_ {};
      // The name of the site monitoring task.
      // 
      // <props="china">
      // 
      // The value must be 4 to 100 characters in length and can contain English letters, numbers, underscores (_), and Chinese characters.
      // 
      // 
      // 
      // <props="intl">
      // 
      // The name of the site monitoring task.
      // 
      // 
      // 
      // <props="partner">
      // 
      // The name must be 4 to 100 characters in length and can contain letters, digits, and underscores (_).
      // 
      // 
      // 
      // > You must create at least one site monitoring task. The `Address`, `TaskName`, and `TaskType` parameters are required.
      shared_ptr<string> taskName_ {};
      // The protocol type of the monitoring task.
      // 
      // Valid values: HTTP, PING, TCP, UDP, DNS, SMTP, POP3, and FTP.
      // 
      // > You must create at least one site monitoring task. The `Address`, `TaskName`, and `TaskType` parameters are required.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->taskList_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchCreateInstantSiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<BatchCreateInstantSiteMonitorRequest::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<BatchCreateInstantSiteMonitorRequest::TaskList>) };
    inline vector<BatchCreateInstantSiteMonitorRequest::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<BatchCreateInstantSiteMonitorRequest::TaskList>) };
    inline BatchCreateInstantSiteMonitorRequest& setTaskList(const vector<BatchCreateInstantSiteMonitorRequest::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline BatchCreateInstantSiteMonitorRequest& setTaskList(vector<BatchCreateInstantSiteMonitorRequest::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    shared_ptr<string> regionId_ {};
    // The list of site monitoring tasks.
    // 
    // > You must create at least one site monitoring task. The `Address`, `TaskName`, and `TaskType` parameters are required.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchCreateInstantSiteMonitorRequest::TaskList>> taskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
