// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBCCGLOBALSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBCCGLOBALSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebCCGlobalSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebCCGlobalSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcGlobalSwitch, ccGlobalSwitch_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebCCGlobalSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcGlobalSwitch, ccGlobalSwitch_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    ModifyWebCCGlobalSwitchRequest() = default ;
    ModifyWebCCGlobalSwitchRequest(const ModifyWebCCGlobalSwitchRequest &) = default ;
    ModifyWebCCGlobalSwitchRequest(ModifyWebCCGlobalSwitchRequest &&) = default ;
    ModifyWebCCGlobalSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebCCGlobalSwitchRequest() = default ;
    ModifyWebCCGlobalSwitchRequest& operator=(const ModifyWebCCGlobalSwitchRequest &) = default ;
    ModifyWebCCGlobalSwitchRequest& operator=(ModifyWebCCGlobalSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccGlobalSwitch_ == nullptr
        && return this->domain_ == nullptr; };
    // ccGlobalSwitch Field Functions 
    bool hasCcGlobalSwitch() const { return this->ccGlobalSwitch_ != nullptr;};
    void deleteCcGlobalSwitch() { this->ccGlobalSwitch_ = nullptr;};
    inline string ccGlobalSwitch() const { DARABONBA_PTR_GET_DEFAULT(ccGlobalSwitch_, "") };
    inline ModifyWebCCGlobalSwitchRequest& setCcGlobalSwitch(string ccGlobalSwitch) { DARABONBA_PTR_SET_VALUE(ccGlobalSwitch_, ccGlobalSwitch) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebCCGlobalSwitchRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // Specifies whether the HTTP flood mitigation feature is enabled. Valid values:
    // 
    // *   **open**
    // *   **close**
    // 
    // This parameter is required.
    std::shared_ptr<string> ccGlobalSwitch_ = nullptr;
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
