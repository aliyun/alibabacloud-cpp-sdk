// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryConvertInstancePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_TO_JSON(NamespaceResourceSpecs, namespaceResourceSpecsShrink_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_FROM_JSON(NamespaceResourceSpecs, namespaceResourceSpecsShrink_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
    };
    QueryConvertInstancePriceShrinkRequest() = default ;
    QueryConvertInstancePriceShrinkRequest(const QueryConvertInstancePriceShrinkRequest &) = default ;
    QueryConvertInstancePriceShrinkRequest(QueryConvertInstancePriceShrinkRequest &&) = default ;
    QueryConvertInstancePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceShrinkRequest() = default ;
    QueryConvertInstancePriceShrinkRequest& operator=(const QueryConvertInstancePriceShrinkRequest &) = default ;
    QueryConvertInstancePriceShrinkRequest& operator=(QueryConvertInstancePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->instanceId_ != nullptr && this->isAutoRenew_ != nullptr && this->namespaceResourceSpecsShrink_ != nullptr && this->pricingCycle_ != nullptr && this->promotionCode_ != nullptr
        && this->region_ != nullptr && this->usePromotionCode_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryConvertInstancePriceShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryConvertInstancePriceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAutoRenew Field Functions 
    bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
    void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
    inline bool isAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
    inline QueryConvertInstancePriceShrinkRequest& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


    // namespaceResourceSpecsShrink Field Functions 
    bool hasNamespaceResourceSpecsShrink() const { return this->namespaceResourceSpecsShrink_ != nullptr;};
    void deleteNamespaceResourceSpecsShrink() { this->namespaceResourceSpecsShrink_ = nullptr;};
    inline string namespaceResourceSpecsShrink() const { DARABONBA_PTR_GET_DEFAULT(namespaceResourceSpecsShrink_, "") };
    inline QueryConvertInstancePriceShrinkRequest& setNamespaceResourceSpecsShrink(string namespaceResourceSpecsShrink) { DARABONBA_PTR_SET_VALUE(namespaceResourceSpecsShrink_, namespaceResourceSpecsShrink) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline QueryConvertInstancePriceShrinkRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline QueryConvertInstancePriceShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryConvertInstancePriceShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline QueryConvertInstancePriceShrinkRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isAutoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespaceResourceSpecsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<bool> usePromotionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
