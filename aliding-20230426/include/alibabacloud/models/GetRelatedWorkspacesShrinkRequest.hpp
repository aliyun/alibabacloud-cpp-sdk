// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRelatedWorkspacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeRecent, includeRecent_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeRecent, includeRecent_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetRelatedWorkspacesShrinkRequest() = default ;
    GetRelatedWorkspacesShrinkRequest(const GetRelatedWorkspacesShrinkRequest &) = default ;
    GetRelatedWorkspacesShrinkRequest(GetRelatedWorkspacesShrinkRequest &&) = default ;
    GetRelatedWorkspacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesShrinkRequest() = default ;
    GetRelatedWorkspacesShrinkRequest& operator=(const GetRelatedWorkspacesShrinkRequest &) = default ;
    GetRelatedWorkspacesShrinkRequest& operator=(GetRelatedWorkspacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeRecent_ == nullptr
        && return this->tenantContextShrink_ == nullptr; };
    // includeRecent Field Functions 
    bool hasIncludeRecent() const { return this->includeRecent_ != nullptr;};
    void deleteIncludeRecent() { this->includeRecent_ = nullptr;};
    inline bool includeRecent() const { DARABONBA_PTR_GET_DEFAULT(includeRecent_, false) };
    inline GetRelatedWorkspacesShrinkRequest& setIncludeRecent(bool includeRecent) { DARABONBA_PTR_SET_VALUE(includeRecent_, includeRecent) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetRelatedWorkspacesShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<bool> includeRecent_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
