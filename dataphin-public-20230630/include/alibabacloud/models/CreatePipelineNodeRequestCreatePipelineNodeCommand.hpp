// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUESTCREATEPIPELINENODECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUESTCREATEPIPELINENODECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeRequestCreatePipelineNodeCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeRequestCreatePipelineNodeCommand& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(PipelineType, pipelineType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeRequestCreatePipelineNodeCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(PipelineType, pipelineType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreatePipelineNodeRequestCreatePipelineNodeCommand() = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommand(const CreatePipelineNodeRequestCreatePipelineNodeCommand &) = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommand(CreatePipelineNodeRequestCreatePipelineNodeCommand &&) = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeRequestCreatePipelineNodeCommand() = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommand& operator=(const CreatePipelineNodeRequestCreatePipelineNodeCommand &) = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommand& operator=(CreatePipelineNodeRequestCreatePipelineNodeCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileInfo_ != nullptr
        && this->nodeType_ != nullptr && this->pipelineName_ != nullptr && this->pipelineType_ != nullptr && this->projectId_ != nullptr; };
    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo) };
    inline Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo) };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand& setFileInfo(const Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand& setFileInfo(Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // pipelineType Field Functions 
    bool hasPipelineType() const { return this->pipelineType_ != nullptr;};
    void deletePipelineType() { this->pipelineType_ = nullptr;};
    inline string pipelineType() const { DARABONBA_PTR_GET_DEFAULT(pipelineType_, "") };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand& setPipelineType(string pipelineType) { DARABONBA_PTR_SET_VALUE(pipelineType_, pipelineType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo> fileInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
