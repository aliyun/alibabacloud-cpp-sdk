// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATAOVERALL_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATAOVERALL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceTrendingReportResponseBodyDataOverall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrendingReportResponseBodyDataOverall& obj) { 
      DARABONBA_PTR_TO_JSON(MaxLoggedInAgents, maxLoggedInAgents_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrendingReportResponseBodyDataOverall& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxLoggedInAgents, maxLoggedInAgents_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
    };
    GetInstanceTrendingReportResponseBodyDataOverall() = default ;
    GetInstanceTrendingReportResponseBodyDataOverall(const GetInstanceTrendingReportResponseBodyDataOverall &) = default ;
    GetInstanceTrendingReportResponseBodyDataOverall(GetInstanceTrendingReportResponseBodyDataOverall &&) = default ;
    GetInstanceTrendingReportResponseBodyDataOverall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrendingReportResponseBodyDataOverall() = default ;
    GetInstanceTrendingReportResponseBodyDataOverall& operator=(const GetInstanceTrendingReportResponseBodyDataOverall &) = default ;
    GetInstanceTrendingReportResponseBodyDataOverall& operator=(GetInstanceTrendingReportResponseBodyDataOverall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxLoggedInAgents_ == nullptr
        && return this->statsTime_ == nullptr; };
    // maxLoggedInAgents Field Functions 
    bool hasMaxLoggedInAgents() const { return this->maxLoggedInAgents_ != nullptr;};
    void deleteMaxLoggedInAgents() { this->maxLoggedInAgents_ = nullptr;};
    inline int64_t maxLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(maxLoggedInAgents_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataOverall& setMaxLoggedInAgents(int64_t maxLoggedInAgents) { DARABONBA_PTR_SET_VALUE(maxLoggedInAgents_, maxLoggedInAgents) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataOverall& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


  protected:
    std::shared_ptr<int64_t> maxLoggedInAgents_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
