// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEXTNODESITUATIONS_HPP_
#define ALIBABACLOUD_MODELS_NEXTNODESITUATIONS_HPP_
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
    class ConditionGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConditionGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ConditionGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ConditionGroup() = default ;
      ConditionGroup(const ConditionGroup &) = default ;
      ConditionGroup(ConditionGroup &&) = default ;
      ConditionGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConditionGroup() = default ;
      ConditionGroup& operator=(const ConditionGroup &) = default ;
      ConditionGroup& operator=(ConditionGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->type_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<JudgeNodeMetaDesc> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<JudgeNodeMetaDesc>) };
      inline vector<JudgeNodeMetaDesc> getConditions() { DARABONBA_PTR_GET(conditions_, vector<JudgeNodeMetaDesc>) };
      inline ConditionGroup& setConditions(const vector<JudgeNodeMetaDesc> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline ConditionGroup& setConditions(vector<JudgeNodeMetaDesc> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ConditionGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<JudgeNodeMetaDesc>> conditions_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->conditionGroup_ == nullptr
        && this->type_ == nullptr; };
    // conditionGroup Field Functions 
    bool hasConditionGroup() const { return this->conditionGroup_ != nullptr;};
    void deleteConditionGroup() { this->conditionGroup_ = nullptr;};
    inline const vector<NextNodeSituations::ConditionGroup> & getConditionGroup() const { DARABONBA_PTR_GET_CONST(conditionGroup_, vector<NextNodeSituations::ConditionGroup>) };
    inline vector<NextNodeSituations::ConditionGroup> getConditionGroup() { DARABONBA_PTR_GET(conditionGroup_, vector<NextNodeSituations::ConditionGroup>) };
    inline NextNodeSituations& setConditionGroup(const vector<NextNodeSituations::ConditionGroup> & conditionGroup) { DARABONBA_PTR_SET_VALUE(conditionGroup_, conditionGroup) };
    inline NextNodeSituations& setConditionGroup(vector<NextNodeSituations::ConditionGroup> && conditionGroup) { DARABONBA_PTR_SET_RVALUE(conditionGroup_, conditionGroup) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NextNodeSituations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<NextNodeSituations::ConditionGroup>> conditionGroup_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
