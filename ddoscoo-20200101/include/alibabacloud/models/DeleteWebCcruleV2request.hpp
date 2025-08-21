// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBCCRULEV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBCCRULEV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeleteWebCCRuleV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebCCRuleV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebCCRuleV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
    };
    DeleteWebCCRuleV2Request() = default ;
    DeleteWebCCRuleV2Request(const DeleteWebCCRuleV2Request &) = default ;
    DeleteWebCCRuleV2Request(DeleteWebCCRuleV2Request &&) = default ;
    DeleteWebCCRuleV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebCCRuleV2Request() = default ;
    DeleteWebCCRuleV2Request& operator=(const DeleteWebCCRuleV2Request &) = default ;
    DeleteWebCCRuleV2Request& operator=(DeleteWebCCRuleV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->owner_ != nullptr && this->ruleNames_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DeleteWebCCRuleV2Request& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DeleteWebCCRuleV2Request& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline string ruleNames() const { DARABONBA_PTR_GET_DEFAULT(ruleNames_, "") };
    inline DeleteWebCCRuleV2Request& setRuleNames(string ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };


  protected:
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The source of the rule. Valid values:
    // 
    // *   **manual** (default): manually created.
    // *   **clover**: automatically created. Specify this value when you want to delete intelligent protection rules.
    std::shared_ptr<string> owner_ = nullptr;
    // The names of the rules that you want to delete.
    std::shared_ptr<string> ruleNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
