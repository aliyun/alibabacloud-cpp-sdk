// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENPLANACCOUNTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENPLANACCOUNTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetTokenPlanAccountDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenPlanAccountDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenPlanAccountDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTokenPlanAccountDetailResponseBody() = default ;
    GetTokenPlanAccountDetailResponseBody(const GetTokenPlanAccountDetailResponseBody &) = default ;
    GetTokenPlanAccountDetailResponseBody(GetTokenPlanAccountDetailResponseBody &&) = default ;
    GetTokenPlanAccountDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenPlanAccountDetailResponseBody() = default ;
    GetTokenPlanAccountDetailResponseBody& operator=(const GetTokenPlanAccountDetailResponseBody &) = default ;
    GetTokenPlanAccountDetailResponseBody& operator=(GetTokenPlanAccountDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OrgMemberships, orgMemberships_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OrgMemberships, orgMemberships_);
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
      class OrgMemberships : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrgMemberships& obj) { 
          DARABONBA_PTR_TO_JSON(MemberStatus, memberStatus_);
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(Workspaces, workspaces_);
        };
        friend void from_json(const Darabonba::Json& j, OrgMemberships& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberStatus, memberStatus_);
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(Workspaces, workspaces_);
        };
        OrgMemberships() = default ;
        OrgMemberships(const OrgMemberships &) = default ;
        OrgMemberships(OrgMemberships &&) = default ;
        OrgMemberships(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrgMemberships() = default ;
        OrgMemberships& operator=(const OrgMemberships &) = default ;
        OrgMemberships& operator=(OrgMemberships &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Workspaces : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Workspaces& obj) { 
            DARABONBA_PTR_TO_JSON(MemberStatus, memberStatus_);
            DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
            DARABONBA_PTR_TO_JSON(RoleId, roleId_);
            DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          };
          friend void from_json(const Darabonba::Json& j, Workspaces& obj) { 
            DARABONBA_PTR_FROM_JSON(MemberStatus, memberStatus_);
            DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
            DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
            DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          };
          Workspaces() = default ;
          Workspaces(const Workspaces &) = default ;
          Workspaces(Workspaces &&) = default ;
          Workspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Workspaces() = default ;
          Workspaces& operator=(const Workspaces &) = default ;
          Workspaces& operator=(Workspaces &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->memberStatus_ == nullptr
        && this->roleCode_ == nullptr && this->roleId_ == nullptr && this->workspaceId_ == nullptr; };
          // memberStatus Field Functions 
          bool hasMemberStatus() const { return this->memberStatus_ != nullptr;};
          void deleteMemberStatus() { this->memberStatus_ = nullptr;};
          inline string getMemberStatus() const { DARABONBA_PTR_GET_DEFAULT(memberStatus_, "") };
          inline Workspaces& setMemberStatus(string memberStatus) { DARABONBA_PTR_SET_VALUE(memberStatus_, memberStatus) };


          // roleCode Field Functions 
          bool hasRoleCode() const { return this->roleCode_ != nullptr;};
          void deleteRoleCode() { this->roleCode_ = nullptr;};
          inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
          inline Workspaces& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


          // roleId Field Functions 
          bool hasRoleId() const { return this->roleId_ != nullptr;};
          void deleteRoleId() { this->roleId_ = nullptr;};
          inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
          inline Workspaces& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


          // workspaceId Field Functions 
          bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
          void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
          inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
          inline Workspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        protected:
          // The member status. Valid values:
          // - ACTIVE 
          // - FROZEN
          shared_ptr<string> memberStatus_ {};
          // The workspace role code. Valid values:
          // - WS_ADMIN
          // - WS_MEMBER
          shared_ptr<string> roleCode_ {};
          // The workspace role ID.
          shared_ptr<string> roleId_ {};
          // The workspace ID.
          shared_ptr<string> workspaceId_ {};
        };

        virtual bool empty() const override { return this->memberStatus_ == nullptr
        && this->orgId_ == nullptr && this->roleCode_ == nullptr && this->roleId_ == nullptr && this->workspaces_ == nullptr; };
        // memberStatus Field Functions 
        bool hasMemberStatus() const { return this->memberStatus_ != nullptr;};
        void deleteMemberStatus() { this->memberStatus_ = nullptr;};
        inline string getMemberStatus() const { DARABONBA_PTR_GET_DEFAULT(memberStatus_, "") };
        inline OrgMemberships& setMemberStatus(string memberStatus) { DARABONBA_PTR_SET_VALUE(memberStatus_, memberStatus) };


        // orgId Field Functions 
        bool hasOrgId() const { return this->orgId_ != nullptr;};
        void deleteOrgId() { this->orgId_ = nullptr;};
        inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
        inline OrgMemberships& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // roleCode Field Functions 
        bool hasRoleCode() const { return this->roleCode_ != nullptr;};
        void deleteRoleCode() { this->roleCode_ = nullptr;};
        inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
        inline OrgMemberships& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline OrgMemberships& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // workspaces Field Functions 
        bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
        void deleteWorkspaces() { this->workspaces_ = nullptr;};
        inline const vector<OrgMemberships::Workspaces> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<OrgMemberships::Workspaces>) };
        inline vector<OrgMemberships::Workspaces> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<OrgMemberships::Workspaces>) };
        inline OrgMemberships& setWorkspaces(const vector<OrgMemberships::Workspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
        inline OrgMemberships& setWorkspaces(vector<OrgMemberships::Workspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


      protected:
        // The organization member status. Valid values:
        // 
        // - ACTIVE 
        // - INITIAL 
        // - FROZEN
        shared_ptr<string> memberStatus_ {};
        // The organization ID.
        shared_ptr<string> orgId_ {};
        // The organization role code. Valid values:
        // 
        // - ORG_OWNER
        // - ORG_ADMIN
        // - ORG_MEMBER
        shared_ptr<string> roleCode_ {};
        // The organization role ID.
        shared_ptr<string> roleId_ {};
        // The list of workspaces that the account has joined under the organization.
        shared_ptr<vector<OrgMemberships::Workspaces>> workspaces_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountType_ == nullptr && this->aliyunUid_ == nullptr && this->createdAt_ == nullptr && this->email_ == nullptr && this->isDeleted_ == nullptr
        && this->name_ == nullptr && this->orgMemberships_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Data& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
      inline Data& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orgMemberships Field Functions 
      bool hasOrgMemberships() const { return this->orgMemberships_ != nullptr;};
      void deleteOrgMemberships() { this->orgMemberships_ = nullptr;};
      inline const vector<Data::OrgMemberships> & getOrgMemberships() const { DARABONBA_PTR_GET_CONST(orgMemberships_, vector<Data::OrgMemberships>) };
      inline vector<Data::OrgMemberships> getOrgMemberships() { DARABONBA_PTR_GET(orgMemberships_, vector<Data::OrgMemberships>) };
      inline Data& setOrgMemberships(const vector<Data::OrgMemberships> & orgMemberships) { DARABONBA_PTR_SET_VALUE(orgMemberships_, orgMemberships) };
      inline Data& setOrgMemberships(vector<Data::OrgMemberships> && orgMemberships) { DARABONBA_PTR_SET_RVALUE(orgMemberships_, orgMemberships) };


    protected:
      // The account ID.
      shared_ptr<string> accountId_ {};
      // The account type. Valid values:
      // 
      // - ALIYUN 
      // - SSO 
      // - SA
      shared_ptr<string> accountType_ {};
      // The Alibaba Cloud UID. This parameter applies only to accounts of the ALIYUN type.
      shared_ptr<string> aliyunUid_ {};
      // The time when the account was created.
      shared_ptr<string> createdAt_ {};
      // The email address. This parameter applies only to accounts of the SSO type.
      shared_ptr<string> email_ {};
      // The global status of the account. A value of 0 indicates Normal. A value of 1 indicates Frozen.
      shared_ptr<bool> isDeleted_ {};
      // The display name of the account.
      shared_ptr<string> name_ {};
      // The list of organization memberships in a tree structure (organization → workspace).
      shared_ptr<vector<Data::OrgMemberships>> orgMemberships_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTokenPlanAccountDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTokenPlanAccountDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTokenPlanAccountDetailResponseBody::Data) };
    inline GetTokenPlanAccountDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTokenPlanAccountDetailResponseBody::Data) };
    inline GetTokenPlanAccountDetailResponseBody& setData(const GetTokenPlanAccountDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTokenPlanAccountDetailResponseBody& setData(GetTokenPlanAccountDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTokenPlanAccountDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTokenPlanAccountDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTokenPlanAccountDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTokenPlanAccountDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The business data.
    shared_ptr<GetTokenPlanAccountDetailResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
