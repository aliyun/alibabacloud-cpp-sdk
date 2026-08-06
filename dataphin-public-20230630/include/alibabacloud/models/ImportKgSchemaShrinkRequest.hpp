// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKGSCHEMASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKGSCHEMASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ImportKgSchemaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKgSchemaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImportCommand, importCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKgSchemaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportCommand, importCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ImportKgSchemaShrinkRequest() = default ;
    ImportKgSchemaShrinkRequest(const ImportKgSchemaShrinkRequest &) = default ;
    ImportKgSchemaShrinkRequest(ImportKgSchemaShrinkRequest &&) = default ;
    ImportKgSchemaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKgSchemaShrinkRequest() = default ;
    ImportKgSchemaShrinkRequest& operator=(const ImportKgSchemaShrinkRequest &) = default ;
    ImportKgSchemaShrinkRequest& operator=(ImportKgSchemaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // importCommandShrink Field Functions 
    bool hasImportCommandShrink() const { return this->importCommandShrink_ != nullptr;};
    void deleteImportCommandShrink() { this->importCommandShrink_ = nullptr;};
    inline string getImportCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(importCommandShrink_, "") };
    inline ImportKgSchemaShrinkRequest& setImportCommandShrink(string importCommandShrink) { DARABONBA_PTR_SET_VALUE(importCommandShrink_, importCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ImportKgSchemaShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ImportKgSchemaShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The instruction for importing the knowledge graph definition.
    // 
    // This parameter is required.
    shared_ptr<string> importCommandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
