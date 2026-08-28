// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYLOADBALANCERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayLoadBalancersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayLoadBalancersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(all, all_);
      DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(related, related_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayLoadBalancersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(all, all_);
      DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(related, related_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListGatewayLoadBalancersRequest() = default ;
    ListGatewayLoadBalancersRequest(const ListGatewayLoadBalancersRequest &) = default ;
    ListGatewayLoadBalancersRequest(ListGatewayLoadBalancersRequest &&) = default ;
    ListGatewayLoadBalancersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayLoadBalancersRequest() = default ;
    ListGatewayLoadBalancersRequest& operator=(const ListGatewayLoadBalancersRequest &) = default ;
    ListGatewayLoadBalancersRequest& operator=(ListGatewayLoadBalancersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && this->loadBalancerId_ == nullptr && this->network_ == nullptr && this->related_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline ListGatewayLoadBalancersRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListGatewayLoadBalancersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline ListGatewayLoadBalancersRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline bool getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, false) };
    inline ListGatewayLoadBalancersRequest& setRelated(bool related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayLoadBalancersRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewayLoadBalancersRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<bool> all_ {};
    shared_ptr<string> loadBalancerId_ {};
    shared_ptr<string> network_ {};
    shared_ptr<bool> related_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
