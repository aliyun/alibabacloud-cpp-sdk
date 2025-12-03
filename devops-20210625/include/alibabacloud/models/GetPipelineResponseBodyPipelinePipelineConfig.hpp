// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINEPIPELINECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINEPIPELINECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPipelineResponseBodyPipelinePipelineConfigSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineResponseBodyPipelinePipelineConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBodyPipelinePipelineConfig& obj) { 
      DARABONBA_PTR_TO_JSON(flow, flow_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBodyPipelinePipelineConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(flow, flow_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(sources, sources_);
    };
    GetPipelineResponseBodyPipelinePipelineConfig() = default ;
    GetPipelineResponseBodyPipelinePipelineConfig(const GetPipelineResponseBodyPipelinePipelineConfig &) = default ;
    GetPipelineResponseBodyPipelinePipelineConfig(GetPipelineResponseBodyPipelinePipelineConfig &&) = default ;
    GetPipelineResponseBodyPipelinePipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBodyPipelinePipelineConfig() = default ;
    GetPipelineResponseBodyPipelinePipelineConfig& operator=(const GetPipelineResponseBodyPipelinePipelineConfig &) = default ;
    GetPipelineResponseBodyPipelinePipelineConfig& operator=(GetPipelineResponseBodyPipelinePipelineConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flow_ == nullptr
        && return this->settings_ == nullptr && return this->sources_ == nullptr; };
    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline string flow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfig& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfig& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources>) };
    inline vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources> sources() { DARABONBA_PTR_GET(sources_, vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources>) };
    inline GetPipelineResponseBodyPipelinePipelineConfig& setSources(const vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline GetPipelineResponseBodyPipelinePipelineConfig& setSources(vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


  protected:
    std::shared_ptr<string> flow_ = nullptr;
    std::shared_ptr<string> settings_ = nullptr;
    std::shared_ptr<vector<Models::GetPipelineResponseBodyPipelinePipelineConfigSources>> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
