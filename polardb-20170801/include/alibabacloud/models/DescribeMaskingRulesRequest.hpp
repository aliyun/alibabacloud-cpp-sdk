// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeMaskingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMaskingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(InterfaceVersion, interfaceVersion_);
      DARABONBA_PTR_TO_JSON(RuleNameList, ruleNameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMaskingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(InterfaceVersion, interfaceVersion_);
      DARABONBA_PTR_FROM_JSON(RuleNameList, ruleNameList_);
    };
    DescribeMaskingRulesRequest() = default ;
    DescribeMaskingRulesRequest(const DescribeMaskingRulesRequest &) = default ;
    DescribeMaskingRulesRequest(DescribeMaskingRulesRequest &&) = default ;
    DescribeMaskingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMaskingRulesRequest() = default ;
    DescribeMaskingRulesRequest& operator=(const DescribeMaskingRulesRequest &) = default ;
    DescribeMaskingRulesRequest& operator=(DescribeMaskingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->interfaceVersion_ != nullptr && this->ruleNameList_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeMaskingRulesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // interfaceVersion Field Functions 
    bool hasInterfaceVersion() const { return this->interfaceVersion_ != nullptr;};
    void deleteInterfaceVersion() { this->interfaceVersion_ = nullptr;};
    inline string interfaceVersion() const { DARABONBA_PTR_GET_DEFAULT(interfaceVersion_, "") };
    inline DescribeMaskingRulesRequest& setInterfaceVersion(string interfaceVersion) { DARABONBA_PTR_SET_VALUE(interfaceVersion_, interfaceVersion) };


    // ruleNameList Field Functions 
    bool hasRuleNameList() const { return this->ruleNameList_ != nullptr;};
    void deleteRuleNameList() { this->ruleNameList_ = nullptr;};
    inline string ruleNameList() const { DARABONBA_PTR_GET_DEFAULT(ruleNameList_, "") };
    inline DescribeMaskingRulesRequest& setRuleNameList(string ruleNameList) { DARABONBA_PTR_SET_VALUE(ruleNameList_, ruleNameList) };


  protected:
    // The ID of the cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of the clusters that belong to your Alibaba Cloud account, such as cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Queries data masking rules or encryption rules. Valid values:
    // 
    // v1: queries data masking rules. v2: queries data encryption rules.
    std::shared_ptr<string> interfaceVersion_ = nullptr;
    // The name of the masking rule.
    std::shared_ptr<string> ruleNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
