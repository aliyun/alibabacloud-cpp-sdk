// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEXTNODESITUATIONSCONDITIONGROUP_HPP_
#define ALIBABACLOUD_MODELS_NEXTNODESITUATIONSCONDITIONGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/JudgeNodeMetaDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class NextNodeSituationsConditionGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NextNodeSituationsConditionGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, NextNodeSituationsConditionGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    NextNodeSituationsConditionGroup() = default ;
    NextNodeSituationsConditionGroup(const NextNodeSituationsConditionGroup &) = default ;
    NextNodeSituationsConditionGroup(NextNodeSituationsConditionGroup &&) = default ;
    NextNodeSituationsConditionGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NextNodeSituationsConditionGroup() = default ;
    NextNodeSituationsConditionGroup& operator=(const NextNodeSituationsConditionGroup &) = default ;
    NextNodeSituationsConditionGroup& operator=(NextNodeSituationsConditionGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->type_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::JudgeNodeMetaDesc> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::JudgeNodeMetaDesc>) };
    inline vector<Models::JudgeNodeMetaDesc> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::JudgeNodeMetaDesc>) };
    inline NextNodeSituationsConditionGroup& setConditions(const vector<Models::JudgeNodeMetaDesc> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline NextNodeSituationsConditionGroup& setConditions(vector<Models::JudgeNodeMetaDesc> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NextNodeSituationsConditionGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::JudgeNodeMetaDesc>> conditions_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
