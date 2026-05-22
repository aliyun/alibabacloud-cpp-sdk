// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
#include <alibabacloud/models/WafBatchRuleShared.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafPhasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafPhasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Phases, phases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafPhasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Phases, phases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListWafPhasesResponseBody() = default ;
    ListWafPhasesResponseBody(const ListWafPhasesResponseBody &) = default ;
    ListWafPhasesResponseBody(ListWafPhasesResponseBody &&) = default ;
    ListWafPhasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafPhasesResponseBody() = default ;
    ListWafPhasesResponseBody& operator=(const ListWafPhasesResponseBody &) = default ;
    ListWafPhasesResponseBody& operator=(ListWafPhasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Phases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Phases& obj) { 
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(Rulesets, rulesets_);
      };
      friend void from_json(const Darabonba::Json& j, Phases& obj) { 
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(Rulesets, rulesets_);
      };
      Phases() = default ;
      Phases(const Phases &) = default ;
      Phases(Phases &&) = default ;
      Phases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Phases() = default ;
      Phases& operator=(const Phases &) = default ;
      Phases& operator=(Phases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rulesets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rulesets& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(Shared, shared_);
        };
        friend void from_json(const Darabonba::Json& j, Rulesets& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(Shared, shared_);
        };
        Rulesets() = default ;
        Rulesets(const Rulesets &) = default ;
        Rulesets(Rulesets &&) = default ;
        Rulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rulesets() = default ;
        Rulesets& operator=(const Rulesets &) = default ;
        Rulesets& operator=(Rulesets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->rules_ == nullptr && this->shared_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Rulesets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rulesets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<WafRuleConfig> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<WafRuleConfig>) };
        inline vector<WafRuleConfig> getRules() { DARABONBA_PTR_GET(rules_, vector<WafRuleConfig>) };
        inline Rulesets& setRules(const vector<WafRuleConfig> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline Rulesets& setRules(vector<WafRuleConfig> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // shared Field Functions 
        bool hasShared() const { return this->shared_ != nullptr;};
        void deleteShared() { this->shared_ = nullptr;};
        inline const WafBatchRuleShared & getShared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
        inline WafBatchRuleShared getShared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
        inline Rulesets& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
        inline Rulesets& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


      protected:
        // ID of the WAF ruleset.
        shared_ptr<int64_t> id_ {};
        // Name of the WAF ruleset.
        shared_ptr<string> name_ {};
        // List of rule configurations in the WAF ruleset.
        shared_ptr<vector<WafRuleConfig>> rules_ {};
        // Shared configuration for rules in the WAF ruleset.
        shared_ptr<WafBatchRuleShared> shared_ {};
      };

      virtual bool empty() const override { return this->phase_ == nullptr
        && this->rulesets_ == nullptr; };
      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Phases& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // rulesets Field Functions 
      bool hasRulesets() const { return this->rulesets_ != nullptr;};
      void deleteRulesets() { this->rulesets_ = nullptr;};
      inline const vector<Phases::Rulesets> & getRulesets() const { DARABONBA_PTR_GET_CONST(rulesets_, vector<Phases::Rulesets>) };
      inline vector<Phases::Rulesets> getRulesets() { DARABONBA_PTR_GET(rulesets_, vector<Phases::Rulesets>) };
      inline Phases& setRulesets(const vector<Phases::Rulesets> & rulesets) { DARABONBA_PTR_SET_VALUE(rulesets_, rulesets) };
      inline Phases& setRulesets(vector<Phases::Rulesets> && rulesets) { DARABONBA_PTR_SET_RVALUE(rulesets_, rulesets) };


    protected:
      // Name of the WAF operation phase.
      shared_ptr<string> phase_ {};
      // List of WAF rulesets.
      shared_ptr<vector<Phases::Rulesets>> rulesets_ {};
    };

    virtual bool empty() const override { return this->phases_ == nullptr
        && this->requestId_ == nullptr; };
    // phases Field Functions 
    bool hasPhases() const { return this->phases_ != nullptr;};
    void deletePhases() { this->phases_ = nullptr;};
    inline const vector<ListWafPhasesResponseBody::Phases> & getPhases() const { DARABONBA_PTR_GET_CONST(phases_, vector<ListWafPhasesResponseBody::Phases>) };
    inline vector<ListWafPhasesResponseBody::Phases> getPhases() { DARABONBA_PTR_GET(phases_, vector<ListWafPhasesResponseBody::Phases>) };
    inline ListWafPhasesResponseBody& setPhases(const vector<ListWafPhasesResponseBody::Phases> & phases) { DARABONBA_PTR_SET_VALUE(phases_, phases) };
    inline ListWafPhasesResponseBody& setPhases(vector<ListWafPhasesResponseBody::Phases> && phases) { DARABONBA_PTR_SET_RVALUE(phases_, phases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafPhasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of WAF operation phases.
    shared_ptr<vector<ListWafPhasesResponseBody::Phases>> phases_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
