// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDEDUCTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDEDUCTLOGRESPONSEBODY_HPP_
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
  class QuerySavingsPlansDeductLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDeductLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDeductLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySavingsPlansDeductLogResponseBody() = default ;
    QuerySavingsPlansDeductLogResponseBody(const QuerySavingsPlansDeductLogResponseBody &) = default ;
    QuerySavingsPlansDeductLogResponseBody(QuerySavingsPlansDeductLogResponseBody &&) = default ;
    QuerySavingsPlansDeductLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDeductLogResponseBody() = default ;
    QuerySavingsPlansDeductLogResponseBody& operator=(const QuerySavingsPlansDeductLogResponseBody &) = default ;
    QuerySavingsPlansDeductLogResponseBody& operator=(QuerySavingsPlansDeductLogResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BillModule, billModule_);
          DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
          DARABONBA_PTR_TO_JSON(BillingOfficialPrice, billingOfficialPrice_);
          DARABONBA_PTR_TO_JSON(DeductCommodity, deductCommodity_);
          DARABONBA_PTR_TO_JSON(DeductFee, deductFee_);
          DARABONBA_PTR_TO_JSON(DeductInstanceId, deductInstanceId_);
          DARABONBA_PTR_TO_JSON(DeductRate, deductRate_);
          DARABONBA_PTR_TO_JSON(DeductedOfficialPrice, deductedOfficialPrice_);
          DARABONBA_PTR_TO_JSON(DiscountRate, discountRate_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SavingsType, savingsType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(BillModule, billModule_);
          DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
          DARABONBA_PTR_FROM_JSON(BillingOfficialPrice, billingOfficialPrice_);
          DARABONBA_PTR_FROM_JSON(DeductCommodity, deductCommodity_);
          DARABONBA_PTR_FROM_JSON(DeductFee, deductFee_);
          DARABONBA_PTR_FROM_JSON(DeductInstanceId, deductInstanceId_);
          DARABONBA_PTR_FROM_JSON(DeductRate, deductRate_);
          DARABONBA_PTR_FROM_JSON(DeductedOfficialPrice, deductedOfficialPrice_);
          DARABONBA_PTR_FROM_JSON(DiscountRate, discountRate_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SavingsType, savingsType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        virtual bool empty() const override { return this->billModule_ == nullptr
        && this->billingCycle_ == nullptr && this->billingOfficialPrice_ == nullptr && this->deductCommodity_ == nullptr && this->deductFee_ == nullptr && this->deductInstanceId_ == nullptr
        && this->deductRate_ == nullptr && this->deductedOfficialPrice_ == nullptr && this->discountRate_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr
        && this->instanceSpec_ == nullptr && this->instanceTypeFamily_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr && this->savingsType_ == nullptr
        && this->startTime_ == nullptr && this->userId_ == nullptr; };
        // billModule Field Functions 
        bool hasBillModule() const { return this->billModule_ != nullptr;};
        void deleteBillModule() { this->billModule_ = nullptr;};
        inline string getBillModule() const { DARABONBA_PTR_GET_DEFAULT(billModule_, "") };
        inline Items& setBillModule(string billModule) { DARABONBA_PTR_SET_VALUE(billModule_, billModule) };


        // billingCycle Field Functions 
        bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
        void deleteBillingCycle() { this->billingCycle_ = nullptr;};
        inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
        inline Items& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


        // billingOfficialPrice Field Functions 
        bool hasBillingOfficialPrice() const { return this->billingOfficialPrice_ != nullptr;};
        void deleteBillingOfficialPrice() { this->billingOfficialPrice_ = nullptr;};
        inline string getBillingOfficialPrice() const { DARABONBA_PTR_GET_DEFAULT(billingOfficialPrice_, "") };
        inline Items& setBillingOfficialPrice(string billingOfficialPrice) { DARABONBA_PTR_SET_VALUE(billingOfficialPrice_, billingOfficialPrice) };


        // deductCommodity Field Functions 
        bool hasDeductCommodity() const { return this->deductCommodity_ != nullptr;};
        void deleteDeductCommodity() { this->deductCommodity_ = nullptr;};
        inline string getDeductCommodity() const { DARABONBA_PTR_GET_DEFAULT(deductCommodity_, "") };
        inline Items& setDeductCommodity(string deductCommodity) { DARABONBA_PTR_SET_VALUE(deductCommodity_, deductCommodity) };


        // deductFee Field Functions 
        bool hasDeductFee() const { return this->deductFee_ != nullptr;};
        void deleteDeductFee() { this->deductFee_ = nullptr;};
        inline string getDeductFee() const { DARABONBA_PTR_GET_DEFAULT(deductFee_, "") };
        inline Items& setDeductFee(string deductFee) { DARABONBA_PTR_SET_VALUE(deductFee_, deductFee) };


        // deductInstanceId Field Functions 
        bool hasDeductInstanceId() const { return this->deductInstanceId_ != nullptr;};
        void deleteDeductInstanceId() { this->deductInstanceId_ = nullptr;};
        inline string getDeductInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductInstanceId_, "") };
        inline Items& setDeductInstanceId(string deductInstanceId) { DARABONBA_PTR_SET_VALUE(deductInstanceId_, deductInstanceId) };


        // deductRate Field Functions 
        bool hasDeductRate() const { return this->deductRate_ != nullptr;};
        void deleteDeductRate() { this->deductRate_ = nullptr;};
        inline string getDeductRate() const { DARABONBA_PTR_GET_DEFAULT(deductRate_, "") };
        inline Items& setDeductRate(string deductRate) { DARABONBA_PTR_SET_VALUE(deductRate_, deductRate) };


        // deductedOfficialPrice Field Functions 
        bool hasDeductedOfficialPrice() const { return this->deductedOfficialPrice_ != nullptr;};
        void deleteDeductedOfficialPrice() { this->deductedOfficialPrice_ = nullptr;};
        inline string getDeductedOfficialPrice() const { DARABONBA_PTR_GET_DEFAULT(deductedOfficialPrice_, "") };
        inline Items& setDeductedOfficialPrice(string deductedOfficialPrice) { DARABONBA_PTR_SET_VALUE(deductedOfficialPrice_, deductedOfficialPrice) };


        // discountRate Field Functions 
        bool hasDiscountRate() const { return this->discountRate_ != nullptr;};
        void deleteDiscountRate() { this->discountRate_ = nullptr;};
        inline string getDiscountRate() const { DARABONBA_PTR_GET_DEFAULT(discountRate_, "") };
        inline Items& setDiscountRate(string discountRate) { DARABONBA_PTR_SET_VALUE(discountRate_, discountRate) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceSpec Field Functions 
        bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
        void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
        inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
        inline Items& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


        // instanceTypeFamily Field Functions 
        bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
        void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
        inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
        inline Items& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline Items& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


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


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline Items& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The billable item for which the fee is deducted.
        shared_ptr<string> billModule_ {};
        shared_ptr<string> billingCycle_ {};
        shared_ptr<string> billingOfficialPrice_ {};
        // The service for which the fee is deducted.
        shared_ptr<string> deductCommodity_ {};
        // The deducted amount.
        shared_ptr<string> deductFee_ {};
        // The ID of the instance for which the fee is deducted.
        shared_ptr<string> deductInstanceId_ {};
        // The deduction rate.
        shared_ptr<string> deductRate_ {};
        shared_ptr<string> deductedOfficialPrice_ {};
        // The discount used for the current deduction.
        shared_ptr<string> discountRate_ {};
        // The end of the billing cycle for which the fee is deducted.
        shared_ptr<string> endTime_ {};
        // The ID of the savings plan instance.
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceSpec_ {};
        shared_ptr<string> instanceTypeFamily_ {};
        shared_ptr<int64_t> ownerId_ {};
        shared_ptr<string> region_ {};
        // The type of the savings plan. Valid values:
        // 
        // *   universal: general-purpose
        // *   ecs: ECS compute
        shared_ptr<string> savingsType_ {};
        // The beginning of the billing cycle for which the fee is deducted. The time is in the format of yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> startTime_ {};
        // The ID of the user.
        shared_ptr<int64_t> userId_ {};
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
      // The deduction details.
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
    inline QuerySavingsPlansDeductLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySavingsPlansDeductLogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySavingsPlansDeductLogResponseBody::Data) };
    inline QuerySavingsPlansDeductLogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySavingsPlansDeductLogResponseBody::Data) };
    inline QuerySavingsPlansDeductLogResponseBody& setData(const QuerySavingsPlansDeductLogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySavingsPlansDeductLogResponseBody& setData(QuerySavingsPlansDeductLogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySavingsPlansDeductLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySavingsPlansDeductLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySavingsPlansDeductLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The return data.
    shared_ptr<QuerySavingsPlansDeductLogResponseBody::Data> data_ {};
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
