// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPGROUP_HPP_
#define ALIBABACLOUD_MODELS_APPGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Quota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class AppGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppGroup& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AppGroup() = default ;
    AppGroup(const AppGroup &) = default ;
    AppGroup(AppGroup &&) = default ;
    AppGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppGroup() = default ;
    AppGroup& operator=(const AppGroup &) = default ;
    AppGroup& operator=(AppGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Order : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Order& obj) { 
        DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
      };
      friend void from_json(const Darabonba::Json& j, Order& obj) { 
        DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
      };
      Order() = default ;
      Order(const Order &) = default ;
      Order(Order &&) = default ;
      Order(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Order() = default ;
      Order& operator=(const Order &) = default ;
      Order& operator=(Order &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->duration_ == nullptr && this->pricingCycle_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Order& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Order& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline Order& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    protected:
      shared_ptr<bool> autoRenew_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> pricingCycle_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->description_ == nullptr && this->domain_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->quota_ == nullptr
        && this->resourceGroupId_ == nullptr && this->type_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline AppGroup& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AppGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AppGroup& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const AppGroup::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, AppGroup::Order) };
    inline AppGroup::Order getOrder() { DARABONBA_PTR_GET(order_, AppGroup::Order) };
    inline AppGroup& setOrder(const AppGroup::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline AppGroup& setOrder(AppGroup::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Quota) };
    inline Quota getQuota() { DARABONBA_PTR_GET(quota_, Quota) };
    inline AppGroup& setQuota(const Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline AppGroup& setQuota(Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AppGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<string> name_ {};
    shared_ptr<AppGroup::Order> order_ {};
    shared_ptr<Quota> quota_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
