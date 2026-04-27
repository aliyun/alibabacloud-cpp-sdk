// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PackageCode, packageCode_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PackageCode, packageCode_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    DescribeMultiPriceRequest() = default ;
    DescribeMultiPriceRequest(const DescribeMultiPriceRequest &) = default ;
    DescribeMultiPriceRequest(DescribeMultiPriceRequest &&) = default ;
    DescribeMultiPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceRequest() = default ;
    DescribeMultiPriceRequest& operator=(const DescribeMultiPriceRequest &) = default ;
    DescribeMultiPriceRequest& operator=(DescribeMultiPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderItems& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(Components, components_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
        DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SavingPlanPeriod, savingPlanPeriod_);
      };
      friend void from_json(const Darabonba::Json& j, OrderItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(Components, components_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
        DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SavingPlanPeriod, savingPlanPeriod_);
      };
      OrderItems() = default ;
      OrderItems(const OrderItems &) = default ;
      OrderItems(OrderItems &&) = default ;
      OrderItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderItems() = default ;
      OrderItems& operator=(const OrderItems &) = default ;
      OrderItems& operator=(OrderItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Components : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Components& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Components& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Components() = default ;
        Components(const Components &) = default ;
        Components(Components &&) = default ;
        Components(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Components() = default ;
        Components& operator=(const Components &) = default ;
        Components& operator=(Components &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Components& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Components& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->amount_ == nullptr
        && this->components_ == nullptr && this->data_ == nullptr && this->instanceIds_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->promotionId_ == nullptr && this->resourceIds_ == nullptr && this->resourceType_ == nullptr && this->savingPlanPeriod_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
      inline OrderItems& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // components Field Functions 
      bool hasComponents() const { return this->components_ != nullptr;};
      void deleteComponents() { this->components_ = nullptr;};
      inline const vector<OrderItems::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<OrderItems::Components>) };
      inline vector<OrderItems::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<OrderItems::Components>) };
      inline OrderItems& setComponents(const vector<OrderItems::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
      inline OrderItems& setComponents(vector<OrderItems::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline OrderItems& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline OrderItems& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline OrderItems& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline OrderItems& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline OrderItems& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // promotionId Field Functions 
      bool hasPromotionId() const { return this->promotionId_ != nullptr;};
      void deletePromotionId() { this->promotionId_ = nullptr;};
      inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
      inline OrderItems& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


      // resourceIds Field Functions 
      bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
      void deleteResourceIds() { this->resourceIds_ = nullptr;};
      inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
      inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
      inline OrderItems& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
      inline OrderItems& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline OrderItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // savingPlanPeriod Field Functions 
      bool hasSavingPlanPeriod() const { return this->savingPlanPeriod_ != nullptr;};
      void deleteSavingPlanPeriod() { this->savingPlanPeriod_ = nullptr;};
      inline string getSavingPlanPeriod() const { DARABONBA_PTR_GET_DEFAULT(savingPlanPeriod_, "") };
      inline OrderItems& setSavingPlanPeriod(string savingPlanPeriod) { DARABONBA_PTR_SET_VALUE(savingPlanPeriod_, savingPlanPeriod) };


    protected:
      shared_ptr<int32_t> amount_ {};
      shared_ptr<vector<OrderItems::Components>> components_ {};
      shared_ptr<string> data_ {};
      shared_ptr<vector<string>> instanceIds_ {};
      shared_ptr<int32_t> period_ {};
      shared_ptr<string> periodUnit_ {};
      shared_ptr<string> promotionId_ {};
      shared_ptr<vector<string>> resourceIds_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> savingPlanPeriod_ {};
    };

    virtual bool empty() const override { return this->orderItems_ == nullptr
        && this->orderType_ == nullptr && this->packageCode_ == nullptr && this->resellerOwnerUid_ == nullptr; };
    // orderItems Field Functions 
    bool hasOrderItems() const { return this->orderItems_ != nullptr;};
    void deleteOrderItems() { this->orderItems_ = nullptr;};
    inline const vector<DescribeMultiPriceRequest::OrderItems> & getOrderItems() const { DARABONBA_PTR_GET_CONST(orderItems_, vector<DescribeMultiPriceRequest::OrderItems>) };
    inline vector<DescribeMultiPriceRequest::OrderItems> getOrderItems() { DARABONBA_PTR_GET(orderItems_, vector<DescribeMultiPriceRequest::OrderItems>) };
    inline DescribeMultiPriceRequest& setOrderItems(const vector<DescribeMultiPriceRequest::OrderItems> & orderItems) { DARABONBA_PTR_SET_VALUE(orderItems_, orderItems) };
    inline DescribeMultiPriceRequest& setOrderItems(vector<DescribeMultiPriceRequest::OrderItems> && orderItems) { DARABONBA_PTR_SET_RVALUE(orderItems_, orderItems) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeMultiPriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // packageCode Field Functions 
    bool hasPackageCode() const { return this->packageCode_ != nullptr;};
    void deletePackageCode() { this->packageCode_ = nullptr;};
    inline string getPackageCode() const { DARABONBA_PTR_GET_DEFAULT(packageCode_, "") };
    inline DescribeMultiPriceRequest& setPackageCode(string packageCode) { DARABONBA_PTR_SET_VALUE(packageCode_, packageCode) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline DescribeMultiPriceRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    shared_ptr<vector<DescribeMultiPriceRequest::OrderItems>> orderItems_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<string> packageCode_ {};
    shared_ptr<int64_t> resellerOwnerUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
