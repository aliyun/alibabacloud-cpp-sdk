// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORD_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord(const ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord(ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordGroupInfoList_ == nullptr
        && return this->riskResult_ == nullptr; };
    // blockWordGroupInfoList Field Functions 
    bool hasBlockWordGroupInfoList() const { return this->blockWordGroupInfoList_ != nullptr;};
    void deleteBlockWordGroupInfoList() { this->blockWordGroupInfoList_ = nullptr;};
    inline const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList() const { DARABONBA_PTR_GET_CONST(blockWordGroupInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> blockWordGroupInfoList() { DARABONBA_PTR_GET(blockWordGroupInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& setBlockWordGroupInfoList(const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList) { DARABONBA_PTR_SET_VALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& setBlockWordGroupInfoList(vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> && blockWordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


  protected:
    // List of keyword detection result objects
    std::shared_ptr<vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
