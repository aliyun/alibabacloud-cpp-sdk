// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBILLINGTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBILLINGTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetBillingTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBillingTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBillingTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetBillingTrendResponseBody() = default ;
    GetBillingTrendResponseBody(const GetBillingTrendResponseBody &) = default ;
    GetBillingTrendResponseBody(GetBillingTrendResponseBody &&) = default ;
    GetBillingTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBillingTrendResponseBody() = default ;
    GetBillingTrendResponseBody& operator=(const GetBillingTrendResponseBody &) = default ;
    GetBillingTrendResponseBody& operator=(GetBillingTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(costTotals, costTotals_);
        DARABONBA_PTR_TO_JSON(groupByTotal, groupByTotal_);
        DARABONBA_PTR_TO_JSON(resultByTime, resultByTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(costTotals, costTotals_);
        DARABONBA_PTR_FROM_JSON(groupByTotal, groupByTotal_);
        DARABONBA_PTR_FROM_JSON(resultByTime, resultByTime_);
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
      class ResultByTime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultByTime& obj) { 
          DARABONBA_PTR_TO_JSON(period, period_);
          DARABONBA_PTR_TO_JSON(periodDetails, periodDetails_);
          DARABONBA_PTR_TO_JSON(total, total_);
        };
        friend void from_json(const Darabonba::Json& j, ResultByTime& obj) { 
          DARABONBA_PTR_FROM_JSON(period, period_);
          DARABONBA_PTR_FROM_JSON(periodDetails, periodDetails_);
          DARABONBA_PTR_FROM_JSON(total, total_);
        };
        ResultByTime() = default ;
        ResultByTime(const ResultByTime &) = default ;
        ResultByTime(ResultByTime &&) = default ;
        ResultByTime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultByTime() = default ;
        ResultByTime& operator=(const ResultByTime &) = default ;
        ResultByTime& operator=(ResultByTime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Total : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Total& obj) { 
            DARABONBA_PTR_TO_JSON(amount, amount_);
            DARABONBA_PTR_TO_JSON(currency, currency_);
            DARABONBA_PTR_TO_JSON(pretaxAmount, pretaxAmount_);
            DARABONBA_PTR_TO_JSON(taxAmount, taxAmount_);
          };
          friend void from_json(const Darabonba::Json& j, Total& obj) { 
            DARABONBA_PTR_FROM_JSON(amount, amount_);
            DARABONBA_PTR_FROM_JSON(currency, currency_);
            DARABONBA_PTR_FROM_JSON(pretaxAmount, pretaxAmount_);
            DARABONBA_PTR_FROM_JSON(taxAmount, taxAmount_);
          };
          Total() = default ;
          Total(const Total &) = default ;
          Total(Total &&) = default ;
          Total(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Total() = default ;
          Total& operator=(const Total &) = default ;
          Total& operator=(Total &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->pretaxAmount_ == nullptr && this->taxAmount_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline Total& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Total& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // pretaxAmount Field Functions 
          bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
          void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
          inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
          inline Total& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


          // taxAmount Field Functions 
          bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
          void deleteTaxAmount() { this->taxAmount_ = nullptr;};
          inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
          inline Total& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


        protected:
          // The total amount for the current period.
          shared_ptr<string> amount_ {};
          // The currency of the amount for the current period.
          shared_ptr<string> currency_ {};
          // The pretax amount for the current period.
          shared_ptr<string> pretaxAmount_ {};
          // The tax amount for the current period.
          shared_ptr<string> taxAmount_ {};
        };

        class PeriodDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PeriodDetails& obj) { 
            DARABONBA_PTR_TO_JSON(amount, amount_);
            DARABONBA_PTR_TO_JSON(key, key_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(percentage, percentage_);
            DARABONBA_PTR_TO_JSON(pretaxAmount, pretaxAmount_);
            DARABONBA_PTR_TO_JSON(taxAmount, taxAmount_);
          };
          friend void from_json(const Darabonba::Json& j, PeriodDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(amount, amount_);
            DARABONBA_PTR_FROM_JSON(key, key_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(percentage, percentage_);
            DARABONBA_PTR_FROM_JSON(pretaxAmount, pretaxAmount_);
            DARABONBA_PTR_FROM_JSON(taxAmount, taxAmount_);
          };
          PeriodDetails() = default ;
          PeriodDetails(const PeriodDetails &) = default ;
          PeriodDetails(PeriodDetails &&) = default ;
          PeriodDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PeriodDetails() = default ;
          PeriodDetails& operator=(const PeriodDetails &) = default ;
          PeriodDetails& operator=(PeriodDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr && this->percentage_ == nullptr && this->pretaxAmount_ == nullptr && this->taxAmount_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline PeriodDetails& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline PeriodDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PeriodDetails& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // percentage Field Functions 
          bool hasPercentage() const { return this->percentage_ != nullptr;};
          void deletePercentage() { this->percentage_ = nullptr;};
          inline string getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
          inline PeriodDetails& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


          // pretaxAmount Field Functions 
          bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
          void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
          inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
          inline PeriodDetails& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


          // taxAmount Field Functions 
          bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
          void deleteTaxAmount() { this->taxAmount_ = nullptr;};
          inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
          inline PeriodDetails& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


        protected:
          // The amount of the group within the current period.
          shared_ptr<string> amount_ {};
          // The grouping dimension value. Data beyond the top N uses DIMENSION_GROUP_OTHERS_VALUE.
          shared_ptr<string> key_ {};
          // The display name of the group. This value is affected by the locale parameter.
          shared_ptr<string> name_ {};
          // The ratio of the current group amount to the total amount of the current period.
          shared_ptr<string> percentage_ {};
          // The pretax amount of the group within the current period.
          shared_ptr<string> pretaxAmount_ {};
          // The tax amount of the group within the current period.
          shared_ptr<string> taxAmount_ {};
        };

        virtual bool empty() const override { return this->period_ == nullptr
        && this->periodDetails_ == nullptr && this->total_ == nullptr; };
        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline ResultByTime& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // periodDetails Field Functions 
        bool hasPeriodDetails() const { return this->periodDetails_ != nullptr;};
        void deletePeriodDetails() { this->periodDetails_ = nullptr;};
        inline const vector<ResultByTime::PeriodDetails> & getPeriodDetails() const { DARABONBA_PTR_GET_CONST(periodDetails_, vector<ResultByTime::PeriodDetails>) };
        inline vector<ResultByTime::PeriodDetails> getPeriodDetails() { DARABONBA_PTR_GET(periodDetails_, vector<ResultByTime::PeriodDetails>) };
        inline ResultByTime& setPeriodDetails(const vector<ResultByTime::PeriodDetails> & periodDetails) { DARABONBA_PTR_SET_VALUE(periodDetails_, periodDetails) };
        inline ResultByTime& setPeriodDetails(vector<ResultByTime::PeriodDetails> && periodDetails) { DARABONBA_PTR_SET_RVALUE(periodDetails_, periodDetails) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline const ResultByTime::Total & getTotal() const { DARABONBA_PTR_GET_CONST(total_, ResultByTime::Total) };
        inline ResultByTime::Total getTotal() { DARABONBA_PTR_GET(total_, ResultByTime::Total) };
        inline ResultByTime& setTotal(const ResultByTime::Total & total) { DARABONBA_PTR_SET_VALUE(total_, total) };
        inline ResultByTime& setTotal(ResultByTime::Total && total) { DARABONBA_PTR_SET_RVALUE(total_, total) };


      protected:
        // The statistical period. DAY returns yyyyMMdd. MONTH returns yyyyMM.
        shared_ptr<string> period_ {};
        // The cost groups that actually exist in the current period.
        shared_ptr<vector<ResultByTime::PeriodDetails>> periodDetails_ {};
        // The total cost for the current period.
        shared_ptr<ResultByTime::Total> total_ {};
      };

      class GroupByTotal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupByTotal& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(pretaxAmount, pretaxAmount_);
          DARABONBA_PTR_TO_JSON(taxAmount, taxAmount_);
        };
        friend void from_json(const Darabonba::Json& j, GroupByTotal& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(pretaxAmount, pretaxAmount_);
          DARABONBA_PTR_FROM_JSON(taxAmount, taxAmount_);
        };
        GroupByTotal() = default ;
        GroupByTotal(const GroupByTotal &) = default ;
        GroupByTotal(GroupByTotal &&) = default ;
        GroupByTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupByTotal() = default ;
        GroupByTotal& operator=(const GroupByTotal &) = default ;
        GroupByTotal& operator=(GroupByTotal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr && this->pretaxAmount_ == nullptr && this->taxAmount_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline GroupByTotal& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline GroupByTotal& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GroupByTotal& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pretaxAmount Field Functions 
        bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
        void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
        inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
        inline GroupByTotal& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


        // taxAmount Field Functions 
        bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
        void deleteTaxAmount() { this->taxAmount_ = nullptr;};
        inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
        inline GroupByTotal& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


      protected:
        // The total amount of the current group.
        shared_ptr<string> amount_ {};
        // The grouping dimension value.
        shared_ptr<string> key_ {};
        // The display name of the group. This value is affected by the locale parameter.
        shared_ptr<string> name_ {};
        // The pretax amount of the current group.
        shared_ptr<string> pretaxAmount_ {};
        // The tax amount of the current group.
        shared_ptr<string> taxAmount_ {};
      };

      class CostTotals : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostTotals& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(currency, currency_);
          DARABONBA_PTR_TO_JSON(pretaxAmount, pretaxAmount_);
          DARABONBA_PTR_TO_JSON(taxAmount, taxAmount_);
        };
        friend void from_json(const Darabonba::Json& j, CostTotals& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(currency, currency_);
          DARABONBA_PTR_FROM_JSON(pretaxAmount, pretaxAmount_);
          DARABONBA_PTR_FROM_JSON(taxAmount, taxAmount_);
        };
        CostTotals() = default ;
        CostTotals(const CostTotals &) = default ;
        CostTotals(CostTotals &&) = default ;
        CostTotals(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CostTotals() = default ;
        CostTotals& operator=(const CostTotals &) = default ;
        CostTotals& operator=(CostTotals &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->pretaxAmount_ == nullptr && this->taxAmount_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline CostTotals& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline CostTotals& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // pretaxAmount Field Functions 
        bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
        void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
        inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
        inline CostTotals& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


        // taxAmount Field Functions 
        bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
        void deleteTaxAmount() { this->taxAmount_ = nullptr;};
        inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
        inline CostTotals& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


      protected:
        // The total amount.
        shared_ptr<string> amount_ {};
        // The currency of the amount.
        shared_ptr<string> currency_ {};
        // The pretax amount.
        shared_ptr<string> pretaxAmount_ {};
        // The tax amount.
        shared_ptr<string> taxAmount_ {};
      };

      virtual bool empty() const override { return this->costTotals_ == nullptr
        && this->groupByTotal_ == nullptr && this->resultByTime_ == nullptr; };
      // costTotals Field Functions 
      bool hasCostTotals() const { return this->costTotals_ != nullptr;};
      void deleteCostTotals() { this->costTotals_ = nullptr;};
      inline const Data::CostTotals & getCostTotals() const { DARABONBA_PTR_GET_CONST(costTotals_, Data::CostTotals) };
      inline Data::CostTotals getCostTotals() { DARABONBA_PTR_GET(costTotals_, Data::CostTotals) };
      inline Data& setCostTotals(const Data::CostTotals & costTotals) { DARABONBA_PTR_SET_VALUE(costTotals_, costTotals) };
      inline Data& setCostTotals(Data::CostTotals && costTotals) { DARABONBA_PTR_SET_RVALUE(costTotals_, costTotals) };


      // groupByTotal Field Functions 
      bool hasGroupByTotal() const { return this->groupByTotal_ != nullptr;};
      void deleteGroupByTotal() { this->groupByTotal_ = nullptr;};
      inline const vector<Data::GroupByTotal> & getGroupByTotal() const { DARABONBA_PTR_GET_CONST(groupByTotal_, vector<Data::GroupByTotal>) };
      inline vector<Data::GroupByTotal> getGroupByTotal() { DARABONBA_PTR_GET(groupByTotal_, vector<Data::GroupByTotal>) };
      inline Data& setGroupByTotal(const vector<Data::GroupByTotal> & groupByTotal) { DARABONBA_PTR_SET_VALUE(groupByTotal_, groupByTotal) };
      inline Data& setGroupByTotal(vector<Data::GroupByTotal> && groupByTotal) { DARABONBA_PTR_SET_RVALUE(groupByTotal_, groupByTotal) };


      // resultByTime Field Functions 
      bool hasResultByTime() const { return this->resultByTime_ != nullptr;};
      void deleteResultByTime() { this->resultByTime_ = nullptr;};
      inline const vector<Data::ResultByTime> & getResultByTime() const { DARABONBA_PTR_GET_CONST(resultByTime_, vector<Data::ResultByTime>) };
      inline vector<Data::ResultByTime> getResultByTime() { DARABONBA_PTR_GET(resultByTime_, vector<Data::ResultByTime>) };
      inline Data& setResultByTime(const vector<Data::ResultByTime> & resultByTime) { DARABONBA_PTR_SET_VALUE(resultByTime_, resultByTime) };
      inline Data& setResultByTime(vector<Data::ResultByTime> && resultByTime) { DARABONBA_PTR_SET_RVALUE(resultByTime_, resultByTime) };


    protected:
      // The total cost for the entire query time range, including the top N groups and "Others".
      shared_ptr<Data::CostTotals> costTotals_ {};
      // The total cost of the top N groups and the optional "Others" group within the period.
      shared_ptr<vector<Data::GroupByTotal>> groupByTotal_ {};
      // The cost trend list sorted by time in ascending order.
      shared_ptr<vector<Data::ResultByTime>> resultByTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBillingTrendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBillingTrendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBillingTrendResponseBody::Data) };
    inline GetBillingTrendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBillingTrendResponseBody::Data) };
    inline GetBillingTrendResponseBody& setData(const GetBillingTrendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBillingTrendResponseBody& setData(GetBillingTrendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBillingTrendResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBillingTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBillingTrendResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request result code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetBillingTrendResponseBody::Data> data_ {};
    // The request result description.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
