// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODYRUNCONFIGURATIONLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODYRUNCONFIGURATIONLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRunConfigurationResponseBodyRunConfigurationLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunConfigurationResponseBodyRunConfigurationLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(LogPath, logPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunConfigurationResponseBodyRunConfigurationLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
    };
    GetRunConfigurationResponseBodyRunConfigurationLogConfig() = default ;
    GetRunConfigurationResponseBodyRunConfigurationLogConfig(const GetRunConfigurationResponseBodyRunConfigurationLogConfig &) = default ;
    GetRunConfigurationResponseBodyRunConfigurationLogConfig(GetRunConfigurationResponseBodyRunConfigurationLogConfig &&) = default ;
    GetRunConfigurationResponseBodyRunConfigurationLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunConfigurationResponseBodyRunConfigurationLogConfig() = default ;
    GetRunConfigurationResponseBodyRunConfigurationLogConfig& operator=(const GetRunConfigurationResponseBodyRunConfigurationLogConfig &) = default ;
    GetRunConfigurationResponseBodyRunConfigurationLogConfig& operator=(GetRunConfigurationResponseBodyRunConfigurationLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logLevel_ == nullptr
        && return this->logPath_ == nullptr; };
    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline GetRunConfigurationResponseBodyRunConfigurationLogConfig& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // logPath Field Functions 
    bool hasLogPath() const { return this->logPath_ != nullptr;};
    void deleteLogPath() { this->logPath_ = nullptr;};
    inline string logPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
    inline GetRunConfigurationResponseBodyRunConfigurationLogConfig& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


  protected:
    std::shared_ptr<string> logLevel_ = nullptr;
    std::shared_ptr<string> logPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
