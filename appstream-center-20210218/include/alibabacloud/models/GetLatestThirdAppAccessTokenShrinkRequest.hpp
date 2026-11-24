// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTTHIRDAPPACCESSTOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTTHIRDAPPACCESSTOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class GetLatestThirdAppAccessTokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestThirdAppAccessTokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(Resource, resourceShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestThirdAppAccessTokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(Resource, resourceShrink_);
    };
    GetLatestThirdAppAccessTokenShrinkRequest() = default ;
    GetLatestThirdAppAccessTokenShrinkRequest(const GetLatestThirdAppAccessTokenShrinkRequest &) = default ;
    GetLatestThirdAppAccessTokenShrinkRequest(GetLatestThirdAppAccessTokenShrinkRequest &&) = default ;
    GetLatestThirdAppAccessTokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestThirdAppAccessTokenShrinkRequest() = default ;
    GetLatestThirdAppAccessTokenShrinkRequest& operator=(const GetLatestThirdAppAccessTokenShrinkRequest &) = default ;
    GetLatestThirdAppAccessTokenShrinkRequest& operator=(GetLatestThirdAppAccessTokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->businessChannel_ == nullptr && this->resourceShrink_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline GetLatestThirdAppAccessTokenShrinkRequest& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline GetLatestThirdAppAccessTokenShrinkRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // resourceShrink Field Functions 
    bool hasResourceShrink() const { return this->resourceShrink_ != nullptr;};
    void deleteResourceShrink() { this->resourceShrink_ = nullptr;};
    inline string getResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceShrink_, "") };
    inline GetLatestThirdAppAccessTokenShrinkRequest& setResourceShrink(string resourceShrink) { DARABONBA_PTR_SET_VALUE(resourceShrink_, resourceShrink) };


  protected:
    // The WyId of the user used when the token was created. It must correspond to the current account and the target cloud desktop, and cannot be replaced by a username.
    // 
    // This parameter is required.
    shared_ptr<string> authorizerId_ {};
    // The business channel. Valid values: Enterprise and Business. The value is case-insensitive. If omitted, the default value is Enterprise. If an empty string or other value is explicitly passed, a parameter error is returned. This parameter does not replace user identity verification.
    shared_ptr<string> businessChannel_ {};
    // The target single cloud desktop resource. You must provide this object along with ResourceType and ResourceId when calling this operation. Pass it as a JSON object to specify only one cloud desktop. Wildcards or authorization for all cloud desktops are not supported.
    shared_ptr<string> resourceShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
