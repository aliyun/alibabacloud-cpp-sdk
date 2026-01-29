// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYRESPONSEBODY_HPP_
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
  class DescribeCostBudgetsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostBudgetsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostBudgetsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCostBudgetsSummaryResponseBody() = default ;
    DescribeCostBudgetsSummaryResponseBody(const DescribeCostBudgetsSummaryResponseBody &) = default ;
    DescribeCostBudgetsSummaryResponseBody(DescribeCostBudgetsSummaryResponseBody &&) = default ;
    DescribeCostBudgetsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostBudgetsSummaryResponseBody() = default ;
    DescribeCostBudgetsSummaryResponseBody& operator=(const DescribeCostBudgetsSummaryResponseBody &) = default ;
    DescribeCostBudgetsSummaryResponseBody& operator=(DescribeCostBudgetsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
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
          DARABONBA_ANY_TO_JSON(Budget, budget_);
          DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
          DARABONBA_PTR_TO_JSON(BudgetStatus, budgetStatus_);
          DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
          DARABONBA_ANY_TO_JSON(CalculatedValues, calculatedValues_);
          DARABONBA_ANY_TO_JSON(ConsumePeriod, consumePeriod_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_ANY_FROM_JSON(Budget, budget_);
          DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
          DARABONBA_PTR_FROM_JSON(BudgetStatus, budgetStatus_);
          DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
          DARABONBA_ANY_FROM_JSON(CalculatedValues, calculatedValues_);
          DARABONBA_ANY_FROM_JSON(ConsumePeriod, consumePeriod_);
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
        virtual bool empty() const override { return this->budget_ == nullptr
        && this->budgetName_ == nullptr && this->budgetStatus_ == nullptr && this->budgetType_ == nullptr && this->calculatedValues_ == nullptr && this->consumePeriod_ == nullptr; };
        // budget Field Functions 
        bool hasBudget() const { return this->budget_ != nullptr;};
        void deleteBudget() { this->budget_ = nullptr;};
        inline         const Darabonba::Json & getBudget() const { DARABONBA_GET(budget_) };
        Darabonba::Json & getBudget() { DARABONBA_GET(budget_) };
        inline Items& setBudget(const Darabonba::Json & budget) { DARABONBA_SET_VALUE(budget_, budget) };
        inline Items& setBudget(Darabonba::Json && budget) { DARABONBA_SET_RVALUE(budget_, budget) };


        // budgetName Field Functions 
        bool hasBudgetName() const { return this->budgetName_ != nullptr;};
        void deleteBudgetName() { this->budgetName_ = nullptr;};
        inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
        inline Items& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


        // budgetStatus Field Functions 
        bool hasBudgetStatus() const { return this->budgetStatus_ != nullptr;};
        void deleteBudgetStatus() { this->budgetStatus_ = nullptr;};
        inline string getBudgetStatus() const { DARABONBA_PTR_GET_DEFAULT(budgetStatus_, "") };
        inline Items& setBudgetStatus(string budgetStatus) { DARABONBA_PTR_SET_VALUE(budgetStatus_, budgetStatus) };


        // budgetType Field Functions 
        bool hasBudgetType() const { return this->budgetType_ != nullptr;};
        void deleteBudgetType() { this->budgetType_ = nullptr;};
        inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
        inline Items& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


        // calculatedValues Field Functions 
        bool hasCalculatedValues() const { return this->calculatedValues_ != nullptr;};
        void deleteCalculatedValues() { this->calculatedValues_ = nullptr;};
        inline         const Darabonba::Json & getCalculatedValues() const { DARABONBA_GET(calculatedValues_) };
        Darabonba::Json & getCalculatedValues() { DARABONBA_GET(calculatedValues_) };
        inline Items& setCalculatedValues(const Darabonba::Json & calculatedValues) { DARABONBA_SET_VALUE(calculatedValues_, calculatedValues) };
        inline Items& setCalculatedValues(Darabonba::Json && calculatedValues) { DARABONBA_SET_RVALUE(calculatedValues_, calculatedValues) };


        // consumePeriod Field Functions 
        bool hasConsumePeriod() const { return this->consumePeriod_ != nullptr;};
        void deleteConsumePeriod() { this->consumePeriod_ = nullptr;};
        inline         const Darabonba::Json & getConsumePeriod() const { DARABONBA_GET(consumePeriod_) };
        Darabonba::Json & getConsumePeriod() { DARABONBA_GET(consumePeriod_) };
        inline Items& setConsumePeriod(const Darabonba::Json & consumePeriod) { DARABONBA_SET_VALUE(consumePeriod_, consumePeriod) };
        inline Items& setConsumePeriod(Darabonba::Json && consumePeriod) { DARABONBA_SET_RVALUE(consumePeriod_, consumePeriod) };


      protected:
        // The information about the budget. The BudgetCycleType parameter indicates the cycle of the budget. Valid values: daily, monthly, quarterly, and yearly. The TotalBudgetAmount parameter indicates the total budget. The BudgetMemo parameter indicates the remarks of the budget.
        Darabonba::Json budget_ {};
        // The name of the budget.
        shared_ptr<string> budgetName_ {};
        // The status of the budget.
        shared_ptr<string> budgetStatus_ {};
        // The type of the budget.
        shared_ptr<string> budgetType_ {};
        // The information about the estimate-to-actual analysis. The ActualConsumeSum parameter indicates the accumulated actual value. The ActualAddForecastedAmount parameter indicates the sum of accumulated actual value and predicted value. If the BudgetType parameter is set to cost, the sum of actual value and predicted value includes the actual cost incurred from the budget start date to the current date and the predicted cost from the current date to the budget end date. If the BudgetType parameter is set to asset, the sum of actual value and predicted value includes the actual usage or coverage from the budget start date to the budget end date. If the budget end date minus the current date is more than one year, the part that exceeds one year is not included. The ActualAndBudgetComparison parameter indicates the comparison between the actual value and the predicted value. The value of the ActualAndBudgetComparison parameter is calculated based on the following formula: Accumulated actual value/Total budget × 100%.
        Darabonba::Json calculatedValues_ {};
        // The information about the billing cycle. The ConsumePeriodBegin parameter indicates the start date of the budget. The ConsumePeriodEnd parameter indicates the end date of the budget.
        Darabonba::Json consumePeriod_ {};
      };

      virtual bool empty() const override { return this->hostId_ == nullptr
        && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Data& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


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
      // The site of the host.
      shared_ptr<string> hostId_ {};
      // The data that is returned.
      shared_ptr<vector<Data::Items>> items_ {};
      // The maximum number of entries that are returned.
      shared_ptr<int32_t> maxResults_ {};
      // The token that is used to retrieve the next page
      shared_ptr<string> nextToken_ {};
      // The total number of entries that are returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCostBudgetsSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCostBudgetsSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCostBudgetsSummaryResponseBody::Data) };
    inline DescribeCostBudgetsSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCostBudgetsSummaryResponseBody::Data) };
    inline DescribeCostBudgetsSummaryResponseBody& setData(const DescribeCostBudgetsSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCostBudgetsSummaryResponseBody& setData(DescribeCostBudgetsSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCostBudgetsSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCostBudgetsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCostBudgetsSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The data that is returned.
    shared_ptr<DescribeCostBudgetsSummaryResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
