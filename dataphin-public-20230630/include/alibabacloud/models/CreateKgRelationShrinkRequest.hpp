// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKGRELATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKGRELATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateKgRelationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKgRelationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKgRelationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateKgRelationShrinkRequest() = default ;
    CreateKgRelationShrinkRequest(const CreateKgRelationShrinkRequest &) = default ;
    CreateKgRelationShrinkRequest(CreateKgRelationShrinkRequest &&) = default ;
    CreateKgRelationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKgRelationShrinkRequest() = default ;
    CreateKgRelationShrinkRequest& operator=(const CreateKgRelationShrinkRequest &) = default ;
    CreateKgRelationShrinkRequest& operator=(CreateKgRelationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // createCommandShrink Field Functions 
    bool hasCreateCommandShrink() const { return this->createCommandShrink_ != nullptr;};
    void deleteCreateCommandShrink() { this->createCommandShrink_ = nullptr;};
    inline string getCreateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(createCommandShrink_, "") };
    inline CreateKgRelationShrinkRequest& setCreateCommandShrink(string createCommandShrink) { DARABONBA_PTR_SET_VALUE(createCommandShrink_, createCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateKgRelationShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateKgRelationShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<string> createCommandShrink_ {};
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
