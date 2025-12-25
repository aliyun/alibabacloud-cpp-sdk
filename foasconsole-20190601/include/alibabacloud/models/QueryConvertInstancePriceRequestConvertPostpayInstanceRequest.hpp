// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTCONVERTPOSTPAYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTCONVERTPOSTPAYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryConvertInstancePriceRequestConvertPostpayInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_TO_JSON(NamespaceResourceSpecs, namespaceResourceSpecs_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_FROM_JSON(NamespaceResourceSpecs, namespaceResourceSpecs_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequest() = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequest(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequest &) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequest(QueryConvertInstancePriceRequestConvertPostpayInstanceRequest &&) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceRequestConvertPostpayInstanceRequest() = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& operator=(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequest &) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& operator=(QueryConvertInstancePriceRequestConvertPostpayInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->instanceId_ == nullptr && return this->isAutoRenew_ == nullptr && return this->namespaceResourceSpecs_ == nullptr && return this->pricingCycle_ == nullptr && return this->region_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAutoRenew Field Functions 
    bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
    void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
    inline bool isAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


    // namespaceResourceSpecs Field Functions 
    bool hasNamespaceResourceSpecs() const { return this->namespaceResourceSpecs_ != nullptr;};
    void deleteNamespaceResourceSpecs() { this->namespaceResourceSpecs_ = nullptr;};
    inline const vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs> & namespaceResourceSpecs() const { DARABONBA_PTR_GET_CONST(namespaceResourceSpecs_, vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>) };
    inline vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs> namespaceResourceSpecs() { DARABONBA_PTR_GET(namespaceResourceSpecs_, vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setNamespaceResourceSpecs(const vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs> & namespaceResourceSpecs) { DARABONBA_PTR_SET_VALUE(namespaceResourceSpecs_, namespaceResourceSpecs) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setNamespaceResourceSpecs(vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs> && namespaceResourceSpecs) { DARABONBA_PTR_SET_RVALUE(namespaceResourceSpecs_, namespaceResourceSpecs) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isAutoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>> namespaceResourceSpecs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
