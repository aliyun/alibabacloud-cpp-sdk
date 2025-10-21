// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORD_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordGroupInfoList, blockWordGroupInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
    };
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord(const ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord(ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord &&) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& operator=(const ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& operator=(ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordGroupInfoList_ == nullptr
        && return this->riskResult_ == nullptr; };
    // blockWordGroupInfoList Field Functions 
    bool hasBlockWordGroupInfoList() const { return this->blockWordGroupInfoList_ != nullptr;};
    void deleteBlockWordGroupInfoList() { this->blockWordGroupInfoList_ = nullptr;};
    inline const vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList() const { DARABONBA_PTR_GET_CONST(blockWordGroupInfoList_, vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> blockWordGroupInfoList() { DARABONBA_PTR_GET(blockWordGroupInfoList_, vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& setBlockWordGroupInfoList(const vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> & blockWordGroupInfoList) { DARABONBA_PTR_SET_VALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& setBlockWordGroupInfoList(vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> && blockWordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(blockWordGroupInfoList_, blockWordGroupInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


  protected:
    // List of keyword detection result objects
    std::shared_ptr<vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
