// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODYCONDITIONALACCESSPOLICYCONDITIONSCONFIGAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODYCONDITIONALACCESSPOLICYCONDITIONSCONFIGAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeApplications, excludeApplications_);
      DARABONBA_PTR_TO_JSON(IncludeApplications, includeApplications_);
    };
    friend void from_json(const Darabonba::Json& j, GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeApplications, excludeApplications_);
      DARABONBA_PTR_FROM_JSON(IncludeApplications, includeApplications_);
    };
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications() = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications &) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications &&) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications() = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& operator=(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications &) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& operator=(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeApplications_ == nullptr
        && return this->includeApplications_ == nullptr; };
    // excludeApplications Field Functions 
    bool hasExcludeApplications() const { return this->excludeApplications_ != nullptr;};
    void deleteExcludeApplications() { this->excludeApplications_ = nullptr;};
    inline const vector<string> & excludeApplications() const { DARABONBA_PTR_GET_CONST(excludeApplications_, vector<string>) };
    inline vector<string> excludeApplications() { DARABONBA_PTR_GET(excludeApplications_, vector<string>) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& setExcludeApplications(const vector<string> & excludeApplications) { DARABONBA_PTR_SET_VALUE(excludeApplications_, excludeApplications) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& setExcludeApplications(vector<string> && excludeApplications) { DARABONBA_PTR_SET_RVALUE(excludeApplications_, excludeApplications) };


    // includeApplications Field Functions 
    bool hasIncludeApplications() const { return this->includeApplications_ != nullptr;};
    void deleteIncludeApplications() { this->includeApplications_ = nullptr;};
    inline const vector<string> & includeApplications() const { DARABONBA_PTR_GET_CONST(includeApplications_, vector<string>) };
    inline vector<string> includeApplications() { DARABONBA_PTR_GET(includeApplications_, vector<string>) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& setIncludeApplications(const vector<string> & includeApplications) { DARABONBA_PTR_SET_VALUE(includeApplications_, includeApplications) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications& setIncludeApplications(vector<string> && includeApplications) { DARABONBA_PTR_SET_RVALUE(includeApplications_, includeApplications) };


  protected:
    // Excluded applications
    std::shared_ptr<vector<string>> excludeApplications_ = nullptr;
    // Selected applications
    std::shared_ptr<vector<string>> includeApplications_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
