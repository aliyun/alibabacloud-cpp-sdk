// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecStatisticsResponseBody() = default ;
    DescribeApisecStatisticsResponseBody(const DescribeApisecStatisticsResponseBody &) = default ;
    DescribeApisecStatisticsResponseBody(DescribeApisecStatisticsResponseBody &&) = default ;
    DescribeApisecStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecStatisticsResponseBody() = default ;
    DescribeApisecStatisticsResponseBody& operator=(const DescribeApisecStatisticsResponseBody &) = default ;
    DescribeApisecStatisticsResponseBody& operator=(DescribeApisecStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Actioned, actioned_);
        DARABONBA_PTR_TO_JSON(Api, api_);
        DARABONBA_PTR_TO_JSON(Confirmed, confirmed_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Fixed, fixed_);
        DARABONBA_PTR_TO_JSON(High, high_);
        DARABONBA_PTR_TO_JSON(Ignore, ignore_);
        DARABONBA_PTR_TO_JSON(Low, low_);
        DARABONBA_PTR_TO_JSON(Medium, medium_);
        DARABONBA_PTR_TO_JSON(NotFixed, notFixed_);
        DARABONBA_PTR_TO_JSON(SystemFixed, systemFixed_);
        DARABONBA_PTR_TO_JSON(ToBeConfirmed, toBeConfirmed_);
        DARABONBA_PTR_TO_JSON(ToBeFixed, toBeFixed_);
        DARABONBA_PTR_TO_JSON(ToBeVerified, toBeVerified_);
        DARABONBA_PTR_TO_JSON(TodayHigh, todayHigh_);
        DARABONBA_PTR_TO_JSON(TodayLow, todayLow_);
        DARABONBA_PTR_TO_JSON(TodayMedium, todayMedium_);
        DARABONBA_PTR_TO_JSON(TodayTotal, todayTotal_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Actioned, actioned_);
        DARABONBA_PTR_FROM_JSON(Api, api_);
        DARABONBA_PTR_FROM_JSON(Confirmed, confirmed_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
        DARABONBA_PTR_FROM_JSON(High, high_);
        DARABONBA_PTR_FROM_JSON(Ignore, ignore_);
        DARABONBA_PTR_FROM_JSON(Low, low_);
        DARABONBA_PTR_FROM_JSON(Medium, medium_);
        DARABONBA_PTR_FROM_JSON(NotFixed, notFixed_);
        DARABONBA_PTR_FROM_JSON(SystemFixed, systemFixed_);
        DARABONBA_PTR_FROM_JSON(ToBeConfirmed, toBeConfirmed_);
        DARABONBA_PTR_FROM_JSON(ToBeFixed, toBeFixed_);
        DARABONBA_PTR_FROM_JSON(ToBeVerified, toBeVerified_);
        DARABONBA_PTR_FROM_JSON(TodayHigh, todayHigh_);
        DARABONBA_PTR_FROM_JSON(TodayLow, todayLow_);
        DARABONBA_PTR_FROM_JSON(TodayMedium, todayMedium_);
        DARABONBA_PTR_FROM_JSON(TodayTotal, todayTotal_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      virtual bool empty() const override { return this->account_ == nullptr
        && this->actioned_ == nullptr && this->api_ == nullptr && this->confirmed_ == nullptr && this->domain_ == nullptr && this->fixed_ == nullptr
        && this->high_ == nullptr && this->ignore_ == nullptr && this->low_ == nullptr && this->medium_ == nullptr && this->notFixed_ == nullptr
        && this->systemFixed_ == nullptr && this->toBeConfirmed_ == nullptr && this->toBeFixed_ == nullptr && this->toBeVerified_ == nullptr && this->todayHigh_ == nullptr
        && this->todayLow_ == nullptr && this->todayMedium_ == nullptr && this->todayTotal_ == nullptr && this->total_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline int64_t getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, 0L) };
      inline Data& setAccount(int64_t account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // actioned Field Functions 
      bool hasActioned() const { return this->actioned_ != nullptr;};
      void deleteActioned() { this->actioned_ = nullptr;};
      inline int64_t getActioned() const { DARABONBA_PTR_GET_DEFAULT(actioned_, 0L) };
      inline Data& setActioned(int64_t actioned) { DARABONBA_PTR_SET_VALUE(actioned_, actioned) };


      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline int64_t getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, 0L) };
      inline Data& setApi(int64_t api) { DARABONBA_PTR_SET_VALUE(api_, api) };


      // confirmed Field Functions 
      bool hasConfirmed() const { return this->confirmed_ != nullptr;};
      void deleteConfirmed() { this->confirmed_ = nullptr;};
      inline int64_t getConfirmed() const { DARABONBA_PTR_GET_DEFAULT(confirmed_, 0L) };
      inline Data& setConfirmed(int64_t confirmed) { DARABONBA_PTR_SET_VALUE(confirmed_, confirmed) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline int64_t getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, 0L) };
      inline Data& setDomain(int64_t domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // fixed Field Functions 
      bool hasFixed() const { return this->fixed_ != nullptr;};
      void deleteFixed() { this->fixed_ = nullptr;};
      inline int64_t getFixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, 0L) };
      inline Data& setFixed(int64_t fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


      // high Field Functions 
      bool hasHigh() const { return this->high_ != nullptr;};
      void deleteHigh() { this->high_ = nullptr;};
      inline int64_t getHigh() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
      inline Data& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


      // ignore Field Functions 
      bool hasIgnore() const { return this->ignore_ != nullptr;};
      void deleteIgnore() { this->ignore_ = nullptr;};
      inline int64_t getIgnore() const { DARABONBA_PTR_GET_DEFAULT(ignore_, 0L) };
      inline Data& setIgnore(int64_t ignore) { DARABONBA_PTR_SET_VALUE(ignore_, ignore) };


      // low Field Functions 
      bool hasLow() const { return this->low_ != nullptr;};
      void deleteLow() { this->low_ = nullptr;};
      inline int64_t getLow() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
      inline Data& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


      // medium Field Functions 
      bool hasMedium() const { return this->medium_ != nullptr;};
      void deleteMedium() { this->medium_ = nullptr;};
      inline int64_t getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
      inline Data& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


      // notFixed Field Functions 
      bool hasNotFixed() const { return this->notFixed_ != nullptr;};
      void deleteNotFixed() { this->notFixed_ = nullptr;};
      inline int64_t getNotFixed() const { DARABONBA_PTR_GET_DEFAULT(notFixed_, 0L) };
      inline Data& setNotFixed(int64_t notFixed) { DARABONBA_PTR_SET_VALUE(notFixed_, notFixed) };


      // systemFixed Field Functions 
      bool hasSystemFixed() const { return this->systemFixed_ != nullptr;};
      void deleteSystemFixed() { this->systemFixed_ = nullptr;};
      inline int64_t getSystemFixed() const { DARABONBA_PTR_GET_DEFAULT(systemFixed_, 0L) };
      inline Data& setSystemFixed(int64_t systemFixed) { DARABONBA_PTR_SET_VALUE(systemFixed_, systemFixed) };


      // toBeConfirmed Field Functions 
      bool hasToBeConfirmed() const { return this->toBeConfirmed_ != nullptr;};
      void deleteToBeConfirmed() { this->toBeConfirmed_ = nullptr;};
      inline int64_t getToBeConfirmed() const { DARABONBA_PTR_GET_DEFAULT(toBeConfirmed_, 0L) };
      inline Data& setToBeConfirmed(int64_t toBeConfirmed) { DARABONBA_PTR_SET_VALUE(toBeConfirmed_, toBeConfirmed) };


      // toBeFixed Field Functions 
      bool hasToBeFixed() const { return this->toBeFixed_ != nullptr;};
      void deleteToBeFixed() { this->toBeFixed_ = nullptr;};
      inline int64_t getToBeFixed() const { DARABONBA_PTR_GET_DEFAULT(toBeFixed_, 0L) };
      inline Data& setToBeFixed(int64_t toBeFixed) { DARABONBA_PTR_SET_VALUE(toBeFixed_, toBeFixed) };


      // toBeVerified Field Functions 
      bool hasToBeVerified() const { return this->toBeVerified_ != nullptr;};
      void deleteToBeVerified() { this->toBeVerified_ = nullptr;};
      inline int64_t getToBeVerified() const { DARABONBA_PTR_GET_DEFAULT(toBeVerified_, 0L) };
      inline Data& setToBeVerified(int64_t toBeVerified) { DARABONBA_PTR_SET_VALUE(toBeVerified_, toBeVerified) };


      // todayHigh Field Functions 
      bool hasTodayHigh() const { return this->todayHigh_ != nullptr;};
      void deleteTodayHigh() { this->todayHigh_ = nullptr;};
      inline string getTodayHigh() const { DARABONBA_PTR_GET_DEFAULT(todayHigh_, "") };
      inline Data& setTodayHigh(string todayHigh) { DARABONBA_PTR_SET_VALUE(todayHigh_, todayHigh) };


      // todayLow Field Functions 
      bool hasTodayLow() const { return this->todayLow_ != nullptr;};
      void deleteTodayLow() { this->todayLow_ = nullptr;};
      inline int64_t getTodayLow() const { DARABONBA_PTR_GET_DEFAULT(todayLow_, 0L) };
      inline Data& setTodayLow(int64_t todayLow) { DARABONBA_PTR_SET_VALUE(todayLow_, todayLow) };


      // todayMedium Field Functions 
      bool hasTodayMedium() const { return this->todayMedium_ != nullptr;};
      void deleteTodayMedium() { this->todayMedium_ = nullptr;};
      inline string getTodayMedium() const { DARABONBA_PTR_GET_DEFAULT(todayMedium_, "") };
      inline Data& setTodayMedium(string todayMedium) { DARABONBA_PTR_SET_VALUE(todayMedium_, todayMedium) };


      // todayTotal Field Functions 
      bool hasTodayTotal() const { return this->todayTotal_ != nullptr;};
      void deleteTodayTotal() { this->todayTotal_ = nullptr;};
      inline string getTodayTotal() const { DARABONBA_PTR_GET_DEFAULT(todayTotal_, "") };
      inline Data& setTodayTotal(string todayTotal) { DARABONBA_PTR_SET_VALUE(todayTotal_, todayTotal) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> account_ {};
      // The number of handled events.
      shared_ptr<int64_t> actioned_ {};
      // The number of APIs.
      shared_ptr<int64_t> api_ {};
      // The number of confirmed events.
      shared_ptr<int64_t> confirmed_ {};
      // The number of domain names.
      shared_ptr<int64_t> domain_ {};
      // The number of fixed risks.
      shared_ptr<int64_t> fixed_ {};
      // The number of high-risk events.
      shared_ptr<int64_t> high_ {};
      // The number of ignored risks.
      shared_ptr<int64_t> ignore_ {};
      // The number of low-risk events.
      shared_ptr<int64_t> low_ {};
      // The number of moderate-risk events.
      shared_ptr<int64_t> medium_ {};
      shared_ptr<int64_t> notFixed_ {};
      shared_ptr<int64_t> systemFixed_ {};
      // The number of events to be confirmed.
      shared_ptr<int64_t> toBeConfirmed_ {};
      // The number of risks to be fixed.
      shared_ptr<int64_t> toBeFixed_ {};
      shared_ptr<int64_t> toBeVerified_ {};
      // The number of new high-risk events today.
      shared_ptr<string> todayHigh_ {};
      // The number of new low-risk events today.
      shared_ptr<int64_t> todayLow_ {};
      // The number of new moderate-risk events today.
      shared_ptr<string> todayMedium_ {};
      // The total number of new events today.
      shared_ptr<string> todayTotal_ {};
      // The total number of events.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApisecStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApisecStatisticsResponseBody::Data) };
    inline DescribeApisecStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApisecStatisticsResponseBody::Data) };
    inline DescribeApisecStatisticsResponseBody& setData(const DescribeApisecStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecStatisticsResponseBody& setData(DescribeApisecStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<DescribeApisecStatisticsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
