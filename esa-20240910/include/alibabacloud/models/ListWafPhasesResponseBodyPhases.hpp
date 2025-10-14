// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODYPHASES_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODYPHASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafPhasesResponseBodyPhasesRulesets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafPhasesResponseBodyPhases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafPhasesResponseBodyPhases& obj) { 
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Rulesets, rulesets_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafPhasesResponseBodyPhases& obj) { 
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Rulesets, rulesets_);
    };
    ListWafPhasesResponseBodyPhases() = default ;
    ListWafPhasesResponseBodyPhases(const ListWafPhasesResponseBodyPhases &) = default ;
    ListWafPhasesResponseBodyPhases(ListWafPhasesResponseBodyPhases &&) = default ;
    ListWafPhasesResponseBodyPhases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafPhasesResponseBodyPhases() = default ;
    ListWafPhasesResponseBodyPhases& operator=(const ListWafPhasesResponseBodyPhases &) = default ;
    ListWafPhasesResponseBodyPhases& operator=(ListWafPhasesResponseBodyPhases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phase_ == nullptr
        && return this->rulesets_ == nullptr; };
    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafPhasesResponseBodyPhases& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesets Field Functions 
    bool hasRulesets() const { return this->rulesets_ != nullptr;};
    void deleteRulesets() { this->rulesets_ = nullptr;};
    inline const vector<Models::ListWafPhasesResponseBodyPhasesRulesets> & rulesets() const { DARABONBA_PTR_GET_CONST(rulesets_, vector<Models::ListWafPhasesResponseBodyPhasesRulesets>) };
    inline vector<Models::ListWafPhasesResponseBodyPhasesRulesets> rulesets() { DARABONBA_PTR_GET(rulesets_, vector<Models::ListWafPhasesResponseBodyPhasesRulesets>) };
    inline ListWafPhasesResponseBodyPhases& setRulesets(const vector<Models::ListWafPhasesResponseBodyPhasesRulesets> & rulesets) { DARABONBA_PTR_SET_VALUE(rulesets_, rulesets) };
    inline ListWafPhasesResponseBodyPhases& setRulesets(vector<Models::ListWafPhasesResponseBodyPhasesRulesets> && rulesets) { DARABONBA_PTR_SET_RVALUE(rulesets_, rulesets) };


  protected:
    // Name of the WAF operation phase.
    std::shared_ptr<string> phase_ = nullptr;
    // List of WAF rulesets.
    std::shared_ptr<vector<Models::ListWafPhasesResponseBodyPhasesRulesets>> rulesets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
