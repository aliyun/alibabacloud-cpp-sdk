// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILRESPONSEBODY_HPP_
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
  class DescribeSavingsPlansUsageDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSavingsPlansUsageDetailResponseBody() = default ;
    DescribeSavingsPlansUsageDetailResponseBody(const DescribeSavingsPlansUsageDetailResponseBody &) = default ;
    DescribeSavingsPlansUsageDetailResponseBody(DescribeSavingsPlansUsageDetailResponseBody &&) = default ;
    DescribeSavingsPlansUsageDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageDetailResponseBody() = default ;
    DescribeSavingsPlansUsageDetailResponseBody& operator=(const DescribeSavingsPlansUsageDetailResponseBody &) = default ;
    DescribeSavingsPlansUsageDetailResponseBody& operator=(DescribeSavingsPlansUsageDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DeductValue, deductValue_);
          DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PoolValue, poolValue_);
          DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
          DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
          DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DeductValue, deductValue_);
          DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PoolValue, poolValue_);
          DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
          DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
          DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
        virtual bool empty() const override { return this->currency_ == nullptr
        && this->deductValue_ == nullptr && this->endPeriod_ == nullptr && this->instanceId_ == nullptr && this->poolValue_ == nullptr && this->postpaidCost_ == nullptr
        && this->savedCost_ == nullptr && this->startPeriod_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->usagePercentage_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Items& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // deductValue Field Functions 
        bool hasDeductValue() const { return this->deductValue_ != nullptr;};
        void deleteDeductValue() { this->deductValue_ = nullptr;};
        inline float getDeductValue() const { DARABONBA_PTR_GET_DEFAULT(deductValue_, 0.0) };
        inline Items& setDeductValue(float deductValue) { DARABONBA_PTR_SET_VALUE(deductValue_, deductValue) };


        // endPeriod Field Functions 
        bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
        void deleteEndPeriod() { this->endPeriod_ = nullptr;};
        inline string getEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
        inline Items& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // poolValue Field Functions 
        bool hasPoolValue() const { return this->poolValue_ != nullptr;};
        void deletePoolValue() { this->poolValue_ = nullptr;};
        inline float getPoolValue() const { DARABONBA_PTR_GET_DEFAULT(poolValue_, 0.0) };
        inline Items& setPoolValue(float poolValue) { DARABONBA_PTR_SET_VALUE(poolValue_, poolValue) };


        // postpaidCost Field Functions 
        bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
        void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
        inline float getPostpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, 0.0) };
        inline Items& setPostpaidCost(float postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


        // savedCost Field Functions 
        bool hasSavedCost() const { return this->savedCost_ != nullptr;};
        void deleteSavedCost() { this->savedCost_ = nullptr;};
        inline float getSavedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, 0.0) };
        inline Items& setSavedCost(float savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


        // startPeriod Field Functions 
        bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
        void deleteStartPeriod() { this->startPeriod_ = nullptr;};
        inline string getStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
        inline Items& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // usagePercentage Field Functions 
        bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
        void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
        inline float getUsagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
        inline Items& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline Items& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The currency.
        shared_ptr<string> currency_ {};
        // The used amount of the savings plan.
        shared_ptr<float> deductValue_ {};
        // The end time.
        shared_ptr<string> endPeriod_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The total amount of the savings plan.
        shared_ptr<float> poolValue_ {};
        // The pay-as-you-go cost.
        shared_ptr<float> postpaidCost_ {};
        // The amount that is saved.
        shared_ptr<float> savedCost_ {};
        // The start time.
        shared_ptr<string> startPeriod_ {};
        // The status of the instance.
        // 
        // A value of -1 indicates that the payment is overdue. A value of 1 indicates that the instance is active.
        shared_ptr<string> status_ {};
        // The type of the savings plan. Valid values: universal and ECS compute.
        shared_ptr<string> type_ {};
        // The usage.
        shared_ptr<float> usagePercentage_ {};
        // The ID of the account.
        shared_ptr<int64_t> userId_ {};
        // The username of the account.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data entries.
      shared_ptr<vector<Data::Items>> items_ {};
      // The token of the next page.
      shared_ptr<string> nextToken_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSavingsPlansUsageDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSavingsPlansUsageDetailResponseBody::Data) };
    inline DescribeSavingsPlansUsageDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSavingsPlansUsageDetailResponseBody::Data) };
    inline DescribeSavingsPlansUsageDetailResponseBody& setData(const DescribeSavingsPlansUsageDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSavingsPlansUsageDetailResponseBody& setData(DescribeSavingsPlansUsageDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSavingsPlansUsageDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The return data.
    shared_ptr<DescribeSavingsPlansUsageDetailResponseBody::Data> data_ {};
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
