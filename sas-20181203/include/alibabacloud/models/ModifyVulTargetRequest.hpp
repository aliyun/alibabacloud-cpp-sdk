// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVULTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVULTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyVulTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVulTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVulTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ModifyVulTargetRequest() = default ;
    ModifyVulTargetRequest(const ModifyVulTargetRequest &) = default ;
    ModifyVulTargetRequest(ModifyVulTargetRequest &&) = default ;
    ModifyVulTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVulTargetRequest() = default ;
    ModifyVulTargetRequest& operator=(const ModifyVulTargetRequest &) = default ;
    ModifyVulTargetRequest& operator=(ModifyVulTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->target_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyVulTargetRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ModifyVulTargetRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The configurations. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **vulType**: the type of the vulnerabilities to scan. Valid values:
    // 
    //     *   **cve**: Linux software vulnerabilities
    //     *   **sys**: Windows system vulnerabilities
    //     *   **cms**: Web-CMS vulnerabilities
    //     *   **emg**: urgent vulnerabilities
    std::shared_ptr<string> config_ = nullptr;
    // The operation. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **target**: the UUID of the server.
    // 
    // *   **targetType**: the application scope of the operation. Set the value to uuid.
    // 
    // *   **flag**: the type of the operation. Valid values:
    // 
    //     *   **add**: select
    //     *   **del**: deselect
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
