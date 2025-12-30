// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatePipelineNodeCommand, createPipelineNodeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatePipelineNodeCommand, createPipelineNodeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreatePipelineNodeRequest() = default ;
    CreatePipelineNodeRequest(const CreatePipelineNodeRequest &) = default ;
    CreatePipelineNodeRequest(CreatePipelineNodeRequest &&) = default ;
    CreatePipelineNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeRequest() = default ;
    CreatePipelineNodeRequest& operator=(const CreatePipelineNodeRequest &) = default ;
    CreatePipelineNodeRequest& operator=(CreatePipelineNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreatePipelineNodeCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreatePipelineNodeCommand& obj) { 
        DARABONBA_PTR_TO_JSON(FileInfo, fileInfo_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
        DARABONBA_PTR_TO_JSON(PipelineType, pipelineType_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, CreatePipelineNodeCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(FileInfo, fileInfo_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
        DARABONBA_PTR_FROM_JSON(PipelineType, pipelineType_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      CreatePipelineNodeCommand() = default ;
      CreatePipelineNodeCommand(const CreatePipelineNodeCommand &) = default ;
      CreatePipelineNodeCommand(CreatePipelineNodeCommand &&) = default ;
      CreatePipelineNodeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreatePipelineNodeCommand() = default ;
      CreatePipelineNodeCommand& operator=(const CreatePipelineNodeCommand &) = default ;
      CreatePipelineNodeCommand& operator=(CreatePipelineNodeCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FileInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        };
        FileInfo() = default ;
        FileInfo(const FileInfo &) = default ;
        FileInfo(FileInfo &&) = default ;
        FileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfo() = default ;
        FileInfo& operator=(const FileInfo &) = default ;
        FileInfo& operator=(FileInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->directory_ == nullptr && this->fileName_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FileInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline FileInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> directory_ {};
        // This parameter is required.
        shared_ptr<string> fileName_ {};
      };

      virtual bool empty() const override { return this->fileInfo_ == nullptr
        && this->nodeType_ == nullptr && this->pipelineName_ == nullptr && this->pipelineType_ == nullptr && this->projectId_ == nullptr; };
      // fileInfo Field Functions 
      bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
      void deleteFileInfo() { this->fileInfo_ = nullptr;};
      inline const CreatePipelineNodeCommand::FileInfo & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, CreatePipelineNodeCommand::FileInfo) };
      inline CreatePipelineNodeCommand::FileInfo getFileInfo() { DARABONBA_PTR_GET(fileInfo_, CreatePipelineNodeCommand::FileInfo) };
      inline CreatePipelineNodeCommand& setFileInfo(const CreatePipelineNodeCommand::FileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
      inline CreatePipelineNodeCommand& setFileInfo(CreatePipelineNodeCommand::FileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline CreatePipelineNodeCommand& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // pipelineName Field Functions 
      bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
      void deletePipelineName() { this->pipelineName_ = nullptr;};
      inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
      inline CreatePipelineNodeCommand& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


      // pipelineType Field Functions 
      bool hasPipelineType() const { return this->pipelineType_ != nullptr;};
      void deletePipelineType() { this->pipelineType_ = nullptr;};
      inline string getPipelineType() const { DARABONBA_PTR_GET_DEFAULT(pipelineType_, "") };
      inline CreatePipelineNodeCommand& setPipelineType(string pipelineType) { DARABONBA_PTR_SET_VALUE(pipelineType_, pipelineType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CreatePipelineNodeCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<CreatePipelineNodeCommand::FileInfo> fileInfo_ {};
      // This parameter is required.
      shared_ptr<string> nodeType_ {};
      // This parameter is required.
      shared_ptr<string> pipelineName_ {};
      // This parameter is required.
      shared_ptr<string> pipelineType_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->createPipelineNodeCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createPipelineNodeCommand Field Functions 
    bool hasCreatePipelineNodeCommand() const { return this->createPipelineNodeCommand_ != nullptr;};
    void deleteCreatePipelineNodeCommand() { this->createPipelineNodeCommand_ = nullptr;};
    inline const CreatePipelineNodeRequest::CreatePipelineNodeCommand & getCreatePipelineNodeCommand() const { DARABONBA_PTR_GET_CONST(createPipelineNodeCommand_, CreatePipelineNodeRequest::CreatePipelineNodeCommand) };
    inline CreatePipelineNodeRequest::CreatePipelineNodeCommand getCreatePipelineNodeCommand() { DARABONBA_PTR_GET(createPipelineNodeCommand_, CreatePipelineNodeRequest::CreatePipelineNodeCommand) };
    inline CreatePipelineNodeRequest& setCreatePipelineNodeCommand(const CreatePipelineNodeRequest::CreatePipelineNodeCommand & createPipelineNodeCommand) { DARABONBA_PTR_SET_VALUE(createPipelineNodeCommand_, createPipelineNodeCommand) };
    inline CreatePipelineNodeRequest& setCreatePipelineNodeCommand(CreatePipelineNodeRequest::CreatePipelineNodeCommand && createPipelineNodeCommand) { DARABONBA_PTR_SET_RVALUE(createPipelineNodeCommand_, createPipelineNodeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreatePipelineNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreatePipelineNodeRequest::CreatePipelineNodeCommand> createPipelineNodeCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
