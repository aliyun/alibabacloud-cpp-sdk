// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETCONFIGRESPONSEBODYTARGETCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETCONFIGRESPONSEBODYTARGETCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetConfigResponseBodyTargetConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetConfigResponseBodyTargetConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(OverAllConfig, overAllConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetConfigResponseBodyTargetConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(OverAllConfig, overAllConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulTargetConfigResponseBodyTargetConfigs() = default ;
    DescribeVulTargetConfigResponseBodyTargetConfigs(const DescribeVulTargetConfigResponseBodyTargetConfigs &) = default ;
    DescribeVulTargetConfigResponseBodyTargetConfigs(DescribeVulTargetConfigResponseBodyTargetConfigs &&) = default ;
    DescribeVulTargetConfigResponseBodyTargetConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetConfigResponseBodyTargetConfigs() = default ;
    DescribeVulTargetConfigResponseBodyTargetConfigs& operator=(const DescribeVulTargetConfigResponseBodyTargetConfigs &) = default ;
    DescribeVulTargetConfigResponseBodyTargetConfigs& operator=(DescribeVulTargetConfigResponseBodyTargetConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->overAllConfig_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeVulTargetConfigResponseBodyTargetConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // overAllConfig Field Functions 
    bool hasOverAllConfig() const { return this->overAllConfig_ != nullptr;};
    void deleteOverAllConfig() { this->overAllConfig_ = nullptr;};
    inline string overAllConfig() const { DARABONBA_PTR_GET_DEFAULT(overAllConfig_, "") };
    inline DescribeVulTargetConfigResponseBodyTargetConfigs& setOverAllConfig(string overAllConfig) { DARABONBA_PTR_SET_VALUE(overAllConfig_, overAllConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulTargetConfigResponseBodyTargetConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the vulnerability scan feature is enabled for the server.
    // 
    // *   **off**: disabled
    // *   **on**: enabled
    std::shared_ptr<string> config_ = nullptr;
    // Indicates whether the vulnerability scan feature is enabled for all servers. Valid values:
    // 
    // *   **off**: disabled
    // *   **on**: enabled
    std::shared_ptr<string> overAllConfig_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **emg**: urgent vulnerability
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
