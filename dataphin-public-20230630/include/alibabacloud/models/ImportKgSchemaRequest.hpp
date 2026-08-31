// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKGSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKGSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ImportKgSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKgSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImportCommand, importCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKgSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportCommand, importCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ImportKgSchemaRequest() = default ;
    ImportKgSchemaRequest(const ImportKgSchemaRequest &) = default ;
    ImportKgSchemaRequest(ImportKgSchemaRequest &&) = default ;
    ImportKgSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKgSchemaRequest() = default ;
    ImportKgSchemaRequest& operator=(const ImportKgSchemaRequest &) = default ;
    ImportKgSchemaRequest& operator=(ImportKgSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImportCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImportCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
        DARABONBA_PTR_TO_JSON(MergeStrategy, mergeStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, ImportCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
        DARABONBA_PTR_FROM_JSON(MergeStrategy, mergeStrategy_);
      };
      ImportCommand() = default ;
      ImportCommand(const ImportCommand &) = default ;
      ImportCommand(ImportCommand &&) = default ;
      ImportCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImportCommand() = default ;
      ImportCommand& operator=(const ImportCommand &) = default ;
      ImportCommand& operator=(ImportCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->inputFormat_ == nullptr && this->mergeStrategy_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ImportCommand& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // inputFormat Field Functions 
      bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
      void deleteInputFormat() { this->inputFormat_ = nullptr;};
      inline string getInputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
      inline ImportCommand& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


      // mergeStrategy Field Functions 
      bool hasMergeStrategy() const { return this->mergeStrategy_ != nullptr;};
      void deleteMergeStrategy() { this->mergeStrategy_ = nullptr;};
      inline string getMergeStrategy() const { DARABONBA_PTR_GET_DEFAULT(mergeStrategy_, "") };
      inline ImportCommand& setMergeStrategy(string mergeStrategy) { DARABONBA_PTR_SET_VALUE(mergeStrategy_, mergeStrategy) };


    protected:
      // The knowledge graph definition content converted based on the specified format.
      shared_ptr<string> content_ {};
      // The format of the knowledge graph definition content. Valid values: json and yaml. Default value: yaml.
      shared_ptr<string> inputFormat_ {};
      // The merge strategy for the knowledge graph definition content. Valid values: replace and merge. Default value: replace.
      shared_ptr<string> mergeStrategy_ {};
    };

    virtual bool empty() const override { return this->importCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // importCommand Field Functions 
    bool hasImportCommand() const { return this->importCommand_ != nullptr;};
    void deleteImportCommand() { this->importCommand_ = nullptr;};
    inline const ImportKgSchemaRequest::ImportCommand & getImportCommand() const { DARABONBA_PTR_GET_CONST(importCommand_, ImportKgSchemaRequest::ImportCommand) };
    inline ImportKgSchemaRequest::ImportCommand getImportCommand() { DARABONBA_PTR_GET(importCommand_, ImportKgSchemaRequest::ImportCommand) };
    inline ImportKgSchemaRequest& setImportCommand(const ImportKgSchemaRequest::ImportCommand & importCommand) { DARABONBA_PTR_SET_VALUE(importCommand_, importCommand) };
    inline ImportKgSchemaRequest& setImportCommand(ImportKgSchemaRequest::ImportCommand && importCommand) { DARABONBA_PTR_SET_RVALUE(importCommand_, importCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ImportKgSchemaRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ImportKgSchemaRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ImportKgSchemaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The command for importing the knowledge graph definition.
    // 
    // This parameter is required.
    shared_ptr<ImportKgSchemaRequest::ImportCommand> importCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
