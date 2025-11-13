// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATAOUTBOUND_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATAOUTBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceTrendingReportResponseBodyDataOutbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrendingReportResponseBodyDataOutbound& obj) { 
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
      DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrendingReportResponseBodyDataOutbound& obj) { 
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
      DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
    };
    GetInstanceTrendingReportResponseBodyDataOutbound() = default ;
    GetInstanceTrendingReportResponseBodyDataOutbound(const GetInstanceTrendingReportResponseBodyDataOutbound &) = default ;
    GetInstanceTrendingReportResponseBodyDataOutbound(GetInstanceTrendingReportResponseBodyDataOutbound &&) = default ;
    GetInstanceTrendingReportResponseBodyDataOutbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrendingReportResponseBodyDataOutbound() = default ;
    GetInstanceTrendingReportResponseBodyDataOutbound& operator=(const GetInstanceTrendingReportResponseBodyDataOutbound &) = default ;
    GetInstanceTrendingReportResponseBodyDataOutbound& operator=(GetInstanceTrendingReportResponseBodyDataOutbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callsAnswered_ == nullptr
        && return this->statsTime_ == nullptr && return this->totalCalls_ == nullptr; };
    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataOutbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataOutbound& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataOutbound& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


  protected:
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
    std::shared_ptr<int64_t> totalCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
