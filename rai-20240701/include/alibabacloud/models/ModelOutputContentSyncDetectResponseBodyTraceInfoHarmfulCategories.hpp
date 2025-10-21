// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOHARMFULCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOHARMFULCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_TO_JSON(HarmfulCategoryInfoList, harmfulCategoryInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategoryInfoList, harmfulCategoryInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories(const ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories(ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidenceScore_ == nullptr
        && return this->harmfulCategoryInfoList_ == nullptr && return this->riskResult_ == nullptr; };
    // confidenceScore Field Functions 
    bool hasConfidenceScore() const { return this->confidenceScore_ != nullptr;};
    void deleteConfidenceScore() { this->confidenceScore_ = nullptr;};
    inline double confidenceScore() const { DARABONBA_PTR_GET_DEFAULT(confidenceScore_, 0.0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& setConfidenceScore(double confidenceScore) { DARABONBA_PTR_SET_VALUE(confidenceScore_, confidenceScore) };


    // harmfulCategoryInfoList Field Functions 
    bool hasHarmfulCategoryInfoList() const { return this->harmfulCategoryInfoList_ != nullptr;};
    void deleteHarmfulCategoryInfoList() { this->harmfulCategoryInfoList_ = nullptr;};
    inline const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> & harmfulCategoryInfoList() const { DARABONBA_PTR_GET_CONST(harmfulCategoryInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>) };
    inline vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> harmfulCategoryInfoList() { DARABONBA_PTR_GET(harmfulCategoryInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& setHarmfulCategoryInfoList(const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> & harmfulCategoryInfoList) { DARABONBA_PTR_SET_VALUE(harmfulCategoryInfoList_, harmfulCategoryInfoList) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& setHarmfulCategoryInfoList(vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> && harmfulCategoryInfoList) { DARABONBA_PTR_SET_RVALUE(harmfulCategoryInfoList_, harmfulCategoryInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


  protected:
    // Confidence score
    std::shared_ptr<double> confidenceScore_ = nullptr;
    // List of harmful category objects
    std::shared_ptr<vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>> harmfulCategoryInfoList_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
