// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTEXT0SECURITYIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTEXT0SECURITYIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeContext0SecurityIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContext0SecurityIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContext0SecurityIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContext0SecurityIpsResponseBody() = default ;
    DescribeContext0SecurityIpsResponseBody(const DescribeContext0SecurityIpsResponseBody &) = default ;
    DescribeContext0SecurityIpsResponseBody(DescribeContext0SecurityIpsResponseBody &&) = default ;
    DescribeContext0SecurityIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContext0SecurityIpsResponseBody() = default ;
    DescribeContext0SecurityIpsResponseBody& operator=(const DescribeContext0SecurityIpsResponseBody &) = default ;
    DescribeContext0SecurityIpsResponseBody& operator=(DescribeContext0SecurityIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
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
      class GroupItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupItems& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        };
        friend void from_json(const Darabonba::Json& j, GroupItems& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        };
        GroupItems() = default ;
        GroupItems(const GroupItems &) = default ;
        GroupItems(GroupItems &&) = default ;
        GroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupItems() = default ;
        GroupItems& operator=(const GroupItems &) = default ;
        GroupItems& operator=(GroupItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->groupTag_ == nullptr && this->securityIPList_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline GroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupTag Field Functions 
        bool hasGroupTag() const { return this->groupTag_ != nullptr;};
        void deleteGroupTag() { this->groupTag_ = nullptr;};
        inline string getGroupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
        inline GroupItems& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline GroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      protected:
        // The name of the whitelist group.
        shared_ptr<string> groupName_ {};
        // The tag of the group.
        shared_ptr<string> groupTag_ {};
        // The details of the whitelist group.
        shared_ptr<string> securityIPList_ {};
      };

      virtual bool empty() const override { return this->context0InstanceName_ == nullptr
        && this->DBInstanceName_ == nullptr && this->groupItems_ == nullptr; };
      // context0InstanceName Field Functions 
      bool hasContext0InstanceName() const { return this->context0InstanceName_ != nullptr;};
      void deleteContext0InstanceName() { this->context0InstanceName_ = nullptr;};
      inline string getContext0InstanceName() const { DARABONBA_PTR_GET_DEFAULT(context0InstanceName_, "") };
      inline Data& setContext0InstanceName(string context0InstanceName) { DARABONBA_PTR_SET_VALUE(context0InstanceName_, context0InstanceName) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // groupItems Field Functions 
      bool hasGroupItems() const { return this->groupItems_ != nullptr;};
      void deleteGroupItems() { this->groupItems_ = nullptr;};
      inline const vector<Data::GroupItems> & getGroupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<Data::GroupItems>) };
      inline vector<Data::GroupItems> getGroupItems() { DARABONBA_PTR_GET(groupItems_, vector<Data::GroupItems>) };
      inline Data& setGroupItems(const vector<Data::GroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
      inline Data& setGroupItems(vector<Data::GroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


    protected:
      // The name of the context service instance.
      shared_ptr<string> context0InstanceName_ {};
      // The name of the instance.
      shared_ptr<string> DBInstanceName_ {};
      // The list of whitelist groups.
      shared_ptr<vector<Data::GroupItems>> groupItems_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authentication principal.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail) };
    inline DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail) };
    inline DescribeContext0SecurityIpsResponseBody& setAccessDeniedDetail(const DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeContext0SecurityIpsResponseBody& setAccessDeniedDetail(DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeContext0SecurityIpsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeContext0SecurityIpsResponseBody::Data) };
    inline DescribeContext0SecurityIpsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeContext0SecurityIpsResponseBody::Data) };
    inline DescribeContext0SecurityIpsResponseBody& setData(const DescribeContext0SecurityIpsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeContext0SecurityIpsResponseBody& setData(DescribeContext0SecurityIpsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContext0SecurityIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<DescribeContext0SecurityIpsResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The monitoring data.
    shared_ptr<DescribeContext0SecurityIpsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
