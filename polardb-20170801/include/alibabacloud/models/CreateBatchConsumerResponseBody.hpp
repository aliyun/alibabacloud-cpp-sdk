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
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
        DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
        DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
        DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
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
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiStatus_ == nullptr && this->consumerGroupId_ == nullptr && this->consumerId_ == nullptr && this->consumerTag_ == nullptr && this->gwClusterId_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Items& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiStatus Field Functions 
      bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
      void deleteApiStatus() { this->apiStatus_ = nullptr;};
      inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
      inline Items& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


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
      // The complete API key. This value is returned only in the current response.
      shared_ptr<string> apiKey_ {};
      // The API key status. Default value: Active.
      shared_ptr<string> apiStatus_ {};
      // The ID of the user group.
      shared_ptr<string> consumerGroupId_ {};
      // The user ID.
      shared_ptr<string> consumerId_ {};
      // The consumer tag.
      shared_ptr<string> consumerTag_ {};
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
