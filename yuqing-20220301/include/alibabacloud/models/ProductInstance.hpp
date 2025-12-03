// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class ProductInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductInstance& obj) { 
      DARABONBA_PTR_TO_JSON(appCode, appCode_);
      DARABONBA_PTR_TO_JSON(buyerName, buyerName_);
      DARABONBA_PTR_TO_JSON(buyerUid, buyerUid_);
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(orderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(productCode, productCode_);
      DARABONBA_PTR_TO_JSON(productSpecCode, productSpecCode_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(tenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(tenantUid, tenantUid_);
    };
    friend void from_json(const Darabonba::Json& j, ProductInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(appCode, appCode_);
      DARABONBA_PTR_FROM_JSON(buyerName, buyerName_);
      DARABONBA_PTR_FROM_JSON(buyerUid, buyerUid_);
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(orderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(productCode, productCode_);
      DARABONBA_PTR_FROM_JSON(productSpecCode, productSpecCode_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(tenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(tenantUid, tenantUid_);
    };
    ProductInstance() = default ;
    ProductInstance(const ProductInstance &) = default ;
    ProductInstance(ProductInstance &&) = default ;
    ProductInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductInstance() = default ;
    ProductInstance& operator=(const ProductInstance &) = default ;
    ProductInstance& operator=(ProductInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->buyerName_ == nullptr && return this->buyerUid_ == nullptr && return this->channel_ == nullptr && return this->config_ == nullptr && return this->end_ == nullptr
        && return this->instanceId_ == nullptr && return this->orderNo_ == nullptr && return this->productCode_ == nullptr && return this->productSpecCode_ == nullptr && return this->start_ == nullptr
        && return this->tenantName_ == nullptr && return this->tenantUid_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ProductInstance& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline ProductInstance& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // buyerUid Field Functions 
    bool hasBuyerUid() const { return this->buyerUid_ != nullptr;};
    void deleteBuyerUid() { this->buyerUid_ = nullptr;};
    inline string buyerUid() const { DARABONBA_PTR_GET_DEFAULT(buyerUid_, "") };
    inline ProductInstance& setBuyerUid(string buyerUid) { DARABONBA_PTR_SET_VALUE(buyerUid_, buyerUid) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ProductInstance& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ProductInstance& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline ProductInstance& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ProductInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string orderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline ProductInstance& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ProductInstance& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productSpecCode Field Functions 
    bool hasProductSpecCode() const { return this->productSpecCode_ != nullptr;};
    void deleteProductSpecCode() { this->productSpecCode_ = nullptr;};
    inline string productSpecCode() const { DARABONBA_PTR_GET_DEFAULT(productSpecCode_, "") };
    inline ProductInstance& setProductSpecCode(string productSpecCode) { DARABONBA_PTR_SET_VALUE(productSpecCode_, productSpecCode) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline ProductInstance& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string tenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline ProductInstance& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // tenantUid Field Functions 
    bool hasTenantUid() const { return this->tenantUid_ != nullptr;};
    void deleteTenantUid() { this->tenantUid_ = nullptr;};
    inline string tenantUid() const { DARABONBA_PTR_GET_DEFAULT(tenantUid_, "") };
    inline ProductInstance& setTenantUid(string tenantUid) { DARABONBA_PTR_SET_VALUE(tenantUid_, tenantUid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> buyerUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<int64_t> end_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productSpecCode_ = nullptr;
    std::shared_ptr<int64_t> start_ = nullptr;
    std::shared_ptr<string> tenantName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tenantUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
