// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class AttachGatewayDomainShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachGatewayDomainShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDomain, customDomainShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AttachGatewayDomainShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDomain, customDomainShrink_);
    };
    AttachGatewayDomainShrinkRequest() = default ;
    AttachGatewayDomainShrinkRequest(const AttachGatewayDomainShrinkRequest &) = default ;
    AttachGatewayDomainShrinkRequest(AttachGatewayDomainShrinkRequest &&) = default ;
    AttachGatewayDomainShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachGatewayDomainShrinkRequest() = default ;
    AttachGatewayDomainShrinkRequest& operator=(const AttachGatewayDomainShrinkRequest &) = default ;
    AttachGatewayDomainShrinkRequest& operator=(AttachGatewayDomainShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customDomainShrink_ == nullptr; };
    // customDomainShrink Field Functions 
    bool hasCustomDomainShrink() const { return this->customDomainShrink_ != nullptr;};
    void deleteCustomDomainShrink() { this->customDomainShrink_ = nullptr;};
    inline string customDomainShrink() const { DARABONBA_PTR_GET_DEFAULT(customDomainShrink_, "") };
    inline AttachGatewayDomainShrinkRequest& setCustomDomainShrink(string customDomainShrink) { DARABONBA_PTR_SET_VALUE(customDomainShrink_, customDomainShrink) };


  protected:
    // The custom domain name information.
    // 
    // This parameter is required.
    std::shared_ptr<string> customDomainShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
