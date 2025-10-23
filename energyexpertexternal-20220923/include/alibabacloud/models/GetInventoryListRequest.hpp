// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetInventoryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventoryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(emissionType, emissionType_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(methodType, methodType_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventoryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(emissionType, emissionType_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(methodType, methodType_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
    };
    GetInventoryListRequest() = default ;
    GetInventoryListRequest(const GetInventoryListRequest &) = default ;
    GetInventoryListRequest(GetInventoryListRequest &&) = default ;
    GetInventoryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventoryListRequest() = default ;
    GetInventoryListRequest& operator=(const GetInventoryListRequest &) = default ;
    GetInventoryListRequest& operator=(GetInventoryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->emissionType_ == nullptr && return this->group_ == nullptr && return this->methodType_ == nullptr && return this->productId_ == nullptr && return this->productType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInventoryListRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // emissionType Field Functions 
    bool hasEmissionType() const { return this->emissionType_ != nullptr;};
    void deleteEmissionType() { this->emissionType_ = nullptr;};
    inline string emissionType() const { DARABONBA_PTR_GET_DEFAULT(emissionType_, "") };
    inline GetInventoryListRequest& setEmissionType(string emissionType) { DARABONBA_PTR_SET_VALUE(emissionType_, emissionType) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetInventoryListRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // methodType Field Functions 
    bool hasMethodType() const { return this->methodType_ != nullptr;};
    void deleteMethodType() { this->methodType_ = nullptr;};
    inline string methodType() const { DARABONBA_PTR_GET_DEFAULT(methodType_, "") };
    inline GetInventoryListRequest& setMethodType(string methodType) { DARABONBA_PTR_SET_VALUE(methodType_, methodType) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline GetInventoryListRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int64_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
    inline GetInventoryListRequest& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // Type of emission
    // 
    // >  Valid values: footprint | emission. Meaning: footprint: all inventories are involved in the calculation; emission: only inventories with positive and zero emissions are involved in the calculation, and negative numbers are not involved in the calculation.
    // 
    // This parameter is required.
    std::shared_ptr<string> emissionType_ = nullptr;
    // Group by
    // 
    // >  Valid values: resource | process | resourceType | processType. Meaning: resource: aggregation by inventory group, process: aggregation by operation group, resourceType: aggregation by inventory type, processType: aggregation by phase group
    // 
    // This parameter is required.
    std::shared_ptr<string> group_ = nullptr;
    // The type of the obtained environmental impact: gwp indicates the carbon footprint of climate change. 
    // <props="intl">[For more information, see the environment impact category enumeration.](https://www.alibabacloud.com/help/en/energy-expert/developer-reference/enumerated-values-of-energy-expert#RhGn7)
    // 
    // This parameter is required.
    std::shared_ptr<string> methodType_ = nullptr;
    // The product id.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> productId_ = nullptr;
    // Product type: 1 indicates that the carbon footprint of the product is requested, and 5 indicates that the carbon footprint of the supply chain is requested.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
