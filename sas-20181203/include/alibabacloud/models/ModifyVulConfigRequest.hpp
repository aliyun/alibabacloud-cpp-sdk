// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVULCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVULCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyVulConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVulConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVulConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyVulConfigRequest() = default ;
    ModifyVulConfigRequest(const ModifyVulConfigRequest &) = default ;
    ModifyVulConfigRequest(ModifyVulConfigRequest &&) = default ;
    ModifyVulConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVulConfigRequest() = default ;
    ModifyVulConfigRequest& operator=(const ModifyVulConfigRequest &) = default ;
    ModifyVulConfigRequest& operator=(ModifyVulConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyVulConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyVulConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable the vulnerability scan feature. Valid values:
    // 
    // *   **on**: enables the feature
    // *   **off**: disables the feature
    // 
    // > Valid values when you set the Type parameter to scanMode:
    // 
    // *   **real**: displays only easily exploitable vulnerabilities.
    // 
    // *   **all**: displays all vulnerabilities.
    std::shared_ptr<string> config_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **emg**: urgent vulnerability
    // *   **app**: application vulnerability
    // *   **yum**: YUM and APT source configuration
    // *   **scanMode**: easily exploitable vulnerability
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
