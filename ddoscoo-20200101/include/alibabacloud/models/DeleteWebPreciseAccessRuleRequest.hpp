// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBPRECISEACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBPRECISEACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeleteWebPreciseAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebPreciseAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebPreciseAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
    };
    DeleteWebPreciseAccessRuleRequest() = default ;
    DeleteWebPreciseAccessRuleRequest(const DeleteWebPreciseAccessRuleRequest &) = default ;
    DeleteWebPreciseAccessRuleRequest(DeleteWebPreciseAccessRuleRequest &&) = default ;
    DeleteWebPreciseAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebPreciseAccessRuleRequest() = default ;
    DeleteWebPreciseAccessRuleRequest& operator=(const DeleteWebPreciseAccessRuleRequest &) = default ;
    DeleteWebPreciseAccessRuleRequest& operator=(DeleteWebPreciseAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->resourceGroupId_ == nullptr && this->ruleNames_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DeleteWebPreciseAccessRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DeleteWebPreciseAccessRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<string> & getRuleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
    inline vector<string> getRuleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
    inline DeleteWebPreciseAccessRuleRequest& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline DeleteWebPreciseAccessRuleRequest& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // An array that consists of the names of rules to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> ruleNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
