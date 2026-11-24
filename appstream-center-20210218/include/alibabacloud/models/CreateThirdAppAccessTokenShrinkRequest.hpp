// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHIRDAPPACCESSTOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETHIRDAPPACCESSTOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class CreateThirdAppAccessTokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThirdAppAccessTokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Resource, resourceShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThirdAppAccessTokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Resource, resourceShrink_);
    };
    CreateThirdAppAccessTokenShrinkRequest() = default ;
    CreateThirdAppAccessTokenShrinkRequest(const CreateThirdAppAccessTokenShrinkRequest &) = default ;
    CreateThirdAppAccessTokenShrinkRequest(CreateThirdAppAccessTokenShrinkRequest &&) = default ;
    CreateThirdAppAccessTokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThirdAppAccessTokenShrinkRequest() = default ;
    CreateThirdAppAccessTokenShrinkRequest& operator=(const CreateThirdAppAccessTokenShrinkRequest &) = default ;
    CreateThirdAppAccessTokenShrinkRequest& operator=(CreateThirdAppAccessTokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->businessChannel_ == nullptr && this->expiration_ == nullptr && this->resourceShrink_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline CreateThirdAppAccessTokenShrinkRequest& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreateThirdAppAccessTokenShrinkRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int32_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0) };
    inline CreateThirdAppAccessTokenShrinkRequest& setExpiration(int32_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // resourceShrink Field Functions 
    bool hasResourceShrink() const { return this->resourceShrink_ != nullptr;};
    void deleteResourceShrink() { this->resourceShrink_ = nullptr;};
    inline string getResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceShrink_, "") };
    inline CreateThirdAppAccessTokenShrinkRequest& setResourceShrink(string resourceShrink) { DARABONBA_PTR_SET_VALUE(resourceShrink_, resourceShrink) };


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
    shared_ptr<string> resourceShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
