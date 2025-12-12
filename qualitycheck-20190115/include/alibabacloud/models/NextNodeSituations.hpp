// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEXTNODESITUATIONS_HPP_
#define ALIBABACLOUD_MODELS_NEXTNODESITUATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NextNodeSituationsConditionGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class NextNodeSituations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NextNodeSituations& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionGroup, conditionGroup_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, NextNodeSituations& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionGroup, conditionGroup_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    NextNodeSituations() = default ;
    NextNodeSituations(const NextNodeSituations &) = default ;
    NextNodeSituations(NextNodeSituations &&) = default ;
    NextNodeSituations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NextNodeSituations() = default ;
    NextNodeSituations& operator=(const NextNodeSituations &) = default ;
    NextNodeSituations& operator=(NextNodeSituations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionGroup_ == nullptr
        && return this->type_ == nullptr; };
    // conditionGroup Field Functions 
    bool hasConditionGroup() const { return this->conditionGroup_ != nullptr;};
    void deleteConditionGroup() { this->conditionGroup_ = nullptr;};
    inline const vector<NextNodeSituationsConditionGroup> & conditionGroup() const { DARABONBA_PTR_GET_CONST(conditionGroup_, vector<NextNodeSituationsConditionGroup>) };
    inline vector<NextNodeSituationsConditionGroup> conditionGroup() { DARABONBA_PTR_GET(conditionGroup_, vector<NextNodeSituationsConditionGroup>) };
    inline NextNodeSituations& setConditionGroup(const vector<NextNodeSituationsConditionGroup> & conditionGroup) { DARABONBA_PTR_SET_VALUE(conditionGroup_, conditionGroup) };
    inline NextNodeSituations& setConditionGroup(vector<NextNodeSituationsConditionGroup> && conditionGroup) { DARABONBA_PTR_SET_RVALUE(conditionGroup_, conditionGroup) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NextNodeSituations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<NextNodeSituationsConditionGroup>> conditionGroup_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
