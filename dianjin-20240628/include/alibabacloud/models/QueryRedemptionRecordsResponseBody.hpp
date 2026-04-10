// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEMPTIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEMPTIONRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class QueryRedemptionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedemptionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedemptionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    QueryRedemptionRecordsResponseBody() = default ;
    QueryRedemptionRecordsResponseBody(const QueryRedemptionRecordsResponseBody &) = default ;
    QueryRedemptionRecordsResponseBody(QueryRedemptionRecordsResponseBody &&) = default ;
    QueryRedemptionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedemptionRecordsResponseBody() = default ;
    QueryRedemptionRecordsResponseBody& operator=(const QueryRedemptionRecordsResponseBody &) = default ;
    QueryRedemptionRecordsResponseBody& operator=(QueryRedemptionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
        DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page, page_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
        DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
          DARABONBA_PTR_TO_JSON(effectiveAt, effectiveAt_);
          DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(keyHash, keyHash_);
          DARABONBA_PTR_TO_JSON(outBizNo, outBizNo_);
          DARABONBA_PTR_TO_JSON(quotaBalance, quotaBalance_);
          DARABONBA_PTR_TO_JSON(quotaStatus, quotaStatus_);
          DARABONBA_PTR_TO_JSON(redemptionOrderNo, redemptionOrderNo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(templateId, templateId_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
          DARABONBA_PTR_FROM_JSON(effectiveAt, effectiveAt_);
          DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(keyHash, keyHash_);
          DARABONBA_PTR_FROM_JSON(outBizNo, outBizNo_);
          DARABONBA_PTR_FROM_JSON(quotaBalance, quotaBalance_);
          DARABONBA_PTR_FROM_JSON(quotaStatus, quotaStatus_);
          DARABONBA_PTR_FROM_JSON(redemptionOrderNo, redemptionOrderNo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(templateId, templateId_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
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
        && this->effectiveAt_ == nullptr && this->expireAt_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->keyHash_ == nullptr
        && this->outBizNo_ == nullptr && this->quotaBalance_ == nullptr && this->quotaStatus_ == nullptr && this->redemptionOrderNo_ == nullptr && this->status_ == nullptr
        && this->templateId_ == nullptr && this->tenantId_ == nullptr; };
        // allowedModels Field Functions 
        bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
        void deleteAllowedModels() { this->allowedModels_ = nullptr;};
        inline const vector<string> & getAllowedModels() const { DARABONBA_PTR_GET_CONST(allowedModels_, vector<string>) };
        inline vector<string> getAllowedModels() { DARABONBA_PTR_GET(allowedModels_, vector<string>) };
        inline Items& setAllowedModels(const vector<string> & allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };
        inline Items& setAllowedModels(vector<string> && allowedModels) { DARABONBA_PTR_SET_RVALUE(allowedModels_, allowedModels) };


        // effectiveAt Field Functions 
        bool hasEffectiveAt() const { return this->effectiveAt_ != nullptr;};
        void deleteEffectiveAt() { this->effectiveAt_ = nullptr;};
        inline string getEffectiveAt() const { DARABONBA_PTR_GET_DEFAULT(effectiveAt_, "") };
        inline Items& setEffectiveAt(string effectiveAt) { DARABONBA_PTR_SET_VALUE(effectiveAt_, effectiveAt) };


        // expireAt Field Functions 
        bool hasExpireAt() const { return this->expireAt_ != nullptr;};
        void deleteExpireAt() { this->expireAt_ = nullptr;};
        inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
        inline Items& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // keyHash Field Functions 
        bool hasKeyHash() const { return this->keyHash_ != nullptr;};
        void deleteKeyHash() { this->keyHash_ = nullptr;};
        inline string getKeyHash() const { DARABONBA_PTR_GET_DEFAULT(keyHash_, "") };
        inline Items& setKeyHash(string keyHash) { DARABONBA_PTR_SET_VALUE(keyHash_, keyHash) };


        // outBizNo Field Functions 
        bool hasOutBizNo() const { return this->outBizNo_ != nullptr;};
        void deleteOutBizNo() { this->outBizNo_ = nullptr;};
        inline string getOutBizNo() const { DARABONBA_PTR_GET_DEFAULT(outBizNo_, "") };
        inline Items& setOutBizNo(string outBizNo) { DARABONBA_PTR_SET_VALUE(outBizNo_, outBizNo) };


        // quotaBalance Field Functions 
        bool hasQuotaBalance() const { return this->quotaBalance_ != nullptr;};
        void deleteQuotaBalance() { this->quotaBalance_ = nullptr;};
        inline int64_t getQuotaBalance() const { DARABONBA_PTR_GET_DEFAULT(quotaBalance_, 0L) };
        inline Items& setQuotaBalance(int64_t quotaBalance) { DARABONBA_PTR_SET_VALUE(quotaBalance_, quotaBalance) };


        // quotaStatus Field Functions 
        bool hasQuotaStatus() const { return this->quotaStatus_ != nullptr;};
        void deleteQuotaStatus() { this->quotaStatus_ = nullptr;};
        inline string getQuotaStatus() const { DARABONBA_PTR_GET_DEFAULT(quotaStatus_, "") };
        inline Items& setQuotaStatus(string quotaStatus) { DARABONBA_PTR_SET_VALUE(quotaStatus_, quotaStatus) };


        // redemptionOrderNo Field Functions 
        bool hasRedemptionOrderNo() const { return this->redemptionOrderNo_ != nullptr;};
        void deleteRedemptionOrderNo() { this->redemptionOrderNo_ = nullptr;};
        inline string getRedemptionOrderNo() const { DARABONBA_PTR_GET_DEFAULT(redemptionOrderNo_, "") };
        inline Items& setRedemptionOrderNo(string redemptionOrderNo) { DARABONBA_PTR_SET_VALUE(redemptionOrderNo_, redemptionOrderNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline Items& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Items& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        shared_ptr<vector<string>> allowedModels_ {};
        shared_ptr<string> effectiveAt_ {};
        shared_ptr<string> expireAt_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> keyHash_ {};
        shared_ptr<string> outBizNo_ {};
        shared_ptr<int64_t> quotaBalance_ {};
        shared_ptr<string> quotaStatus_ {};
        shared_ptr<string> redemptionOrderNo_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> templateId_ {};
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr && this->totalPages_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Data& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRedemptionRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRedemptionRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRedemptionRecordsResponseBody::Data) };
    inline QueryRedemptionRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRedemptionRecordsResponseBody::Data) };
    inline QueryRedemptionRecordsResponseBody& setData(const QueryRedemptionRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRedemptionRecordsResponseBody& setData(QueryRedemptionRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRedemptionRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline QueryRedemptionRecordsResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRedemptionRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryRedemptionRecordsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
