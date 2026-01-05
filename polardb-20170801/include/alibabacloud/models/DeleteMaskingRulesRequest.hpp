// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMASKINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMASKINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteMaskingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMaskingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(InterfaceVersion, interfaceVersion_);
      DARABONBA_PTR_TO_JSON(RuleNameList, ruleNameList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMaskingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(InterfaceVersion, interfaceVersion_);
      DARABONBA_PTR_FROM_JSON(RuleNameList, ruleNameList_);
    };
    DeleteMaskingRulesRequest() = default ;
    DeleteMaskingRulesRequest(const DeleteMaskingRulesRequest &) = default ;
    DeleteMaskingRulesRequest(DeleteMaskingRulesRequest &&) = default ;
    DeleteMaskingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMaskingRulesRequest() = default ;
    DeleteMaskingRulesRequest& operator=(const DeleteMaskingRulesRequest &) = default ;
    DeleteMaskingRulesRequest& operator=(DeleteMaskingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->interfaceVersion_ == nullptr && this->ruleNameList_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteMaskingRulesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // interfaceVersion Field Functions 
    bool hasInterfaceVersion() const { return this->interfaceVersion_ != nullptr;};
    void deleteInterfaceVersion() { this->interfaceVersion_ = nullptr;};
    inline string getInterfaceVersion() const { DARABONBA_PTR_GET_DEFAULT(interfaceVersion_, "") };
    inline DeleteMaskingRulesRequest& setInterfaceVersion(string interfaceVersion) { DARABONBA_PTR_SET_VALUE(interfaceVersion_, interfaceVersion) };


    // ruleNameList Field Functions 
    bool hasRuleNameList() const { return this->ruleNameList_ != nullptr;};
    void deleteRuleNameList() { this->ruleNameList_ = nullptr;};
    inline string getRuleNameList() const { DARABONBA_PTR_GET_DEFAULT(ruleNameList_, "") };
    inline DeleteMaskingRulesRequest& setRuleNameList(string ruleNameList) { DARABONBA_PTR_SET_VALUE(ruleNameList_, ruleNameList) };


  protected:
    // The ID of the cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of the clusters that belong to your Alibaba Cloud account, such as cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Deletes data masking or encryption rules. Valid values:
    // 
    // v1: deletes data masking rules. v2: deletes data encryption rules.
    shared_ptr<string> interfaceVersion_ {};
    // The name of the masking rule. You can specify multiple masking rules at a time. Separate the masking rules with commas (,).
    // 
    // > You can call the [DescribeMaskingRules](https://help.aliyun.com/document_detail/212573.html) operation to query details of all the masking rules for a specified cluster, such as the names of the masking rules.
    // 
    // This parameter is required.
    shared_ptr<string> ruleNameList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
