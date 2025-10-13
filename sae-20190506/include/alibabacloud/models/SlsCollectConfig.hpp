// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSCOLLECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SLSCOLLECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SLSCollectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSCollectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LogPath, logPath_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(LogtailName, logtailName_);
      DARABONBA_PTR_TO_JSON(MachineGroup, machineGroup_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, SLSCollectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(LogtailName, logtailName_);
      DARABONBA_PTR_FROM_JSON(MachineGroup, machineGroup_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    SLSCollectConfig() = default ;
    SLSCollectConfig(const SLSCollectConfig &) = default ;
    SLSCollectConfig(SLSCollectConfig &&) = default ;
    SLSCollectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSCollectConfig() = default ;
    SLSCollectConfig& operator=(const SLSCollectConfig &) = default ;
    SLSCollectConfig& operator=(SLSCollectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logPath_ == nullptr
        && return this->logType_ == nullptr && return this->logstoreName_ == nullptr && return this->logtailName_ == nullptr && return this->machineGroup_ == nullptr && return this->projectName_ == nullptr; };
    // logPath Field Functions 
    bool hasLogPath() const { return this->logPath_ != nullptr;};
    void deleteLogPath() { this->logPath_ = nullptr;};
    inline string logPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
    inline SLSCollectConfig& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline SLSCollectConfig& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string logstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline SLSCollectConfig& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // logtailName Field Functions 
    bool hasLogtailName() const { return this->logtailName_ != nullptr;};
    void deleteLogtailName() { this->logtailName_ = nullptr;};
    inline string logtailName() const { DARABONBA_PTR_GET_DEFAULT(logtailName_, "") };
    inline SLSCollectConfig& setLogtailName(string logtailName) { DARABONBA_PTR_SET_VALUE(logtailName_, logtailName) };


    // machineGroup Field Functions 
    bool hasMachineGroup() const { return this->machineGroup_ != nullptr;};
    void deleteMachineGroup() { this->machineGroup_ = nullptr;};
    inline string machineGroup() const { DARABONBA_PTR_GET_DEFAULT(machineGroup_, "") };
    inline SLSCollectConfig& setMachineGroup(string machineGroup) { DARABONBA_PTR_SET_VALUE(machineGroup_, machineGroup) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SLSCollectConfig& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> logPath_ = nullptr;
    std::shared_ptr<string> logType_ = nullptr;
    std::shared_ptr<string> logstoreName_ = nullptr;
    std::shared_ptr<string> logtailName_ = nullptr;
    std::shared_ptr<string> machineGroup_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
