// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYADVANCEDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYADVANCEDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyPolicyAdvancedConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyAdvancedConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Eips, eips_);
      DARABONBA_PTR_TO_JSON(InternetSwitch, internetSwitch_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyAdvancedConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Eips, eips_);
      DARABONBA_PTR_FROM_JSON(InternetSwitch, internetSwitch_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ModifyPolicyAdvancedConfigRequest() = default ;
    ModifyPolicyAdvancedConfigRequest(const ModifyPolicyAdvancedConfigRequest &) = default ;
    ModifyPolicyAdvancedConfigRequest(ModifyPolicyAdvancedConfigRequest &&) = default ;
    ModifyPolicyAdvancedConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyAdvancedConfigRequest() = default ;
    ModifyPolicyAdvancedConfigRequest& operator=(const ModifyPolicyAdvancedConfigRequest &) = default ;
    ModifyPolicyAdvancedConfigRequest& operator=(ModifyPolicyAdvancedConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eips_ == nullptr
        && this->internetSwitch_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr; };
    // eips Field Functions 
    bool hasEips() const { return this->eips_ != nullptr;};
    void deleteEips() { this->eips_ = nullptr;};
    inline const vector<string> & getEips() const { DARABONBA_PTR_GET_CONST(eips_, vector<string>) };
    inline vector<string> getEips() { DARABONBA_PTR_GET(eips_, vector<string>) };
    inline ModifyPolicyAdvancedConfigRequest& setEips(const vector<string> & eips) { DARABONBA_PTR_SET_VALUE(eips_, eips) };
    inline ModifyPolicyAdvancedConfigRequest& setEips(vector<string> && eips) { DARABONBA_PTR_SET_RVALUE(eips_, eips) };


    // internetSwitch Field Functions 
    bool hasInternetSwitch() const { return this->internetSwitch_ != nullptr;};
    void deleteInternetSwitch() { this->internetSwitch_ = nullptr;};
    inline string getInternetSwitch() const { DARABONBA_PTR_GET_DEFAULT(internetSwitch_, "") };
    inline ModifyPolicyAdvancedConfigRequest& setInternetSwitch(string internetSwitch) { DARABONBA_PTR_SET_VALUE(internetSwitch_, internetSwitch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyPolicyAdvancedConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyPolicyAdvancedConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // A list of IP addresses. The IP addresses must use the same protocol version. You can specify up to 100 IP addresses.
    shared_ptr<vector<string>> eips_ {};
    // Specifies whether to enable or disable the strict mode for access control policies. Valid values:
    // 
    // - **on**: Enables strict mode.
    // 
    // - **off**: Disables strict mode.
    // 
    // This parameter is required.
    shared_ptr<string> internetSwitch_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the visitor.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
