// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCEITEMSINSTANCEITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCEITEMSINSTANCEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstancesResponseBodyInstanceItemsInstanceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstanceItemsInstanceItem& obj) { 
      DARABONBA_PTR_TO_JSON(ApiJson, apiJson_);
      DARABONBA_PTR_TO_JSON(AppJson, appJson_);
      DARABONBA_PTR_TO_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_TO_JSON(EndOn, endOn_);
      DARABONBA_PTR_TO_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_TO_JSON(HostJson, hostJson_);
      DARABONBA_PTR_TO_JSON(IdaasJson, idaasJson_);
      DARABONBA_PTR_TO_JSON(ImageJson, imageJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstanceItemsInstanceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiJson, apiJson_);
      DARABONBA_PTR_FROM_JSON(AppJson, appJson_);
      DARABONBA_PTR_FROM_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_FROM_JSON(EndOn, endOn_);
      DARABONBA_PTR_FROM_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_FROM_JSON(HostJson, hostJson_);
      DARABONBA_PTR_FROM_JSON(IdaasJson, idaasJson_);
      DARABONBA_PTR_FROM_JSON(ImageJson, imageJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
    };
    DescribeInstancesResponseBodyInstanceItemsInstanceItem() = default ;
    DescribeInstancesResponseBodyInstanceItemsInstanceItem(const DescribeInstancesResponseBodyInstanceItemsInstanceItem &) = default ;
    DescribeInstancesResponseBodyInstanceItemsInstanceItem(DescribeInstancesResponseBodyInstanceItemsInstanceItem &&) = default ;
    DescribeInstancesResponseBodyInstanceItemsInstanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstanceItemsInstanceItem() = default ;
    DescribeInstancesResponseBodyInstanceItemsInstanceItem& operator=(const DescribeInstancesResponseBodyInstanceItemsInstanceItem &) = default ;
    DescribeInstancesResponseBodyInstanceItemsInstanceItem& operator=(DescribeInstancesResponseBodyInstanceItemsInstanceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiJson_ != nullptr
        && this->appJson_ != nullptr && this->beganOn_ != nullptr && this->createdOn_ != nullptr && this->endOn_ != nullptr && this->extendJson_ != nullptr
        && this->hostJson_ != nullptr && this->idaasJson_ != nullptr && this->imageJson_ != nullptr && this->instanceId_ != nullptr && this->orderId_ != nullptr
        && this->productCode_ != nullptr && this->productName_ != nullptr && this->productSkuCode_ != nullptr && this->productType_ != nullptr && this->status_ != nullptr
        && this->supplierName_ != nullptr; };
    // apiJson Field Functions 
    bool hasApiJson() const { return this->apiJson_ != nullptr;};
    void deleteApiJson() { this->apiJson_ = nullptr;};
    inline string apiJson() const { DARABONBA_PTR_GET_DEFAULT(apiJson_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setApiJson(string apiJson) { DARABONBA_PTR_SET_VALUE(apiJson_, apiJson) };


    // appJson Field Functions 
    bool hasAppJson() const { return this->appJson_ != nullptr;};
    void deleteAppJson() { this->appJson_ = nullptr;};
    inline string appJson() const { DARABONBA_PTR_GET_DEFAULT(appJson_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setAppJson(string appJson) { DARABONBA_PTR_SET_VALUE(appJson_, appJson) };


    // beganOn Field Functions 
    bool hasBeganOn() const { return this->beganOn_ != nullptr;};
    void deleteBeganOn() { this->beganOn_ = nullptr;};
    inline int64_t beganOn() const { DARABONBA_PTR_GET_DEFAULT(beganOn_, 0L) };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setBeganOn(int64_t beganOn) { DARABONBA_PTR_SET_VALUE(beganOn_, beganOn) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t createdOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // endOn Field Functions 
    bool hasEndOn() const { return this->endOn_ != nullptr;};
    void deleteEndOn() { this->endOn_ = nullptr;};
    inline int64_t endOn() const { DARABONBA_PTR_GET_DEFAULT(endOn_, 0L) };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setEndOn(int64_t endOn) { DARABONBA_PTR_SET_VALUE(endOn_, endOn) };


    // extendJson Field Functions 
    bool hasExtendJson() const { return this->extendJson_ != nullptr;};
    void deleteExtendJson() { this->extendJson_ = nullptr;};
    inline string extendJson() const { DARABONBA_PTR_GET_DEFAULT(extendJson_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setExtendJson(string extendJson) { DARABONBA_PTR_SET_VALUE(extendJson_, extendJson) };


    // hostJson Field Functions 
    bool hasHostJson() const { return this->hostJson_ != nullptr;};
    void deleteHostJson() { this->hostJson_ = nullptr;};
    inline string hostJson() const { DARABONBA_PTR_GET_DEFAULT(hostJson_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setHostJson(string hostJson) { DARABONBA_PTR_SET_VALUE(hostJson_, hostJson) };


    // idaasJson Field Functions 
    bool hasIdaasJson() const { return this->idaasJson_ != nullptr;};
    void deleteIdaasJson() { this->idaasJson_ = nullptr;};
    inline string idaasJson() const { DARABONBA_PTR_GET_DEFAULT(idaasJson_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setIdaasJson(string idaasJson) { DARABONBA_PTR_SET_VALUE(idaasJson_, idaasJson) };


    // imageJson Field Functions 
    bool hasImageJson() const { return this->imageJson_ != nullptr;};
    void deleteImageJson() { this->imageJson_ = nullptr;};
    inline string imageJson() const { DARABONBA_PTR_GET_DEFAULT(imageJson_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setImageJson(string imageJson) { DARABONBA_PTR_SET_VALUE(imageJson_, imageJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string productSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeInstancesResponseBodyInstanceItemsInstanceItem& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


  protected:
    std::shared_ptr<string> apiJson_ = nullptr;
    std::shared_ptr<string> appJson_ = nullptr;
    std::shared_ptr<int64_t> beganOn_ = nullptr;
    std::shared_ptr<int64_t> createdOn_ = nullptr;
    std::shared_ptr<int64_t> endOn_ = nullptr;
    std::shared_ptr<string> extendJson_ = nullptr;
    std::shared_ptr<string> hostJson_ = nullptr;
    std::shared_ptr<string> idaasJson_ = nullptr;
    std::shared_ptr<string> imageJson_ = nullptr;
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productSkuCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> supplierName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
