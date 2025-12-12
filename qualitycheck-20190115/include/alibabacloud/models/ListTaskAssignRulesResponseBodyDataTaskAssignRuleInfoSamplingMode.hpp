// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOSAMPLINGMODE_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOSAMPLINGMODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& obj) { 
      DARABONBA_PTR_TO_JSON(AnyNumberOfDraws, anyNumberOfDraws_);
      DARABONBA_PTR_TO_JSON(Designated, designated_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NumberOfDraws, numberOfDraws_);
      DARABONBA_PTR_TO_JSON(Proportion, proportion_);
      DARABONBA_PTR_TO_JSON(RandomInspectionNumber, randomInspectionNumber_);
      DARABONBA_PTR_TO_JSON(SamplingModeAgents, samplingModeAgents_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& obj) { 
      DARABONBA_PTR_FROM_JSON(AnyNumberOfDraws, anyNumberOfDraws_);
      DARABONBA_PTR_FROM_JSON(Designated, designated_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NumberOfDraws, numberOfDraws_);
      DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
      DARABONBA_PTR_FROM_JSON(RandomInspectionNumber, randomInspectionNumber_);
      DARABONBA_PTR_FROM_JSON(SamplingModeAgents, samplingModeAgents_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anyNumberOfDraws_ == nullptr
        && return this->designated_ == nullptr && return this->dimension_ == nullptr && return this->limit_ == nullptr && return this->numberOfDraws_ == nullptr && return this->proportion_ == nullptr
        && return this->randomInspectionNumber_ == nullptr && return this->samplingModeAgents_ == nullptr; };
    // anyNumberOfDraws Field Functions 
    bool hasAnyNumberOfDraws() const { return this->anyNumberOfDraws_ != nullptr;};
    void deleteAnyNumberOfDraws() { this->anyNumberOfDraws_ = nullptr;};
    inline int32_t anyNumberOfDraws() const { DARABONBA_PTR_GET_DEFAULT(anyNumberOfDraws_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setAnyNumberOfDraws(int32_t anyNumberOfDraws) { DARABONBA_PTR_SET_VALUE(anyNumberOfDraws_, anyNumberOfDraws) };


    // designated Field Functions 
    bool hasDesignated() const { return this->designated_ != nullptr;};
    void deleteDesignated() { this->designated_ = nullptr;};
    inline bool designated() const { DARABONBA_PTR_GET_DEFAULT(designated_, false) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setDesignated(bool designated) { DARABONBA_PTR_SET_VALUE(designated_, designated) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // numberOfDraws Field Functions 
    bool hasNumberOfDraws() const { return this->numberOfDraws_ != nullptr;};
    void deleteNumberOfDraws() { this->numberOfDraws_ = nullptr;};
    inline int32_t numberOfDraws() const { DARABONBA_PTR_GET_DEFAULT(numberOfDraws_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setNumberOfDraws(int32_t numberOfDraws) { DARABONBA_PTR_SET_VALUE(numberOfDraws_, numberOfDraws) };


    // proportion Field Functions 
    bool hasProportion() const { return this->proportion_ != nullptr;};
    void deleteProportion() { this->proportion_ = nullptr;};
    inline float proportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, 0.0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setProportion(float proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


    // randomInspectionNumber Field Functions 
    bool hasRandomInspectionNumber() const { return this->randomInspectionNumber_ != nullptr;};
    void deleteRandomInspectionNumber() { this->randomInspectionNumber_ = nullptr;};
    inline int32_t randomInspectionNumber() const { DARABONBA_PTR_GET_DEFAULT(randomInspectionNumber_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setRandomInspectionNumber(int32_t randomInspectionNumber) { DARABONBA_PTR_SET_VALUE(randomInspectionNumber_, randomInspectionNumber) };


    // samplingModeAgents Field Functions 
    bool hasSamplingModeAgents() const { return this->samplingModeAgents_ != nullptr;};
    void deleteSamplingModeAgents() { this->samplingModeAgents_ = nullptr;};
    inline const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents & samplingModeAgents() const { DARABONBA_PTR_GET_CONST(samplingModeAgents_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents) };
    inline Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents samplingModeAgents() { DARABONBA_PTR_GET(samplingModeAgents_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setSamplingModeAgents(const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents & samplingModeAgents) { DARABONBA_PTR_SET_VALUE(samplingModeAgents_, samplingModeAgents) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode& setSamplingModeAgents(Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents && samplingModeAgents) { DARABONBA_PTR_SET_RVALUE(samplingModeAgents_, samplingModeAgents) };


  protected:
    std::shared_ptr<int32_t> anyNumberOfDraws_ = nullptr;
    std::shared_ptr<bool> designated_ = nullptr;
    std::shared_ptr<int32_t> dimension_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<int32_t> numberOfDraws_ = nullptr;
    std::shared_ptr<float> proportion_ = nullptr;
    std::shared_ptr<int32_t> randomInspectionNumber_ = nullptr;
    std::shared_ptr<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents> samplingModeAgents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
