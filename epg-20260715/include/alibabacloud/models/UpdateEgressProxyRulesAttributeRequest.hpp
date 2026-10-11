// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYRULESATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYRULESATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class UpdateEgressProxyRulesAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEgressProxyRulesAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRules, egressProxyRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEgressProxyRulesAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRules, egressProxyRules_);
    };
    UpdateEgressProxyRulesAttributeRequest() = default ;
    UpdateEgressProxyRulesAttributeRequest(const UpdateEgressProxyRulesAttributeRequest &) = default ;
    UpdateEgressProxyRulesAttributeRequest(UpdateEgressProxyRulesAttributeRequest &&) = default ;
    UpdateEgressProxyRulesAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEgressProxyRulesAttributeRequest() = default ;
    UpdateEgressProxyRulesAttributeRequest& operator=(const UpdateEgressProxyRulesAttributeRequest &) = default ;
    UpdateEgressProxyRulesAttributeRequest& operator=(UpdateEgressProxyRulesAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyRules& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AddConditions, addConditions_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
        DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RemoveConditions, removeConditions_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AddConditions, addConditions_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyRuleName, egressProxyRuleName_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RemoveConditions, removeConditions_);
      };
      EgressProxyRules() = default ;
      EgressProxyRules(const EgressProxyRules &) = default ;
      EgressProxyRules(EgressProxyRules &&) = default ;
      EgressProxyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyRules() = default ;
      EgressProxyRules& operator=(const EgressProxyRules &) = default ;
      EgressProxyRules& operator=(EgressProxyRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemoveConditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemoveConditions& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
          DARABONBA_PTR_TO_JSON(ConditionOperator, conditionOperator_);
          DARABONBA_PTR_TO_JSON(ConditionValues, conditionValues_);
        };
        friend void from_json(const Darabonba::Json& j, RemoveConditions& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
          DARABONBA_PTR_FROM_JSON(ConditionOperator, conditionOperator_);
          DARABONBA_PTR_FROM_JSON(ConditionValues, conditionValues_);
        };
        RemoveConditions() = default ;
        RemoveConditions(const RemoveConditions &) = default ;
        RemoveConditions(RemoveConditions &&) = default ;
        RemoveConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemoveConditions() = default ;
        RemoveConditions& operator=(const RemoveConditions &) = default ;
        RemoveConditions& operator=(RemoveConditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionOperator_ == nullptr && this->conditionValues_ == nullptr; };
        // conditionKey Field Functions 
        bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
        void deleteConditionKey() { this->conditionKey_ = nullptr;};
        inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
        inline RemoveConditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


        // conditionOperator Field Functions 
        bool hasConditionOperator() const { return this->conditionOperator_ != nullptr;};
        void deleteConditionOperator() { this->conditionOperator_ = nullptr;};
        inline string getConditionOperator() const { DARABONBA_PTR_GET_DEFAULT(conditionOperator_, "") };
        inline RemoveConditions& setConditionOperator(string conditionOperator) { DARABONBA_PTR_SET_VALUE(conditionOperator_, conditionOperator) };


        // conditionValues Field Functions 
        bool hasConditionValues() const { return this->conditionValues_ != nullptr;};
        void deleteConditionValues() { this->conditionValues_ = nullptr;};
        inline const vector<string> & getConditionValues() const { DARABONBA_PTR_GET_CONST(conditionValues_, vector<string>) };
        inline vector<string> getConditionValues() { DARABONBA_PTR_GET(conditionValues_, vector<string>) };
        inline RemoveConditions& setConditionValues(const vector<string> & conditionValues) { DARABONBA_PTR_SET_VALUE(conditionValues_, conditionValues) };
        inline RemoveConditions& setConditionValues(vector<string> && conditionValues) { DARABONBA_PTR_SET_RVALUE(conditionValues_, conditionValues) };


      protected:
        // This parameter is required.
        shared_ptr<string> conditionKey_ {};
        // This parameter is required.
        shared_ptr<string> conditionOperator_ {};
        // This parameter is required.
        shared_ptr<vector<string>> conditionValues_ {};
      };

      class AddConditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddConditions& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
          DARABONBA_PTR_TO_JSON(ConditionOperator, conditionOperator_);
          DARABONBA_PTR_TO_JSON(ConditionValues, conditionValues_);
        };
        friend void from_json(const Darabonba::Json& j, AddConditions& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
          DARABONBA_PTR_FROM_JSON(ConditionOperator, conditionOperator_);
          DARABONBA_PTR_FROM_JSON(ConditionValues, conditionValues_);
        };
        AddConditions() = default ;
        AddConditions(const AddConditions &) = default ;
        AddConditions(AddConditions &&) = default ;
        AddConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddConditions() = default ;
        AddConditions& operator=(const AddConditions &) = default ;
        AddConditions& operator=(AddConditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionOperator_ == nullptr && this->conditionValues_ == nullptr; };
        // conditionKey Field Functions 
        bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
        void deleteConditionKey() { this->conditionKey_ = nullptr;};
        inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
        inline AddConditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


        // conditionOperator Field Functions 
        bool hasConditionOperator() const { return this->conditionOperator_ != nullptr;};
        void deleteConditionOperator() { this->conditionOperator_ = nullptr;};
        inline string getConditionOperator() const { DARABONBA_PTR_GET_DEFAULT(conditionOperator_, "") };
        inline AddConditions& setConditionOperator(string conditionOperator) { DARABONBA_PTR_SET_VALUE(conditionOperator_, conditionOperator) };


        // conditionValues Field Functions 
        bool hasConditionValues() const { return this->conditionValues_ != nullptr;};
        void deleteConditionValues() { this->conditionValues_ = nullptr;};
        inline const vector<string> & getConditionValues() const { DARABONBA_PTR_GET_CONST(conditionValues_, vector<string>) };
        inline vector<string> getConditionValues() { DARABONBA_PTR_GET(conditionValues_, vector<string>) };
        inline AddConditions& setConditionValues(const vector<string> & conditionValues) { DARABONBA_PTR_SET_VALUE(conditionValues_, conditionValues) };
        inline AddConditions& setConditionValues(vector<string> && conditionValues) { DARABONBA_PTR_SET_RVALUE(conditionValues_, conditionValues) };


      protected:
        // This parameter is required.
        shared_ptr<string> conditionKey_ {};
        // This parameter is required.
        shared_ptr<string> conditionOperator_ {};
        // This parameter is required.
        shared_ptr<vector<string>> conditionValues_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->addConditions_ == nullptr && this->description_ == nullptr && this->egressProxyRuleId_ == nullptr && this->egressProxyRuleName_ == nullptr && this->priority_ == nullptr
        && this->removeConditions_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline EgressProxyRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // addConditions Field Functions 
      bool hasAddConditions() const { return this->addConditions_ != nullptr;};
      void deleteAddConditions() { this->addConditions_ = nullptr;};
      inline const vector<EgressProxyRules::AddConditions> & getAddConditions() const { DARABONBA_PTR_GET_CONST(addConditions_, vector<EgressProxyRules::AddConditions>) };
      inline vector<EgressProxyRules::AddConditions> getAddConditions() { DARABONBA_PTR_GET(addConditions_, vector<EgressProxyRules::AddConditions>) };
      inline EgressProxyRules& setAddConditions(const vector<EgressProxyRules::AddConditions> & addConditions) { DARABONBA_PTR_SET_VALUE(addConditions_, addConditions) };
      inline EgressProxyRules& setAddConditions(vector<EgressProxyRules::AddConditions> && addConditions) { DARABONBA_PTR_SET_RVALUE(addConditions_, addConditions) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EgressProxyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // egressProxyRuleId Field Functions 
      bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
      void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
      inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
      inline EgressProxyRules& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


      // egressProxyRuleName Field Functions 
      bool hasEgressProxyRuleName() const { return this->egressProxyRuleName_ != nullptr;};
      void deleteEgressProxyRuleName() { this->egressProxyRuleName_ = nullptr;};
      inline string getEgressProxyRuleName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleName_, "") };
      inline EgressProxyRules& setEgressProxyRuleName(string egressProxyRuleName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleName_, egressProxyRuleName) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline EgressProxyRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // removeConditions Field Functions 
      bool hasRemoveConditions() const { return this->removeConditions_ != nullptr;};
      void deleteRemoveConditions() { this->removeConditions_ = nullptr;};
      inline const vector<EgressProxyRules::RemoveConditions> & getRemoveConditions() const { DARABONBA_PTR_GET_CONST(removeConditions_, vector<EgressProxyRules::RemoveConditions>) };
      inline vector<EgressProxyRules::RemoveConditions> getRemoveConditions() { DARABONBA_PTR_GET(removeConditions_, vector<EgressProxyRules::RemoveConditions>) };
      inline EgressProxyRules& setRemoveConditions(const vector<EgressProxyRules::RemoveConditions> & removeConditions) { DARABONBA_PTR_SET_VALUE(removeConditions_, removeConditions) };
      inline EgressProxyRules& setRemoveConditions(vector<EgressProxyRules::RemoveConditions> && removeConditions) { DARABONBA_PTR_SET_RVALUE(removeConditions_, removeConditions) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<vector<EgressProxyRules::AddConditions>> addConditions_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> egressProxyRuleId_ {};
      shared_ptr<string> egressProxyRuleName_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<vector<EgressProxyRules::RemoveConditions>> removeConditions_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyRuleGroupId_ == nullptr && this->egressProxyRules_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEgressProxyRulesAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEgressProxyRulesAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyRuleGroupId Field Functions 
    bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
    void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
    inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
    inline UpdateEgressProxyRulesAttributeRequest& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


    // egressProxyRules Field Functions 
    bool hasEgressProxyRules() const { return this->egressProxyRules_ != nullptr;};
    void deleteEgressProxyRules() { this->egressProxyRules_ = nullptr;};
    inline const vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules> & getEgressProxyRules() const { DARABONBA_PTR_GET_CONST(egressProxyRules_, vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules>) };
    inline vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules> getEgressProxyRules() { DARABONBA_PTR_GET(egressProxyRules_, vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules>) };
    inline UpdateEgressProxyRulesAttributeRequest& setEgressProxyRules(const vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules> & egressProxyRules) { DARABONBA_PTR_SET_VALUE(egressProxyRules_, egressProxyRules) };
    inline UpdateEgressProxyRulesAttributeRequest& setEgressProxyRules(vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules> && egressProxyRules) { DARABONBA_PTR_SET_RVALUE(egressProxyRules_, egressProxyRules) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyRuleGroupId_ {};
    // This parameter is required.
    shared_ptr<vector<UpdateEgressProxyRulesAttributeRequest::EgressProxyRules>> egressProxyRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
