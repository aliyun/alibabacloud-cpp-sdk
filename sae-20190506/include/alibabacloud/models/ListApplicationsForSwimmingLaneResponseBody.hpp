// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORSWIMMINGLANERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORSWIMMINGLANERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsForSwimmingLaneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApplicationsForSwimmingLaneResponseBody() = default ;
    ListApplicationsForSwimmingLaneResponseBody(const ListApplicationsForSwimmingLaneResponseBody &) = default ;
    ListApplicationsForSwimmingLaneResponseBody(ListApplicationsForSwimmingLaneResponseBody &&) = default ;
    ListApplicationsForSwimmingLaneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForSwimmingLaneResponseBody() = default ;
    ListApplicationsForSwimmingLaneResponseBody& operator=(const ListApplicationsForSwimmingLaneResponseBody &) = default ;
    ListApplicationsForSwimmingLaneResponseBody& operator=(ListApplicationsForSwimmingLaneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
        DARABONBA_PTR_TO_JSON(BaseAppName, baseAppName_);
        DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
        DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
        DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
        DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
        DARABONBA_PTR_FROM_JSON(BaseAppName, baseAppName_);
        DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
        DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
        DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
        DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->baseAppId_ == nullptr && this->baseAppName_ == nullptr && this->mseAppId_ == nullptr && this->mseAppName_ == nullptr
        && this->mseNamespaceId_ == nullptr && this->serviceTags_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // baseAppId Field Functions 
      bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
      void deleteBaseAppId() { this->baseAppId_ = nullptr;};
      inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
      inline Data& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


      // baseAppName Field Functions 
      bool hasBaseAppName() const { return this->baseAppName_ != nullptr;};
      void deleteBaseAppName() { this->baseAppName_ = nullptr;};
      inline string getBaseAppName() const { DARABONBA_PTR_GET_DEFAULT(baseAppName_, "") };
      inline Data& setBaseAppName(string baseAppName) { DARABONBA_PTR_SET_VALUE(baseAppName_, baseAppName) };


      // mseAppId Field Functions 
      bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
      void deleteMseAppId() { this->mseAppId_ = nullptr;};
      inline string getMseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
      inline Data& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


      // mseAppName Field Functions 
      bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
      void deleteMseAppName() { this->mseAppName_ = nullptr;};
      inline string getMseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
      inline Data& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


      // mseNamespaceId Field Functions 
      bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
      void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
      inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
      inline Data& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


      // serviceTags Field Functions 
      bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
      void deleteServiceTags() { this->serviceTags_ = nullptr;};
      inline const map<string, string> & getServiceTags() const { DARABONBA_PTR_GET_CONST(serviceTags_, map<string, string>) };
      inline map<string, string> getServiceTags() { DARABONBA_PTR_GET(serviceTags_, map<string, string>) };
      inline Data& setServiceTags(const map<string, string> & serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };
      inline Data& setServiceTags(map<string, string> && serviceTags) { DARABONBA_PTR_SET_RVALUE(serviceTags_, serviceTags) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The ID of the baseline application.
      shared_ptr<string> baseAppId_ {};
      // The name of the baseline application.
      shared_ptr<string> baseAppName_ {};
      // The ID of the MSE instance.
      shared_ptr<string> mseAppId_ {};
      // MSE Instance Name
      shared_ptr<string> mseAppName_ {};
      // The ID of the namespace to which the MSE instance belongs.
      shared_ptr<string> mseNamespaceId_ {};
      // The canary tag configured for the application.
      shared_ptr<map<string, string>> serviceTags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApplicationsForSwimmingLaneResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListApplicationsForSwimmingLaneResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListApplicationsForSwimmingLaneResponseBody::Data>) };
    inline vector<ListApplicationsForSwimmingLaneResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListApplicationsForSwimmingLaneResponseBody::Data>) };
    inline ListApplicationsForSwimmingLaneResponseBody& setData(const vector<ListApplicationsForSwimmingLaneResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApplicationsForSwimmingLaneResponseBody& setData(vector<ListApplicationsForSwimmingLaneResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListApplicationsForSwimmingLaneResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApplicationsForSwimmingLaneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsForSwimmingLaneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApplicationsForSwimmingLaneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code or the error code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The list of applications.
    shared_ptr<vector<ListApplicationsForSwimmingLaneResponseBody::Data>> data_ {};
    // The status code. Value values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, the **ErrorCode** parameter is returned. For more information, see **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned. The following limits are imposed on the ID:
    // 
    // *   If the request was successful, **success** is returned.
    // *   An error code is returned when a request failed.
    shared_ptr<string> message_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the list of application instances was queried. Valid values:
    // 
    // *   **true**: The instance groups were obtained.
    // *   **false**: The instance groups failed to be obtained.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
