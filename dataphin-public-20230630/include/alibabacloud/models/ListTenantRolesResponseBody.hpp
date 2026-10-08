// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTROLESRESPONSEBODY_HPP_
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
  class ListTenantRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTenantRolesResponseBody() = default ;
    ListTenantRolesResponseBody(const ListTenantRolesResponseBody &) = default ;
    ListTenantRolesResponseBody(ListTenantRolesResponseBody &&) = default ;
    ListTenantRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantRolesResponseBody() = default ;
    ListTenantRolesResponseBody& operator=(const ListTenantRolesResponseBody &) = default ;
    ListTenantRolesResponseBody& operator=(ListTenantRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthJson, authJson_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(RoleDesc, roleDesc_);
        DARABONBA_PTR_TO_JSON(RoleKey, roleKey_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      };
      friend void from_json(const Darabonba::Json& j, RoleList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthJson, authJson_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(RoleDesc, roleDesc_);
        DARABONBA_PTR_FROM_JSON(RoleKey, roleKey_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      };
      RoleList() = default ;
      RoleList(const RoleList &) = default ;
      RoleList(RoleList &&) = default ;
      RoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleList() = default ;
      RoleList& operator=(const RoleList &) = default ;
      RoleList& operator=(RoleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authJson_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->modifier_ == nullptr && this->roleDesc_ == nullptr
        && this->roleKey_ == nullptr && this->roleName_ == nullptr && this->roleType_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr
        && this->tenantType_ == nullptr; };
      // authJson Field Functions 
      bool hasAuthJson() const { return this->authJson_ != nullptr;};
      void deleteAuthJson() { this->authJson_ = nullptr;};
      inline string getAuthJson() const { DARABONBA_PTR_GET_DEFAULT(authJson_, "") };
      inline RoleList& setAuthJson(string authJson) { DARABONBA_PTR_SET_VALUE(authJson_, authJson) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline RoleList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline RoleList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline RoleList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline RoleList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // roleDesc Field Functions 
      bool hasRoleDesc() const { return this->roleDesc_ != nullptr;};
      void deleteRoleDesc() { this->roleDesc_ = nullptr;};
      inline string getRoleDesc() const { DARABONBA_PTR_GET_DEFAULT(roleDesc_, "") };
      inline RoleList& setRoleDesc(string roleDesc) { DARABONBA_PTR_SET_VALUE(roleDesc_, roleDesc) };


      // roleKey Field Functions 
      bool hasRoleKey() const { return this->roleKey_ != nullptr;};
      void deleteRoleKey() { this->roleKey_ = nullptr;};
      inline string getRoleKey() const { DARABONBA_PTR_GET_DEFAULT(roleKey_, "") };
      inline RoleList& setRoleKey(string roleKey) { DARABONBA_PTR_SET_VALUE(roleKey_, roleKey) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline RoleList& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline RoleList& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RoleList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline RoleList& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // tenantType Field Functions 
      bool hasTenantType() const { return this->tenantType_ != nullptr;};
      void deleteTenantType() { this->tenantType_ = nullptr;};
      inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
      inline RoleList& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    protected:
      shared_ptr<string> authJson_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> roleDesc_ {};
      shared_ptr<string> roleKey_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<string> roleType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> tenantId_ {};
      shared_ptr<string> tenantType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->roleList_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTenantRolesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTenantRolesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTenantRolesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<ListTenantRolesResponseBody::RoleList> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<ListTenantRolesResponseBody::RoleList>) };
    inline vector<ListTenantRolesResponseBody::RoleList> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<ListTenantRolesResponseBody::RoleList>) };
    inline ListTenantRolesResponseBody& setRoleList(const vector<ListTenantRolesResponseBody::RoleList> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline ListTenantRolesResponseBody& setRoleList(vector<ListTenantRolesResponseBody::RoleList> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTenantRolesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTenantRolesResponseBody::RoleList>> roleList_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
