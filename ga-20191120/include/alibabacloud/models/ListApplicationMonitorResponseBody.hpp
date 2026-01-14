// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListApplicationMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationMonitors, applicationMonitors_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationMonitors, applicationMonitors_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationMonitorResponseBody() = default ;
    ListApplicationMonitorResponseBody(const ListApplicationMonitorResponseBody &) = default ;
    ListApplicationMonitorResponseBody(ListApplicationMonitorResponseBody &&) = default ;
    ListApplicationMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationMonitorResponseBody() = default ;
    ListApplicationMonitorResponseBody& operator=(const ListApplicationMonitorResponseBody &) = default ;
    ListApplicationMonitorResponseBody& operator=(ListApplicationMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(DetectEnable, detectEnable_);
        DARABONBA_PTR_TO_JSON(DetectThreshold, detectThreshold_);
        DARABONBA_PTR_TO_JSON(DetectTimes, detectTimes_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
        DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(DetectEnable, detectEnable_);
        DARABONBA_PTR_FROM_JSON(DetectThreshold, detectThreshold_);
        DARABONBA_PTR_FROM_JSON(DetectTimes, detectTimes_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
        DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      };
      ApplicationMonitors() = default ;
      ApplicationMonitors(const ApplicationMonitors &) = default ;
      ApplicationMonitors(ApplicationMonitors &&) = default ;
      ApplicationMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationMonitors() = default ;
      ApplicationMonitors& operator=(const ApplicationMonitors &) = default ;
      ApplicationMonitors& operator=(ApplicationMonitors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->address_ == nullptr && this->detectEnable_ == nullptr && this->detectThreshold_ == nullptr && this->detectTimes_ == nullptr && this->listenerId_ == nullptr
        && this->optionsJson_ == nullptr && this->silenceTime_ == nullptr && this->state_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline ApplicationMonitors& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline ApplicationMonitors& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // detectEnable Field Functions 
      bool hasDetectEnable() const { return this->detectEnable_ != nullptr;};
      void deleteDetectEnable() { this->detectEnable_ = nullptr;};
      inline bool getDetectEnable() const { DARABONBA_PTR_GET_DEFAULT(detectEnable_, false) };
      inline ApplicationMonitors& setDetectEnable(bool detectEnable) { DARABONBA_PTR_SET_VALUE(detectEnable_, detectEnable) };


      // detectThreshold Field Functions 
      bool hasDetectThreshold() const { return this->detectThreshold_ != nullptr;};
      void deleteDetectThreshold() { this->detectThreshold_ = nullptr;};
      inline int32_t getDetectThreshold() const { DARABONBA_PTR_GET_DEFAULT(detectThreshold_, 0) };
      inline ApplicationMonitors& setDetectThreshold(int32_t detectThreshold) { DARABONBA_PTR_SET_VALUE(detectThreshold_, detectThreshold) };


      // detectTimes Field Functions 
      bool hasDetectTimes() const { return this->detectTimes_ != nullptr;};
      void deleteDetectTimes() { this->detectTimes_ = nullptr;};
      inline int32_t getDetectTimes() const { DARABONBA_PTR_GET_DEFAULT(detectTimes_, 0) };
      inline ApplicationMonitors& setDetectTimes(int32_t detectTimes) { DARABONBA_PTR_SET_VALUE(detectTimes_, detectTimes) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline ApplicationMonitors& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // optionsJson Field Functions 
      bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
      void deleteOptionsJson() { this->optionsJson_ = nullptr;};
      inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
      inline ApplicationMonitors& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


      // silenceTime Field Functions 
      bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
      void deleteSilenceTime() { this->silenceTime_ = nullptr;};
      inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
      inline ApplicationMonitors& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ApplicationMonitors& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ApplicationMonitors& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline ApplicationMonitors& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The ID of the GA instance on which the origin probing task runs.
      shared_ptr<string> acceleratorId_ {};
      // The URL or IP address that was probed.
      shared_ptr<string> address_ {};
      // Indicates whether the automatic diagnostics feature is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> detectEnable_ {};
      // The threshold that is used to trigger the automatic diagnostics feature.
      shared_ptr<int32_t> detectThreshold_ {};
      // The number of times that are required to reach the threshold before the automatic diagnostics feature can be triggered.
      shared_ptr<int32_t> detectTimes_ {};
      // The ID of the listener on which the origin probing task runs.
      shared_ptr<string> listenerId_ {};
      // The extended options of the listener protocol that is used by the origin probing task. The options vary based on the listener protocol.
      shared_ptr<string> optionsJson_ {};
      // The silence period of the automatic diagnostics feature. This parameter indicates the interval at which the automatic diagnostics feature is triggered. If the availability rate does not return to normal after GA triggers an automatic diagnostic task, GA must wait until the silence period ends before GA can trigger another automatic diagnostic task.
      // 
      // If the number of consecutive times that the availability rate drops below the threshold of automatic diagnostics reaches the value of **DetectTimes** , the automatic diagnostics feature is triggered. The automatic diagnostics feature is not triggered again within the silence period even if the availability rate stays below the threshold. If the availability rate does not return to normal after the silence period ends, the automatic diagnostics feature is triggered again.
      // 
      // Unit: seconds.
      shared_ptr<int32_t> silenceTime_ {};
      // The status of the origin probing task. Valid values:
      // 
      // *   **active:** The origin probing task is running.
      // *   **inactive:** The origin probing task is stopped.
      // *   **init:** The origin probing task is being initialized.
      // *   **deleting:** The origin probing task is being deleted.
      shared_ptr<string> state_ {};
      // The origin probing task ID.
      shared_ptr<string> taskId_ {};
      // The origin probing task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->applicationMonitors_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationMonitors Field Functions 
    bool hasApplicationMonitors() const { return this->applicationMonitors_ != nullptr;};
    void deleteApplicationMonitors() { this->applicationMonitors_ = nullptr;};
    inline const vector<ListApplicationMonitorResponseBody::ApplicationMonitors> & getApplicationMonitors() const { DARABONBA_PTR_GET_CONST(applicationMonitors_, vector<ListApplicationMonitorResponseBody::ApplicationMonitors>) };
    inline vector<ListApplicationMonitorResponseBody::ApplicationMonitors> getApplicationMonitors() { DARABONBA_PTR_GET(applicationMonitors_, vector<ListApplicationMonitorResponseBody::ApplicationMonitors>) };
    inline ListApplicationMonitorResponseBody& setApplicationMonitors(const vector<ListApplicationMonitorResponseBody::ApplicationMonitors> & applicationMonitors) { DARABONBA_PTR_SET_VALUE(applicationMonitors_, applicationMonitors) };
    inline ListApplicationMonitorResponseBody& setApplicationMonitors(vector<ListApplicationMonitorResponseBody::ApplicationMonitors> && applicationMonitors) { DARABONBA_PTR_SET_RVALUE(applicationMonitors_, applicationMonitors) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationMonitorResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationMonitorResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationMonitorResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of origin probing tasks.
    shared_ptr<vector<ListApplicationMonitorResponseBody::ApplicationMonitors>> applicationMonitors_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
