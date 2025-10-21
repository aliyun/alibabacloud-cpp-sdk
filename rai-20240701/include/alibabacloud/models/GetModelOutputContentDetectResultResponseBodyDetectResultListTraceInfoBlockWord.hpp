// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORD_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
    };
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &&) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& operator=(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& operator=(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordGroupInfoList_ == nullptr
        && return this->riskResult_ == nullptr; };
    // blockWordGroupInfoList Field Functions 
    bool hasBlockWordGroupInfoList() const { return this->blockWordGroupInfoList_ != nullptr;};
    void deleteBlockWordGroupInfoList() { this->blockWordGroupInfoList_ = nullptr;};
    inline const vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList() const { DARABONBA_PTR_GET_CONST(blockWordGroupInfoList_, vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> blockWordGroupInfoList() { DARABONBA_PTR_GET(blockWordGroupInfoList_, vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& setBlockWordGroupInfoList(const vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList) { DARABONBA_PTR_SET_VALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& setBlockWordGroupInfoList(vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> && blockWordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


  protected:
    // List of keyword detection result objects
    std::shared_ptr<vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
