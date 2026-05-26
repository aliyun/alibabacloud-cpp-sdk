// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERPOOLCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERPOOLCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteUserPoolClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserPoolClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserPoolClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    DeleteUserPoolClientRequest() = default ;
    DeleteUserPoolClientRequest(const DeleteUserPoolClientRequest &) = default ;
    DeleteUserPoolClientRequest(DeleteUserPoolClientRequest &&) = default ;
    DeleteUserPoolClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserPoolClientRequest() = default ;
    DeleteUserPoolClientRequest& operator=(const DeleteUserPoolClientRequest &) = default ;
    DeleteUserPoolClientRequest& operator=(DeleteUserPoolClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientName_ == nullptr
        && this->userPoolName_ == nullptr; };
    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline DeleteUserPoolClientRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline DeleteUserPoolClientRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> clientName_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
