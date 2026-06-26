// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIKEYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIKEYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApikeyAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApikeyAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApikeyAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApikeyAttributeResponseBody() = default ;
    DescribeApikeyAttributeResponseBody(const DescribeApikeyAttributeResponseBody &) = default ;
    DescribeApikeyAttributeResponseBody(DescribeApikeyAttributeResponseBody &&) = default ;
    DescribeApikeyAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApikeyAttributeResponseBody() = default ;
    DescribeApikeyAttributeResponseBody& operator=(const DescribeApikeyAttributeResponseBody &) = default ;
    DescribeApikeyAttributeResponseBody& operator=(DescribeApikeyAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Consumer, consumer_);
        DARABONBA_PTR_TO_JSON(UsageStatistics, usageStatistics_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Consumer, consumer_);
        DARABONBA_PTR_FROM_JSON(UsageStatistics, usageStatistics_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(DimensionRefId, dimensionRefId_);
          DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
          DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
          DARABONBA_PTR_TO_JSON(MonthlyCacheToken, monthlyCacheToken_);
          DARABONBA_PTR_TO_JSON(MonthlyCostPoints, monthlyCostPoints_);
          DARABONBA_PTR_TO_JSON(MonthlyInputToken, monthlyInputToken_);
          DARABONBA_PTR_TO_JSON(MonthlyOutputToken, monthlyOutputToken_);
          DARABONBA_PTR_TO_JSON(MonthlyToken, monthlyToken_);
          DARABONBA_PTR_TO_JSON(TotalCacheToken, totalCacheToken_);
          DARABONBA_PTR_TO_JSON(TotalCostPoints, totalCostPoints_);
          DARABONBA_PTR_TO_JSON(TotalInputToken, totalInputToken_);
          DARABONBA_PTR_TO_JSON(TotalOutputToken, totalOutputToken_);
          DARABONBA_PTR_TO_JSON(TotalToken, totalToken_);
        };
        friend void from_json(const Darabonba::Json& j, UsageStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(DimensionRefId, dimensionRefId_);
          DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
          DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
          DARABONBA_PTR_FROM_JSON(MonthlyCacheToken, monthlyCacheToken_);
          DARABONBA_PTR_FROM_JSON(MonthlyCostPoints, monthlyCostPoints_);
          DARABONBA_PTR_FROM_JSON(MonthlyInputToken, monthlyInputToken_);
          DARABONBA_PTR_FROM_JSON(MonthlyOutputToken, monthlyOutputToken_);
          DARABONBA_PTR_FROM_JSON(MonthlyToken, monthlyToken_);
          DARABONBA_PTR_FROM_JSON(TotalCacheToken, totalCacheToken_);
          DARABONBA_PTR_FROM_JSON(TotalCostPoints, totalCostPoints_);
          DARABONBA_PTR_FROM_JSON(TotalInputToken, totalInputToken_);
          DARABONBA_PTR_FROM_JSON(TotalOutputToken, totalOutputToken_);
          DARABONBA_PTR_FROM_JSON(TotalToken, totalToken_);
        };
        UsageStatistics() = default ;
        UsageStatistics(const UsageStatistics &) = default ;
        UsageStatistics(UsageStatistics &&) = default ;
        UsageStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageStatistics() = default ;
        UsageStatistics& operator=(const UsageStatistics &) = default ;
        UsageStatistics& operator=(UsageStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dimensionRefId_ == nullptr
        && this->dimensionType_ == nullptr && this->gwClusterId_ == nullptr && this->monthlyCacheToken_ == nullptr && this->monthlyCostPoints_ == nullptr && this->monthlyInputToken_ == nullptr
        && this->monthlyOutputToken_ == nullptr && this->monthlyToken_ == nullptr && this->totalCacheToken_ == nullptr && this->totalCostPoints_ == nullptr && this->totalInputToken_ == nullptr
        && this->totalOutputToken_ == nullptr && this->totalToken_ == nullptr; };
        // dimensionRefId Field Functions 
        bool hasDimensionRefId() const { return this->dimensionRefId_ != nullptr;};
        void deleteDimensionRefId() { this->dimensionRefId_ = nullptr;};
        inline string getDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(dimensionRefId_, "") };
        inline UsageStatistics& setDimensionRefId(string dimensionRefId) { DARABONBA_PTR_SET_VALUE(dimensionRefId_, dimensionRefId) };


        // dimensionType Field Functions 
        bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
        void deleteDimensionType() { this->dimensionType_ = nullptr;};
        inline string getDimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
        inline UsageStatistics& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


        // gwClusterId Field Functions 
        bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
        void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
        inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
        inline UsageStatistics& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


        // monthlyCacheToken Field Functions 
        bool hasMonthlyCacheToken() const { return this->monthlyCacheToken_ != nullptr;};
        void deleteMonthlyCacheToken() { this->monthlyCacheToken_ = nullptr;};
        inline string getMonthlyCacheToken() const { DARABONBA_PTR_GET_DEFAULT(monthlyCacheToken_, "") };
        inline UsageStatistics& setMonthlyCacheToken(string monthlyCacheToken) { DARABONBA_PTR_SET_VALUE(monthlyCacheToken_, monthlyCacheToken) };


        // monthlyCostPoints Field Functions 
        bool hasMonthlyCostPoints() const { return this->monthlyCostPoints_ != nullptr;};
        void deleteMonthlyCostPoints() { this->monthlyCostPoints_ = nullptr;};
        inline string getMonthlyCostPoints() const { DARABONBA_PTR_GET_DEFAULT(monthlyCostPoints_, "") };
        inline UsageStatistics& setMonthlyCostPoints(string monthlyCostPoints) { DARABONBA_PTR_SET_VALUE(monthlyCostPoints_, monthlyCostPoints) };


        // monthlyInputToken Field Functions 
        bool hasMonthlyInputToken() const { return this->monthlyInputToken_ != nullptr;};
        void deleteMonthlyInputToken() { this->monthlyInputToken_ = nullptr;};
        inline string getMonthlyInputToken() const { DARABONBA_PTR_GET_DEFAULT(monthlyInputToken_, "") };
        inline UsageStatistics& setMonthlyInputToken(string monthlyInputToken) { DARABONBA_PTR_SET_VALUE(monthlyInputToken_, monthlyInputToken) };


        // monthlyOutputToken Field Functions 
        bool hasMonthlyOutputToken() const { return this->monthlyOutputToken_ != nullptr;};
        void deleteMonthlyOutputToken() { this->monthlyOutputToken_ = nullptr;};
        inline string getMonthlyOutputToken() const { DARABONBA_PTR_GET_DEFAULT(monthlyOutputToken_, "") };
        inline UsageStatistics& setMonthlyOutputToken(string monthlyOutputToken) { DARABONBA_PTR_SET_VALUE(monthlyOutputToken_, monthlyOutputToken) };


        // monthlyToken Field Functions 
        bool hasMonthlyToken() const { return this->monthlyToken_ != nullptr;};
        void deleteMonthlyToken() { this->monthlyToken_ = nullptr;};
        inline string getMonthlyToken() const { DARABONBA_PTR_GET_DEFAULT(monthlyToken_, "") };
        inline UsageStatistics& setMonthlyToken(string monthlyToken) { DARABONBA_PTR_SET_VALUE(monthlyToken_, monthlyToken) };


        // totalCacheToken Field Functions 
        bool hasTotalCacheToken() const { return this->totalCacheToken_ != nullptr;};
        void deleteTotalCacheToken() { this->totalCacheToken_ = nullptr;};
        inline string getTotalCacheToken() const { DARABONBA_PTR_GET_DEFAULT(totalCacheToken_, "") };
        inline UsageStatistics& setTotalCacheToken(string totalCacheToken) { DARABONBA_PTR_SET_VALUE(totalCacheToken_, totalCacheToken) };


        // totalCostPoints Field Functions 
        bool hasTotalCostPoints() const { return this->totalCostPoints_ != nullptr;};
        void deleteTotalCostPoints() { this->totalCostPoints_ = nullptr;};
        inline string getTotalCostPoints() const { DARABONBA_PTR_GET_DEFAULT(totalCostPoints_, "") };
        inline UsageStatistics& setTotalCostPoints(string totalCostPoints) { DARABONBA_PTR_SET_VALUE(totalCostPoints_, totalCostPoints) };


        // totalInputToken Field Functions 
        bool hasTotalInputToken() const { return this->totalInputToken_ != nullptr;};
        void deleteTotalInputToken() { this->totalInputToken_ = nullptr;};
        inline string getTotalInputToken() const { DARABONBA_PTR_GET_DEFAULT(totalInputToken_, "") };
        inline UsageStatistics& setTotalInputToken(string totalInputToken) { DARABONBA_PTR_SET_VALUE(totalInputToken_, totalInputToken) };


        // totalOutputToken Field Functions 
        bool hasTotalOutputToken() const { return this->totalOutputToken_ != nullptr;};
        void deleteTotalOutputToken() { this->totalOutputToken_ = nullptr;};
        inline string getTotalOutputToken() const { DARABONBA_PTR_GET_DEFAULT(totalOutputToken_, "") };
        inline UsageStatistics& setTotalOutputToken(string totalOutputToken) { DARABONBA_PTR_SET_VALUE(totalOutputToken_, totalOutputToken) };


        // totalToken Field Functions 
        bool hasTotalToken() const { return this->totalToken_ != nullptr;};
        void deleteTotalToken() { this->totalToken_ = nullptr;};
        inline string getTotalToken() const { DARABONBA_PTR_GET_DEFAULT(totalToken_, "") };
        inline UsageStatistics& setTotalToken(string totalToken) { DARABONBA_PTR_SET_VALUE(totalToken_, totalToken) };


      protected:
        shared_ptr<string> dimensionRefId_ {};
        shared_ptr<string> dimensionType_ {};
        shared_ptr<string> gwClusterId_ {};
        shared_ptr<string> monthlyCacheToken_ {};
        shared_ptr<string> monthlyCostPoints_ {};
        shared_ptr<string> monthlyInputToken_ {};
        shared_ptr<string> monthlyOutputToken_ {};
        shared_ptr<string> monthlyToken_ {};
        shared_ptr<string> totalCacheToken_ {};
        shared_ptr<string> totalCostPoints_ {};
        shared_ptr<string> totalInputToken_ {};
        shared_ptr<string> totalOutputToken_ {};
        shared_ptr<string> totalToken_ {};
      };

      class Consumer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Consumer& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
          DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Consumer& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
          DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Consumer() = default ;
        Consumer(const Consumer &) = default ;
        Consumer(Consumer &&) = default ;
        Consumer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Consumer() = default ;
        Consumer& operator=(const Consumer &) = default ;
        Consumer& operator=(Consumer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->consumerGroupId_ == nullptr && this->consumerId_ == nullptr && this->consumerTag_ == nullptr && this->createTime_ == nullptr && this->gwClusterId_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline Consumer& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // consumerGroupId Field Functions 
        bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
        void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
        inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
        inline Consumer& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
        inline Consumer& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // consumerTag Field Functions 
        bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
        void deleteConsumerTag() { this->consumerTag_ = nullptr;};
        inline string getConsumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
        inline Consumer& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Consumer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // gwClusterId Field Functions 
        bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
        void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
        inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
        inline Consumer& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline Consumer& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Consumer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Consumer& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<string> consumerGroupId_ {};
        shared_ptr<string> consumerId_ {};
        shared_ptr<string> consumerTag_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> gwClusterId_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->consumer_ == nullptr
        && this->usageStatistics_ == nullptr; };
      // consumer Field Functions 
      bool hasConsumer() const { return this->consumer_ != nullptr;};
      void deleteConsumer() { this->consumer_ = nullptr;};
      inline const Items::Consumer & getConsumer() const { DARABONBA_PTR_GET_CONST(consumer_, Items::Consumer) };
      inline Items::Consumer getConsumer() { DARABONBA_PTR_GET(consumer_, Items::Consumer) };
      inline Items& setConsumer(const Items::Consumer & consumer) { DARABONBA_PTR_SET_VALUE(consumer_, consumer) };
      inline Items& setConsumer(Items::Consumer && consumer) { DARABONBA_PTR_SET_RVALUE(consumer_, consumer) };


      // usageStatistics Field Functions 
      bool hasUsageStatistics() const { return this->usageStatistics_ != nullptr;};
      void deleteUsageStatistics() { this->usageStatistics_ = nullptr;};
      inline const vector<Items::UsageStatistics> & getUsageStatistics() const { DARABONBA_PTR_GET_CONST(usageStatistics_, vector<Items::UsageStatistics>) };
      inline vector<Items::UsageStatistics> getUsageStatistics() { DARABONBA_PTR_GET(usageStatistics_, vector<Items::UsageStatistics>) };
      inline Items& setUsageStatistics(const vector<Items::UsageStatistics> & usageStatistics) { DARABONBA_PTR_SET_VALUE(usageStatistics_, usageStatistics) };
      inline Items& setUsageStatistics(vector<Items::UsageStatistics> && usageStatistics) { DARABONBA_PTR_SET_RVALUE(usageStatistics_, usageStatistics) };


    protected:
      shared_ptr<Items::Consumer> consumer_ {};
      shared_ptr<vector<Items::UsageStatistics>> usageStatistics_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeApikeyAttributeResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeApikeyAttributeResponseBody::Items>) };
    inline vector<DescribeApikeyAttributeResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeApikeyAttributeResponseBody::Items>) };
    inline DescribeApikeyAttributeResponseBody& setItems(const vector<DescribeApikeyAttributeResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeApikeyAttributeResponseBody& setItems(vector<DescribeApikeyAttributeResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApikeyAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeApikeyAttributeResponseBody::Items>> items_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
