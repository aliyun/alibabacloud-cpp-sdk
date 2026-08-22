// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHWHITELISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHWHITELISTSRESPONSEBODY_HPP_
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
  class DescribeOpenSearchWhitelistsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchWhitelistsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchWhitelistsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchWhitelistsResponseBody() = default ;
    DescribeOpenSearchWhitelistsResponseBody(const DescribeOpenSearchWhitelistsResponseBody &) = default ;
    DescribeOpenSearchWhitelistsResponseBody(DescribeOpenSearchWhitelistsResponseBody &&) = default ;
    DescribeOpenSearchWhitelistsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchWhitelistsResponseBody() = default ;
    DescribeOpenSearchWhitelistsResponseBody& operator=(const DescribeOpenSearchWhitelistsResponseBody &) = default ;
    DescribeOpenSearchWhitelistsResponseBody& operator=(DescribeOpenSearchWhitelistsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
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
      class Whitelists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Whitelists& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Whitelists& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Whitelists() = default ;
        Whitelists(const Whitelists &) = default ;
        Whitelists(Whitelists &&) = default ;
        Whitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Whitelists() = default ;
        Whitelists& operator=(const Whitelists &) = default ;
        Whitelists& operator=(Whitelists &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->ips_ == nullptr && this->networkType_ == nullptr && this->remark_ == nullptr
        && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Whitelists& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Whitelists& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Whitelists& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline string getIps() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
        inline Whitelists& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline Whitelists& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Whitelists& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Whitelists& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The ID of the group to which the instance belongs.
        shared_ptr<string> groupId_ {};
        // The name of the whitelist group.
        shared_ptr<string> groupName_ {};
        // The IP address list.
        shared_ptr<string> ips_ {};
        // The network type. Only VPC is supported.
        shared_ptr<string> networkType_ {};
        // The policy remarks.
        shared_ptr<string> remark_ {};
        // The time when the task was last updated, in timestamp format.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->whitelists_ == nullptr; };
      // whitelists Field Functions 
      bool hasWhitelists() const { return this->whitelists_ != nullptr;};
      void deleteWhitelists() { this->whitelists_ = nullptr;};
      inline const vector<Data::Whitelists> & getWhitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<Data::Whitelists>) };
      inline vector<Data::Whitelists> getWhitelists() { DARABONBA_PTR_GET(whitelists_, vector<Data::Whitelists>) };
      inline Data& setWhitelists(const vector<Data::Whitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
      inline Data& setWhitelists(vector<Data::Whitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


    protected:
      // The type of the Internet IPv4 whitelist addresses.
      shared_ptr<vector<Data::Whitelists>> whitelists_ {};
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
      // The authentication principal type.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The type of the missing permission.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchWhitelistsResponseBody& setAccessDeniedDetail(const DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchWhitelistsResponseBody& setAccessDeniedDetail(DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchWhitelistsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchWhitelistsResponseBody::Data) };
    inline DescribeOpenSearchWhitelistsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchWhitelistsResponseBody::Data) };
    inline DescribeOpenSearchWhitelistsResponseBody& setData(const DescribeOpenSearchWhitelistsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchWhitelistsResponseBody& setData(DescribeOpenSearchWhitelistsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchWhitelistsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<DescribeOpenSearchWhitelistsResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The monitoring data.
    shared_ptr<DescribeOpenSearchWhitelistsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
