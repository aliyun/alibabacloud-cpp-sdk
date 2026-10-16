// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateCustomAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateCustomAgentShrinkRequest() = default ;
    UpdateCustomAgentShrinkRequest(const UpdateCustomAgentShrinkRequest &) = default ;
    UpdateCustomAgentShrinkRequest(UpdateCustomAgentShrinkRequest &&) = default ;
    UpdateCustomAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAgentShrinkRequest() = default ;
    UpdateCustomAgentShrinkRequest& operator=(const UpdateCustomAgentShrinkRequest &) = default ;
    UpdateCustomAgentShrinkRequest& operator=(UpdateCustomAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->clientToken_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline UpdateCustomAgentShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCustomAgentShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The update configuration for the custom agent. Provide at least one top-level field. Omitted top-level fields retain their original values. When providing a configuration object, you must specify its required subfields and include any optional configurations that you want to retain. Arrays are replaced as a whole.
    shared_ptr<string> bodyShrink_ {};
    // Idempotency is not currently guaranteed. Do not rely on this parameter to prevent duplicate requests.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
