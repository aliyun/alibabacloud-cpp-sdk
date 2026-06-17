// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSUMERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSUMERSRESPONSEBODY_HPP_
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
  class DescribeConsumersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsumersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsumersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeConsumersResponseBody() = default ;
    DescribeConsumersResponseBody(const DescribeConsumersResponseBody &) = default ;
    DescribeConsumersResponseBody(DescribeConsumersResponseBody &&) = default ;
    DescribeConsumersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsumersResponseBody() = default ;
    DescribeConsumersResponseBody& operator=(const DescribeConsumersResponseBody &) = default ;
    DescribeConsumersResponseBody& operator=(DescribeConsumersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedModels, allowedModels_);
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(ConsumerGroupName, consumerGroupName_);
        DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(LifetimeCostCount, lifetimeCostCount_);
        DARABONBA_PTR_TO_JSON(LifetimeTokenCount, lifetimeTokenCount_);
        DARABONBA_PTR_TO_JSON(MtdCostCount, mtdCostCount_);
        DARABONBA_PTR_TO_JSON(MtdTokenCount, mtdTokenCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedModels, allowedModels_);
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(ConsumerGroupName, consumerGroupName_);
        DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(LifetimeCostCount, lifetimeCostCount_);
        DARABONBA_PTR_FROM_JSON(LifetimeTokenCount, lifetimeTokenCount_);
        DARABONBA_PTR_FROM_JSON(MtdCostCount, mtdCostCount_);
        DARABONBA_PTR_FROM_JSON(MtdTokenCount, mtdTokenCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
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
      virtual bool empty() const override { return this->allowedModels_ == nullptr
        && this->apiKey_ == nullptr && this->consumerGroupId_ == nullptr && this->consumerGroupName_ == nullptr && this->consumerId_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->lifetimeCostCount_ == nullptr && this->lifetimeTokenCount_ == nullptr && this->mtdCostCount_ == nullptr && this->mtdTokenCount_ == nullptr
        && this->name_ == nullptr && this->nickName_ == nullptr; };
      // allowedModels Field Functions 
      bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
      void deleteAllowedModels() { this->allowedModels_ = nullptr;};
      inline string getAllowedModels() const { DARABONBA_PTR_GET_DEFAULT(allowedModels_, "") };
      inline Items& setAllowedModels(string allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Items& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Items& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // consumerGroupName Field Functions 
      bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
      void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
      inline string getConsumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
      inline Items& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline Items& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // lifetimeCostCount Field Functions 
      bool hasLifetimeCostCount() const { return this->lifetimeCostCount_ != nullptr;};
      void deleteLifetimeCostCount() { this->lifetimeCostCount_ = nullptr;};
      inline int64_t getLifetimeCostCount() const { DARABONBA_PTR_GET_DEFAULT(lifetimeCostCount_, 0L) };
      inline Items& setLifetimeCostCount(int64_t lifetimeCostCount) { DARABONBA_PTR_SET_VALUE(lifetimeCostCount_, lifetimeCostCount) };


      // lifetimeTokenCount Field Functions 
      bool hasLifetimeTokenCount() const { return this->lifetimeTokenCount_ != nullptr;};
      void deleteLifetimeTokenCount() { this->lifetimeTokenCount_ = nullptr;};
      inline int64_t getLifetimeTokenCount() const { DARABONBA_PTR_GET_DEFAULT(lifetimeTokenCount_, 0L) };
      inline Items& setLifetimeTokenCount(int64_t lifetimeTokenCount) { DARABONBA_PTR_SET_VALUE(lifetimeTokenCount_, lifetimeTokenCount) };


      // mtdCostCount Field Functions 
      bool hasMtdCostCount() const { return this->mtdCostCount_ != nullptr;};
      void deleteMtdCostCount() { this->mtdCostCount_ = nullptr;};
      inline int64_t getMtdCostCount() const { DARABONBA_PTR_GET_DEFAULT(mtdCostCount_, 0L) };
      inline Items& setMtdCostCount(int64_t mtdCostCount) { DARABONBA_PTR_SET_VALUE(mtdCostCount_, mtdCostCount) };


      // mtdTokenCount Field Functions 
      bool hasMtdTokenCount() const { return this->mtdTokenCount_ != nullptr;};
      void deleteMtdTokenCount() { this->mtdTokenCount_ = nullptr;};
      inline int64_t getMtdTokenCount() const { DARABONBA_PTR_GET_DEFAULT(mtdTokenCount_, 0L) };
      inline Items& setMtdTokenCount(int64_t mtdTokenCount) { DARABONBA_PTR_SET_VALUE(mtdTokenCount_, mtdTokenCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Items& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    protected:
      // The models that the consumer is allowed to access, specified as a JSON array in string format.
      shared_ptr<string> allowedModels_ {};
      // The full API key. This value is returned only by this operation.
      shared_ptr<string> apiKey_ {};
      // The consumer group ID.
      shared_ptr<string> consumerGroupId_ {};
      // The consumer group name.
      shared_ptr<string> consumerGroupName_ {};
      // The consumer ID.
      shared_ptr<string> consumerId_ {};
      // The time when the consumer was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the consumer was last modified.
      shared_ptr<string> gmtModified_ {};
      // The total usage.
      shared_ptr<int64_t> lifetimeCostCount_ {};
      // The total number of tokens consumed.
      shared_ptr<int64_t> lifetimeTokenCount_ {};
      // The month-to-date usage.
      shared_ptr<int64_t> mtdCostCount_ {};
      // The number of tokens consumed month-to-date.
      shared_ptr<int64_t> mtdTokenCount_ {};
      // The consumer name.
      shared_ptr<string> name_ {};
      // The consumer nickname.
      shared_ptr<string> nickName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeConsumersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeConsumersResponseBody::Items>) };
    inline vector<DescribeConsumersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeConsumersResponseBody::Items>) };
    inline DescribeConsumersResponseBody& setItems(const vector<DescribeConsumersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeConsumersResponseBody& setItems(vector<DescribeConsumersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeConsumersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeConsumersResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeConsumersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConsumersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeConsumersResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // A list of consumers.
    shared_ptr<vector<DescribeConsumersResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The page size. Valid values: 30, 50, and 100. The default value is 30.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
