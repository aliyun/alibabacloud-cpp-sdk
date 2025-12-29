// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLaneGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLaneGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLaneGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListAllSwimmingLaneGroupsResponseBody() = default ;
    ListAllSwimmingLaneGroupsResponseBody(const ListAllSwimmingLaneGroupsResponseBody &) = default ;
    ListAllSwimmingLaneGroupsResponseBody(ListAllSwimmingLaneGroupsResponseBody &&) = default ;
    ListAllSwimmingLaneGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLaneGroupsResponseBody() = default ;
    ListAllSwimmingLaneGroupsResponseBody& operator=(const ListAllSwimmingLaneGroupsResponseBody &) = default ;
    ListAllSwimmingLaneGroupsResponseBody& operator=(ListAllSwimmingLaneGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppIds, appIds_);
        DARABONBA_PTR_TO_JSON(Apps, apps_);
        DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
        DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
        DARABONBA_PTR_TO_JSON(EntryAppId, entryAppId_);
        DARABONBA_PTR_TO_JSON(EntryAppType, entryAppType_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
        DARABONBA_PTR_FROM_JSON(Apps, apps_);
        DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
        DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
        DARABONBA_PTR_FROM_JSON(EntryAppId, entryAppId_);
        DARABONBA_PTR_FROM_JSON(EntryAppType, entryAppType_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
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
      class EntryApp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntryApp& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
          DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
          DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
        };
        friend void from_json(const Darabonba::Json& j, EntryApp& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
          DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
          DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
        };
        EntryApp() = default ;
        EntryApp(const EntryApp &) = default ;
        EntryApp(EntryApp &&) = default ;
        EntryApp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntryApp() = default ;
        EntryApp& operator=(const EntryApp &) = default ;
        EntryApp& operator=(EntryApp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->mseAppId_ == nullptr && this->mseAppName_ == nullptr && this->mseNamespaceId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline EntryApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline EntryApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline EntryApp& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // mseAppId Field Functions 
        bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
        void deleteMseAppId() { this->mseAppId_ = nullptr;};
        inline string getMseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
        inline EntryApp& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


        // mseAppName Field Functions 
        bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
        void deleteMseAppName() { this->mseAppName_ = nullptr;};
        inline string getMseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
        inline EntryApp& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


        // mseNamespaceId Field Functions 
        bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
        void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
        inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
        inline EntryApp& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The type of the application.
        shared_ptr<string> appType_ {};
        // The ID of the MSE instance.
        shared_ptr<string> mseAppId_ {};
        // MSE Instance Name
        shared_ptr<string> mseAppName_ {};
        // The ID of the namespace to which the MSE instance belongs.
        shared_ptr<string> mseNamespaceId_ {};
      };

      class Apps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Apps& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
          DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
          DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Apps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
          DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
          DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
        };
        Apps() = default ;
        Apps(const Apps &) = default ;
        Apps(Apps &&) = default ;
        Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Apps() = default ;
        Apps& operator=(const Apps &) = default ;
        Apps& operator=(Apps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->mseAppId_ == nullptr && this->mseAppName_ == nullptr && this->mseNamespaceId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Apps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Apps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // mseAppId Field Functions 
        bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
        void deleteMseAppId() { this->mseAppId_ = nullptr;};
        inline string getMseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
        inline Apps& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


        // mseAppName Field Functions 
        bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
        void deleteMseAppName() { this->mseAppName_ = nullptr;};
        inline string getMseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
        inline Apps& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


        // mseNamespaceId Field Functions 
        bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
        void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
        inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
        inline Apps& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The ID of the MSE instance.
        shared_ptr<string> mseAppId_ {};
        // The name of the MSE instance.
        shared_ptr<string> mseAppName_ {};
        // The ID of the namespace to which the MSE instance belongs.
        shared_ptr<string> mseNamespaceId_ {};
      };

      virtual bool empty() const override { return this->appIds_ == nullptr
        && this->apps_ == nullptr && this->canaryModel_ == nullptr && this->entryApp_ == nullptr && this->entryAppId_ == nullptr && this->entryAppType_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->mseNamespaceId_ == nullptr && this->namespaceId_ == nullptr && this->swimVersion_ == nullptr; };
      // appIds Field Functions 
      bool hasAppIds() const { return this->appIds_ != nullptr;};
      void deleteAppIds() { this->appIds_ = nullptr;};
      inline const vector<string> & getAppIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
      inline vector<string> getAppIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
      inline Data& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
      inline Data& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


      // apps Field Functions 
      bool hasApps() const { return this->apps_ != nullptr;};
      void deleteApps() { this->apps_ = nullptr;};
      inline const vector<Data::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Data::Apps>) };
      inline vector<Data::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<Data::Apps>) };
      inline Data& setApps(const vector<Data::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
      inline Data& setApps(vector<Data::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


      // canaryModel Field Functions 
      bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
      void deleteCanaryModel() { this->canaryModel_ = nullptr;};
      inline int32_t getCanaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
      inline Data& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


      // entryApp Field Functions 
      bool hasEntryApp() const { return this->entryApp_ != nullptr;};
      void deleteEntryApp() { this->entryApp_ = nullptr;};
      inline const Data::EntryApp & getEntryApp() const { DARABONBA_PTR_GET_CONST(entryApp_, Data::EntryApp) };
      inline Data::EntryApp getEntryApp() { DARABONBA_PTR_GET(entryApp_, Data::EntryApp) };
      inline Data& setEntryApp(const Data::EntryApp & entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };
      inline Data& setEntryApp(Data::EntryApp && entryApp) { DARABONBA_PTR_SET_RVALUE(entryApp_, entryApp) };


      // entryAppId Field Functions 
      bool hasEntryAppId() const { return this->entryAppId_ != nullptr;};
      void deleteEntryAppId() { this->entryAppId_ = nullptr;};
      inline string getEntryAppId() const { DARABONBA_PTR_GET_DEFAULT(entryAppId_, "") };
      inline Data& setEntryAppId(string entryAppId) { DARABONBA_PTR_SET_VALUE(entryAppId_, entryAppId) };


      // entryAppType Field Functions 
      bool hasEntryAppType() const { return this->entryAppType_ != nullptr;};
      void deleteEntryAppType() { this->entryAppType_ = nullptr;};
      inline string getEntryAppType() const { DARABONBA_PTR_GET_DEFAULT(entryAppType_, "") };
      inline Data& setEntryAppType(string entryAppType) { DARABONBA_PTR_SET_VALUE(entryAppType_, entryAppType) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline Data& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // mseNamespaceId Field Functions 
      bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
      void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
      inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
      inline Data& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // swimVersion Field Functions 
      bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
      void deleteSwimVersion() { this->swimVersion_ = nullptr;};
      inline string getSwimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, "") };
      inline Data& setSwimVersion(string swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


    protected:
      // The IDs of the applications associated with the lane group.
      shared_ptr<vector<string>> appIds_ {};
      // The application information.
      shared_ptr<vector<Data::Apps>> apps_ {};
      // Full-link Grayscale Mode:
      // 
      // *   0: The request is routed based on the content of the request.
      // *   1: Proportional routing
      shared_ptr<int32_t> canaryModel_ {};
      // The entry application.
      shared_ptr<Data::EntryApp> entryApp_ {};
      // The ID of the gateway.
      shared_ptr<string> entryAppId_ {};
      // The application entry type (gateway type).
      // 
      // *   **apig:** cloud-native API Gateway
      // *   **mse-gw:** an MSE cloud original gateway
      // *   **mse:** Java Services Gateway
      shared_ptr<string> entryAppType_ {};
      // The ID of the lane group.
      shared_ptr<int64_t> groupId_ {};
      // The name of a lane group.
      shared_ptr<string> groupName_ {};
      // The ID of the namespace to which the MSE instance belongs.
      shared_ptr<string> mseNamespaceId_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
      // The end-to-end grayscale version. Valid values: 0 and 2 (recommended).
      shared_ptr<string> swimVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAllSwimmingLaneGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAllSwimmingLaneGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAllSwimmingLaneGroupsResponseBody::Data>) };
    inline vector<ListAllSwimmingLaneGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAllSwimmingLaneGroupsResponseBody::Data>) };
    inline ListAllSwimmingLaneGroupsResponseBody& setData(const vector<ListAllSwimmingLaneGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAllSwimmingLaneGroupsResponseBody& setData(vector<ListAllSwimmingLaneGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAllSwimmingLaneGroupsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAllSwimmingLaneGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllSwimmingLaneGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAllSwimmingLaneGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListAllSwimmingLaneGroupsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code or the error code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // Responses.
    shared_ptr<vector<ListAllSwimmingLaneGroupsResponseBody::Data>> data_ {};
    // The status code. Value values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // Additional information. Valid values:
    // 
    // *   The error message returned because the request is normal and **success** is returned.
    // *   If the request is abnormal, the specific exception error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   **true**: The information was queried.
    // *   **false**: The information failed to be queried.
    shared_ptr<bool> success_ {};
    // The ID of the trace. This parameter is used to query the exact call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
