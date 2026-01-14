// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFORWARDINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFORWARDINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteForwardingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteForwardingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForwardingRuleIds, forwardingRuleIds_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteForwardingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForwardingRuleIds, forwardingRuleIds_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteForwardingRulesRequest() = default ;
    DeleteForwardingRulesRequest(const DeleteForwardingRulesRequest &) = default ;
    DeleteForwardingRulesRequest(DeleteForwardingRulesRequest &&) = default ;
    DeleteForwardingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteForwardingRulesRequest() = default ;
    DeleteForwardingRulesRequest& operator=(const DeleteForwardingRulesRequest &) = default ;
    DeleteForwardingRulesRequest& operator=(DeleteForwardingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->forwardingRuleIds_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DeleteForwardingRulesRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteForwardingRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forwardingRuleIds Field Functions 
    bool hasForwardingRuleIds() const { return this->forwardingRuleIds_ != nullptr;};
    void deleteForwardingRuleIds() { this->forwardingRuleIds_ = nullptr;};
    inline const vector<string> & getForwardingRuleIds() const { DARABONBA_PTR_GET_CONST(forwardingRuleIds_, vector<string>) };
    inline vector<string> getForwardingRuleIds() { DARABONBA_PTR_GET(forwardingRuleIds_, vector<string>) };
    inline DeleteForwardingRulesRequest& setForwardingRuleIds(const vector<string> & forwardingRuleIds) { DARABONBA_PTR_SET_VALUE(forwardingRuleIds_, forwardingRuleIds) };
    inline DeleteForwardingRulesRequest& setForwardingRuleIds(vector<string> && forwardingRuleIds) { DARABONBA_PTR_SET_RVALUE(forwardingRuleIds_, forwardingRuleIds) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DeleteForwardingRulesRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteForwardingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The GA instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among all requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The forwarding rules.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> forwardingRuleIds_ {};
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
