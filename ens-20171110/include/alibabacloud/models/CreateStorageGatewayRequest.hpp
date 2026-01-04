// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetails_);
    };
    CreateStorageGatewayRequest() = default ;
    CreateStorageGatewayRequest(const CreateStorageGatewayRequest &) = default ;
    CreateStorageGatewayRequest(CreateStorageGatewayRequest &&) = default ;
    CreateStorageGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageGatewayRequest() = default ;
    CreateStorageGatewayRequest& operator=(const CreateStorageGatewayRequest &) = default ;
    CreateStorageGatewayRequest& operator=(CreateStorageGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
        DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, OrderDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
        DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      OrderDetails() = default ;
      OrderDetails(const OrderDetails &) = default ;
      OrderDetails(OrderDetails &&) = default ;
      OrderDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderDetails() = default ;
      OrderDetails& operator=(const OrderDetails &) = default ;
      OrderDetails& operator=(OrderDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->ensRegionId_ == nullptr && this->gatewayName_ == nullptr && this->gatewayType_ == nullptr && this->vpcId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline OrderDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline OrderDetails& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // gatewayName Field Functions 
      bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
      void deleteGatewayName() { this->gatewayName_ = nullptr;};
      inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
      inline OrderDetails& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline OrderDetails& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline OrderDetails& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The description of the gateway. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The ID of the node.
      // 
      // This parameter is required.
      shared_ptr<string> ensRegionId_ {};
      // The name of the gateway. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (.), underscores (_), and hyphens (-).
      shared_ptr<string> gatewayName_ {};
      // The type of the gateway. Set this parameter to **1**. **1** indicates iSCSI.
      // 
      // This parameter is required.
      shared_ptr<string> gatewayType_ {};
      // The ID of the VPC.
      // 
      // This parameter is required.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->orderDetails_ == nullptr; };
    // orderDetails Field Functions 
    bool hasOrderDetails() const { return this->orderDetails_ != nullptr;};
    void deleteOrderDetails() { this->orderDetails_ = nullptr;};
    inline const vector<CreateStorageGatewayRequest::OrderDetails> & getOrderDetails() const { DARABONBA_PTR_GET_CONST(orderDetails_, vector<CreateStorageGatewayRequest::OrderDetails>) };
    inline vector<CreateStorageGatewayRequest::OrderDetails> getOrderDetails() { DARABONBA_PTR_GET(orderDetails_, vector<CreateStorageGatewayRequest::OrderDetails>) };
    inline CreateStorageGatewayRequest& setOrderDetails(const vector<CreateStorageGatewayRequest::OrderDetails> & orderDetails) { DARABONBA_PTR_SET_VALUE(orderDetails_, orderDetails) };
    inline CreateStorageGatewayRequest& setOrderDetails(vector<CreateStorageGatewayRequest::OrderDetails> && orderDetails) { DARABONBA_PTR_SET_RVALUE(orderDetails_, orderDetails) };


  protected:
    // The array of orders.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateStorageGatewayRequest::OrderDetails>> orderDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
