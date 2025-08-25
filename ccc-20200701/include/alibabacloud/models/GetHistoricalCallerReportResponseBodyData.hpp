// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALCALLERREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALCALLERREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetHistoricalCallerReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalCallerReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LastCallingTime, lastCallingTime_);
      DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalCallerReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LastCallingTime, lastCallingTime_);
      DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
    };
    GetHistoricalCallerReportResponseBodyData() = default ;
    GetHistoricalCallerReportResponseBodyData(const GetHistoricalCallerReportResponseBodyData &) = default ;
    GetHistoricalCallerReportResponseBodyData(GetHistoricalCallerReportResponseBodyData &&) = default ;
    GetHistoricalCallerReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalCallerReportResponseBodyData() = default ;
    GetHistoricalCallerReportResponseBodyData& operator=(const GetHistoricalCallerReportResponseBodyData &) = default ;
    GetHistoricalCallerReportResponseBodyData& operator=(GetHistoricalCallerReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastCallingTime_ != nullptr
        && this->totalCalls_ != nullptr; };
    // lastCallingTime Field Functions 
    bool hasLastCallingTime() const { return this->lastCallingTime_ != nullptr;};
    void deleteLastCallingTime() { this->lastCallingTime_ = nullptr;};
    inline int64_t lastCallingTime() const { DARABONBA_PTR_GET_DEFAULT(lastCallingTime_, 0L) };
    inline GetHistoricalCallerReportResponseBodyData& setLastCallingTime(int64_t lastCallingTime) { DARABONBA_PTR_SET_VALUE(lastCallingTime_, lastCallingTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline GetHistoricalCallerReportResponseBodyData& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


  protected:
    std::shared_ptr<int64_t> lastCallingTime_ = nullptr;
    std::shared_ptr<int64_t> totalCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
