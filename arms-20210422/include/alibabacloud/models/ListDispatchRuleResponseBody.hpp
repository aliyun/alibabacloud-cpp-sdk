// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPATCHRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPATCHRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListDispatchRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDispatchRuleResponseBody() = default ;
    ListDispatchRuleResponseBody(const ListDispatchRuleResponseBody &) = default ;
    ListDispatchRuleResponseBody(ListDispatchRuleResponseBody &&) = default ;
    ListDispatchRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDispatchRuleResponseBody() = default ;
    ListDispatchRuleResponseBody& operator=(const ListDispatchRuleResponseBody &) = default ;
    ListDispatchRuleResponseBody& operator=(ListDispatchRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DispatchRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DispatchRules& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, DispatchRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      DispatchRules() = default ;
      DispatchRules(const DispatchRules &) = default ;
      DispatchRules(DispatchRules &&) = default ;
      DispatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DispatchRules() = default ;
      DispatchRules& operator=(const DispatchRules &) = default ;
      DispatchRules& operator=(DispatchRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleId_ == nullptr && this->state_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DispatchRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline DispatchRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline DispatchRules& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->dispatchRules_ == nullptr
        && this->requestId_ == nullptr; };
    // dispatchRules Field Functions 
    bool hasDispatchRules() const { return this->dispatchRules_ != nullptr;};
    void deleteDispatchRules() { this->dispatchRules_ = nullptr;};
    inline const vector<ListDispatchRuleResponseBody::DispatchRules> & getDispatchRules() const { DARABONBA_PTR_GET_CONST(dispatchRules_, vector<ListDispatchRuleResponseBody::DispatchRules>) };
    inline vector<ListDispatchRuleResponseBody::DispatchRules> getDispatchRules() { DARABONBA_PTR_GET(dispatchRules_, vector<ListDispatchRuleResponseBody::DispatchRules>) };
    inline ListDispatchRuleResponseBody& setDispatchRules(const vector<ListDispatchRuleResponseBody::DispatchRules> & dispatchRules) { DARABONBA_PTR_SET_VALUE(dispatchRules_, dispatchRules) };
    inline ListDispatchRuleResponseBody& setDispatchRules(vector<ListDispatchRuleResponseBody::DispatchRules> && dispatchRules) { DARABONBA_PTR_SET_RVALUE(dispatchRules_, dispatchRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDispatchRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDispatchRuleResponseBody::DispatchRules>> dispatchRules_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
