// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECONVERSATIONSHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECONVERSATIONSHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class EnableConversationShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableConversationShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIds_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableConversationShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIds_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    EnableConversationShareRequest() = default ;
    EnableConversationShareRequest(const EnableConversationShareRequest &) = default ;
    EnableConversationShareRequest(EnableConversationShareRequest &&) = default ;
    EnableConversationShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableConversationShareRequest() = default ;
    EnableConversationShareRequest& operator=(const EnableConversationShareRequest &) = default ;
    EnableConversationShareRequest& operator=(EnableConversationShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->shareAccessType_ == nullptr && this->shareUserGroupIds_ == nullptr && this->shareUserIds_ == nullptr && this->tenantId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EnableConversationShareRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline EnableConversationShareRequest& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareUserGroupIds Field Functions 
    bool hasShareUserGroupIds() const { return this->shareUserGroupIds_ != nullptr;};
    void deleteShareUserGroupIds() { this->shareUserGroupIds_ = nullptr;};
    inline const vector<string> & getShareUserGroupIds() const { DARABONBA_PTR_GET_CONST(shareUserGroupIds_, vector<string>) };
    inline vector<string> getShareUserGroupIds() { DARABONBA_PTR_GET(shareUserGroupIds_, vector<string>) };
    inline EnableConversationShareRequest& setShareUserGroupIds(const vector<string> & shareUserGroupIds) { DARABONBA_PTR_SET_VALUE(shareUserGroupIds_, shareUserGroupIds) };
    inline EnableConversationShareRequest& setShareUserGroupIds(vector<string> && shareUserGroupIds) { DARABONBA_PTR_SET_RVALUE(shareUserGroupIds_, shareUserGroupIds) };


    // shareUserIds Field Functions 
    bool hasShareUserIds() const { return this->shareUserIds_ != nullptr;};
    void deleteShareUserIds() { this->shareUserIds_ = nullptr;};
    inline const vector<int64_t> & getShareUserIds() const { DARABONBA_PTR_GET_CONST(shareUserIds_, vector<int64_t>) };
    inline vector<int64_t> getShareUserIds() { DARABONBA_PTR_GET(shareUserIds_, vector<int64_t>) };
    inline EnableConversationShareRequest& setShareUserIds(const vector<int64_t> & shareUserIds) { DARABONBA_PTR_SET_VALUE(shareUserIds_, shareUserIds) };
    inline EnableConversationShareRequest& setShareUserIds(vector<int64_t> && shareUserIds) { DARABONBA_PTR_SET_RVALUE(shareUserIds_, shareUserIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline EnableConversationShareRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


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
    shared_ptr<vector<string>> shareUserGroupIds_ {};
    // The list of platform user IDs for the specified scope. When shareAccessType is set to SPECIFIED, at least one of this list or the user group list must not be empty.
    shared_ptr<vector<int64_t>> shareUserIds_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
