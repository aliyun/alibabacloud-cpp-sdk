// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecStatisticsResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeApisecStatisticsResponseBodyData& obj) { 
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
    DescribeApisecStatisticsResponseBodyData() = default ;
    DescribeApisecStatisticsResponseBodyData(const DescribeApisecStatisticsResponseBodyData &) = default ;
    DescribeApisecStatisticsResponseBodyData(DescribeApisecStatisticsResponseBodyData &&) = default ;
    DescribeApisecStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecStatisticsResponseBodyData() = default ;
    DescribeApisecStatisticsResponseBodyData& operator=(const DescribeApisecStatisticsResponseBodyData &) = default ;
    DescribeApisecStatisticsResponseBodyData& operator=(DescribeApisecStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->actioned_ == nullptr && return this->api_ == nullptr && return this->confirmed_ == nullptr && return this->domain_ == nullptr && return this->fixed_ == nullptr
        && return this->high_ == nullptr && return this->ignore_ == nullptr && return this->low_ == nullptr && return this->medium_ == nullptr && return this->notFixed_ == nullptr
        && return this->systemFixed_ == nullptr && return this->toBeConfirmed_ == nullptr && return this->toBeFixed_ == nullptr && return this->toBeVerified_ == nullptr && return this->todayHigh_ == nullptr
        && return this->todayLow_ == nullptr && return this->todayMedium_ == nullptr && return this->todayTotal_ == nullptr && return this->total_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline int64_t account() const { DARABONBA_PTR_GET_DEFAULT(account_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setAccount(int64_t account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // actioned Field Functions 
    bool hasActioned() const { return this->actioned_ != nullptr;};
    void deleteActioned() { this->actioned_ = nullptr;};
    inline int64_t actioned() const { DARABONBA_PTR_GET_DEFAULT(actioned_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setActioned(int64_t actioned) { DARABONBA_PTR_SET_VALUE(actioned_, actioned) };


    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline int64_t api() const { DARABONBA_PTR_GET_DEFAULT(api_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setApi(int64_t api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // confirmed Field Functions 
    bool hasConfirmed() const { return this->confirmed_ != nullptr;};
    void deleteConfirmed() { this->confirmed_ = nullptr;};
    inline int64_t confirmed() const { DARABONBA_PTR_GET_DEFAULT(confirmed_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setConfirmed(int64_t confirmed) { DARABONBA_PTR_SET_VALUE(confirmed_, confirmed) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline int64_t domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setDomain(int64_t domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // fixed Field Functions 
    bool hasFixed() const { return this->fixed_ != nullptr;};
    void deleteFixed() { this->fixed_ = nullptr;};
    inline int64_t fixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setFixed(int64_t fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


    // high Field Functions 
    bool hasHigh() const { return this->high_ != nullptr;};
    void deleteHigh() { this->high_ = nullptr;};
    inline int64_t high() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


    // ignore Field Functions 
    bool hasIgnore() const { return this->ignore_ != nullptr;};
    void deleteIgnore() { this->ignore_ = nullptr;};
    inline int64_t ignore() const { DARABONBA_PTR_GET_DEFAULT(ignore_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setIgnore(int64_t ignore) { DARABONBA_PTR_SET_VALUE(ignore_, ignore) };


    // low Field Functions 
    bool hasLow() const { return this->low_ != nullptr;};
    void deleteLow() { this->low_ = nullptr;};
    inline int64_t low() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


    // medium Field Functions 
    bool hasMedium() const { return this->medium_ != nullptr;};
    void deleteMedium() { this->medium_ = nullptr;};
    inline int64_t medium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    // notFixed Field Functions 
    bool hasNotFixed() const { return this->notFixed_ != nullptr;};
    void deleteNotFixed() { this->notFixed_ = nullptr;};
    inline int64_t notFixed() const { DARABONBA_PTR_GET_DEFAULT(notFixed_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setNotFixed(int64_t notFixed) { DARABONBA_PTR_SET_VALUE(notFixed_, notFixed) };


    // systemFixed Field Functions 
    bool hasSystemFixed() const { return this->systemFixed_ != nullptr;};
    void deleteSystemFixed() { this->systemFixed_ = nullptr;};
    inline int64_t systemFixed() const { DARABONBA_PTR_GET_DEFAULT(systemFixed_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setSystemFixed(int64_t systemFixed) { DARABONBA_PTR_SET_VALUE(systemFixed_, systemFixed) };


    // toBeConfirmed Field Functions 
    bool hasToBeConfirmed() const { return this->toBeConfirmed_ != nullptr;};
    void deleteToBeConfirmed() { this->toBeConfirmed_ = nullptr;};
    inline int64_t toBeConfirmed() const { DARABONBA_PTR_GET_DEFAULT(toBeConfirmed_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setToBeConfirmed(int64_t toBeConfirmed) { DARABONBA_PTR_SET_VALUE(toBeConfirmed_, toBeConfirmed) };


    // toBeFixed Field Functions 
    bool hasToBeFixed() const { return this->toBeFixed_ != nullptr;};
    void deleteToBeFixed() { this->toBeFixed_ = nullptr;};
    inline int64_t toBeFixed() const { DARABONBA_PTR_GET_DEFAULT(toBeFixed_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setToBeFixed(int64_t toBeFixed) { DARABONBA_PTR_SET_VALUE(toBeFixed_, toBeFixed) };


    // toBeVerified Field Functions 
    bool hasToBeVerified() const { return this->toBeVerified_ != nullptr;};
    void deleteToBeVerified() { this->toBeVerified_ = nullptr;};
    inline int64_t toBeVerified() const { DARABONBA_PTR_GET_DEFAULT(toBeVerified_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setToBeVerified(int64_t toBeVerified) { DARABONBA_PTR_SET_VALUE(toBeVerified_, toBeVerified) };


    // todayHigh Field Functions 
    bool hasTodayHigh() const { return this->todayHigh_ != nullptr;};
    void deleteTodayHigh() { this->todayHigh_ = nullptr;};
    inline string todayHigh() const { DARABONBA_PTR_GET_DEFAULT(todayHigh_, "") };
    inline DescribeApisecStatisticsResponseBodyData& setTodayHigh(string todayHigh) { DARABONBA_PTR_SET_VALUE(todayHigh_, todayHigh) };


    // todayLow Field Functions 
    bool hasTodayLow() const { return this->todayLow_ != nullptr;};
    void deleteTodayLow() { this->todayLow_ = nullptr;};
    inline int64_t todayLow() const { DARABONBA_PTR_GET_DEFAULT(todayLow_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setTodayLow(int64_t todayLow) { DARABONBA_PTR_SET_VALUE(todayLow_, todayLow) };


    // todayMedium Field Functions 
    bool hasTodayMedium() const { return this->todayMedium_ != nullptr;};
    void deleteTodayMedium() { this->todayMedium_ = nullptr;};
    inline string todayMedium() const { DARABONBA_PTR_GET_DEFAULT(todayMedium_, "") };
    inline DescribeApisecStatisticsResponseBodyData& setTodayMedium(string todayMedium) { DARABONBA_PTR_SET_VALUE(todayMedium_, todayMedium) };


    // todayTotal Field Functions 
    bool hasTodayTotal() const { return this->todayTotal_ != nullptr;};
    void deleteTodayTotal() { this->todayTotal_ = nullptr;};
    inline string todayTotal() const { DARABONBA_PTR_GET_DEFAULT(todayTotal_, "") };
    inline DescribeApisecStatisticsResponseBodyData& setTodayTotal(string todayTotal) { DARABONBA_PTR_SET_VALUE(todayTotal_, todayTotal) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeApisecStatisticsResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> account_ = nullptr;
    // The number of handled events.
    std::shared_ptr<int64_t> actioned_ = nullptr;
    // The number of APIs.
    std::shared_ptr<int64_t> api_ = nullptr;
    // The number of confirmed events.
    std::shared_ptr<int64_t> confirmed_ = nullptr;
    // The number of domain names.
    std::shared_ptr<int64_t> domain_ = nullptr;
    // The number of fixed risks.
    std::shared_ptr<int64_t> fixed_ = nullptr;
    // The number of high-risk events.
    std::shared_ptr<int64_t> high_ = nullptr;
    // The number of ignored risks.
    std::shared_ptr<int64_t> ignore_ = nullptr;
    // The number of low-risk events.
    std::shared_ptr<int64_t> low_ = nullptr;
    // The number of moderate-risk events.
    std::shared_ptr<int64_t> medium_ = nullptr;
    std::shared_ptr<int64_t> notFixed_ = nullptr;
    std::shared_ptr<int64_t> systemFixed_ = nullptr;
    // The number of events to be confirmed.
    std::shared_ptr<int64_t> toBeConfirmed_ = nullptr;
    // The number of risks to be fixed.
    std::shared_ptr<int64_t> toBeFixed_ = nullptr;
    std::shared_ptr<int64_t> toBeVerified_ = nullptr;
    // The number of new high-risk events today.
    std::shared_ptr<string> todayHigh_ = nullptr;
    // The number of new low-risk events today.
    std::shared_ptr<int64_t> todayLow_ = nullptr;
    // The number of new moderate-risk events today.
    std::shared_ptr<string> todayMedium_ = nullptr;
    // The total number of new events today.
    std::shared_ptr<string> todayTotal_ = nullptr;
    // The total number of events.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
