// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySavingsPlansInstanceResponseBody() = default ;
    QuerySavingsPlansInstanceResponseBody(const QuerySavingsPlansInstanceResponseBody &) = default ;
    QuerySavingsPlansInstanceResponseBody(QuerySavingsPlansInstanceResponseBody &&) = default ;
    QuerySavingsPlansInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansInstanceResponseBody() = default ;
    QuerySavingsPlansInstanceResponseBody& operator=(const QuerySavingsPlansInstanceResponseBody &) = default ;
    QuerySavingsPlansInstanceResponseBody& operator=(QuerySavingsPlansInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(CurrentPoolValue, currentPoolValue_);
          DARABONBA_PTR_TO_JSON(Cycle, cycle_);
          DARABONBA_PTR_TO_JSON(DeductCycleType, deductCycleType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_TO_JSON(InstanceFamily, instanceFamily_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LastBillTotalUsage, lastBillTotalUsage_);
          DARABONBA_PTR_TO_JSON(LastBillUtilization, lastBillUtilization_);
          DARABONBA_PTR_TO_JSON(PayMode, payMode_);
          DARABONBA_PTR_TO_JSON(PoolValue, poolValue_);
          DARABONBA_PTR_TO_JSON(PrepayFee, prepayFee_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RestPoolValue, restPoolValue_);
          DARABONBA_PTR_TO_JSON(SavingsType, savingsType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TotalSave, totalSave_);
          DARABONBA_PTR_TO_JSON(Utilization, utilization_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(CurrentPoolValue, currentPoolValue_);
          DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
          DARABONBA_PTR_FROM_JSON(DeductCycleType, deductCycleType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_FROM_JSON(InstanceFamily, instanceFamily_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LastBillTotalUsage, lastBillTotalUsage_);
          DARABONBA_PTR_FROM_JSON(LastBillUtilization, lastBillUtilization_);
          DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
          DARABONBA_PTR_FROM_JSON(PoolValue, poolValue_);
          DARABONBA_PTR_FROM_JSON(PrepayFee, prepayFee_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RestPoolValue, restPoolValue_);
          DARABONBA_PTR_FROM_JSON(SavingsType, savingsType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TotalSave, totalSave_);
          DARABONBA_PTR_FROM_JSON(Utilization, utilization_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
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
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the tag.
          shared_ptr<string> key_ {};
          // The value of the tag.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->allocationStatus_ == nullptr
        && this->commodityCode_ == nullptr && this->currency_ == nullptr && this->currentPoolValue_ == nullptr && this->cycle_ == nullptr && this->deductCycleType_ == nullptr
        && this->endTime_ == nullptr && this->endTimestamp_ == nullptr && this->instanceFamily_ == nullptr && this->instanceId_ == nullptr && this->lastBillTotalUsage_ == nullptr
        && this->lastBillUtilization_ == nullptr && this->payMode_ == nullptr && this->poolValue_ == nullptr && this->prepayFee_ == nullptr && this->region_ == nullptr
        && this->restPoolValue_ == nullptr && this->savingsType_ == nullptr && this->startTime_ == nullptr && this->startTimestamp_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->totalSave_ == nullptr && this->utilization_ == nullptr; };
        // allocationStatus Field Functions 
        bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
        void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
        inline string getAllocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
        inline Items& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Items& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Items& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // currentPoolValue Field Functions 
        bool hasCurrentPoolValue() const { return this->currentPoolValue_ != nullptr;};
        void deleteCurrentPoolValue() { this->currentPoolValue_ = nullptr;};
        inline string getCurrentPoolValue() const { DARABONBA_PTR_GET_DEFAULT(currentPoolValue_, "") };
        inline Items& setCurrentPoolValue(string currentPoolValue) { DARABONBA_PTR_SET_VALUE(currentPoolValue_, currentPoolValue) };


        // cycle Field Functions 
        bool hasCycle() const { return this->cycle_ != nullptr;};
        void deleteCycle() { this->cycle_ = nullptr;};
        inline string getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
        inline Items& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


        // deductCycleType Field Functions 
        bool hasDeductCycleType() const { return this->deductCycleType_ != nullptr;};
        void deleteDeductCycleType() { this->deductCycleType_ = nullptr;};
        inline string getDeductCycleType() const { DARABONBA_PTR_GET_DEFAULT(deductCycleType_, "") };
        inline Items& setDeductCycleType(string deductCycleType) { DARABONBA_PTR_SET_VALUE(deductCycleType_, deductCycleType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // endTimestamp Field Functions 
        bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
        void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
        inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
        inline Items& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


        // instanceFamily Field Functions 
        bool hasInstanceFamily() const { return this->instanceFamily_ != nullptr;};
        void deleteInstanceFamily() { this->instanceFamily_ = nullptr;};
        inline string getInstanceFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceFamily_, "") };
        inline Items& setInstanceFamily(string instanceFamily) { DARABONBA_PTR_SET_VALUE(instanceFamily_, instanceFamily) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // lastBillTotalUsage Field Functions 
        bool hasLastBillTotalUsage() const { return this->lastBillTotalUsage_ != nullptr;};
        void deleteLastBillTotalUsage() { this->lastBillTotalUsage_ = nullptr;};
        inline string getLastBillTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(lastBillTotalUsage_, "") };
        inline Items& setLastBillTotalUsage(string lastBillTotalUsage) { DARABONBA_PTR_SET_VALUE(lastBillTotalUsage_, lastBillTotalUsage) };


        // lastBillUtilization Field Functions 
        bool hasLastBillUtilization() const { return this->lastBillUtilization_ != nullptr;};
        void deleteLastBillUtilization() { this->lastBillUtilization_ = nullptr;};
        inline string getLastBillUtilization() const { DARABONBA_PTR_GET_DEFAULT(lastBillUtilization_, "") };
        inline Items& setLastBillUtilization(string lastBillUtilization) { DARABONBA_PTR_SET_VALUE(lastBillUtilization_, lastBillUtilization) };


        // payMode Field Functions 
        bool hasPayMode() const { return this->payMode_ != nullptr;};
        void deletePayMode() { this->payMode_ = nullptr;};
        inline string getPayMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
        inline Items& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


        // poolValue Field Functions 
        bool hasPoolValue() const { return this->poolValue_ != nullptr;};
        void deletePoolValue() { this->poolValue_ = nullptr;};
        inline string getPoolValue() const { DARABONBA_PTR_GET_DEFAULT(poolValue_, "") };
        inline Items& setPoolValue(string poolValue) { DARABONBA_PTR_SET_VALUE(poolValue_, poolValue) };


        // prepayFee Field Functions 
        bool hasPrepayFee() const { return this->prepayFee_ != nullptr;};
        void deletePrepayFee() { this->prepayFee_ = nullptr;};
        inline string getPrepayFee() const { DARABONBA_PTR_GET_DEFAULT(prepayFee_, "") };
        inline Items& setPrepayFee(string prepayFee) { DARABONBA_PTR_SET_VALUE(prepayFee_, prepayFee) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // restPoolValue Field Functions 
        bool hasRestPoolValue() const { return this->restPoolValue_ != nullptr;};
        void deleteRestPoolValue() { this->restPoolValue_ = nullptr;};
        inline string getRestPoolValue() const { DARABONBA_PTR_GET_DEFAULT(restPoolValue_, "") };
        inline Items& setRestPoolValue(string restPoolValue) { DARABONBA_PTR_SET_VALUE(restPoolValue_, restPoolValue) };


        // savingsType Field Functions 
        bool hasSavingsType() const { return this->savingsType_ != nullptr;};
        void deleteSavingsType() { this->savingsType_ = nullptr;};
        inline string getSavingsType() const { DARABONBA_PTR_GET_DEFAULT(savingsType_, "") };
        inline Items& setSavingsType(string savingsType) { DARABONBA_PTR_SET_VALUE(savingsType_, savingsType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // startTimestamp Field Functions 
        bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
        void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
        inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
        inline Items& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Items::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Items::Tags>) };
        inline vector<Items::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Items::Tags>) };
        inline Items& setTags(const vector<Items::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Items& setTags(vector<Items::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // totalSave Field Functions 
        bool hasTotalSave() const { return this->totalSave_ != nullptr;};
        void deleteTotalSave() { this->totalSave_ = nullptr;};
        inline string getTotalSave() const { DARABONBA_PTR_GET_DEFAULT(totalSave_, "") };
        inline Items& setTotalSave(string totalSave) { DARABONBA_PTR_SET_VALUE(totalSave_, totalSave) };


        // utilization Field Functions 
        bool hasUtilization() const { return this->utilization_ != nullptr;};
        void deleteUtilization() { this->utilization_ = nullptr;};
        inline string getUtilization() const { DARABONBA_PTR_GET_DEFAULT(utilization_, "") };
        inline Items& setUtilization(string utilization) { DARABONBA_PTR_SET_VALUE(utilization_, utilization) };


      protected:
        // The allocation status. Valid values:
        // 
        // *   unallocated
        // *   allocated
        // *   beAllocated
        shared_ptr<string> allocationStatus_ {};
        shared_ptr<string> commodityCode_ {};
        // The currency. Valid values: CNY and USD.
        shared_ptr<string> currency_ {};
        shared_ptr<string> currentPoolValue_ {};
        shared_ptr<string> cycle_ {};
        shared_ptr<string> deductCycleType_ {};
        // The time when the instance expires. The time is in the format of yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> endTime_ {};
        shared_ptr<int64_t> endTimestamp_ {};
        // The instance family information. For an instance of the Elastic Compute Service (ECS) compute type, the value indicates the ECS instance family or the ECS instance family package.
        shared_ptr<string> instanceFamily_ {};
        // The ID of the savings plan instance.
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> lastBillTotalUsage_ {};
        shared_ptr<string> lastBillUtilization_ {};
        // The payment type. Valid values:
        // 
        // *   total: All Upfront
        // *   half: Partial Upfront
        // *   zero: No Upfront
        shared_ptr<string> payMode_ {};
        // The commitment.
        shared_ptr<string> poolValue_ {};
        // The prepaid amount.
        shared_ptr<string> prepayFee_ {};
        // The region.
        shared_ptr<string> region_ {};
        shared_ptr<string> restPoolValue_ {};
        // The type of the savings plan. Valid values:
        // 
        // *   universal: general-purpose
        // *   ecs: ECS compute
        shared_ptr<string> savingsType_ {};
        // The time when the instance takes effect. The time is in the format of yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> startTime_ {};
        shared_ptr<int64_t> startTimestamp_ {};
        // The status of the instance. Valid values:
        // 
        // *   NORMAL: normal
        // *   LIMIT: stopped due to overdue payment
        // *   RELEASE: released
        shared_ptr<string> status_ {};
        // The details about the tags.
        shared_ptr<vector<Items::Tags>> tags_ {};
        // The total amount that is saved.
        shared_ptr<string> totalSave_ {};
        // The total usage.
        shared_ptr<string> utilization_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The details about the instances.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySavingsPlansInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySavingsPlansInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySavingsPlansInstanceResponseBody::Data) };
    inline QuerySavingsPlansInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySavingsPlansInstanceResponseBody::Data) };
    inline QuerySavingsPlansInstanceResponseBody& setData(const QuerySavingsPlansInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySavingsPlansInstanceResponseBody& setData(QuerySavingsPlansInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySavingsPlansInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySavingsPlansInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySavingsPlansInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The return data.
    shared_ptr<QuerySavingsPlansInstanceResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
