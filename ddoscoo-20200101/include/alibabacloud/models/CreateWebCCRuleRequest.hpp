// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBCCRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBCCRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateWebCCRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebCCRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Act, act_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebCCRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Act, act_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CreateWebCCRuleRequest() = default ;
    CreateWebCCRuleRequest(const CreateWebCCRuleRequest &) = default ;
    CreateWebCCRuleRequest(CreateWebCCRuleRequest &&) = default ;
    CreateWebCCRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebCCRuleRequest() = default ;
    CreateWebCCRuleRequest& operator=(const CreateWebCCRuleRequest &) = default ;
    CreateWebCCRuleRequest& operator=(CreateWebCCRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->act_ == nullptr
        && this->count_ == nullptr && this->domain_ == nullptr && this->interval_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->ttl_ == nullptr && this->uri_ == nullptr; };
    // act Field Functions 
    bool hasAct() const { return this->act_ != nullptr;};
    void deleteAct() { this->act_ = nullptr;};
    inline string getAct() const { DARABONBA_PTR_GET_DEFAULT(act_, "") };
    inline CreateWebCCRuleRequest& setAct(string act) { DARABONBA_PTR_SET_VALUE(act_, act) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline CreateWebCCRuleRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateWebCCRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline CreateWebCCRuleRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateWebCCRuleRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWebCCRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateWebCCRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateWebCCRuleRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateWebCCRuleRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The action on the requests that trigger the custom frequency control rule. Valid values:
    // 
    // *   **close**: blocks the requests.
    // *   **captcha**: triggers Completely Automated Public Turing test to tell Computers and Humans Apart (CAPTCHA) verification for the requests.
    // 
    // This parameter is required.
    shared_ptr<string> act_ {};
    // This parameter is required.
    shared_ptr<int32_t> count_ {};
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // This parameter is required.
    shared_ptr<int32_t> interval_ {};
    // The matching mode. Valid values:
    // 
    // *   **prefix**: prefix match.
    // *   **match**: exact match.
    // 
    // >  If the **URI** of the check path contains parameters, you must set this parameter to **prefix**.
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // The name of the rule. The name can be up to 128 characters in length and contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the resource group to which the Anti-DDoS Proxy instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
    // The blocking duration. Valid values: **60** to **86400**. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ttl_ {};
    // The check path.
    // 
    // >  The URI cannot be modified. The domain name of the website, the check path, and the rule name uniquely identify a rule.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
