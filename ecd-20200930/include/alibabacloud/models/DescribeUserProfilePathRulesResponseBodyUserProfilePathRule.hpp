// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODYUSERPROFILEPATHRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODYUSERPROFILEPATHRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserProfilePathRulesResponseBodyUserProfilePathRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRule() = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRule(const DescribeUserProfilePathRulesResponseBodyUserProfilePathRule &) = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRule(DescribeUserProfilePathRulesResponseBodyUserProfilePathRule &&) = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserProfilePathRulesResponseBodyUserProfilePathRule() = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& operator=(const DescribeUserProfilePathRulesResponseBodyUserProfilePathRule &) = default ;
    DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& operator=(DescribeUserProfilePathRulesResponseBodyUserProfilePathRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && return this->rules_ == nullptr && return this->userProfileRuleType_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules>) };
    inline vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules>) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& setRules(const vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& setRules(vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // userProfileRuleType Field Functions 
    bool hasUserProfileRuleType() const { return this->userProfileRuleType_ != nullptr;};
    void deleteUserProfileRuleType() { this->userProfileRuleType_ = nullptr;};
    inline string userProfileRuleType() const { DARABONBA_PTR_GET_DEFAULT(userProfileRuleType_, "") };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRule& setUserProfileRuleType(string userProfileRuleType) { DARABONBA_PTR_SET_VALUE(userProfileRuleType_, userProfileRuleType) };


  protected:
    // The desktop group ID.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The directory rules.
    std::shared_ptr<vector<Models::DescribeUserProfilePathRulesResponseBodyUserProfilePathRuleRules>> rules_ = nullptr;
    // The directory type that is configured for the directory.
    // 
    // Valid values:
    // 
    // *   DesktopGroup
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Default
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> userProfileRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
