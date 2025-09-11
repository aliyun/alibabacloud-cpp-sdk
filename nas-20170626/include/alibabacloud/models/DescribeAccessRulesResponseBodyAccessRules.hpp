// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODYACCESSRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODYACCESSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessRulesResponseBodyAccessRulesAccessRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessRulesResponseBodyAccessRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessRulesResponseBodyAccessRules& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRule, accessRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessRulesResponseBodyAccessRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRule, accessRule_);
    };
    DescribeAccessRulesResponseBodyAccessRules() = default ;
    DescribeAccessRulesResponseBodyAccessRules(const DescribeAccessRulesResponseBodyAccessRules &) = default ;
    DescribeAccessRulesResponseBodyAccessRules(DescribeAccessRulesResponseBodyAccessRules &&) = default ;
    DescribeAccessRulesResponseBodyAccessRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessRulesResponseBodyAccessRules() = default ;
    DescribeAccessRulesResponseBodyAccessRules& operator=(const DescribeAccessRulesResponseBodyAccessRules &) = default ;
    DescribeAccessRulesResponseBodyAccessRules& operator=(DescribeAccessRulesResponseBodyAccessRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRule_ != nullptr; };
    // accessRule Field Functions 
    bool hasAccessRule() const { return this->accessRule_ != nullptr;};
    void deleteAccessRule() { this->accessRule_ = nullptr;};
    inline const vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule> & accessRule() const { DARABONBA_PTR_GET_CONST(accessRule_, vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule>) };
    inline vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule> accessRule() { DARABONBA_PTR_GET(accessRule_, vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule>) };
    inline DescribeAccessRulesResponseBodyAccessRules& setAccessRule(const vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule> & accessRule) { DARABONBA_PTR_SET_VALUE(accessRule_, accessRule) };
    inline DescribeAccessRulesResponseBodyAccessRules& setAccessRule(vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule> && accessRule) { DARABONBA_PTR_SET_RVALUE(accessRule_, accessRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessRulesResponseBodyAccessRulesAccessRule>> accessRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
