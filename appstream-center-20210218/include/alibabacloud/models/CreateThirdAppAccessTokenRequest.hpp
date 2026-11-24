// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHIRDAPPACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETHIRDAPPACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class CreateThirdAppAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThirdAppAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThirdAppAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    CreateThirdAppAccessTokenRequest() = default ;
    CreateThirdAppAccessTokenRequest(const CreateThirdAppAccessTokenRequest &) = default ;
    CreateThirdAppAccessTokenRequest(CreateThirdAppAccessTokenRequest &&) = default ;
    CreateThirdAppAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThirdAppAccessTokenRequest() = default ;
    CreateThirdAppAccessTokenRequest& operator=(const CreateThirdAppAccessTokenRequest &) = default ;
    CreateThirdAppAccessTokenRequest& operator=(CreateThirdAppAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of the target cloud desktop. You must provide a non-empty value when you call this operation. Asterisks (*) are not allowed. The cloud desktop must be authorized to the user specified by AuthorizerId.
      shared_ptr<string> resourceId_ {};
      // The resource type. This parameter is required when you call this operation. Set the value to DESKTOP, which indicates a cloud desktop. The value is case-insensitive.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->businessChannel_ == nullptr && this->expiration_ == nullptr && this->resource_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline CreateThirdAppAccessTokenRequest& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreateThirdAppAccessTokenRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int32_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0) };
    inline CreateThirdAppAccessTokenRequest& setExpiration(int32_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const CreateThirdAppAccessTokenRequest::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, CreateThirdAppAccessTokenRequest::Resource) };
    inline CreateThirdAppAccessTokenRequest::Resource getResource() { DARABONBA_PTR_GET(resource_, CreateThirdAppAccessTokenRequest::Resource) };
    inline CreateThirdAppAccessTokenRequest& setResource(const CreateThirdAppAccessTokenRequest::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateThirdAppAccessTokenRequest& setResource(CreateThirdAppAccessTokenRequest::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The WyId of the authorized user. The user must belong to the current calling account. This parameter is not the username.
    // 
    // This parameter is required.
    shared_ptr<string> authorizerId_ {};
    // The business channel. Valid values: Enterprise and Business. The value is case-insensitive. If omitted, the default value is Enterprise. If an empty string or other values are explicitly passed, a parameter error is returned. This parameter does not replace user identity verification.
    shared_ptr<string> businessChannel_ {};
    // The validity period of the token, in seconds. Valid values: 1 to 15552000. If omitted, the default value is 15552000, which equals 180 days. Permanent validity is not supported, and 0 cannot be passed.
    shared_ptr<int32_t> expiration_ {};
    // The target single cloud desktop resource. You must provide this object along with ResourceType and ResourceId when you call this operation. Pass this parameter as a JSON object and specify only one cloud desktop. Wildcards or authorization for all cloud desktops are not supported.
    shared_ptr<CreateThirdAppAccessTokenRequest::Resource> resource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
