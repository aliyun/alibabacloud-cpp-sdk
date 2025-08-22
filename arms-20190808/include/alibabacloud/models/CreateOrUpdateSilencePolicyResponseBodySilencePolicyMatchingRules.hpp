// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYRESPONSEBODYSILENCEPOLICYMATCHINGRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYRESPONSEBODYSILENCEPOLICYMATCHINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
    };
    CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules() = default ;
    CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules(const CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules &) = default ;
    CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules(CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules &&) = default ;
    CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules() = default ;
    CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules& operator=(const CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules &) = default ;
    CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules& operator=(CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchingConditions_ != nullptr; };
    // matchingConditions Field Functions 
    bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
    void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
    inline const vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions> & matchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions>) };
    inline vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions> matchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions>) };
    inline CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules& setMatchingConditions(const vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
    inline CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRules& setMatchingConditions(vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


  protected:
    // A list of matching conditions.
    std::shared_ptr<vector<Models::CreateOrUpdateSilencePolicyResponseBodySilencePolicyMatchingRulesMatchingConditions>> matchingConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
