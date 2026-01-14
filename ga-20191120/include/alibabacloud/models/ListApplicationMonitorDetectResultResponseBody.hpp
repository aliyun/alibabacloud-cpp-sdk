// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONMONITORDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONMONITORDETECTRESULTRESPONSEBODY_HPP_
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
  class ListApplicationMonitorDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationMonitorDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationMonitorDetectResultList, applicationMonitorDetectResultList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationMonitorDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationMonitorDetectResultList, applicationMonitorDetectResultList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationMonitorDetectResultResponseBody() = default ;
    ListApplicationMonitorDetectResultResponseBody(const ListApplicationMonitorDetectResultResponseBody &) = default ;
    ListApplicationMonitorDetectResultResponseBody(ListApplicationMonitorDetectResultResponseBody &&) = default ;
    ListApplicationMonitorDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationMonitorDetectResultResponseBody() = default ;
    ListApplicationMonitorDetectResultResponseBody& operator=(const ListApplicationMonitorDetectResultResponseBody &) = default ;
    ListApplicationMonitorDetectResultResponseBody& operator=(ListApplicationMonitorDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationMonitorDetectResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationMonitorDetectResultList& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(DetectTime, detectTime_);
        DARABONBA_PTR_TO_JSON(DiagStatus, diagStatus_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationMonitorDetectResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(DetectTime, detectTime_);
        DARABONBA_PTR_FROM_JSON(DiagStatus, diagStatus_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      ApplicationMonitorDetectResultList() = default ;
      ApplicationMonitorDetectResultList(const ApplicationMonitorDetectResultList &) = default ;
      ApplicationMonitorDetectResultList(ApplicationMonitorDetectResultList &&) = default ;
      ApplicationMonitorDetectResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationMonitorDetectResultList() = default ;
      ApplicationMonitorDetectResultList& operator=(const ApplicationMonitorDetectResultList &) = default ;
      ApplicationMonitorDetectResultList& operator=(ApplicationMonitorDetectResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->content_ == nullptr && this->detail_ == nullptr && this->detectTime_ == nullptr && this->diagStatus_ == nullptr && this->listenerId_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->statusCode_ == nullptr && this->taskId_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline ApplicationMonitorDetectResultList& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ApplicationMonitorDetectResultList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline ApplicationMonitorDetectResultList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // detectTime Field Functions 
      bool hasDetectTime() const { return this->detectTime_ != nullptr;};
      void deleteDetectTime() { this->detectTime_ = nullptr;};
      inline string getDetectTime() const { DARABONBA_PTR_GET_DEFAULT(detectTime_, "") };
      inline ApplicationMonitorDetectResultList& setDetectTime(string detectTime) { DARABONBA_PTR_SET_VALUE(detectTime_, detectTime) };


      // diagStatus Field Functions 
      bool hasDiagStatus() const { return this->diagStatus_ != nullptr;};
      void deleteDiagStatus() { this->diagStatus_ = nullptr;};
      inline string getDiagStatus() const { DARABONBA_PTR_GET_DEFAULT(diagStatus_, "") };
      inline ApplicationMonitorDetectResultList& setDiagStatus(string diagStatus) { DARABONBA_PTR_SET_VALUE(diagStatus_, diagStatus) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline ApplicationMonitorDetectResultList& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline ApplicationMonitorDetectResultList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ApplicationMonitorDetectResultList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline ApplicationMonitorDetectResultList& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ApplicationMonitorDetectResultList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The ID of the GA instance on which the origin probing task runs.
      shared_ptr<string> acceleratorId_ {};
      // The response content returned by the origin probing task.
      shared_ptr<string> content_ {};
      // The description of the diagnostic result. Valid values:
      // 
      // *   **All forward nodes work well.:** The origin server is normal.
      // *   **Endpoint network error.:** The origin server is abnormal. You must check whether the origin server is running as expected.
      // *   **Public network error.:** An Internet error occurred, which is a network error that occurred when the client connected to the acceleration region.
      // *   **Ga internal error.:** An internal error occurred. For example, an exception occurred when GA processed a request.
      // *   **Ga has been deleted.:** The current GA instance is deleted.
      // *   **Ga state is not stable.:** The current GA instance is in an unstable state, such as the Configuring state.
      // *   **Ga has no listener configuration.:** No listener is configured for the current GA instance.
      // *   **Missing endpoint configuration.:** No endpoint is configured.
      // *   **Missing acceleration region configuration.:** No acceleration region is configured.
      // *   **Missing endpointgroup configuration.:** No endpoint group is configured.
      shared_ptr<string> detail_ {};
      // The time when the diagnosis of the origin probing task ends.
      shared_ptr<string> detectTime_ {};
      // The diagnostic result of the origin probing task. Valid values:
      // 
      // *   **success:** The origin probing task succeeded.
      // *   **failed:** The origin probing task failed.
      shared_ptr<string> diagStatus_ {};
      // The ID of the listener on which the origin probing task runs.
      shared_ptr<string> listenerId_ {};
      // The listener port.
      shared_ptr<string> port_ {};
      // The network transmission protocol that is used by the listener. Valid values:
      // 
      // *   **tcp:** TCP.
      // *   **udp:** UDP.
      // *   **http:** HTTP.
      // *   **https:** HTTPS.
      // 
      // >  UDP listeners do not support probing.
      shared_ptr<string> protocol_ {};
      // The error code returned by the origin probing task.
      shared_ptr<string> statusCode_ {};
      // The origin probing task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->applicationMonitorDetectResultList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationMonitorDetectResultList Field Functions 
    bool hasApplicationMonitorDetectResultList() const { return this->applicationMonitorDetectResultList_ != nullptr;};
    void deleteApplicationMonitorDetectResultList() { this->applicationMonitorDetectResultList_ = nullptr;};
    inline const vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList> & getApplicationMonitorDetectResultList() const { DARABONBA_PTR_GET_CONST(applicationMonitorDetectResultList_, vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList>) };
    inline vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList> getApplicationMonitorDetectResultList() { DARABONBA_PTR_GET(applicationMonitorDetectResultList_, vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList>) };
    inline ListApplicationMonitorDetectResultResponseBody& setApplicationMonitorDetectResultList(const vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList> & applicationMonitorDetectResultList) { DARABONBA_PTR_SET_VALUE(applicationMonitorDetectResultList_, applicationMonitorDetectResultList) };
    inline ListApplicationMonitorDetectResultResponseBody& setApplicationMonitorDetectResultList(vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList> && applicationMonitorDetectResultList) { DARABONBA_PTR_SET_RVALUE(applicationMonitorDetectResultList_, applicationMonitorDetectResultList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationMonitorDetectResultResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationMonitorDetectResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationMonitorDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationMonitorDetectResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the diagnostic result of the origin probing task.
    shared_ptr<vector<ListApplicationMonitorDetectResultResponseBody::ApplicationMonitorDetectResultList>> applicationMonitorDetectResultList_ {};
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
