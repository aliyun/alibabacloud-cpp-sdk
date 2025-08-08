// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELINPUTLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELINPUTLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployOllamaModelInputLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployOllamaModelInputLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enableInstanceMetrics, enableInstanceMetrics_);
      DARABONBA_PTR_TO_JSON(enableRequestMetrics, enableRequestMetrics_);
      DARABONBA_PTR_TO_JSON(logBeginRule, logBeginRule_);
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, DeployOllamaModelInputLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enableInstanceMetrics, enableInstanceMetrics_);
      DARABONBA_PTR_FROM_JSON(enableRequestMetrics, enableRequestMetrics_);
      DARABONBA_PTR_FROM_JSON(logBeginRule, logBeginRule_);
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    DeployOllamaModelInputLogConfig() = default ;
    DeployOllamaModelInputLogConfig(const DeployOllamaModelInputLogConfig &) = default ;
    DeployOllamaModelInputLogConfig(DeployOllamaModelInputLogConfig &&) = default ;
    DeployOllamaModelInputLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployOllamaModelInputLogConfig() = default ;
    DeployOllamaModelInputLogConfig& operator=(const DeployOllamaModelInputLogConfig &) = default ;
    DeployOllamaModelInputLogConfig& operator=(DeployOllamaModelInputLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableInstanceMetrics_ != nullptr
        && this->enableRequestMetrics_ != nullptr && this->logBeginRule_ != nullptr && this->logstore_ != nullptr && this->project_ != nullptr; };
    // enableInstanceMetrics Field Functions 
    bool hasEnableInstanceMetrics() const { return this->enableInstanceMetrics_ != nullptr;};
    void deleteEnableInstanceMetrics() { this->enableInstanceMetrics_ = nullptr;};
    inline bool enableInstanceMetrics() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceMetrics_, false) };
    inline DeployOllamaModelInputLogConfig& setEnableInstanceMetrics(bool enableInstanceMetrics) { DARABONBA_PTR_SET_VALUE(enableInstanceMetrics_, enableInstanceMetrics) };


    // enableRequestMetrics Field Functions 
    bool hasEnableRequestMetrics() const { return this->enableRequestMetrics_ != nullptr;};
    void deleteEnableRequestMetrics() { this->enableRequestMetrics_ = nullptr;};
    inline bool enableRequestMetrics() const { DARABONBA_PTR_GET_DEFAULT(enableRequestMetrics_, false) };
    inline DeployOllamaModelInputLogConfig& setEnableRequestMetrics(bool enableRequestMetrics) { DARABONBA_PTR_SET_VALUE(enableRequestMetrics_, enableRequestMetrics) };


    // logBeginRule Field Functions 
    bool hasLogBeginRule() const { return this->logBeginRule_ != nullptr;};
    void deleteLogBeginRule() { this->logBeginRule_ = nullptr;};
    inline string logBeginRule() const { DARABONBA_PTR_GET_DEFAULT(logBeginRule_, "") };
    inline DeployOllamaModelInputLogConfig& setLogBeginRule(string logBeginRule) { DARABONBA_PTR_SET_VALUE(logBeginRule_, logBeginRule) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline DeployOllamaModelInputLogConfig& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DeployOllamaModelInputLogConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    std::shared_ptr<bool> enableInstanceMetrics_ = nullptr;
    std::shared_ptr<bool> enableRequestMetrics_ = nullptr;
    std::shared_ptr<string> logBeginRule_ = nullptr;
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
