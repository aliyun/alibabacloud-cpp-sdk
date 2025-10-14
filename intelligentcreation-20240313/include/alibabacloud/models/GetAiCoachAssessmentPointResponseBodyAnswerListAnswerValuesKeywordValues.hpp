// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODYANSWERLISTANSWERVALUESKEYWORDVALUES_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODYANSWERLISTANSWERVALUESKEYWORDVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues() = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues(const GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues &) = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues(GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues &&) = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues() = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues& operator=(const GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues &) = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues& operator=(GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->weight_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesKeywordValues& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
