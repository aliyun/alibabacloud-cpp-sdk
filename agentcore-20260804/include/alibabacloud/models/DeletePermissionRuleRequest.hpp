// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPERMISSIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPERMISSIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeletePermissionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePermissionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePermissionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    DeletePermissionRuleRequest() = default ;
    DeletePermissionRuleRequest(const DeletePermissionRuleRequest &) = default ;
    DeletePermissionRuleRequest(DeletePermissionRuleRequest &&) = default ;
    DeletePermissionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePermissionRuleRequest() = default ;
    DeletePermissionRuleRequest& operator=(const DeletePermissionRuleRequest &) = default ;
    DeletePermissionRuleRequest& operator=(DeletePermissionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeletePermissionRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The client token that ensures the idempotence of the request.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
