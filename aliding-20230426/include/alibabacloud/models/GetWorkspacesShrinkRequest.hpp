// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetWorkspacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, optionShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, optionShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIdsShrink_);
    };
    GetWorkspacesShrinkRequest() = default ;
    GetWorkspacesShrinkRequest(const GetWorkspacesShrinkRequest &) = default ;
    GetWorkspacesShrinkRequest(GetWorkspacesShrinkRequest &&) = default ;
    GetWorkspacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspacesShrinkRequest() = default ;
    GetWorkspacesShrinkRequest& operator=(const GetWorkspacesShrinkRequest &) = default ;
    GetWorkspacesShrinkRequest& operator=(GetWorkspacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optionShrink_ == nullptr
        && this->tenantContextShrink_ == nullptr && this->workspaceIdsShrink_ == nullptr; };
    // optionShrink Field Functions 
    bool hasOptionShrink() const { return this->optionShrink_ != nullptr;};
    void deleteOptionShrink() { this->optionShrink_ = nullptr;};
    inline string getOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(optionShrink_, "") };
    inline GetWorkspacesShrinkRequest& setOptionShrink(string optionShrink) { DARABONBA_PTR_SET_VALUE(optionShrink_, optionShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetWorkspacesShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // workspaceIdsShrink Field Functions 
    bool hasWorkspaceIdsShrink() const { return this->workspaceIdsShrink_ != nullptr;};
    void deleteWorkspaceIdsShrink() { this->workspaceIdsShrink_ = nullptr;};
    inline string getWorkspaceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(workspaceIdsShrink_, "") };
    inline GetWorkspacesShrinkRequest& setWorkspaceIdsShrink(string workspaceIdsShrink) { DARABONBA_PTR_SET_VALUE(workspaceIdsShrink_, workspaceIdsShrink) };


  protected:
    shared_ptr<string> optionShrink_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
