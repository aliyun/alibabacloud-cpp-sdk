// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLIENTSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLIENTSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteClientSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClientSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(ClientSecretId, clientSecretId_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClientSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(ClientSecretId, clientSecretId_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    DeleteClientSecretRequest() = default ;
    DeleteClientSecretRequest(const DeleteClientSecretRequest &) = default ;
    DeleteClientSecretRequest(DeleteClientSecretRequest &&) = default ;
    DeleteClientSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClientSecretRequest() = default ;
    DeleteClientSecretRequest& operator=(const DeleteClientSecretRequest &) = default ;
    DeleteClientSecretRequest& operator=(DeleteClientSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientName_ == nullptr && this->clientSecretId_ == nullptr && this->userPoolName_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DeleteClientSecretRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline DeleteClientSecretRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // clientSecretId Field Functions 
    bool hasClientSecretId() const { return this->clientSecretId_ != nullptr;};
    void deleteClientSecretId() { this->clientSecretId_ = nullptr;};
    inline string getClientSecretId() const { DARABONBA_PTR_GET_DEFAULT(clientSecretId_, "") };
    inline DeleteClientSecretRequest& setClientSecretId(string clientSecretId) { DARABONBA_PTR_SET_VALUE(clientSecretId_, clientSecretId) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline DeleteClientSecretRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<string> clientSecretId_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
