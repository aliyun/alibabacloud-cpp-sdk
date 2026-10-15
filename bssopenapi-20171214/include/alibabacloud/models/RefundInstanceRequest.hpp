// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RefundInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImmediatelyRelease, immediatelyRelease_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, RefundInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImmediatelyRelease, immediatelyRelease_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    RefundInstanceRequest() = default ;
    RefundInstanceRequest(const RefundInstanceRequest &) = default ;
    RefundInstanceRequest(RefundInstanceRequest &&) = default ;
    RefundInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundInstanceRequest() = default ;
    RefundInstanceRequest& operator=(const RefundInstanceRequest &) = default ;
    RefundInstanceRequest& operator=(RefundInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->immediatelyRelease_ == nullptr && this->instanceId_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RefundInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // immediatelyRelease Field Functions 
    bool hasImmediatelyRelease() const { return this->immediatelyRelease_ != nullptr;};
    void deleteImmediatelyRelease() { this->immediatelyRelease_ = nullptr;};
    inline string getImmediatelyRelease() const { DARABONBA_PTR_GET_DEFAULT(immediatelyRelease_, "") };
    inline RefundInstanceRequest& setImmediatelyRelease(string immediatelyRelease) { DARABONBA_PTR_SET_VALUE(immediatelyRelease_, immediatelyRelease) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RefundInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline RefundInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RefundInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // Required for idempotent scenarios. A UUID-generated string. This field is used for idempotence. If the same value is passed in multiple calls, the result of the first call is returned. If a result is returned after the call, you can parse the refund order ID, which indicates that the call is successful.
    shared_ptr<string> clientToken_ {};
    // Required for unsubscription scenarios. Valid values: 1: immediately releases the instance. 0: stops the instance first based on the shutdown policy. Only some products support this value. Default value: 1.
    shared_ptr<string> immediatelyRelease_ {};
    // Required for unsubscription scenarios. The instance ID, not the custom name.
    shared_ptr<string> instanceId_ {};
    // Required for unsubscription scenarios. The product code. If the error code returned after the call indicates that the product is not supported, submit a ticket to request that the cloud service enable this feature.
    shared_ptr<string> productCode_ {};
    // Required for unsubscription scenarios. The product type. Unless otherwise specified, pass an empty string. In the debugging tool, you do not need to manually enter a value. Hover over the input box, and a button labeled "Enter empty string" appears. Click this button. When initiating an unsubscription through code, pass an empty string "".
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
