// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODYNOTIFICATIONPOLICYMATCHINGRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODYNOTIFICATIONPOLICYMATCHINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
    };
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules() = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules &) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules &&) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules() = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules& operator=(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules &) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules& operator=(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchingConditions_ != nullptr; };
    // matchingConditions Field Functions 
    bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
    void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
    inline const vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions> & matchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions>) };
    inline vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions> matchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions>) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules& setMatchingConditions(const vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules& setMatchingConditions(vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


  protected:
    // The matching conditions.
    std::shared_ptr<vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRulesMatchingConditions>> matchingConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
