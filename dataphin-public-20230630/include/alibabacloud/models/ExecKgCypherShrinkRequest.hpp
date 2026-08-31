// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECKGCYPHERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECKGCYPHERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecKgCypherShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecKgCypherShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecCommand, execCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecKgCypherShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecCommand, execCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExecKgCypherShrinkRequest() = default ;
    ExecKgCypherShrinkRequest(const ExecKgCypherShrinkRequest &) = default ;
    ExecKgCypherShrinkRequest(ExecKgCypherShrinkRequest &&) = default ;
    ExecKgCypherShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecKgCypherShrinkRequest() = default ;
    ExecKgCypherShrinkRequest& operator=(const ExecKgCypherShrinkRequest &) = default ;
    ExecKgCypherShrinkRequest& operator=(ExecKgCypherShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // execCommandShrink Field Functions 
    bool hasExecCommandShrink() const { return this->execCommandShrink_ != nullptr;};
    void deleteExecCommandShrink() { this->execCommandShrink_ = nullptr;};
    inline string getExecCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(execCommandShrink_, "") };
    inline ExecKgCypherShrinkRequest& setExecCommandShrink(string execCommandShrink) { DARABONBA_PTR_SET_VALUE(execCommandShrink_, execCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecKgCypherShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ExecKgCypherShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExecKgCypherShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The custom Cypher query instruction.
    // 
    // This parameter is required.
    shared_ptr<string> execCommandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
