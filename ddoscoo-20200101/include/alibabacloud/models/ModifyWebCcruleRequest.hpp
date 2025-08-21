// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBCCRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBCCRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebCCRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebCCRuleRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyWebCCRuleRequest& obj) { 
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
    ModifyWebCCRuleRequest() = default ;
    ModifyWebCCRuleRequest(const ModifyWebCCRuleRequest &) = default ;
    ModifyWebCCRuleRequest(ModifyWebCCRuleRequest &&) = default ;
    ModifyWebCCRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebCCRuleRequest() = default ;
    ModifyWebCCRuleRequest& operator=(const ModifyWebCCRuleRequest &) = default ;
    ModifyWebCCRuleRequest& operator=(ModifyWebCCRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->act_ != nullptr
        && this->count_ != nullptr && this->domain_ != nullptr && this->interval_ != nullptr && this->mode_ != nullptr && this->name_ != nullptr
        && this->resourceGroupId_ != nullptr && this->ttl_ != nullptr && this->uri_ != nullptr; };
    // act Field Functions 
    bool hasAct() const { return this->act_ != nullptr;};
    void deleteAct() { this->act_ = nullptr;};
    inline string act() const { DARABONBA_PTR_GET_DEFAULT(act_, "") };
    inline ModifyWebCCRuleRequest& setAct(string act) { DARABONBA_PTR_SET_VALUE(act_, act) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ModifyWebCCRuleRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebCCRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ModifyWebCCRuleRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyWebCCRuleRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyWebCCRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebCCRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ModifyWebCCRuleRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline ModifyWebCCRuleRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> act_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> count_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The blocking duration. Valid values: **60** to **86400**. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The check path.
    // 
    // >  You cannot modify the Uniform Resource Identifier (URI). The domain name of the website, the check path, and the rule name uniquely identify a rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
