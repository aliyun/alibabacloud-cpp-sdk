// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePipelineByAsyncRequestCreateCommandNodeInfo.hpp>
#include <alibabacloud/models/CreatePipelineByAsyncRequestCreateCommandPipelineConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineByAsyncRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineByAsyncRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_TO_JSON(PipelineConfig, pipelineConfig_);
      DARABONBA_PTR_TO_JSON(PipelineJson, pipelineJson_);
      DARABONBA_PTR_TO_JSON(PipelineType, pipelineType_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Submit, submit_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineByAsyncRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_FROM_JSON(PipelineConfig, pipelineConfig_);
      DARABONBA_PTR_FROM_JSON(PipelineJson, pipelineJson_);
      DARABONBA_PTR_FROM_JSON(PipelineType, pipelineType_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Submit, submit_);
    };
    CreatePipelineByAsyncRequestCreateCommand() = default ;
    CreatePipelineByAsyncRequestCreateCommand(const CreatePipelineByAsyncRequestCreateCommand &) = default ;
    CreatePipelineByAsyncRequestCreateCommand(CreatePipelineByAsyncRequestCreateCommand &&) = default ;
    CreatePipelineByAsyncRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineByAsyncRequestCreateCommand() = default ;
    CreatePipelineByAsyncRequestCreateCommand& operator=(const CreatePipelineByAsyncRequestCreateCommand &) = default ;
    CreatePipelineByAsyncRequestCreateCommand& operator=(CreatePipelineByAsyncRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->mode_ == nullptr && return this->nodeInfo_ == nullptr && return this->pipelineConfig_ == nullptr && return this->pipelineJson_ == nullptr && return this->pipelineType_ == nullptr
        && return this->scheduleConfig_ == nullptr && return this->settings_ == nullptr && return this->submit_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreatePipelineByAsyncRequestCreateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreatePipelineByAsyncRequestCreateCommand& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo) };
    inline Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo) };
    inline CreatePipelineByAsyncRequestCreateCommand& setNodeInfo(const Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline CreatePipelineByAsyncRequestCreateCommand& setNodeInfo(Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // pipelineConfig Field Functions 
    bool hasPipelineConfig() const { return this->pipelineConfig_ != nullptr;};
    void deletePipelineConfig() { this->pipelineConfig_ = nullptr;};
    inline const Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig & pipelineConfig() const { DARABONBA_PTR_GET_CONST(pipelineConfig_, Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig) };
    inline Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig pipelineConfig() { DARABONBA_PTR_GET(pipelineConfig_, Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig) };
    inline CreatePipelineByAsyncRequestCreateCommand& setPipelineConfig(const Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig & pipelineConfig) { DARABONBA_PTR_SET_VALUE(pipelineConfig_, pipelineConfig) };
    inline CreatePipelineByAsyncRequestCreateCommand& setPipelineConfig(Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig && pipelineConfig) { DARABONBA_PTR_SET_RVALUE(pipelineConfig_, pipelineConfig) };


    // pipelineJson Field Functions 
    bool hasPipelineJson() const { return this->pipelineJson_ != nullptr;};
    void deletePipelineJson() { this->pipelineJson_ = nullptr;};
    inline string pipelineJson() const { DARABONBA_PTR_GET_DEFAULT(pipelineJson_, "") };
    inline CreatePipelineByAsyncRequestCreateCommand& setPipelineJson(string pipelineJson) { DARABONBA_PTR_SET_VALUE(pipelineJson_, pipelineJson) };


    // pipelineType Field Functions 
    bool hasPipelineType() const { return this->pipelineType_ != nullptr;};
    void deletePipelineType() { this->pipelineType_ = nullptr;};
    inline int32_t pipelineType() const { DARABONBA_PTR_GET_DEFAULT(pipelineType_, 0) };
    inline CreatePipelineByAsyncRequestCreateCommand& setPipelineType(int32_t pipelineType) { DARABONBA_PTR_SET_VALUE(pipelineType_, pipelineType) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline string scheduleConfig() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfig_, "") };
    inline CreatePipelineByAsyncRequestCreateCommand& setScheduleConfig(string scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline CreatePipelineByAsyncRequestCreateCommand& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // submit Field Functions 
    bool hasSubmit() const { return this->submit_ != nullptr;};
    void deleteSubmit() { this->submit_ = nullptr;};
    inline bool submit() const { DARABONBA_PTR_GET_DEFAULT(submit_, false) };
    inline CreatePipelineByAsyncRequestCreateCommand& setSubmit(bool submit) { DARABONBA_PTR_SET_VALUE(submit_, submit) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreatePipelineByAsyncRequestCreateCommandNodeInfo> nodeInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfig> pipelineConfig_ = nullptr;
    std::shared_ptr<string> pipelineJson_ = nullptr;
    std::shared_ptr<int32_t> pipelineType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheduleConfig_ = nullptr;
    std::shared_ptr<string> settings_ = nullptr;
    std::shared_ptr<bool> submit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
