// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODYPRECISEACCESSCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODYPRECISEACCESSCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList() = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList(const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList &) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList(DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList &&) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList() = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& operator=(const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList &) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& operator=(DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->ruleList_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList>) };
    inline vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList>) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& setRuleList(const vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList& setRuleList(vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The scheduling rules.
    std::shared_ptr<vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
