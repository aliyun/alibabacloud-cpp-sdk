// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGroupsResponseBody() = default ;
    ListGroupsResponseBody(const ListGroupsResponseBody &) = default ;
    ListGroupsResponseBody(ListGroupsResponseBody &&) = default ;
    ListGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsResponseBody() = default ;
    ListGroupsResponseBody& operator=(const ListGroupsResponseBody &) = default ;
    ListGroupsResponseBody& operator=(ListGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppGroups, appGroups_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppGroups, appGroups_);
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
      class AppGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppGroups& obj) { 
          DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnableLog, enableLog_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        };
        friend void from_json(const Darabonba::Json& j, AppGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnableLog, enableLog_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        };
        AppGroups() = default ;
        AppGroups(const AppGroups &) = default ;
        AppGroups(AppGroups &&) = default ;
        AppGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppGroups() = default ;
        AppGroups& operator=(const AppGroups &) = default ;
        AppGroups& operator=(AppGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appKey_ == nullptr && this->appName_ == nullptr && this->appVersion_ == nullptr && this->description_ == nullptr && this->enableLog_ == nullptr
        && this->groupId_ == nullptr && this->namespace_ == nullptr; };
        // appGroupId Field Functions 
        bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
        void deleteAppGroupId() { this->appGroupId_ = nullptr;};
        inline int64_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
        inline AppGroups& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
        inline AppGroups& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppGroups& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline int32_t getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, 0) };
        inline AppGroups& setAppVersion(int32_t appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AppGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enableLog Field Functions 
        bool hasEnableLog() const { return this->enableLog_ != nullptr;};
        void deleteEnableLog() { this->enableLog_ = nullptr;};
        inline bool getEnableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
        inline AppGroups& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline AppGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline AppGroups& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      protected:
        // The application group ID.
        shared_ptr<int64_t> appGroupId_ {};
        // The AppKey for the application.
        shared_ptr<string> appKey_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The application version. 1: Basic version, 2: Professional version.
        shared_ptr<int32_t> appVersion_ {};
        // The description of the application.
        shared_ptr<string> description_ {};
        shared_ptr<bool> enableLog_ {};
        // The application ID.
        shared_ptr<string> groupId_ {};
        // The ID of the namespace.
        shared_ptr<string> namespace_ {};
      };

      virtual bool empty() const override { return this->appGroups_ == nullptr; };
      // appGroups Field Functions 
      bool hasAppGroups() const { return this->appGroups_ != nullptr;};
      void deleteAppGroups() { this->appGroups_ = nullptr;};
      inline const vector<Data::AppGroups> & getAppGroups() const { DARABONBA_PTR_GET_CONST(appGroups_, vector<Data::AppGroups>) };
      inline vector<Data::AppGroups> getAppGroups() { DARABONBA_PTR_GET(appGroups_, vector<Data::AppGroups>) };
      inline Data& setAppGroups(const vector<Data::AppGroups> & appGroups) { DARABONBA_PTR_SET_VALUE(appGroups_, appGroups) };
      inline Data& setAppGroups(vector<Data::AppGroups> && appGroups) { DARABONBA_PTR_SET_RVALUE(appGroups_, appGroups) };


    protected:
      // The applications and their details.
      shared_ptr<vector<Data::AppGroups>> appGroups_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGroupsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGroupsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGroupsResponseBody::Data) };
    inline ListGroupsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGroupsResponseBody::Data) };
    inline ListGroupsResponseBody& setData(const ListGroupsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGroupsResponseBody& setData(ListGroupsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The applications.
    shared_ptr<ListGroupsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
