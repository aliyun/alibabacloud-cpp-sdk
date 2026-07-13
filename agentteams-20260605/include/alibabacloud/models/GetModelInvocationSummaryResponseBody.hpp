// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINVOCATIONSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINVOCATIONSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetModelInvocationSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInvocationSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInvocationSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetModelInvocationSummaryResponseBody() = default ;
    GetModelInvocationSummaryResponseBody(const GetModelInvocationSummaryResponseBody &) = default ;
    GetModelInvocationSummaryResponseBody(GetModelInvocationSummaryResponseBody &&) = default ;
    GetModelInvocationSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInvocationSummaryResponseBody() = default ;
    GetModelInvocationSummaryResponseBody& operator=(const GetModelInvocationSummaryResponseBody &) = default ;
    GetModelInvocationSummaryResponseBody& operator=(GetModelInvocationSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallFrequency, callFrequency_);
        DARABONBA_PTR_TO_JSON(ProviderDistribution, providerDistribution_);
        DARABONBA_PTR_TO_JSON(TodayCallCount, todayCallCount_);
        DARABONBA_PTR_TO_JSON(TodayChangeRate, todayChangeRate_);
        DARABONBA_PTR_TO_JSON(WeekCallCount, weekCallCount_);
        DARABONBA_PTR_TO_JSON(WeekChangeRate, weekChangeRate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallFrequency, callFrequency_);
        DARABONBA_PTR_FROM_JSON(ProviderDistribution, providerDistribution_);
        DARABONBA_PTR_FROM_JSON(TodayCallCount, todayCallCount_);
        DARABONBA_PTR_FROM_JSON(TodayChangeRate, todayChangeRate_);
        DARABONBA_PTR_FROM_JSON(WeekCallCount, weekCallCount_);
        DARABONBA_PTR_FROM_JSON(WeekChangeRate, weekChangeRate_);
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
      class ProviderDistribution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProviderDistribution& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        };
        friend void from_json(const Darabonba::Json& j, ProviderDistribution& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        };
        ProviderDistribution() = default ;
        ProviderDistribution(const ProviderDistribution &) = default ;
        ProviderDistribution(ProviderDistribution &&) = default ;
        ProviderDistribution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProviderDistribution() = default ;
        ProviderDistribution& operator=(const ProviderDistribution &) = default ;
        ProviderDistribution& operator=(ProviderDistribution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->percentage_ == nullptr && this->providerName_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ProviderDistribution& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
        inline ProviderDistribution& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // providerName Field Functions 
        bool hasProviderName() const { return this->providerName_ != nullptr;};
        void deleteProviderName() { this->providerName_ = nullptr;};
        inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
        inline ProviderDistribution& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<double> percentage_ {};
        shared_ptr<string> providerName_ {};
      };

      virtual bool empty() const override { return this->callFrequency_ == nullptr
        && this->providerDistribution_ == nullptr && this->todayCallCount_ == nullptr && this->todayChangeRate_ == nullptr && this->weekCallCount_ == nullptr && this->weekChangeRate_ == nullptr; };
      // callFrequency Field Functions 
      bool hasCallFrequency() const { return this->callFrequency_ != nullptr;};
      void deleteCallFrequency() { this->callFrequency_ = nullptr;};
      inline double getCallFrequency() const { DARABONBA_PTR_GET_DEFAULT(callFrequency_, 0.0) };
      inline Data& setCallFrequency(double callFrequency) { DARABONBA_PTR_SET_VALUE(callFrequency_, callFrequency) };


      // providerDistribution Field Functions 
      bool hasProviderDistribution() const { return this->providerDistribution_ != nullptr;};
      void deleteProviderDistribution() { this->providerDistribution_ = nullptr;};
      inline const vector<Data::ProviderDistribution> & getProviderDistribution() const { DARABONBA_PTR_GET_CONST(providerDistribution_, vector<Data::ProviderDistribution>) };
      inline vector<Data::ProviderDistribution> getProviderDistribution() { DARABONBA_PTR_GET(providerDistribution_, vector<Data::ProviderDistribution>) };
      inline Data& setProviderDistribution(const vector<Data::ProviderDistribution> & providerDistribution) { DARABONBA_PTR_SET_VALUE(providerDistribution_, providerDistribution) };
      inline Data& setProviderDistribution(vector<Data::ProviderDistribution> && providerDistribution) { DARABONBA_PTR_SET_RVALUE(providerDistribution_, providerDistribution) };


      // todayCallCount Field Functions 
      bool hasTodayCallCount() const { return this->todayCallCount_ != nullptr;};
      void deleteTodayCallCount() { this->todayCallCount_ = nullptr;};
      inline int32_t getTodayCallCount() const { DARABONBA_PTR_GET_DEFAULT(todayCallCount_, 0) };
      inline Data& setTodayCallCount(int32_t todayCallCount) { DARABONBA_PTR_SET_VALUE(todayCallCount_, todayCallCount) };


      // todayChangeRate Field Functions 
      bool hasTodayChangeRate() const { return this->todayChangeRate_ != nullptr;};
      void deleteTodayChangeRate() { this->todayChangeRate_ = nullptr;};
      inline double getTodayChangeRate() const { DARABONBA_PTR_GET_DEFAULT(todayChangeRate_, 0.0) };
      inline Data& setTodayChangeRate(double todayChangeRate) { DARABONBA_PTR_SET_VALUE(todayChangeRate_, todayChangeRate) };


      // weekCallCount Field Functions 
      bool hasWeekCallCount() const { return this->weekCallCount_ != nullptr;};
      void deleteWeekCallCount() { this->weekCallCount_ = nullptr;};
      inline int32_t getWeekCallCount() const { DARABONBA_PTR_GET_DEFAULT(weekCallCount_, 0) };
      inline Data& setWeekCallCount(int32_t weekCallCount) { DARABONBA_PTR_SET_VALUE(weekCallCount_, weekCallCount) };


      // weekChangeRate Field Functions 
      bool hasWeekChangeRate() const { return this->weekChangeRate_ != nullptr;};
      void deleteWeekChangeRate() { this->weekChangeRate_ = nullptr;};
      inline double getWeekChangeRate() const { DARABONBA_PTR_GET_DEFAULT(weekChangeRate_, 0.0) };
      inline Data& setWeekChangeRate(double weekChangeRate) { DARABONBA_PTR_SET_VALUE(weekChangeRate_, weekChangeRate) };


    protected:
      shared_ptr<double> callFrequency_ {};
      shared_ptr<vector<Data::ProviderDistribution>> providerDistribution_ {};
      shared_ptr<int32_t> todayCallCount_ {};
      shared_ptr<double> todayChangeRate_ {};
      shared_ptr<int32_t> weekCallCount_ {};
      shared_ptr<double> weekChangeRate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetModelInvocationSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetModelInvocationSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetModelInvocationSummaryResponseBody::Data) };
    inline GetModelInvocationSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetModelInvocationSummaryResponseBody::Data) };
    inline GetModelInvocationSummaryResponseBody& setData(const GetModelInvocationSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetModelInvocationSummaryResponseBody& setData(GetModelInvocationSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetModelInvocationSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetModelInvocationSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelInvocationSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetModelInvocationSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetModelInvocationSummaryResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
