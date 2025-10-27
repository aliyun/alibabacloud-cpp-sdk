// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoScalingRulesResponseBodyDataScaleRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListAutoScalingRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ScaleRules, scaleRules_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ScaleRules, scaleRules_);
    };
    ListAutoScalingRulesResponseBodyData() = default ;
    ListAutoScalingRulesResponseBodyData(const ListAutoScalingRulesResponseBodyData &) = default ;
    ListAutoScalingRulesResponseBodyData(ListAutoScalingRulesResponseBodyData &&) = default ;
    ListAutoScalingRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingRulesResponseBodyData() = default ;
    ListAutoScalingRulesResponseBodyData& operator=(const ListAutoScalingRulesResponseBodyData &) = default ;
    ListAutoScalingRulesResponseBodyData& operator=(ListAutoScalingRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scaleRules_ == nullptr; };
    // scaleRules Field Functions 
    bool hasScaleRules() const { return this->scaleRules_ != nullptr;};
    void deleteScaleRules() { this->scaleRules_ = nullptr;};
    inline const vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules> & scaleRules() const { DARABONBA_PTR_GET_CONST(scaleRules_, vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules>) };
    inline vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules> scaleRules() { DARABONBA_PTR_GET(scaleRules_, vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules>) };
    inline ListAutoScalingRulesResponseBodyData& setScaleRules(const vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules> & scaleRules) { DARABONBA_PTR_SET_VALUE(scaleRules_, scaleRules) };
    inline ListAutoScalingRulesResponseBodyData& setScaleRules(vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules> && scaleRules) { DARABONBA_PTR_SET_RVALUE(scaleRules_, scaleRules) };


  protected:
    std::shared_ptr<vector<Models::ListAutoScalingRulesResponseBodyDataScaleRules>> scaleRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
