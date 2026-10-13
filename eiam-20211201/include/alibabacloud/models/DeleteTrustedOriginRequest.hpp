// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRUSTEDORIGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRUSTEDORIGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteTrustedOriginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTrustedOriginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TrustedOriginId, trustedOriginId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTrustedOriginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginId, trustedOriginId_);
    };
    DeleteTrustedOriginRequest() = default ;
    DeleteTrustedOriginRequest(const DeleteTrustedOriginRequest &) = default ;
    DeleteTrustedOriginRequest(DeleteTrustedOriginRequest &&) = default ;
    DeleteTrustedOriginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTrustedOriginRequest() = default ;
    DeleteTrustedOriginRequest& operator=(const DeleteTrustedOriginRequest &) = default ;
    DeleteTrustedOriginRequest& operator=(DeleteTrustedOriginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->trustedOriginId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteTrustedOriginRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteTrustedOriginRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // trustedOriginId Field Functions 
    bool hasTrustedOriginId() const { return this->trustedOriginId_ != nullptr;};
    void deleteTrustedOriginId() { this->trustedOriginId_ = nullptr;};
    inline string getTrustedOriginId() const { DARABONBA_PTR_GET_DEFAULT(trustedOriginId_, "") };
    inline DeleteTrustedOriginRequest& setTrustedOriginId(string trustedOriginId) { DARABONBA_PTR_SET_VALUE(trustedOriginId_, trustedOriginId) };


  protected:
    // The idempotence token.
    shared_ptr<string> clientToken_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The trusted origin ID.
    // 
    // This parameter is required.
    shared_ptr<string> trustedOriginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
