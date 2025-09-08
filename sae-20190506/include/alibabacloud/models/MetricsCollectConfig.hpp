// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSCOLLECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_METRICSCOLLECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class MetricsCollectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricsCollectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePushToUserSLS, enablePushToUserSLS_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, MetricsCollectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePushToUserSLS, enablePushToUserSLS_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    MetricsCollectConfig() = default ;
    MetricsCollectConfig(const MetricsCollectConfig &) = default ;
    MetricsCollectConfig(MetricsCollectConfig &&) = default ;
    MetricsCollectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricsCollectConfig() = default ;
    MetricsCollectConfig& operator=(const MetricsCollectConfig &) = default ;
    MetricsCollectConfig& operator=(MetricsCollectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enablePushToUserSLS_ != nullptr
        && this->logstoreName_ != nullptr && this->projectName_ != nullptr; };
    // enablePushToUserSLS Field Functions 
    bool hasEnablePushToUserSLS() const { return this->enablePushToUserSLS_ != nullptr;};
    void deleteEnablePushToUserSLS() { this->enablePushToUserSLS_ = nullptr;};
    inline bool enablePushToUserSLS() const { DARABONBA_PTR_GET_DEFAULT(enablePushToUserSLS_, false) };
    inline MetricsCollectConfig& setEnablePushToUserSLS(bool enablePushToUserSLS) { DARABONBA_PTR_SET_VALUE(enablePushToUserSLS_, enablePushToUserSLS) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string logstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline MetricsCollectConfig& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline MetricsCollectConfig& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<bool> enablePushToUserSLS_ = nullptr;
    std::shared_ptr<string> logstoreName_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
