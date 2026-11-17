// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECONVERSATIONSHARESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECONVERSATIONSHARESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class EnableConversationShareShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableConversationShareShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableConversationShareShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    EnableConversationShareShrinkRequest() = default ;
    EnableConversationShareShrinkRequest(const EnableConversationShareShrinkRequest &) = default ;
    EnableConversationShareShrinkRequest(EnableConversationShareShrinkRequest &&) = default ;
    EnableConversationShareShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableConversationShareShrinkRequest() = default ;
    EnableConversationShareShrinkRequest& operator=(const EnableConversationShareShrinkRequest &) = default ;
    EnableConversationShareShrinkRequest& operator=(EnableConversationShareShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->shareAccessType_ == nullptr && this->shareUserGroupIdsShrink_ == nullptr && this->shareUserIdsShrink_ == nullptr && this->tenantId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EnableConversationShareShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline EnableConversationShareShrinkRequest& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareUserGroupIdsShrink Field Functions 
    bool hasShareUserGroupIdsShrink() const { return this->shareUserGroupIdsShrink_ != nullptr;};
    void deleteShareUserGroupIdsShrink() { this->shareUserGroupIdsShrink_ = nullptr;};
    inline string getShareUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(shareUserGroupIdsShrink_, "") };
    inline EnableConversationShareShrinkRequest& setShareUserGroupIdsShrink(string shareUserGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(shareUserGroupIdsShrink_, shareUserGroupIdsShrink) };


    // shareUserIdsShrink Field Functions 
    bool hasShareUserIdsShrink() const { return this->shareUserIdsShrink_ != nullptr;};
    void deleteShareUserIdsShrink() { this->shareUserIdsShrink_ = nullptr;};
    inline string getShareUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(shareUserIdsShrink_, "") };
    inline EnableConversationShareShrinkRequest& setShareUserIdsShrink(string shareUserIdsShrink) { DARABONBA_PTR_SET_VALUE(shareUserIdsShrink_, shareUserIdsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline EnableConversationShareShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The unique identifier of the function session.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The sharing scope. Valid values:
    // - PUBLIC: accessible to all users
    // - SPECIFIED: accessible to specified users or user groups
    shared_ptr<string> shareAccessType_ {};
    // The list of user group IDs for the specified scope. When shareAccessType is set to SPECIFIED, at least one of this list or the user list must not be empty.
    shared_ptr<string> shareUserGroupIdsShrink_ {};
    // The list of platform user IDs for the specified scope. When shareAccessType is set to SPECIFIED, at least one of this list or the user group list must not be empty.
    shared_ptr<string> shareUserIdsShrink_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
