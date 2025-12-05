// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERREPORTDETAILSRESPONSEBODYSAMPLERMETRICSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERREPORTDETAILSRESPONSEBODYSAMPLERMETRICSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterReportDetailsResponseBodySamplerMetricsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterReportDetailsResponseBodySamplerMetricsList& obj) { 
      DARABONBA_PTR_TO_JSON(AllCount, allCount_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(AvgTps, avgTps_);
      DARABONBA_PTR_TO_JSON(FailCountReq, failCountReq_);
      DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_TO_JSON(MinRt, minRt_);
      DARABONBA_PTR_TO_JSON(Seg75Rt, seg75Rt_);
      DARABONBA_PTR_TO_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_TO_JSON(Seg99Rt, seg99Rt_);
      DARABONBA_PTR_TO_JSON(SuccessRateReq, successRateReq_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterReportDetailsResponseBodySamplerMetricsList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllCount, allCount_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(AvgTps, avgTps_);
      DARABONBA_PTR_FROM_JSON(FailCountReq, failCountReq_);
      DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_FROM_JSON(MinRt, minRt_);
      DARABONBA_PTR_FROM_JSON(Seg75Rt, seg75Rt_);
      DARABONBA_PTR_FROM_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_FROM_JSON(Seg99Rt, seg99Rt_);
      DARABONBA_PTR_FROM_JSON(SuccessRateReq, successRateReq_);
    };
    GetJMeterReportDetailsResponseBodySamplerMetricsList() = default ;
    GetJMeterReportDetailsResponseBodySamplerMetricsList(const GetJMeterReportDetailsResponseBodySamplerMetricsList &) = default ;
    GetJMeterReportDetailsResponseBodySamplerMetricsList(GetJMeterReportDetailsResponseBodySamplerMetricsList &&) = default ;
    GetJMeterReportDetailsResponseBodySamplerMetricsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterReportDetailsResponseBodySamplerMetricsList() = default ;
    GetJMeterReportDetailsResponseBodySamplerMetricsList& operator=(const GetJMeterReportDetailsResponseBodySamplerMetricsList &) = default ;
    GetJMeterReportDetailsResponseBodySamplerMetricsList& operator=(GetJMeterReportDetailsResponseBodySamplerMetricsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allCount_ == nullptr
        && return this->apiName_ == nullptr && return this->avgRt_ == nullptr && return this->avgTps_ == nullptr && return this->failCountReq_ == nullptr && return this->maxRt_ == nullptr
        && return this->minRt_ == nullptr && return this->seg75Rt_ == nullptr && return this->seg90Rt_ == nullptr && return this->seg99Rt_ == nullptr && return this->successRateReq_ == nullptr; };
    // allCount Field Functions 
    bool hasAllCount() const { return this->allCount_ != nullptr;};
    void deleteAllCount() { this->allCount_ = nullptr;};
    inline int64_t allCount() const { DARABONBA_PTR_GET_DEFAULT(allCount_, 0L) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setAllCount(int64_t allCount) { DARABONBA_PTR_SET_VALUE(allCount_, allCount) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline double avgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setAvgRt(double avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


    // avgTps Field Functions 
    bool hasAvgTps() const { return this->avgTps_ != nullptr;};
    void deleteAvgTps() { this->avgTps_ = nullptr;};
    inline double avgTps() const { DARABONBA_PTR_GET_DEFAULT(avgTps_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setAvgTps(double avgTps) { DARABONBA_PTR_SET_VALUE(avgTps_, avgTps) };


    // failCountReq Field Functions 
    bool hasFailCountReq() const { return this->failCountReq_ != nullptr;};
    void deleteFailCountReq() { this->failCountReq_ = nullptr;};
    inline int64_t failCountReq() const { DARABONBA_PTR_GET_DEFAULT(failCountReq_, 0L) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setFailCountReq(int64_t failCountReq) { DARABONBA_PTR_SET_VALUE(failCountReq_, failCountReq) };


    // maxRt Field Functions 
    bool hasMaxRt() const { return this->maxRt_ != nullptr;};
    void deleteMaxRt() { this->maxRt_ = nullptr;};
    inline double maxRt() const { DARABONBA_PTR_GET_DEFAULT(maxRt_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setMaxRt(double maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };


    // minRt Field Functions 
    bool hasMinRt() const { return this->minRt_ != nullptr;};
    void deleteMinRt() { this->minRt_ = nullptr;};
    inline double minRt() const { DARABONBA_PTR_GET_DEFAULT(minRt_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setMinRt(double minRt) { DARABONBA_PTR_SET_VALUE(minRt_, minRt) };


    // seg75Rt Field Functions 
    bool hasSeg75Rt() const { return this->seg75Rt_ != nullptr;};
    void deleteSeg75Rt() { this->seg75Rt_ = nullptr;};
    inline double seg75Rt() const { DARABONBA_PTR_GET_DEFAULT(seg75Rt_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setSeg75Rt(double seg75Rt) { DARABONBA_PTR_SET_VALUE(seg75Rt_, seg75Rt) };


    // seg90Rt Field Functions 
    bool hasSeg90Rt() const { return this->seg90Rt_ != nullptr;};
    void deleteSeg90Rt() { this->seg90Rt_ = nullptr;};
    inline double seg90Rt() const { DARABONBA_PTR_GET_DEFAULT(seg90Rt_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setSeg90Rt(double seg90Rt) { DARABONBA_PTR_SET_VALUE(seg90Rt_, seg90Rt) };


    // seg99Rt Field Functions 
    bool hasSeg99Rt() const { return this->seg99Rt_ != nullptr;};
    void deleteSeg99Rt() { this->seg99Rt_ = nullptr;};
    inline double seg99Rt() const { DARABONBA_PTR_GET_DEFAULT(seg99Rt_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setSeg99Rt(double seg99Rt) { DARABONBA_PTR_SET_VALUE(seg99Rt_, seg99Rt) };


    // successRateReq Field Functions 
    bool hasSuccessRateReq() const { return this->successRateReq_ != nullptr;};
    void deleteSuccessRateReq() { this->successRateReq_ = nullptr;};
    inline double successRateReq() const { DARABONBA_PTR_GET_DEFAULT(successRateReq_, 0.0) };
    inline GetJMeterReportDetailsResponseBodySamplerMetricsList& setSuccessRateReq(double successRateReq) { DARABONBA_PTR_SET_VALUE(successRateReq_, successRateReq) };


  protected:
    // The total number of requests.
    std::shared_ptr<int64_t> allCount_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The average RT. Unit: milliseconds.
    std::shared_ptr<double> avgRt_ = nullptr;
    // The average TPS.
    std::shared_ptr<double> avgTps_ = nullptr;
    // The request failure rate.
    std::shared_ptr<int64_t> failCountReq_ = nullptr;
    // The maximum RT. Unit: milliseconds.
    std::shared_ptr<double> maxRt_ = nullptr;
    // The minimum RT. Unit: milliseconds.
    std::shared_ptr<double> minRt_ = nullptr;
    // The 75th percentile of RT. Unit: milliseconds.
    std::shared_ptr<double> seg75Rt_ = nullptr;
    // The 90th percentile of RT. Unit: milliseconds.
    std::shared_ptr<double> seg90Rt_ = nullptr;
    // The 99th percentile of RT. Unit: milliseconds.
    std::shared_ptr<double> seg99Rt_ = nullptr;
    // The request success rate. The parameter value must be a non-negative number less than or equal to 100.
    std::shared_ptr<double> successRateReq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
