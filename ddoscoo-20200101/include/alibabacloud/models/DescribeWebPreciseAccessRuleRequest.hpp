// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULEREQUEST_HPP_
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
  class DescribeWebPreciseAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPreciseAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPreciseAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeWebPreciseAccessRuleRequest() = default ;
    DescribeWebPreciseAccessRuleRequest(const DescribeWebPreciseAccessRuleRequest &) = default ;
    DescribeWebPreciseAccessRuleRequest(DescribeWebPreciseAccessRuleRequest &&) = default ;
    DescribeWebPreciseAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPreciseAccessRuleRequest() = default ;
    DescribeWebPreciseAccessRuleRequest& operator=(const DescribeWebPreciseAccessRuleRequest &) = default ;
    DescribeWebPreciseAccessRuleRequest& operator=(DescribeWebPreciseAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && this->owner_ == nullptr && this->resourceGroupId_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeWebPreciseAccessRuleRequest& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeWebPreciseAccessRuleRequest& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeWebPreciseAccessRuleRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeWebPreciseAccessRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // An array that consists of the domain names of websites.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> domains_ {};
    shared_ptr<string> owner_ {};
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
