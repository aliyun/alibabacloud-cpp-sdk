// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEOUTPUTITEMSHARESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEOUTPUTITEMSHARESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class EnableOutputItemShareShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableOutputItemShareShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableOutputItemShareShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    EnableOutputItemShareShrinkRequest() = default ;
    EnableOutputItemShareShrinkRequest(const EnableOutputItemShareShrinkRequest &) = default ;
    EnableOutputItemShareShrinkRequest(EnableOutputItemShareShrinkRequest &&) = default ;
    EnableOutputItemShareShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableOutputItemShareShrinkRequest() = default ;
    EnableOutputItemShareShrinkRequest& operator=(const EnableOutputItemShareShrinkRequest &) = default ;
    EnableOutputItemShareShrinkRequest& operator=(EnableOutputItemShareShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputItemId_ == nullptr
        && this->outputItemName_ == nullptr && this->sessionId_ == nullptr && this->shareAccessType_ == nullptr && this->shareUserGroupIdsShrink_ == nullptr && this->shareUserIdsShrink_ == nullptr
        && this->tenantId_ == nullptr; };
    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline EnableOutputItemShareShrinkRequest& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // outputItemName Field Functions 
    bool hasOutputItemName() const { return this->outputItemName_ != nullptr;};
    void deleteOutputItemName() { this->outputItemName_ = nullptr;};
    inline string getOutputItemName() const { DARABONBA_PTR_GET_DEFAULT(outputItemName_, "") };
    inline EnableOutputItemShareShrinkRequest& setOutputItemName(string outputItemName) { DARABONBA_PTR_SET_VALUE(outputItemName_, outputItemName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EnableOutputItemShareShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline EnableOutputItemShareShrinkRequest& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareUserGroupIdsShrink Field Functions 
    bool hasShareUserGroupIdsShrink() const { return this->shareUserGroupIdsShrink_ != nullptr;};
    void deleteShareUserGroupIdsShrink() { this->shareUserGroupIdsShrink_ = nullptr;};
    inline string getShareUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(shareUserGroupIdsShrink_, "") };
    inline EnableOutputItemShareShrinkRequest& setShareUserGroupIdsShrink(string shareUserGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(shareUserGroupIdsShrink_, shareUserGroupIdsShrink) };


    // shareUserIdsShrink Field Functions 
    bool hasShareUserIdsShrink() const { return this->shareUserIdsShrink_ != nullptr;};
    void deleteShareUserIdsShrink() { this->shareUserIdsShrink_ = nullptr;};
    inline string getShareUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(shareUserIdsShrink_, "") };
    inline EnableOutputItemShareShrinkRequest& setShareUserIdsShrink(string shareUserIdsShrink) { DARABONBA_PTR_SET_VALUE(shareUserIdsShrink_, shareUserIdsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline EnableOutputItemShareShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the output item.
    shared_ptr<string> outputItemId_ {};
    // The name of the output item. This parameter must be used together with sessionId. If multiple output items have the same name, the request is rejected and you are prompted to use outputItemId instead.
    shared_ptr<string> outputItemName_ {};
    // The session ID used for exact filtering. The length is 1 to 128 characters. This parameter applies to common sessions, skill sessions, and the executionId of task executions.
    shared_ptr<string> sessionId_ {};
    // The sharing scope. Valid values:
    // - PUBLIC: Accessible to all users.
    // - SPECIFIED: Accessible only to specified users or user groups.
    shared_ptr<string> shareAccessType_ {};
    // The list of user group IDs within the specified scope.
    shared_ptr<string> shareUserGroupIdsShrink_ {};
    // The list of platform user IDs within the specified scope.
    shared_ptr<string> shareUserIdsShrink_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
