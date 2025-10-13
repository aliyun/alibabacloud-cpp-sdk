// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSCONFIGCOLLECTCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_SLSCONFIGCOLLECTCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SLSConfigCollectConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSConfigCollectConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(logPath, logPath_);
      DARABONBA_PTR_TO_JSON(logType, logType_);
      DARABONBA_PTR_TO_JSON(logstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(logtailName, logtailName_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, SLSConfigCollectConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(logPath, logPath_);
      DARABONBA_PTR_FROM_JSON(logType, logType_);
      DARABONBA_PTR_FROM_JSON(logstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(logtailName, logtailName_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
    };
    SLSConfigCollectConfigs() = default ;
    SLSConfigCollectConfigs(const SLSConfigCollectConfigs &) = default ;
    SLSConfigCollectConfigs(SLSConfigCollectConfigs &&) = default ;
    SLSConfigCollectConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSConfigCollectConfigs() = default ;
    SLSConfigCollectConfigs& operator=(const SLSConfigCollectConfigs &) = default ;
    SLSConfigCollectConfigs& operator=(SLSConfigCollectConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logPath_ == nullptr
        && return this->logType_ == nullptr && return this->logstoreName_ == nullptr && return this->logtailName_ == nullptr && return this->projectName_ == nullptr; };
    // logPath Field Functions 
    bool hasLogPath() const { return this->logPath_ != nullptr;};
    void deleteLogPath() { this->logPath_ = nullptr;};
    inline string logPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
    inline SLSConfigCollectConfigs& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline SLSConfigCollectConfigs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string logstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline SLSConfigCollectConfigs& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // logtailName Field Functions 
    bool hasLogtailName() const { return this->logtailName_ != nullptr;};
    void deleteLogtailName() { this->logtailName_ = nullptr;};
    inline string logtailName() const { DARABONBA_PTR_GET_DEFAULT(logtailName_, "") };
    inline SLSConfigCollectConfigs& setLogtailName(string logtailName) { DARABONBA_PTR_SET_VALUE(logtailName_, logtailName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SLSConfigCollectConfigs& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> logPath_ = nullptr;
    std::shared_ptr<string> logType_ = nullptr;
    std::shared_ptr<string> logstoreName_ = nullptr;
    std::shared_ptr<string> logtailName_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
