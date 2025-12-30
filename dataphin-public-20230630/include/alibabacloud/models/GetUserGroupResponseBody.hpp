// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserGroupInfo, userGroupInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserGroupInfo, userGroupInfo_);
    };
    GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody(GetUserGroupResponseBody &&) = default ;
    GetUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody& operator=(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody& operator=(GetUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroupInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroupInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(AdminList, adminList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MyRole, myRole_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroupInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MyRole, myRole_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      UserGroupInfo() = default ;
      UserGroupInfo(const UserGroupInfo &) = default ;
      UserGroupInfo(UserGroupInfo &&) = default ;
      UserGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroupInfo() = default ;
      UserGroupInfo& operator=(const UserGroupInfo &) = default ;
      UserGroupInfo& operator=(UserGroupInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdminList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdminList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, AdminList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        AdminList() = default ;
        AdminList(const AdminList &) = default ;
        AdminList(AdminList &&) = default ;
        AdminList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdminList() = default ;
        AdminList& operator=(const AdminList &) = default ;
        AdminList& operator=(AdminList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->displayName_ == nullptr && this->id_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline AdminList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline AdminList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AdminList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->active_ == nullptr
        && this->adminList_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->myRole_ == nullptr && this->name_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline UserGroupInfo& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // adminList Field Functions 
      bool hasAdminList() const { return this->adminList_ != nullptr;};
      void deleteAdminList() { this->adminList_ = nullptr;};
      inline const vector<UserGroupInfo::AdminList> & getAdminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<UserGroupInfo::AdminList>) };
      inline vector<UserGroupInfo::AdminList> getAdminList() { DARABONBA_PTR_GET(adminList_, vector<UserGroupInfo::AdminList>) };
      inline UserGroupInfo& setAdminList(const vector<UserGroupInfo::AdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
      inline UserGroupInfo& setAdminList(vector<UserGroupInfo::AdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserGroupInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserGroupInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // myRole Field Functions 
      bool hasMyRole() const { return this->myRole_ != nullptr;};
      void deleteMyRole() { this->myRole_ = nullptr;};
      inline string getMyRole() const { DARABONBA_PTR_GET_DEFAULT(myRole_, "") };
      inline UserGroupInfo& setMyRole(string myRole) { DARABONBA_PTR_SET_VALUE(myRole_, myRole) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserGroupInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<bool> active_ {};
      shared_ptr<vector<UserGroupInfo::AdminList>> adminList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> myRole_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->userGroupInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUserGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userGroupInfo Field Functions 
    bool hasUserGroupInfo() const { return this->userGroupInfo_ != nullptr;};
    void deleteUserGroupInfo() { this->userGroupInfo_ = nullptr;};
    inline const GetUserGroupResponseBody::UserGroupInfo & getUserGroupInfo() const { DARABONBA_PTR_GET_CONST(userGroupInfo_, GetUserGroupResponseBody::UserGroupInfo) };
    inline GetUserGroupResponseBody::UserGroupInfo getUserGroupInfo() { DARABONBA_PTR_GET(userGroupInfo_, GetUserGroupResponseBody::UserGroupInfo) };
    inline GetUserGroupResponseBody& setUserGroupInfo(const GetUserGroupResponseBody::UserGroupInfo & userGroupInfo) { DARABONBA_PTR_SET_VALUE(userGroupInfo_, userGroupInfo) };
    inline GetUserGroupResponseBody& setUserGroupInfo(GetUserGroupResponseBody::UserGroupInfo && userGroupInfo) { DARABONBA_PTR_SET_RVALUE(userGroupInfo_, userGroupInfo) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<GetUserGroupResponseBody::UserGroupInfo> userGroupInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
