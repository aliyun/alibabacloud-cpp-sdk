// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERREQUESTDYNAMICPRODUCTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERREQUESTDYNAMICPRODUCTPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateOrderRequestDynamicProductParamsInputActivateConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class CreateOrderRequestDynamicProductParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderRequestDynamicProductParams& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_TO_JSON(DynamicAttributes, dynamicAttributes_);
      DARABONBA_PTR_TO_JSON(InputActivateConfig, inputActivateConfig_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(LinkedResourceId, linkedResourceId_);
      DARABONBA_PTR_TO_JSON(PackageCode, packageCode_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderRequestDynamicProductParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_FROM_JSON(DynamicAttributes, dynamicAttributes_);
      DARABONBA_PTR_FROM_JSON(InputActivateConfig, inputActivateConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(LinkedResourceId, linkedResourceId_);
      DARABONBA_PTR_FROM_JSON(PackageCode, packageCode_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CreateOrderRequestDynamicProductParams() = default ;
    CreateOrderRequestDynamicProductParams(const CreateOrderRequestDynamicProductParams &) = default ;
    CreateOrderRequestDynamicProductParams(CreateOrderRequestDynamicProductParams &&) = default ;
    CreateOrderRequestDynamicProductParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderRequestDynamicProductParams() = default ;
    CreateOrderRequestDynamicProductParams& operator=(const CreateOrderRequestDynamicProductParams &) = default ;
    CreateOrderRequestDynamicProductParams& operator=(CreateOrderRequestDynamicProductParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->deliveryAddress_ == nullptr && return this->dynamicAttributes_ == nullptr && return this->inputActivateConfig_ == nullptr && return this->instanceIdList_ == nullptr && return this->linkedResourceId_ == nullptr
        && return this->packageCode_ == nullptr && return this->productCode_ == nullptr && return this->productSkuCode_ == nullptr && return this->resourceId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateOrderRequestDynamicProductParams& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline string deliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
    inline CreateOrderRequestDynamicProductParams& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


    // dynamicAttributes Field Functions 
    bool hasDynamicAttributes() const { return this->dynamicAttributes_ != nullptr;};
    void deleteDynamicAttributes() { this->dynamicAttributes_ = nullptr;};
    inline const map<string, string> & dynamicAttributes() const { DARABONBA_PTR_GET_CONST(dynamicAttributes_, map<string, string>) };
    inline map<string, string> dynamicAttributes() { DARABONBA_PTR_GET(dynamicAttributes_, map<string, string>) };
    inline CreateOrderRequestDynamicProductParams& setDynamicAttributes(const map<string, string> & dynamicAttributes) { DARABONBA_PTR_SET_VALUE(dynamicAttributes_, dynamicAttributes) };
    inline CreateOrderRequestDynamicProductParams& setDynamicAttributes(map<string, string> && dynamicAttributes) { DARABONBA_PTR_SET_RVALUE(dynamicAttributes_, dynamicAttributes) };


    // inputActivateConfig Field Functions 
    bool hasInputActivateConfig() const { return this->inputActivateConfig_ != nullptr;};
    void deleteInputActivateConfig() { this->inputActivateConfig_ = nullptr;};
    inline const Models::CreateOrderRequestDynamicProductParamsInputActivateConfig & inputActivateConfig() const { DARABONBA_PTR_GET_CONST(inputActivateConfig_, Models::CreateOrderRequestDynamicProductParamsInputActivateConfig) };
    inline Models::CreateOrderRequestDynamicProductParamsInputActivateConfig inputActivateConfig() { DARABONBA_PTR_GET(inputActivateConfig_, Models::CreateOrderRequestDynamicProductParamsInputActivateConfig) };
    inline CreateOrderRequestDynamicProductParams& setInputActivateConfig(const Models::CreateOrderRequestDynamicProductParamsInputActivateConfig & inputActivateConfig) { DARABONBA_PTR_SET_VALUE(inputActivateConfig_, inputActivateConfig) };
    inline CreateOrderRequestDynamicProductParams& setInputActivateConfig(Models::CreateOrderRequestDynamicProductParamsInputActivateConfig && inputActivateConfig) { DARABONBA_PTR_SET_RVALUE(inputActivateConfig_, inputActivateConfig) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline CreateOrderRequestDynamicProductParams& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline CreateOrderRequestDynamicProductParams& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // linkedResourceId Field Functions 
    bool hasLinkedResourceId() const { return this->linkedResourceId_ != nullptr;};
    void deleteLinkedResourceId() { this->linkedResourceId_ = nullptr;};
    inline string linkedResourceId() const { DARABONBA_PTR_GET_DEFAULT(linkedResourceId_, "") };
    inline CreateOrderRequestDynamicProductParams& setLinkedResourceId(string linkedResourceId) { DARABONBA_PTR_SET_VALUE(linkedResourceId_, linkedResourceId) };


    // packageCode Field Functions 
    bool hasPackageCode() const { return this->packageCode_ != nullptr;};
    void deletePackageCode() { this->packageCode_ = nullptr;};
    inline string packageCode() const { DARABONBA_PTR_GET_DEFAULT(packageCode_, "") };
    inline CreateOrderRequestDynamicProductParams& setPackageCode(string packageCode) { DARABONBA_PTR_SET_VALUE(packageCode_, packageCode) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateOrderRequestDynamicProductParams& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string productSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline CreateOrderRequestDynamicProductParams& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateOrderRequestDynamicProductParams& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<string> deliveryAddress_ = nullptr;
    std::shared_ptr<map<string, string>> dynamicAttributes_ = nullptr;
    std::shared_ptr<Models::CreateOrderRequestDynamicProductParamsInputActivateConfig> inputActivateConfig_ = nullptr;
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
    std::shared_ptr<string> linkedResourceId_ = nullptr;
    std::shared_ptr<string> packageCode_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productSkuCode_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
