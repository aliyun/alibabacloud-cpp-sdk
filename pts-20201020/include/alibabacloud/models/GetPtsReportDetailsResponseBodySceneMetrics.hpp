// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENEMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(AllCount, allCount_);
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(AvgTps, avgTps_);
      DARABONBA_PTR_TO_JSON(FailCountBiz, failCountBiz_);
      DARABONBA_PTR_TO_JSON(FailCountReq, failCountReq_);
      DARABONBA_PTR_TO_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_TO_JSON(Seg99Rt, seg99Rt_);
      DARABONBA_PTR_TO_JSON(SuccessRateBiz, successRateBiz_);
      DARABONBA_PTR_TO_JSON(SuccessRateReq, successRateReq_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(AllCount, allCount_);
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(AvgTps, avgTps_);
      DARABONBA_PTR_FROM_JSON(FailCountBiz, failCountBiz_);
      DARABONBA_PTR_FROM_JSON(FailCountReq, failCountReq_);
      DARABONBA_PTR_FROM_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_FROM_JSON(Seg99Rt, seg99Rt_);
      DARABONBA_PTR_FROM_JSON(SuccessRateBiz, successRateBiz_);
      DARABONBA_PTR_FROM_JSON(SuccessRateReq, successRateReq_);
    };
    GetPtsReportDetailsResponseBodySceneMetrics() = default ;
    GetPtsReportDetailsResponseBodySceneMetrics(const GetPtsReportDetailsResponseBodySceneMetrics &) = default ;
    GetPtsReportDetailsResponseBodySceneMetrics(GetPtsReportDetailsResponseBodySceneMetrics &&) = default ;
    GetPtsReportDetailsResponseBodySceneMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneMetrics() = default ;
    GetPtsReportDetailsResponseBodySceneMetrics& operator=(const GetPtsReportDetailsResponseBodySceneMetrics &) = default ;
    GetPtsReportDetailsResponseBodySceneMetrics& operator=(GetPtsReportDetailsResponseBodySceneMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allCount_ == nullptr
        && return this->avgRt_ == nullptr && return this->avgTps_ == nullptr && return this->failCountBiz_ == nullptr && return this->failCountReq_ == nullptr && return this->seg90Rt_ == nullptr
        && return this->seg99Rt_ == nullptr && return this->successRateBiz_ == nullptr && return this->successRateReq_ == nullptr; };
    // allCount Field Functions 
    bool hasAllCount() const { return this->allCount_ != nullptr;};
    void deleteAllCount() { this->allCount_ = nullptr;};
    inline int64_t allCount() const { DARABONBA_PTR_GET_DEFAULT(allCount_, 0L) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setAllCount(int64_t allCount) { DARABONBA_PTR_SET_VALUE(allCount_, allCount) };


    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline float avgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setAvgRt(float avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


    // avgTps Field Functions 
    bool hasAvgTps() const { return this->avgTps_ != nullptr;};
    void deleteAvgTps() { this->avgTps_ = nullptr;};
    inline float avgTps() const { DARABONBA_PTR_GET_DEFAULT(avgTps_, 0.0) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setAvgTps(float avgTps) { DARABONBA_PTR_SET_VALUE(avgTps_, avgTps) };


    // failCountBiz Field Functions 
    bool hasFailCountBiz() const { return this->failCountBiz_ != nullptr;};
    void deleteFailCountBiz() { this->failCountBiz_ = nullptr;};
    inline int64_t failCountBiz() const { DARABONBA_PTR_GET_DEFAULT(failCountBiz_, 0L) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setFailCountBiz(int64_t failCountBiz) { DARABONBA_PTR_SET_VALUE(failCountBiz_, failCountBiz) };


    // failCountReq Field Functions 
    bool hasFailCountReq() const { return this->failCountReq_ != nullptr;};
    void deleteFailCountReq() { this->failCountReq_ = nullptr;};
    inline int64_t failCountReq() const { DARABONBA_PTR_GET_DEFAULT(failCountReq_, 0L) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setFailCountReq(int64_t failCountReq) { DARABONBA_PTR_SET_VALUE(failCountReq_, failCountReq) };


    // seg90Rt Field Functions 
    bool hasSeg90Rt() const { return this->seg90Rt_ != nullptr;};
    void deleteSeg90Rt() { this->seg90Rt_ = nullptr;};
    inline float seg90Rt() const { DARABONBA_PTR_GET_DEFAULT(seg90Rt_, 0.0) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setSeg90Rt(float seg90Rt) { DARABONBA_PTR_SET_VALUE(seg90Rt_, seg90Rt) };


    // seg99Rt Field Functions 
    bool hasSeg99Rt() const { return this->seg99Rt_ != nullptr;};
    void deleteSeg99Rt() { this->seg99Rt_ = nullptr;};
    inline float seg99Rt() const { DARABONBA_PTR_GET_DEFAULT(seg99Rt_, 0.0) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setSeg99Rt(float seg99Rt) { DARABONBA_PTR_SET_VALUE(seg99Rt_, seg99Rt) };


    // successRateBiz Field Functions 
    bool hasSuccessRateBiz() const { return this->successRateBiz_ != nullptr;};
    void deleteSuccessRateBiz() { this->successRateBiz_ = nullptr;};
    inline float successRateBiz() const { DARABONBA_PTR_GET_DEFAULT(successRateBiz_, 0.0) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setSuccessRateBiz(float successRateBiz) { DARABONBA_PTR_SET_VALUE(successRateBiz_, successRateBiz) };


    // successRateReq Field Functions 
    bool hasSuccessRateReq() const { return this->successRateReq_ != nullptr;};
    void deleteSuccessRateReq() { this->successRateReq_ = nullptr;};
    inline float successRateReq() const { DARABONBA_PTR_GET_DEFAULT(successRateReq_, 0.0) };
    inline GetPtsReportDetailsResponseBodySceneMetrics& setSuccessRateReq(float successRateReq) { DARABONBA_PTR_SET_VALUE(successRateReq_, successRateReq) };


  protected:
    // The number of requests in the scenario.
    std::shared_ptr<int64_t> allCount_ = nullptr;
    // The average response time in the scenario.
    std::shared_ptr<float> avgRt_ = nullptr;
    // The average transactions per second (TPS) in the scenario.
    std::shared_ptr<float> avgTps_ = nullptr;
    // The number of business failures in the scenario.
    std::shared_ptr<int64_t> failCountBiz_ = nullptr;
    // The number of failed requests in the scenario.
    std::shared_ptr<int64_t> failCountReq_ = nullptr;
    // The 90th percentile response time.
    std::shared_ptr<float> seg90Rt_ = nullptr;
    // The 99th percentile response time.
    std::shared_ptr<float> seg99Rt_ = nullptr;
    // The business success rate in the scenario.
    std::shared_ptr<float> successRateBiz_ = nullptr;
    // The request success rate in the scenario.
    std::shared_ptr<float> successRateReq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
