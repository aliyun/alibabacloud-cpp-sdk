// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUESTUSERPROFILEPATHRULE_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUESTUSERPROFILEPATHRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath.hpp>
#include <vector>
#include <alibabacloud/models/SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetUserProfilePathRulesRequestUserProfilePathRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserProfilePathRulesRequestUserProfilePathRule& obj) { 
      DARABONBA_PTR_TO_JSON(BlackPath, blackPath_);
      DARABONBA_PTR_TO_JSON(WhitePaths, whitePaths_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserProfilePathRulesRequestUserProfilePathRule& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackPath, blackPath_);
      DARABONBA_PTR_FROM_JSON(WhitePaths, whitePaths_);
    };
    SetUserProfilePathRulesRequestUserProfilePathRule() = default ;
    SetUserProfilePathRulesRequestUserProfilePathRule(const SetUserProfilePathRulesRequestUserProfilePathRule &) = default ;
    SetUserProfilePathRulesRequestUserProfilePathRule(SetUserProfilePathRulesRequestUserProfilePathRule &&) = default ;
    SetUserProfilePathRulesRequestUserProfilePathRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserProfilePathRulesRequestUserProfilePathRule() = default ;
    SetUserProfilePathRulesRequestUserProfilePathRule& operator=(const SetUserProfilePathRulesRequestUserProfilePathRule &) = default ;
    SetUserProfilePathRulesRequestUserProfilePathRule& operator=(SetUserProfilePathRulesRequestUserProfilePathRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackPath_ != nullptr
        && this->whitePaths_ != nullptr; };
    // blackPath Field Functions 
    bool hasBlackPath() const { return this->blackPath_ != nullptr;};
    void deleteBlackPath() { this->blackPath_ = nullptr;};
    inline const Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath & blackPath() const { DARABONBA_PTR_GET_CONST(blackPath_, Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath) };
    inline Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath blackPath() { DARABONBA_PTR_GET(blackPath_, Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath) };
    inline SetUserProfilePathRulesRequestUserProfilePathRule& setBlackPath(const Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath & blackPath) { DARABONBA_PTR_SET_VALUE(blackPath_, blackPath) };
    inline SetUserProfilePathRulesRequestUserProfilePathRule& setBlackPath(Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath && blackPath) { DARABONBA_PTR_SET_RVALUE(blackPath_, blackPath) };


    // whitePaths Field Functions 
    bool hasWhitePaths() const { return this->whitePaths_ != nullptr;};
    void deleteWhitePaths() { this->whitePaths_ = nullptr;};
    inline const vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths> & whitePaths() const { DARABONBA_PTR_GET_CONST(whitePaths_, vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths>) };
    inline vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths> whitePaths() { DARABONBA_PTR_GET(whitePaths_, vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths>) };
    inline SetUserProfilePathRulesRequestUserProfilePathRule& setWhitePaths(const vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths> & whitePaths) { DARABONBA_PTR_SET_VALUE(whitePaths_, whitePaths) };
    inline SetUserProfilePathRulesRequestUserProfilePathRule& setWhitePaths(vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths> && whitePaths) { DARABONBA_PTR_SET_RVALUE(whitePaths_, whitePaths) };


  protected:
    // The directory in the blacklist.
    std::shared_ptr<Models::SetUserProfilePathRulesRequestUserProfilePathRuleBlackPath> blackPath_ = nullptr;
    // The directories that you want to configure in the whitelist.
    std::shared_ptr<vector<Models::SetUserProfilePathRulesRequestUserProfilePathRuleWhitePaths>> whitePaths_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
