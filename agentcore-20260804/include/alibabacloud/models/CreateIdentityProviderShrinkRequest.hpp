// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateIdentityProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    CreateIdentityProviderShrinkRequest() = default ;
    CreateIdentityProviderShrinkRequest(const CreateIdentityProviderShrinkRequest &) = default ;
    CreateIdentityProviderShrinkRequest(CreateIdentityProviderShrinkRequest &&) = default ;
    CreateIdentityProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderShrinkRequest() = default ;
    CreateIdentityProviderShrinkRequest& operator=(const CreateIdentityProviderShrinkRequest &) = default ;
    CreateIdentityProviderShrinkRequest& operator=(CreateIdentityProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline CreateIdentityProviderShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The request body for binding an external identity provider.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
