// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEOUTPUTITEMSHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEOUTPUTITEMSHAREREQUEST_HPP_
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
  class EnableOutputItemShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableOutputItemShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIds_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableOutputItemShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIds_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    EnableOutputItemShareRequest() = default ;
    EnableOutputItemShareRequest(const EnableOutputItemShareRequest &) = default ;
    EnableOutputItemShareRequest(EnableOutputItemShareRequest &&) = default ;
    EnableOutputItemShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableOutputItemShareRequest() = default ;
    EnableOutputItemShareRequest& operator=(const EnableOutputItemShareRequest &) = default ;
    EnableOutputItemShareRequest& operator=(EnableOutputItemShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputItemId_ == nullptr
        && this->outputItemName_ == nullptr && this->sessionId_ == nullptr && this->shareAccessType_ == nullptr && this->shareUserGroupIds_ == nullptr && this->shareUserIds_ == nullptr
        && this->tenantId_ == nullptr; };
    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline EnableOutputItemShareRequest& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // outputItemName Field Functions 
    bool hasOutputItemName() const { return this->outputItemName_ != nullptr;};
    void deleteOutputItemName() { this->outputItemName_ = nullptr;};
    inline string getOutputItemName() const { DARABONBA_PTR_GET_DEFAULT(outputItemName_, "") };
    inline EnableOutputItemShareRequest& setOutputItemName(string outputItemName) { DARABONBA_PTR_SET_VALUE(outputItemName_, outputItemName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EnableOutputItemShareRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline EnableOutputItemShareRequest& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareUserGroupIds Field Functions 
    bool hasShareUserGroupIds() const { return this->shareUserGroupIds_ != nullptr;};
    void deleteShareUserGroupIds() { this->shareUserGroupIds_ = nullptr;};
    inline const vector<string> & getShareUserGroupIds() const { DARABONBA_PTR_GET_CONST(shareUserGroupIds_, vector<string>) };
    inline vector<string> getShareUserGroupIds() { DARABONBA_PTR_GET(shareUserGroupIds_, vector<string>) };
    inline EnableOutputItemShareRequest& setShareUserGroupIds(const vector<string> & shareUserGroupIds) { DARABONBA_PTR_SET_VALUE(shareUserGroupIds_, shareUserGroupIds) };
    inline EnableOutputItemShareRequest& setShareUserGroupIds(vector<string> && shareUserGroupIds) { DARABONBA_PTR_SET_RVALUE(shareUserGroupIds_, shareUserGroupIds) };


    // shareUserIds Field Functions 
    bool hasShareUserIds() const { return this->shareUserIds_ != nullptr;};
    void deleteShareUserIds() { this->shareUserIds_ = nullptr;};
    inline const vector<int64_t> & getShareUserIds() const { DARABONBA_PTR_GET_CONST(shareUserIds_, vector<int64_t>) };
    inline vector<int64_t> getShareUserIds() { DARABONBA_PTR_GET(shareUserIds_, vector<int64_t>) };
    inline EnableOutputItemShareRequest& setShareUserIds(const vector<int64_t> & shareUserIds) { DARABONBA_PTR_SET_VALUE(shareUserIds_, shareUserIds) };
    inline EnableOutputItemShareRequest& setShareUserIds(vector<int64_t> && shareUserIds) { DARABONBA_PTR_SET_RVALUE(shareUserIds_, shareUserIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline EnableOutputItemShareRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


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
    shared_ptr<vector<string>> shareUserGroupIds_ {};
    // The list of platform user IDs within the specified scope.
    shared_ptr<vector<int64_t>> shareUserIds_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
