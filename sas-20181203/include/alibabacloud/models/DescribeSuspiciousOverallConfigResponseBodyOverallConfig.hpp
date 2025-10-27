// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGRESPONSEBODYOVERALLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGRESPONSEBODYOVERALLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspiciousOverallConfigResponseBodyOverallConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousOverallConfigResponseBodyOverallConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousOverallConfigResponseBodyOverallConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSuspiciousOverallConfigResponseBodyOverallConfig() = default ;
    DescribeSuspiciousOverallConfigResponseBodyOverallConfig(const DescribeSuspiciousOverallConfigResponseBodyOverallConfig &) = default ;
    DescribeSuspiciousOverallConfigResponseBodyOverallConfig(DescribeSuspiciousOverallConfigResponseBodyOverallConfig &&) = default ;
    DescribeSuspiciousOverallConfigResponseBodyOverallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousOverallConfigResponseBodyOverallConfig() = default ;
    DescribeSuspiciousOverallConfigResponseBodyOverallConfig& operator=(const DescribeSuspiciousOverallConfigResponseBodyOverallConfig &) = default ;
    DescribeSuspiciousOverallConfigResponseBodyOverallConfig& operator=(DescribeSuspiciousOverallConfigResponseBodyOverallConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeSuspiciousOverallConfigResponseBodyOverallConfig& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSuspiciousOverallConfigResponseBodyOverallConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The status of the feature. Valid values:
    // 
    // *   **off**: disabled
    // *   **on**: enabled
    std::shared_ptr<string> config_ = nullptr;
    // The type of the feature. Valid values:
    // 
    // *   **auto_breaking**: Anti-Virus
    // *   **ransomware_breaking**: Anti-ransomware (Bait Capture)
    // *   **webshell_cloud_breaking**: Webshell Protection
    // *   **alinet**: Behavior prevention
    // *   **k8s_log_analysis**: K8s Threat Detection
    // *   **alisecguard**: Defense mode for Client Protection
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
