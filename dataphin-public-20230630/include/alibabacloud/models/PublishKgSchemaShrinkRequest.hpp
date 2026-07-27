// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHKGSCHEMASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHKGSCHEMASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishKgSchemaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishKgSchemaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommandShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishKgSchemaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommandShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PublishKgSchemaShrinkRequest() = default ;
    PublishKgSchemaShrinkRequest(const PublishKgSchemaShrinkRequest &) = default ;
    PublishKgSchemaShrinkRequest(PublishKgSchemaShrinkRequest &&) = default ;
    PublishKgSchemaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishKgSchemaShrinkRequest() = default ;
    PublishKgSchemaShrinkRequest& operator=(const PublishKgSchemaShrinkRequest &) = default ;
    PublishKgSchemaShrinkRequest& operator=(PublishKgSchemaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->publishCommandShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishKgSchemaShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // publishCommandShrink Field Functions 
    bool hasPublishCommandShrink() const { return this->publishCommandShrink_ != nullptr;};
    void deletePublishCommandShrink() { this->publishCommandShrink_ = nullptr;};
    inline string getPublishCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(publishCommandShrink_, "") };
    inline PublishKgSchemaShrinkRequest& setPublishCommandShrink(string publishCommandShrink) { DARABONBA_PTR_SET_VALUE(publishCommandShrink_, publishCommandShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PublishKgSchemaShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The publish command and its details.
    // 
    // This parameter is required.
    shared_ptr<string> publishCommandShrink_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
