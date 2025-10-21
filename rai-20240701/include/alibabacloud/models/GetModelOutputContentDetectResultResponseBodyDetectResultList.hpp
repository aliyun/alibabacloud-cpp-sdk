// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelOutputContentDetectResultResponseBodyDetectResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOutputContentDetectResultResponseBodyDetectResultList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TraceInfo, traceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOutputContentDetectResultResponseBodyDetectResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TraceInfo, traceInfo_);
    };
    GetModelOutputContentDetectResultResponseBodyDetectResultList() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultList(const GetModelOutputContentDetectResultResponseBodyDetectResultList &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultList(GetModelOutputContentDetectResultResponseBodyDetectResultList &&) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultList() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultList& operator=(const GetModelOutputContentDetectResultResponseBodyDetectResultList &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultList& operator=(GetModelOutputContentDetectResultResponseBodyDetectResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskResult_ == nullptr
        && return this->status_ == nullptr && return this->traceInfo_ == nullptr; };
    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultList& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // traceInfo Field Functions 
    bool hasTraceInfo() const { return this->traceInfo_ != nullptr;};
    void deleteTraceInfo() { this->traceInfo_ = nullptr;};
    inline const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo & traceInfo() const { DARABONBA_PTR_GET_CONST(traceInfo_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo) };
    inline Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo traceInfo() { DARABONBA_PTR_GET(traceInfo_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultList& setTraceInfo(const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo & traceInfo) { DARABONBA_PTR_SET_VALUE(traceInfo_, traceInfo) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultList& setTraceInfo(Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo && traceInfo) { DARABONBA_PTR_SET_RVALUE(traceInfo_, traceInfo) };


  protected:
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    // 0: Queued
    // 1: Processing
    // 2: Completed
    // 3: Failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // Inspection results
    std::shared_ptr<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo> traceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
