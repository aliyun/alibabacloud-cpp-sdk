// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DetachGatewayDomainShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGatewayDomainShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDomain, customDomainShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGatewayDomainShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDomain, customDomainShrink_);
    };
    DetachGatewayDomainShrinkRequest() = default ;
    DetachGatewayDomainShrinkRequest(const DetachGatewayDomainShrinkRequest &) = default ;
    DetachGatewayDomainShrinkRequest(DetachGatewayDomainShrinkRequest &&) = default ;
    DetachGatewayDomainShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGatewayDomainShrinkRequest() = default ;
    DetachGatewayDomainShrinkRequest& operator=(const DetachGatewayDomainShrinkRequest &) = default ;
    DetachGatewayDomainShrinkRequest& operator=(DetachGatewayDomainShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customDomainShrink_ == nullptr; };
    // customDomainShrink Field Functions 
    bool hasCustomDomainShrink() const { return this->customDomainShrink_ != nullptr;};
    void deleteCustomDomainShrink() { this->customDomainShrink_ = nullptr;};
    inline string getCustomDomainShrink() const { DARABONBA_PTR_GET_DEFAULT(customDomainShrink_, "") };
    inline DetachGatewayDomainShrinkRequest& setCustomDomainShrink(string customDomainShrink) { DARABONBA_PTR_SET_VALUE(customDomainShrink_, customDomainShrink) };


  protected:
    // The custom domain name information.
    // 
    // This parameter is required.
    shared_ptr<string> customDomainShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
