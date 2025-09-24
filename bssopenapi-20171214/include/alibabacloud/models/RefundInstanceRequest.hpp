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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->immediatelyRelease_ != nullptr && this->instanceId_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RefundInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // immediatelyRelease Field Functions 
    bool hasImmediatelyRelease() const { return this->immediatelyRelease_ != nullptr;};
    void deleteImmediatelyRelease() { this->immediatelyRelease_ = nullptr;};
    inline string immediatelyRelease() const { DARABONBA_PTR_GET_DEFAULT(immediatelyRelease_, "") };
    inline RefundInstanceRequest& setImmediatelyRelease(string immediatelyRelease) { DARABONBA_PTR_SET_VALUE(immediatelyRelease_, immediatelyRelease) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RefundInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline RefundInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RefundInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // This parameter is required for scenarios that need idempotence. The UUID that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required for unsubscription scenarios. Valid values: 1 and 0. A value of 1 specifies that the instance is immediately released. A value of 0 specifies that the instance is shut down based on the shutdown policy. This parameter is supported only for specified services. Default value: 1.
    std::shared_ptr<string> immediatelyRelease_ = nullptr;
    // The ID of the instance. This parameter is required for unsubscription scenarios. Do not specify a custom name for this parameter.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The code of the service. This parameter is required for unsubscription scenarios.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service. This parameter is required for unsubscription scenarios. Unless otherwise specified, set this parameter to an empty string.
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
