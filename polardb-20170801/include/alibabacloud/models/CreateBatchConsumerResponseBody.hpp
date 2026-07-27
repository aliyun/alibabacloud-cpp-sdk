// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHCONSUMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHCONSUMERRESPONSEBODY_HPP_
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
  class CreateBatchConsumerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchConsumerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchConsumerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    CreateBatchConsumerResponseBody() = default ;
    CreateBatchConsumerResponseBody(const CreateBatchConsumerResponseBody &) = default ;
    CreateBatchConsumerResponseBody(CreateBatchConsumerResponseBody &&) = default ;
    CreateBatchConsumerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchConsumerResponseBody() = default ;
    CreateBatchConsumerResponseBody& operator=(const CreateBatchConsumerResponseBody &) = default ;
    CreateBatchConsumerResponseBody& operator=(CreateBatchConsumerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ApiKeyMd5, apiKeyMd5_);
        DARABONBA_PTR_TO_JSON(ApiKeyStatus, apiKeyStatus_);
        DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
        DARABONBA_PTR_TO_JSON(BudgetLimit, budgetLimit_);
        DARABONBA_PTR_TO_JSON(BudgetPolicyId, budgetPolicyId_);
        DARABONBA_PTR_TO_JSON(BudgetUsed, budgetUsed_);
        DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ApiKeyMd5, apiKeyMd5_);
        DARABONBA_PTR_FROM_JSON(ApiKeyStatus, apiKeyStatus_);
        DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
        DARABONBA_PTR_FROM_JSON(BudgetLimit, budgetLimit_);
        DARABONBA_PTR_FROM_JSON(BudgetPolicyId, budgetPolicyId_);
        DARABONBA_PTR_FROM_JSON(BudgetUsed, budgetUsed_);
        DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->active_ == nullptr
        && this->apiKey_ == nullptr && this->apiKeyMd5_ == nullptr && this->apiKeyStatus_ == nullptr && this->apiStatus_ == nullptr && this->budgetLimit_ == nullptr
        && this->budgetPolicyId_ == nullptr && this->budgetUsed_ == nullptr && this->consumerGroupId_ == nullptr && this->consumerId_ == nullptr && this->consumerTag_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->gwClusterId_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline Items& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Items& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiKeyMd5 Field Functions 
      bool hasApiKeyMd5() const { return this->apiKeyMd5_ != nullptr;};
      void deleteApiKeyMd5() { this->apiKeyMd5_ = nullptr;};
      inline string getApiKeyMd5() const { DARABONBA_PTR_GET_DEFAULT(apiKeyMd5_, "") };
      inline Items& setApiKeyMd5(string apiKeyMd5) { DARABONBA_PTR_SET_VALUE(apiKeyMd5_, apiKeyMd5) };


      // apiKeyStatus Field Functions 
      bool hasApiKeyStatus() const { return this->apiKeyStatus_ != nullptr;};
      void deleteApiKeyStatus() { this->apiKeyStatus_ = nullptr;};
      inline string getApiKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(apiKeyStatus_, "") };
      inline Items& setApiKeyStatus(string apiKeyStatus) { DARABONBA_PTR_SET_VALUE(apiKeyStatus_, apiKeyStatus) };


      // apiStatus Field Functions 
      bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
      void deleteApiStatus() { this->apiStatus_ = nullptr;};
      inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
      inline Items& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


      // budgetLimit Field Functions 
      bool hasBudgetLimit() const { return this->budgetLimit_ != nullptr;};
      void deleteBudgetLimit() { this->budgetLimit_ = nullptr;};
      inline int64_t getBudgetLimit() const { DARABONBA_PTR_GET_DEFAULT(budgetLimit_, 0L) };
      inline Items& setBudgetLimit(int64_t budgetLimit) { DARABONBA_PTR_SET_VALUE(budgetLimit_, budgetLimit) };


      // budgetPolicyId Field Functions 
      bool hasBudgetPolicyId() const { return this->budgetPolicyId_ != nullptr;};
      void deleteBudgetPolicyId() { this->budgetPolicyId_ = nullptr;};
      inline string getBudgetPolicyId() const { DARABONBA_PTR_GET_DEFAULT(budgetPolicyId_, "") };
      inline Items& setBudgetPolicyId(string budgetPolicyId) { DARABONBA_PTR_SET_VALUE(budgetPolicyId_, budgetPolicyId) };


      // budgetUsed Field Functions 
      bool hasBudgetUsed() const { return this->budgetUsed_ != nullptr;};
      void deleteBudgetUsed() { this->budgetUsed_ = nullptr;};
      inline int64_t getBudgetUsed() const { DARABONBA_PTR_GET_DEFAULT(budgetUsed_, 0L) };
      inline Items& setBudgetUsed(int64_t budgetUsed) { DARABONBA_PTR_SET_VALUE(budgetUsed_, budgetUsed) };


      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Items& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline Items& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // consumerTag Field Functions 
      bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
      void deleteConsumerTag() { this->consumerTag_ = nullptr;};
      inline string getConsumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
      inline Items& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Items& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline Items& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


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


      // gwClusterId Field Functions 
      bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
      void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
      inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
      inline Items& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the key is active.
      shared_ptr<bool> active_ {};
      // The full API key. Returned only in this response.
      shared_ptr<string> apiKey_ {};
      // The MD5 hash of the API key.
      shared_ptr<string> apiKeyMd5_ {};
      // The status of the API key. Default value: Active.
      shared_ptr<string> apiKeyStatus_ {};
      // The API key status. Default value: Active.
      shared_ptr<string> apiStatus_ {};
      // The budget limit, which equals the number of credits per package.
      shared_ptr<int64_t> budgetLimit_ {};
      // The budget policy ID. Each key has an independent budget policy.
      shared_ptr<string> budgetPolicyId_ {};
      // The used quota.
      shared_ptr<int64_t> budgetUsed_ {};
      // The user group ID.
      shared_ptr<string> consumerGroupId_ {};
      // The user ID.
      shared_ptr<string> consumerId_ {};
      // The consumer tag.
      shared_ptr<string> consumerTag_ {};
      // The application description or remarks.
      shared_ptr<string> description_ {};
      // The expiration time.
      shared_ptr<string> expireTime_ {};
      // Indicates whether the key is expired.
      shared_ptr<bool> expired_ {};
      // The creation time.
      shared_ptr<string> gmtCreated_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      // The gateway instance ID.
      shared_ptr<string> gwClusterId_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The consumer status. Default value: Enabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalPages_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<CreateBatchConsumerResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<CreateBatchConsumerResponseBody::Items>) };
    inline vector<CreateBatchConsumerResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<CreateBatchConsumerResponseBody::Items>) };
    inline CreateBatchConsumerResponseBody& setItems(const vector<CreateBatchConsumerResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateBatchConsumerResponseBody& setItems(vector<CreateBatchConsumerResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline CreateBatchConsumerResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline CreateBatchConsumerResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CreateBatchConsumerResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBatchConsumerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline CreateBatchConsumerResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline CreateBatchConsumerResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of consumer objects.
    shared_ptr<vector<CreateBatchConsumerResponseBody::Items>> items_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The number of records per page. Valid values:
    // * **30**
    // * **50**
    // * **100**
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
