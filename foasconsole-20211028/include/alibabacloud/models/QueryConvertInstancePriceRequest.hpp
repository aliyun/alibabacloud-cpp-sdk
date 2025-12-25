// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryConvertInstancePriceRequestNamespaceResourceSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryConvertInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_TO_JSON(NamespaceResourceSpecs, namespaceResourceSpecs_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_FROM_JSON(NamespaceResourceSpecs, namespaceResourceSpecs_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
    };
    QueryConvertInstancePriceRequest() = default ;
    QueryConvertInstancePriceRequest(const QueryConvertInstancePriceRequest &) = default ;
    QueryConvertInstancePriceRequest(QueryConvertInstancePriceRequest &&) = default ;
    QueryConvertInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceRequest() = default ;
    QueryConvertInstancePriceRequest& operator=(const QueryConvertInstancePriceRequest &) = default ;
    QueryConvertInstancePriceRequest& operator=(QueryConvertInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->instanceId_ == nullptr && return this->isAutoRenew_ == nullptr && return this->namespaceResourceSpecs_ == nullptr && return this->pricingCycle_ == nullptr && return this->promotionCode_ == nullptr
        && return this->region_ == nullptr && return this->usePromotionCode_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryConvertInstancePriceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryConvertInstancePriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAutoRenew Field Functions 
    bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
    void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
    inline bool isAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
    inline QueryConvertInstancePriceRequest& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


    // namespaceResourceSpecs Field Functions 
    bool hasNamespaceResourceSpecs() const { return this->namespaceResourceSpecs_ != nullptr;};
    void deleteNamespaceResourceSpecs() { this->namespaceResourceSpecs_ = nullptr;};
    inline const vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs> & namespaceResourceSpecs() const { DARABONBA_PTR_GET_CONST(namespaceResourceSpecs_, vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs>) };
    inline vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs> namespaceResourceSpecs() { DARABONBA_PTR_GET(namespaceResourceSpecs_, vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs>) };
    inline QueryConvertInstancePriceRequest& setNamespaceResourceSpecs(const vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs> & namespaceResourceSpecs) { DARABONBA_PTR_SET_VALUE(namespaceResourceSpecs_, namespaceResourceSpecs) };
    inline QueryConvertInstancePriceRequest& setNamespaceResourceSpecs(vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs> && namespaceResourceSpecs) { DARABONBA_PTR_SET_RVALUE(namespaceResourceSpecs_, namespaceResourceSpecs) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline QueryConvertInstancePriceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline QueryConvertInstancePriceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryConvertInstancePriceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline QueryConvertInstancePriceRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isAutoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs>> namespaceResourceSpecs_ = nullptr;
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
