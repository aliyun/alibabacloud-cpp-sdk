// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMANDNODEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMANDNODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineByAsyncRequestCreateCommandNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineByAsyncRequestCreateCommandNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineByAsyncRequestCreateCommandNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    CreatePipelineByAsyncRequestCreateCommandNodeInfo() = default ;
    CreatePipelineByAsyncRequestCreateCommandNodeInfo(const CreatePipelineByAsyncRequestCreateCommandNodeInfo &) = default ;
    CreatePipelineByAsyncRequestCreateCommandNodeInfo(CreatePipelineByAsyncRequestCreateCommandNodeInfo &&) = default ;
    CreatePipelineByAsyncRequestCreateCommandNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineByAsyncRequestCreateCommandNodeInfo() = default ;
    CreatePipelineByAsyncRequestCreateCommandNodeInfo& operator=(const CreatePipelineByAsyncRequestCreateCommandNodeInfo &) = default ;
    CreatePipelineByAsyncRequestCreateCommandNodeInfo& operator=(CreatePipelineByAsyncRequestCreateCommandNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directory_ == nullptr
        && return this->fileId_ == nullptr && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr && return this->pipelineId_ == nullptr; };
    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandNodeInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline CreatePipelineByAsyncRequestCreateCommandNodeInfo& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandNodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandNodeInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline CreatePipelineByAsyncRequestCreateCommandNodeInfo& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    std::shared_ptr<string> directory_ = nullptr;
    std::shared_ptr<int64_t> fileId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
