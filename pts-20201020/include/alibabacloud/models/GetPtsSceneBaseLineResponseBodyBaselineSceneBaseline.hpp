// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENEBASELINERESPONSEBODYBASELINESCENEBASELINE_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENEBASELINERESPONSEBODYBASELINESCENEBASELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(AvgTps, avgTps_);
      DARABONBA_PTR_TO_JSON(FailCountBiz, failCountBiz_);
      DARABONBA_PTR_TO_JSON(FailCountReq, failCountReq_);
      DARABONBA_PTR_TO_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_TO_JSON(Seg99Rt, seg99Rt_);
      DARABONBA_PTR_TO_JSON(SuccessRateBiz, successRateBiz_);
      DARABONBA_PTR_TO_JSON(SuccessRateReq, successRateReq_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(AvgTps, avgTps_);
      DARABONBA_PTR_FROM_JSON(FailCountBiz, failCountBiz_);
      DARABONBA_PTR_FROM_JSON(FailCountReq, failCountReq_);
      DARABONBA_PTR_FROM_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_FROM_JSON(Seg99Rt, seg99Rt_);
      DARABONBA_PTR_FROM_JSON(SuccessRateBiz, successRateBiz_);
      DARABONBA_PTR_FROM_JSON(SuccessRateReq, successRateReq_);
    };
    GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline() = default ;
    GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline(const GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline &) = default ;
    GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline(GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline &&) = default ;
    GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline() = default ;
    GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& operator=(const GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline &) = default ;
    GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& operator=(GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgRt_ == nullptr
        && return this->avgTps_ == nullptr && return this->failCountBiz_ == nullptr && return this->failCountReq_ == nullptr && return this->seg90Rt_ == nullptr && return this->seg99Rt_ == nullptr
        && return this->successRateBiz_ == nullptr && return this->successRateReq_ == nullptr; };
    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline float avgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setAvgRt(float avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


    // avgTps Field Functions 
    bool hasAvgTps() const { return this->avgTps_ != nullptr;};
    void deleteAvgTps() { this->avgTps_ = nullptr;};
    inline float avgTps() const { DARABONBA_PTR_GET_DEFAULT(avgTps_, 0.0) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setAvgTps(float avgTps) { DARABONBA_PTR_SET_VALUE(avgTps_, avgTps) };


    // failCountBiz Field Functions 
    bool hasFailCountBiz() const { return this->failCountBiz_ != nullptr;};
    void deleteFailCountBiz() { this->failCountBiz_ = nullptr;};
    inline int64_t failCountBiz() const { DARABONBA_PTR_GET_DEFAULT(failCountBiz_, 0L) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setFailCountBiz(int64_t failCountBiz) { DARABONBA_PTR_SET_VALUE(failCountBiz_, failCountBiz) };


    // failCountReq Field Functions 
    bool hasFailCountReq() const { return this->failCountReq_ != nullptr;};
    void deleteFailCountReq() { this->failCountReq_ = nullptr;};
    inline int64_t failCountReq() const { DARABONBA_PTR_GET_DEFAULT(failCountReq_, 0L) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setFailCountReq(int64_t failCountReq) { DARABONBA_PTR_SET_VALUE(failCountReq_, failCountReq) };


    // seg90Rt Field Functions 
    bool hasSeg90Rt() const { return this->seg90Rt_ != nullptr;};
    void deleteSeg90Rt() { this->seg90Rt_ = nullptr;};
    inline float seg90Rt() const { DARABONBA_PTR_GET_DEFAULT(seg90Rt_, 0.0) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setSeg90Rt(float seg90Rt) { DARABONBA_PTR_SET_VALUE(seg90Rt_, seg90Rt) };


    // seg99Rt Field Functions 
    bool hasSeg99Rt() const { return this->seg99Rt_ != nullptr;};
    void deleteSeg99Rt() { this->seg99Rt_ = nullptr;};
    inline float seg99Rt() const { DARABONBA_PTR_GET_DEFAULT(seg99Rt_, 0.0) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setSeg99Rt(float seg99Rt) { DARABONBA_PTR_SET_VALUE(seg99Rt_, seg99Rt) };


    // successRateBiz Field Functions 
    bool hasSuccessRateBiz() const { return this->successRateBiz_ != nullptr;};
    void deleteSuccessRateBiz() { this->successRateBiz_ = nullptr;};
    inline float successRateBiz() const { DARABONBA_PTR_GET_DEFAULT(successRateBiz_, 0.0) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setSuccessRateBiz(float successRateBiz) { DARABONBA_PTR_SET_VALUE(successRateBiz_, successRateBiz) };


    // successRateReq Field Functions 
    bool hasSuccessRateReq() const { return this->successRateReq_ != nullptr;};
    void deleteSuccessRateReq() { this->successRateReq_ = nullptr;};
    inline float successRateReq() const { DARABONBA_PTR_GET_DEFAULT(successRateReq_, 0.0) };
    inline GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline& setSuccessRateReq(float successRateReq) { DARABONBA_PTR_SET_VALUE(successRateReq_, successRateReq) };


  protected:
    // Average RT
    std::shared_ptr<float> avgRt_ = nullptr;
    // null
    std::shared_ptr<float> avgTps_ = nullptr;
    // null
    std::shared_ptr<int64_t> failCountBiz_ = nullptr;
    // Failures
    std::shared_ptr<int64_t> failCountReq_ = nullptr;
    // null
    std::shared_ptr<float> seg90Rt_ = nullptr;
    // null
    std::shared_ptr<float> seg99Rt_ = nullptr;
    // null
    std::shared_ptr<float> successRateBiz_ = nullptr;
    // request success rate
    std::shared_ptr<float> successRateReq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
