// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    DeleteCredentialRequest() = default ;
    DeleteCredentialRequest(const DeleteCredentialRequest &) = default ;
    DeleteCredentialRequest(DeleteCredentialRequest &&) = default ;
    DeleteCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCredentialRequest() = default ;
    DeleteCredentialRequest& operator=(const DeleteCredentialRequest &) = default ;
    DeleteCredentialRequest& operator=(DeleteCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteCredentialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
