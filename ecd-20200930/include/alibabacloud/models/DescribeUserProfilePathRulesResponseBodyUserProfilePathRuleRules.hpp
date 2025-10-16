// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODYUSERPROFILEPATHRULERULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODYUSERPROFILEPATHRULERULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& obj) { 
      DARABONBA_PTR_TO_JSON(BlackPath, blackPath_);
      DARABONBA_PTR_TO_JSON(WhitePaths, whitePaths_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackPath, blackPath_);
      DARABONBA_PTR_FROM_JSON(WhitePaths, whitePaths_);
    };
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules() = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules(const DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules &) = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules(DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules &&) = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules() = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& operator=(const DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules &) = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& operator=(DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackPath_ == nullptr
        && return this->whitePaths_ == nullptr; };
    // blackPath Field Functions 
    bool hasBlackPath() const { return this->blackPath_ != nullptr;};
    void deleteBlackPath() { this->blackPath_ = nullptr;};
    inline const Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath & blackPath() const { DARABONBA_PTR_GET_CONST(blackPath_, Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath) };
    inline Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath blackPath() { DARABONBA_PTR_GET(blackPath_, Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& setBlackPath(const Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath & blackPath) { DARABONBA_PTR_SET_VALUE(blackPath_, blackPath) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& setBlackPath(Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath && blackPath) { DARABONBA_PTR_SET_RVALUE(blackPath_, blackPath) };


    // whitePaths Field Functions 
    bool hasWhitePaths() const { return this->whitePaths_ != nullptr;};
    void deleteWhitePaths() { this->whitePaths_ = nullptr;};
    inline const vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths> & whitePaths() const { DARABONBA_PTR_GET_CONST(whitePaths_, vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths>) };
    inline vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths> whitePaths() { DARABONBA_PTR_GET(whitePaths_, vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths>) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& setWhitePaths(const vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths> & whitePaths) { DARABONBA_PTR_SET_VALUE(whitePaths_, whitePaths) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules& setWhitePaths(vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths> && whitePaths) { DARABONBA_PTR_SET_RVALUE(whitePaths_, whitePaths) };


  protected:
    // The blacklist that is configured.
    std::shared_ptr<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesBlackPath> blackPath_ = nullptr;
    // The directories in the whitelist.
    std::shared_ptr<vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRulesWhitePaths>> whitePaths_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
