// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SLSTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/JobConfig.hpp>
#include <alibabacloud/models/SLSTriggerLogConfig.hpp>
#include <alibabacloud/models/SourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SLSTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(functionParameter, functionParameter_);
      DARABONBA_PTR_TO_JSON(jobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(sourceConfig, sourceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SLSTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(functionParameter, functionParameter_);
      DARABONBA_PTR_FROM_JSON(jobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(sourceConfig, sourceConfig_);
    };
    SLSTriggerConfig() = default ;
    SLSTriggerConfig(const SLSTriggerConfig &) = default ;
    SLSTriggerConfig(SLSTriggerConfig &&) = default ;
    SLSTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSTriggerConfig() = default ;
    SLSTriggerConfig& operator=(const SLSTriggerConfig &) = default ;
    SLSTriggerConfig& operator=(SLSTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->functionParameter_ == nullptr && return this->jobConfig_ == nullptr && return this->logConfig_ == nullptr && return this->sourceConfig_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline SLSTriggerConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // functionParameter Field Functions 
    bool hasFunctionParameter() const { return this->functionParameter_ != nullptr;};
    void deleteFunctionParameter() { this->functionParameter_ = nullptr;};
    inline const map<string, string> & functionParameter() const { DARABONBA_PTR_GET_CONST(functionParameter_, map<string, string>) };
    inline map<string, string> functionParameter() { DARABONBA_PTR_GET(functionParameter_, map<string, string>) };
    inline SLSTriggerConfig& setFunctionParameter(const map<string, string> & functionParameter) { DARABONBA_PTR_SET_VALUE(functionParameter_, functionParameter) };
    inline SLSTriggerConfig& setFunctionParameter(map<string, string> && functionParameter) { DARABONBA_PTR_SET_RVALUE(functionParameter_, functionParameter) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline const JobConfig & jobConfig() const { DARABONBA_PTR_GET_CONST(jobConfig_, JobConfig) };
    inline JobConfig jobConfig() { DARABONBA_PTR_GET(jobConfig_, JobConfig) };
    inline SLSTriggerConfig& setJobConfig(const JobConfig & jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };
    inline SLSTriggerConfig& setJobConfig(JobConfig && jobConfig) { DARABONBA_PTR_SET_RVALUE(jobConfig_, jobConfig) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const SLSTriggerLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, SLSTriggerLogConfig) };
    inline SLSTriggerLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, SLSTriggerLogConfig) };
    inline SLSTriggerConfig& setLogConfig(const SLSTriggerLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline SLSTriggerConfig& setLogConfig(SLSTriggerLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // sourceConfig Field Functions 
    bool hasSourceConfig() const { return this->sourceConfig_ != nullptr;};
    void deleteSourceConfig() { this->sourceConfig_ = nullptr;};
    inline const SourceConfig & sourceConfig() const { DARABONBA_PTR_GET_CONST(sourceConfig_, SourceConfig) };
    inline SourceConfig sourceConfig() { DARABONBA_PTR_GET(sourceConfig_, SourceConfig) };
    inline SLSTriggerConfig& setSourceConfig(const SourceConfig & sourceConfig) { DARABONBA_PTR_SET_VALUE(sourceConfig_, sourceConfig) };
    inline SLSTriggerConfig& setSourceConfig(SourceConfig && sourceConfig) { DARABONBA_PTR_SET_RVALUE(sourceConfig_, sourceConfig) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<map<string, string>> functionParameter_ = nullptr;
    std::shared_ptr<JobConfig> jobConfig_ = nullptr;
    std::shared_ptr<SLSTriggerLogConfig> logConfig_ = nullptr;
    std::shared_ptr<SourceConfig> sourceConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
