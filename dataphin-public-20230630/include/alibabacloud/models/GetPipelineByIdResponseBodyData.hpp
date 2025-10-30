// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineByIdResponseBodyDataNodeInfo.hpp>
#include <alibabacloud/models/GetPipelineByIdResponseBodyDataPipelineConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_TO_JSON(PipelineConfig, pipelineConfig_);
      DARABONBA_PTR_TO_JSON(PipelineJson, pipelineJson_);
      DARABONBA_PTR_TO_JSON(PipelineType, pipelineType_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_FROM_JSON(PipelineConfig, pipelineConfig_);
      DARABONBA_PTR_FROM_JSON(PipelineJson, pipelineJson_);
      DARABONBA_PTR_FROM_JSON(PipelineType, pipelineType_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    GetPipelineByIdResponseBodyData() = default ;
    GetPipelineByIdResponseBodyData(const GetPipelineByIdResponseBodyData &) = default ;
    GetPipelineByIdResponseBodyData(GetPipelineByIdResponseBodyData &&) = default ;
    GetPipelineByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineByIdResponseBodyData() = default ;
    GetPipelineByIdResponseBodyData& operator=(const GetPipelineByIdResponseBodyData &) = default ;
    GetPipelineByIdResponseBodyData& operator=(GetPipelineByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->nodeInfo_ == nullptr && return this->pipelineConfig_ == nullptr && return this->pipelineJson_ == nullptr && return this->pipelineType_ == nullptr && return this->scheduleConfig_ == nullptr
        && return this->settings_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetPipelineByIdResponseBodyData& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const Models::GetPipelineByIdResponseBodyDataNodeInfo & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Models::GetPipelineByIdResponseBodyDataNodeInfo) };
    inline Models::GetPipelineByIdResponseBodyDataNodeInfo nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Models::GetPipelineByIdResponseBodyDataNodeInfo) };
    inline GetPipelineByIdResponseBodyData& setNodeInfo(const Models::GetPipelineByIdResponseBodyDataNodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline GetPipelineByIdResponseBodyData& setNodeInfo(Models::GetPipelineByIdResponseBodyDataNodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // pipelineConfig Field Functions 
    bool hasPipelineConfig() const { return this->pipelineConfig_ != nullptr;};
    void deletePipelineConfig() { this->pipelineConfig_ = nullptr;};
    inline const Models::GetPipelineByIdResponseBodyDataPipelineConfig & pipelineConfig() const { DARABONBA_PTR_GET_CONST(pipelineConfig_, Models::GetPipelineByIdResponseBodyDataPipelineConfig) };
    inline Models::GetPipelineByIdResponseBodyDataPipelineConfig pipelineConfig() { DARABONBA_PTR_GET(pipelineConfig_, Models::GetPipelineByIdResponseBodyDataPipelineConfig) };
    inline GetPipelineByIdResponseBodyData& setPipelineConfig(const Models::GetPipelineByIdResponseBodyDataPipelineConfig & pipelineConfig) { DARABONBA_PTR_SET_VALUE(pipelineConfig_, pipelineConfig) };
    inline GetPipelineByIdResponseBodyData& setPipelineConfig(Models::GetPipelineByIdResponseBodyDataPipelineConfig && pipelineConfig) { DARABONBA_PTR_SET_RVALUE(pipelineConfig_, pipelineConfig) };


    // pipelineJson Field Functions 
    bool hasPipelineJson() const { return this->pipelineJson_ != nullptr;};
    void deletePipelineJson() { this->pipelineJson_ = nullptr;};
    inline string pipelineJson() const { DARABONBA_PTR_GET_DEFAULT(pipelineJson_, "") };
    inline GetPipelineByIdResponseBodyData& setPipelineJson(string pipelineJson) { DARABONBA_PTR_SET_VALUE(pipelineJson_, pipelineJson) };


    // pipelineType Field Functions 
    bool hasPipelineType() const { return this->pipelineType_ != nullptr;};
    void deletePipelineType() { this->pipelineType_ = nullptr;};
    inline int32_t pipelineType() const { DARABONBA_PTR_GET_DEFAULT(pipelineType_, 0) };
    inline GetPipelineByIdResponseBodyData& setPipelineType(int32_t pipelineType) { DARABONBA_PTR_SET_VALUE(pipelineType_, pipelineType) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline string scheduleConfig() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfig_, "") };
    inline GetPipelineByIdResponseBodyData& setScheduleConfig(string scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline GetPipelineByIdResponseBodyData& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<Models::GetPipelineByIdResponseBodyDataNodeInfo> nodeInfo_ = nullptr;
    std::shared_ptr<Models::GetPipelineByIdResponseBodyDataPipelineConfig> pipelineConfig_ = nullptr;
    std::shared_ptr<string> pipelineJson_ = nullptr;
    std::shared_ptr<int32_t> pipelineType_ = nullptr;
    std::shared_ptr<string> scheduleConfig_ = nullptr;
    std::shared_ptr<string> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
