// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORD_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
    };
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &&) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& operator=(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& operator=(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordGroupInfoList_ == nullptr
        && return this->riskResult_ == nullptr; };
    // blockWordGroupInfoList Field Functions 
    bool hasBlockWordGroupInfoList() const { return this->blockWordGroupInfoList_ != nullptr;};
    void deleteBlockWordGroupInfoList() { this->blockWordGroupInfoList_ = nullptr;};
    inline const vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList() const { DARABONBA_PTR_GET_CONST(blockWordGroupInfoList_, vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> blockWordGroupInfoList() { DARABONBA_PTR_GET(blockWordGroupInfoList_, vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& setBlockWordGroupInfoList(const vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList) { DARABONBA_PTR_SET_VALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& setBlockWordGroupInfoList(vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> && blockWordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


  protected:
    // Keyword detection result object list
    std::shared_ptr<vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
