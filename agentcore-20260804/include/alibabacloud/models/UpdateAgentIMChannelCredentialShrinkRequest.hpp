// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTIMCHANNELCREDENTIALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTIMCHANNELCREDENTIALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateAgentIMChannelCredentialShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentIMChannelCredentialShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentIMChannelCredentialShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateAgentIMChannelCredentialShrinkRequest() = default ;
    UpdateAgentIMChannelCredentialShrinkRequest(const UpdateAgentIMChannelCredentialShrinkRequest &) = default ;
    UpdateAgentIMChannelCredentialShrinkRequest(UpdateAgentIMChannelCredentialShrinkRequest &&) = default ;
    UpdateAgentIMChannelCredentialShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentIMChannelCredentialShrinkRequest() = default ;
    UpdateAgentIMChannelCredentialShrinkRequest& operator=(const UpdateAgentIMChannelCredentialShrinkRequest &) = default ;
    UpdateAgentIMChannelCredentialShrinkRequest& operator=(UpdateAgentIMChannelCredentialShrinkRequest &&) = default ;
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
    inline UpdateAgentIMChannelCredentialShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAgentIMChannelCredentialShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body.
    shared_ptr<string> bodyShrink_ {};
    // A reserved idempotency token. The backend does not provide persistent idempotence guarantee in the current version.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
