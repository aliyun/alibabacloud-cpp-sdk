// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEILMPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEILMPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateILMPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateILMPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateILMPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateILMPolicyRequest() = default ;
    CreateILMPolicyRequest(const CreateILMPolicyRequest &) = default ;
    CreateILMPolicyRequest(CreateILMPolicyRequest &&) = default ;
    CreateILMPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateILMPolicyRequest() = default ;
    CreateILMPolicyRequest& operator=(const CreateILMPolicyRequest &) = default ;
    CreateILMPolicyRequest& operator=(CreateILMPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->body_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateILMPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateILMPolicyRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
