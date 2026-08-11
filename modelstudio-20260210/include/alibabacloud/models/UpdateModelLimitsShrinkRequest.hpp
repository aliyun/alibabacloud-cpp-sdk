// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELLIMITSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELLIMITSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class UpdateModelLimitsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelLimitsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceLimits, workspaceLimitsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelLimitsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceLimits, workspaceLimitsShrink_);
    };
    UpdateModelLimitsShrinkRequest() = default ;
    UpdateModelLimitsShrinkRequest(const UpdateModelLimitsShrinkRequest &) = default ;
    UpdateModelLimitsShrinkRequest(UpdateModelLimitsShrinkRequest &&) = default ;
    UpdateModelLimitsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelLimitsShrinkRequest() = default ;
    UpdateModelLimitsShrinkRequest& operator=(const UpdateModelLimitsShrinkRequest &) = default ;
    UpdateModelLimitsShrinkRequest& operator=(UpdateModelLimitsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr
        && this->workspaceLimitsShrink_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateModelLimitsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceLimitsShrink Field Functions 
    bool hasWorkspaceLimitsShrink() const { return this->workspaceLimitsShrink_ != nullptr;};
    void deleteWorkspaceLimitsShrink() { this->workspaceLimitsShrink_ = nullptr;};
    inline string getWorkspaceLimitsShrink() const { DARABONBA_PTR_GET_DEFAULT(workspaceLimitsShrink_, "") };
    inline UpdateModelLimitsShrinkRequest& setWorkspaceLimitsShrink(string workspaceLimitsShrink) { DARABONBA_PTR_SET_VALUE(workspaceLimitsShrink_, workspaceLimitsShrink) };


  protected:
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    // The throttling values for the workspace.
    shared_ptr<string> workspaceLimitsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
