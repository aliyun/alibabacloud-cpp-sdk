// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGL7GLOBALRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGL7GLOBALRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigL7GlobalRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigL7GlobalRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RuleAttr, ruleAttr_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigL7GlobalRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RuleAttr, ruleAttr_);
    };
    ConfigL7GlobalRuleRequest() = default ;
    ConfigL7GlobalRuleRequest(const ConfigL7GlobalRuleRequest &) = default ;
    ConfigL7GlobalRuleRequest(ConfigL7GlobalRuleRequest &&) = default ;
    ConfigL7GlobalRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigL7GlobalRuleRequest() = default ;
    ConfigL7GlobalRuleRequest& operator=(const ConfigL7GlobalRuleRequest &) = default ;
    ConfigL7GlobalRuleRequest& operator=(ConfigL7GlobalRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->ruleAttr_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigL7GlobalRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ruleAttr Field Functions 
    bool hasRuleAttr() const { return this->ruleAttr_ != nullptr;};
    void deleteRuleAttr() { this->ruleAttr_ = nullptr;};
    inline string ruleAttr() const { DARABONBA_PTR_GET_DEFAULT(ruleAttr_, "") };
    inline ConfigL7GlobalRuleRequest& setRuleAttr(string ruleAttr) { DARABONBA_PTR_SET_VALUE(ruleAttr_, ruleAttr) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleAttr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
