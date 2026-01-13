// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRunConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runConfiguration, runConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runConfiguration, runConfiguration_);
    };
    GetRunConfigurationResponseBody() = default ;
    GetRunConfigurationResponseBody(const GetRunConfigurationResponseBody &) = default ;
    GetRunConfigurationResponseBody(GetRunConfigurationResponseBody &&) = default ;
    GetRunConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunConfigurationResponseBody() = default ;
    GetRunConfigurationResponseBody& operator=(const GetRunConfigurationResponseBody &) = default ;
    GetRunConfigurationResponseBody& operator=(GetRunConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
        DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
        DARABONBA_PTR_TO_JSON(runtimeConfigs, runtimeConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, RunConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
        DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
        DARABONBA_PTR_FROM_JSON(runtimeConfigs, runtimeConfigs_);
      };
      RunConfiguration() = default ;
      RunConfiguration(const RunConfiguration &) = default ;
      RunConfiguration(RunConfiguration &&) = default ;
      RunConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunConfiguration() = default ;
      RunConfiguration& operator=(const RunConfiguration &) = default ;
      RunConfiguration& operator=(RunConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogConfig& obj) { 
          DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
          DARABONBA_PTR_TO_JSON(LogPath, logPath_);
        };
        friend void from_json(const Darabonba::Json& j, LogConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
          DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
        };
        LogConfig() = default ;
        LogConfig(const LogConfig &) = default ;
        LogConfig(LogConfig &&) = default ;
        LogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogConfig() = default ;
        LogConfig& operator=(const LogConfig &) = default ;
        LogConfig& operator=(LogConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logLevel_ == nullptr
        && this->logPath_ == nullptr; };
        // logLevel Field Functions 
        bool hasLogLevel() const { return this->logLevel_ != nullptr;};
        void deleteLogLevel() { this->logLevel_ = nullptr;};
        inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
        inline LogConfig& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


        // logPath Field Functions 
        bool hasLogPath() const { return this->logPath_ != nullptr;};
        void deleteLogPath() { this->logPath_ = nullptr;};
        inline string getLogPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
        inline LogConfig& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


      protected:
        shared_ptr<string> logLevel_ {};
        shared_ptr<string> logPath_ {};
      };

      class ApplicationConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(configFileName, configFileName_);
          DARABONBA_PTR_TO_JSON(configItemKey, configItemKey_);
          DARABONBA_PTR_TO_JSON(configItemValue, configItemValue_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(configFileName, configFileName_);
          DARABONBA_PTR_FROM_JSON(configItemKey, configItemKey_);
          DARABONBA_PTR_FROM_JSON(configItemValue, configItemValue_);
        };
        ApplicationConfigs() = default ;
        ApplicationConfigs(const ApplicationConfigs &) = default ;
        ApplicationConfigs(ApplicationConfigs &&) = default ;
        ApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationConfigs() = default ;
        ApplicationConfigs& operator=(const ApplicationConfigs &) = default ;
        ApplicationConfigs& operator=(ApplicationConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configFileName_ == nullptr
        && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr; };
        // configFileName Field Functions 
        bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
        void deleteConfigFileName() { this->configFileName_ = nullptr;};
        inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
        inline ApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


        // configItemKey Field Functions 
        bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
        void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
        inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
        inline ApplicationConfigs& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


        // configItemValue Field Functions 
        bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
        void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
        inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
        inline ApplicationConfigs& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


      protected:
        // 应用配置文件名。 应用配置文件名。 ```spark-defaults.conf```
        shared_ptr<string> configFileName_ {};
        // 配置项键。 配置项键。 ```dfs.namenode.checkpoint.period```
        shared_ptr<string> configItemKey_ {};
        // 配置项值。 配置项值。 ```3600s```
        shared_ptr<string> configItemValue_ {};
      };

      virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->logConfig_ == nullptr && this->runtimeConfigs_ == nullptr; };
      // applicationConfigs Field Functions 
      bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
      void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
      inline const vector<RunConfiguration::ApplicationConfigs> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<RunConfiguration::ApplicationConfigs>) };
      inline vector<RunConfiguration::ApplicationConfigs> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<RunConfiguration::ApplicationConfigs>) };
      inline RunConfiguration& setApplicationConfigs(const vector<RunConfiguration::ApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
      inline RunConfiguration& setApplicationConfigs(vector<RunConfiguration::ApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


      // logConfig Field Functions 
      bool hasLogConfig() const { return this->logConfig_ != nullptr;};
      void deleteLogConfig() { this->logConfig_ = nullptr;};
      inline const RunConfiguration::LogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, RunConfiguration::LogConfig) };
      inline RunConfiguration::LogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, RunConfiguration::LogConfig) };
      inline RunConfiguration& setLogConfig(const RunConfiguration::LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
      inline RunConfiguration& setLogConfig(RunConfiguration::LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


      // runtimeConfigs Field Functions 
      bool hasRuntimeConfigs() const { return this->runtimeConfigs_ != nullptr;};
      void deleteRuntimeConfigs() { this->runtimeConfigs_ = nullptr;};
      inline const vector<Tag> & getRuntimeConfigs() const { DARABONBA_PTR_GET_CONST(runtimeConfigs_, vector<Tag>) };
      inline vector<Tag> getRuntimeConfigs() { DARABONBA_PTR_GET(runtimeConfigs_, vector<Tag>) };
      inline RunConfiguration& setRuntimeConfigs(const vector<Tag> & runtimeConfigs) { DARABONBA_PTR_SET_VALUE(runtimeConfigs_, runtimeConfigs) };
      inline RunConfiguration& setRuntimeConfigs(vector<Tag> && runtimeConfigs) { DARABONBA_PTR_SET_RVALUE(runtimeConfigs_, runtimeConfigs) };


    protected:
      // 应用配置项
      shared_ptr<vector<RunConfiguration::ApplicationConfigs>> applicationConfigs_ {};
      shared_ptr<RunConfiguration::LogConfig> logConfig_ {};
      // 运行配置。
      shared_ptr<vector<Tag>> runtimeConfigs_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->runConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRunConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runConfiguration Field Functions 
    bool hasRunConfiguration() const { return this->runConfiguration_ != nullptr;};
    void deleteRunConfiguration() { this->runConfiguration_ = nullptr;};
    inline const GetRunConfigurationResponseBody::RunConfiguration & getRunConfiguration() const { DARABONBA_PTR_GET_CONST(runConfiguration_, GetRunConfigurationResponseBody::RunConfiguration) };
    inline GetRunConfigurationResponseBody::RunConfiguration getRunConfiguration() { DARABONBA_PTR_GET(runConfiguration_, GetRunConfigurationResponseBody::RunConfiguration) };
    inline GetRunConfigurationResponseBody& setRunConfiguration(const GetRunConfigurationResponseBody::RunConfiguration & runConfiguration) { DARABONBA_PTR_SET_VALUE(runConfiguration_, runConfiguration) };
    inline GetRunConfigurationResponseBody& setRunConfiguration(GetRunConfigurationResponseBody::RunConfiguration && runConfiguration) { DARABONBA_PTR_SET_RVALUE(runConfiguration_, runConfiguration) };


  protected:
    // 请求ID。
    shared_ptr<string> requestId_ {};
    shared_ptr<GetRunConfigurationResponseBody::RunConfiguration> runConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
