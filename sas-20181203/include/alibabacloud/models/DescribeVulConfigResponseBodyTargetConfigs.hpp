// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGRESPONSEBODYTARGETCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGRESPONSEBODYTARGETCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulConfigResponseBodyTargetConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulConfigResponseBodyTargetConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(OverAllConfig, overAllConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulConfigResponseBodyTargetConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(OverAllConfig, overAllConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulConfigResponseBodyTargetConfigs() = default ;
    DescribeVulConfigResponseBodyTargetConfigs(const DescribeVulConfigResponseBodyTargetConfigs &) = default ;
    DescribeVulConfigResponseBodyTargetConfigs(DescribeVulConfigResponseBodyTargetConfigs &&) = default ;
    DescribeVulConfigResponseBodyTargetConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulConfigResponseBodyTargetConfigs() = default ;
    DescribeVulConfigResponseBodyTargetConfigs& operator=(const DescribeVulConfigResponseBodyTargetConfigs &) = default ;
    DescribeVulConfigResponseBodyTargetConfigs& operator=(DescribeVulConfigResponseBodyTargetConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->overAllConfig_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeVulConfigResponseBodyTargetConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // overAllConfig Field Functions 
    bool hasOverAllConfig() const { return this->overAllConfig_ != nullptr;};
    void deleteOverAllConfig() { this->overAllConfig_ = nullptr;};
    inline string overAllConfig() const { DARABONBA_PTR_GET_DEFAULT(overAllConfig_, "") };
    inline DescribeVulConfigResponseBodyTargetConfigs& setOverAllConfig(string overAllConfig) { DARABONBA_PTR_SET_VALUE(overAllConfig_, overAllConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulConfigResponseBodyTargetConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration of vulnerability scan.
    // 
    // > Valid values when you set the Type parameter to **cve**, **sys**, **cms**, **app**, **emg**, or **yum**:
    // 
    // *   **on**: enabled
    // 
    // *   **off**: disabled
    // 
    // Valid values when you set the Type parameter to **scanMode**:
    // 
    // *   **real**: displays easily exploitable vulnerability.
    // 
    // *   **all**: displays all vulnerabilities.
    // 
    // When you set the Type parameter to **imageVulClean**, the value of this parameter indicates the vulnerability retention period in days.
    std::shared_ptr<string> config_ = nullptr;
    // Indicates whether the vulnerability management feature is enabled for all servers. Valid values:
    // 
    // *   **off**: disabled
    // *   **on**: enabled
    std::shared_ptr<string> overAllConfig_ = nullptr;
    // The type of configuration. Valid values:
    // 
    // *   **cve**: Linux software vulnerability.
    // *   **sys**: Windows system vulnerability.
    // *   **cms**: Web-CMS vulnerability.
    // *   **app**: application vulnerability that is detected by using web scanner.
    // *   **emg**: urgent vulnerability.
    // *   **scanMode**: displays easily exploitable vulnerability.
    // *   **imageVulClean**: vulnerability retention duration.
    // *   **yum**: preferentially uses YUM or APT sources of Alibaba Cloud to fix vulnerabilities.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
