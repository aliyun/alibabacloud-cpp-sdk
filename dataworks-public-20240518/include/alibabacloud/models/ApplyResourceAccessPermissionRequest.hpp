// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYRESOURCEACCESSPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYRESOURCEACCESSPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ApplyResourceAccessPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyResourceAccessPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyContents, applyContents_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyResourceAccessPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyContents, applyContents_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ApplyResourceAccessPermissionRequest() = default ;
    ApplyResourceAccessPermissionRequest(const ApplyResourceAccessPermissionRequest &) = default ;
    ApplyResourceAccessPermissionRequest(ApplyResourceAccessPermissionRequest &&) = default ;
    ApplyResourceAccessPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyResourceAccessPermissionRequest() = default ;
    ApplyResourceAccessPermissionRequest& operator=(const ApplyResourceAccessPermissionRequest &) = default ;
    ApplyResourceAccessPermissionRequest& operator=(ApplyResourceAccessPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyContents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyContents& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTypes, accessTypes_);
        DARABONBA_PTR_TO_JSON(AuthMethod, authMethod_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(Grantee, grantee_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyContents& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTypes, accessTypes_);
        DARABONBA_PTR_FROM_JSON(AuthMethod, authMethod_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(Grantee, grantee_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      ApplyContents() = default ;
      ApplyContents(const ApplyContents &) = default ;
      ApplyContents(ApplyContents &&) = default ;
      ApplyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyContents() = default ;
      ApplyContents& operator=(const ApplyContents &) = default ;
      ApplyContents& operator=(ApplyContents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
          DARABONBA_PTR_TO_JSON(DefVersion, defVersion_);
          DARABONBA_ANY_TO_JSON(MetaData, metaData_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
          DARABONBA_PTR_FROM_JSON(DefVersion, defVersion_);
          DARABONBA_ANY_FROM_JSON(MetaData, metaData_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defSchema_ == nullptr
        && this->defVersion_ == nullptr && this->metaData_ == nullptr; };
        // defSchema Field Functions 
        bool hasDefSchema() const { return this->defSchema_ != nullptr;};
        void deleteDefSchema() { this->defSchema_ = nullptr;};
        inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
        inline Resource& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


        // defVersion Field Functions 
        bool hasDefVersion() const { return this->defVersion_ != nullptr;};
        void deleteDefVersion() { this->defVersion_ = nullptr;};
        inline string getDefVersion() const { DARABONBA_PTR_GET_DEFAULT(defVersion_, "") };
        inline Resource& setDefVersion(string defVersion) { DARABONBA_PTR_SET_VALUE(defVersion_, defVersion) };


        // metaData Field Functions 
        bool hasMetaData() const { return this->metaData_ != nullptr;};
        void deleteMetaData() { this->metaData_ = nullptr;};
        inline         const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
        Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
        inline Resource& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
        inline Resource& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


      protected:
        // The resource type.
        // 
        // This parameter is required.
        shared_ptr<string> defSchema_ {};
        // The version of `ResourceSchema` that is required to parse the resource.
        shared_ptr<string> defVersion_ {};
        // The resource metadata. The content is constrained by `ResourceSchema`.
        Darabonba::Json metaData_ {};
      };

      class Grantee : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Grantee& obj) { 
          DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        };
        friend void from_json(const Darabonba::Json& j, Grantee& obj) { 
          DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        };
        Grantee() = default ;
        Grantee(const Grantee &) = default ;
        Grantee(Grantee &&) = default ;
        Grantee(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Grantee() = default ;
        Grantee& operator=(const Grantee &) = default ;
        Grantee& operator=(Grantee &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalType_ == nullptr; };
        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline Grantee& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline Grantee& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      protected:
        // The ID of the principal. The value of this parameter depends on the `PrincipalType`:
        // 
        // - `RamUser`: The Dataworks user ID.
        // 
        // - `RamRole`: The Dataworks user ID, prefixed with `ROLE_`.
        // 
        // - `DlfRole`: The DlfNext role name.
        // 
        // This parameter is required.
        shared_ptr<string> principalId_ {};
        // The principal type. Valid values:
        // 
        // - RamRole
        // 
        // - RamUser
        // 
        // - DlfRole
        // 
        // This parameter is required.
        shared_ptr<string> principalType_ {};
      };

      virtual bool empty() const override { return this->accessTypes_ == nullptr
        && this->authMethod_ == nullptr && this->expirationTime_ == nullptr && this->grantee_ == nullptr && this->resource_ == nullptr; };
      // accessTypes Field Functions 
      bool hasAccessTypes() const { return this->accessTypes_ != nullptr;};
      void deleteAccessTypes() { this->accessTypes_ = nullptr;};
      inline const vector<string> & getAccessTypes() const { DARABONBA_PTR_GET_CONST(accessTypes_, vector<string>) };
      inline vector<string> getAccessTypes() { DARABONBA_PTR_GET(accessTypes_, vector<string>) };
      inline ApplyContents& setAccessTypes(const vector<string> & accessTypes) { DARABONBA_PTR_SET_VALUE(accessTypes_, accessTypes) };
      inline ApplyContents& setAccessTypes(vector<string> && accessTypes) { DARABONBA_PTR_SET_RVALUE(accessTypes_, accessTypes) };


      // authMethod Field Functions 
      bool hasAuthMethod() const { return this->authMethod_ != nullptr;};
      void deleteAuthMethod() { this->authMethod_ = nullptr;};
      inline string getAuthMethod() const { DARABONBA_PTR_GET_DEFAULT(authMethod_, "") };
      inline ApplyContents& setAuthMethod(string authMethod) { DARABONBA_PTR_SET_VALUE(authMethod_, authMethod) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline ApplyContents& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // grantee Field Functions 
      bool hasGrantee() const { return this->grantee_ != nullptr;};
      void deleteGrantee() { this->grantee_ = nullptr;};
      inline const ApplyContents::Grantee & getGrantee() const { DARABONBA_PTR_GET_CONST(grantee_, ApplyContents::Grantee) };
      inline ApplyContents::Grantee getGrantee() { DARABONBA_PTR_GET(grantee_, ApplyContents::Grantee) };
      inline ApplyContents& setGrantee(const ApplyContents::Grantee & grantee) { DARABONBA_PTR_SET_VALUE(grantee_, grantee) };
      inline ApplyContents& setGrantee(ApplyContents::Grantee && grantee) { DARABONBA_PTR_SET_RVALUE(grantee_, grantee) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const ApplyContents::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ApplyContents::Resource) };
      inline ApplyContents::Resource getResource() { DARABONBA_PTR_GET(resource_, ApplyContents::Resource) };
      inline ApplyContents& setResource(const ApplyContents::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline ApplyContents& setResource(ApplyContents::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    protected:
      // The requested permissions.
      // 
      // Note: The supported permission types vary by resource level and are constrained by the `ResourceSchema` of the corresponding resource type.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> accessTypes_ {};
      // The authorization method.
      // 
      // Note: This parameter is supported only for `SEVERLESS_STARROCKS` resources. Valid values are `ranger` and `starrocksManager`.
      shared_ptr<string> authMethod_ {};
      // The permission expiration time, as a Unix timestamp in milliseconds.
      shared_ptr<int64_t> expirationTime_ {};
      // The principal to which permissions are granted.
      // 
      // This parameter is required.
      shared_ptr<ApplyContents::Grantee> grantee_ {};
      // The resource for which permissions are requested.
      shared_ptr<ApplyContents::Resource> resource_ {};
    };

    virtual bool empty() const override { return this->applyContents_ == nullptr
        && this->clientToken_ == nullptr && this->reason_ == nullptr; };
    // applyContents Field Functions 
    bool hasApplyContents() const { return this->applyContents_ != nullptr;};
    void deleteApplyContents() { this->applyContents_ = nullptr;};
    inline const vector<ApplyResourceAccessPermissionRequest::ApplyContents> & getApplyContents() const { DARABONBA_PTR_GET_CONST(applyContents_, vector<ApplyResourceAccessPermissionRequest::ApplyContents>) };
    inline vector<ApplyResourceAccessPermissionRequest::ApplyContents> getApplyContents() { DARABONBA_PTR_GET(applyContents_, vector<ApplyResourceAccessPermissionRequest::ApplyContents>) };
    inline ApplyResourceAccessPermissionRequest& setApplyContents(const vector<ApplyResourceAccessPermissionRequest::ApplyContents> & applyContents) { DARABONBA_PTR_SET_VALUE(applyContents_, applyContents) };
    inline ApplyResourceAccessPermissionRequest& setApplyContents(vector<ApplyResourceAccessPermissionRequest::ApplyContents> && applyContents) { DARABONBA_PTR_SET_RVALUE(applyContents_, applyContents) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ApplyResourceAccessPermissionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ApplyResourceAccessPermissionRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // A list of permission requests.
    // 
    // This parameter is required.
    shared_ptr<vector<ApplyResourceAccessPermissionRequest::ApplyContents>> applyContents_ {};
    // The idempotency parameter, which prevents duplicate operations from repeated calls.
    shared_ptr<string> clientToken_ {};
    // The reason for the request.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
