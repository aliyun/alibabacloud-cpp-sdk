// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODYRUNCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODYRUNCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs.hpp>
#include <alibabacloud/models/GetRunConfigurationResponseBodyRunConfigurationLogConfig.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRunConfigurationResponseBodyRunConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunConfigurationResponseBodyRunConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(runtimeConfigs, runtimeConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunConfigurationResponseBodyRunConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(runtimeConfigs, runtimeConfigs_);
    };
    GetRunConfigurationResponseBodyRunConfiguration() = default ;
    GetRunConfigurationResponseBodyRunConfiguration(const GetRunConfigurationResponseBodyRunConfiguration &) = default ;
    GetRunConfigurationResponseBodyRunConfiguration(GetRunConfigurationResponseBodyRunConfiguration &&) = default ;
    GetRunConfigurationResponseBodyRunConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunConfigurationResponseBodyRunConfiguration() = default ;
    GetRunConfigurationResponseBodyRunConfiguration& operator=(const GetRunConfigurationResponseBodyRunConfiguration &) = default ;
    GetRunConfigurationResponseBodyRunConfiguration& operator=(GetRunConfigurationResponseBodyRunConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && return this->logConfig_ == nullptr && return this->runtimeConfigs_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs>) };
    inline vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs>) };
    inline GetRunConfigurationResponseBodyRunConfiguration& setApplicationConfigs(const vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline GetRunConfigurationResponseBodyRunConfiguration& setApplicationConfigs(vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig) };
    inline Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig) };
    inline GetRunConfigurationResponseBodyRunConfiguration& setLogConfig(const Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline GetRunConfigurationResponseBodyRunConfiguration& setLogConfig(Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // runtimeConfigs Field Functions 
    bool hasRuntimeConfigs() const { return this->runtimeConfigs_ != nullptr;};
    void deleteRuntimeConfigs() { this->runtimeConfigs_ = nullptr;};
    inline const vector<Models::Tag> & runtimeConfigs() const { DARABONBA_PTR_GET_CONST(runtimeConfigs_, vector<Models::Tag>) };
    inline vector<Models::Tag> runtimeConfigs() { DARABONBA_PTR_GET(runtimeConfigs_, vector<Models::Tag>) };
    inline GetRunConfigurationResponseBodyRunConfiguration& setRuntimeConfigs(const vector<Models::Tag> & runtimeConfigs) { DARABONBA_PTR_SET_VALUE(runtimeConfigs_, runtimeConfigs) };
    inline GetRunConfigurationResponseBodyRunConfiguration& setRuntimeConfigs(vector<Models::Tag> && runtimeConfigs) { DARABONBA_PTR_SET_RVALUE(runtimeConfigs_, runtimeConfigs) };


  protected:
    // 应用配置项
    std::shared_ptr<vector<Models::GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs>> applicationConfigs_ = nullptr;
    std::shared_ptr<Models::GetRunConfigurationResponseBodyRunConfigurationLogConfig> logConfig_ = nullptr;
    // 运行配置。
    std::shared_ptr<vector<Models::Tag>> runtimeConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
