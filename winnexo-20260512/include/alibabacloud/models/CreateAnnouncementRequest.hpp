// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANNOUNCEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANNOUNCEMENTREQUEST_HPP_
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
  class CreateAnnouncementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnnouncementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(displayPage, displayPage_);
      DARABONBA_PTR_TO_JSON(displayType, displayType_);
      DARABONBA_PTR_TO_JSON(effectiveEnd, effectiveEnd_);
      DARABONBA_PTR_TO_JSON(effectiveStart, effectiveStart_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(publishNow, publishNow_);
      DARABONBA_PTR_TO_JSON(targetRoleCodes, targetRoleCodes_);
      DARABONBA_PTR_TO_JSON(targetRoleMode, targetRoleMode_);
      DARABONBA_PTR_TO_JSON(targetTenantIds, targetTenantIds_);
      DARABONBA_PTR_TO_JSON(targetTenantMode, targetTenantMode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnnouncementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(displayPage, displayPage_);
      DARABONBA_PTR_FROM_JSON(displayType, displayType_);
      DARABONBA_PTR_FROM_JSON(effectiveEnd, effectiveEnd_);
      DARABONBA_PTR_FROM_JSON(effectiveStart, effectiveStart_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(publishNow, publishNow_);
      DARABONBA_PTR_FROM_JSON(targetRoleCodes, targetRoleCodes_);
      DARABONBA_PTR_FROM_JSON(targetRoleMode, targetRoleMode_);
      DARABONBA_PTR_FROM_JSON(targetTenantIds, targetTenantIds_);
      DARABONBA_PTR_FROM_JSON(targetTenantMode, targetTenantMode_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateAnnouncementRequest() = default ;
    CreateAnnouncementRequest(const CreateAnnouncementRequest &) = default ;
    CreateAnnouncementRequest(CreateAnnouncementRequest &&) = default ;
    CreateAnnouncementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnnouncementRequest() = default ;
    CreateAnnouncementRequest& operator=(const CreateAnnouncementRequest &) = default ;
    CreateAnnouncementRequest& operator=(CreateAnnouncementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->displayPage_ == nullptr && this->displayType_ == nullptr && this->effectiveEnd_ == nullptr && this->effectiveStart_ == nullptr && this->priority_ == nullptr
        && this->publishNow_ == nullptr && this->targetRoleCodes_ == nullptr && this->targetRoleMode_ == nullptr && this->targetTenantIds_ == nullptr && this->targetTenantMode_ == nullptr
        && this->tenantId_ == nullptr && this->title_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateAnnouncementRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // displayPage Field Functions 
    bool hasDisplayPage() const { return this->displayPage_ != nullptr;};
    void deleteDisplayPage() { this->displayPage_ = nullptr;};
    inline string getDisplayPage() const { DARABONBA_PTR_GET_DEFAULT(displayPage_, "") };
    inline CreateAnnouncementRequest& setDisplayPage(string displayPage) { DARABONBA_PTR_SET_VALUE(displayPage_, displayPage) };


    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline CreateAnnouncementRequest& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // effectiveEnd Field Functions 
    bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
    void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
    inline string getEffectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
    inline CreateAnnouncementRequest& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


    // effectiveStart Field Functions 
    bool hasEffectiveStart() const { return this->effectiveStart_ != nullptr;};
    void deleteEffectiveStart() { this->effectiveStart_ = nullptr;};
    inline string getEffectiveStart() const { DARABONBA_PTR_GET_DEFAULT(effectiveStart_, "") };
    inline CreateAnnouncementRequest& setEffectiveStart(string effectiveStart) { DARABONBA_PTR_SET_VALUE(effectiveStart_, effectiveStart) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateAnnouncementRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // publishNow Field Functions 
    bool hasPublishNow() const { return this->publishNow_ != nullptr;};
    void deletePublishNow() { this->publishNow_ = nullptr;};
    inline bool getPublishNow() const { DARABONBA_PTR_GET_DEFAULT(publishNow_, false) };
    inline CreateAnnouncementRequest& setPublishNow(bool publishNow) { DARABONBA_PTR_SET_VALUE(publishNow_, publishNow) };


    // targetRoleCodes Field Functions 
    bool hasTargetRoleCodes() const { return this->targetRoleCodes_ != nullptr;};
    void deleteTargetRoleCodes() { this->targetRoleCodes_ = nullptr;};
    inline const vector<string> & getTargetRoleCodes() const { DARABONBA_PTR_GET_CONST(targetRoleCodes_, vector<string>) };
    inline vector<string> getTargetRoleCodes() { DARABONBA_PTR_GET(targetRoleCodes_, vector<string>) };
    inline CreateAnnouncementRequest& setTargetRoleCodes(const vector<string> & targetRoleCodes) { DARABONBA_PTR_SET_VALUE(targetRoleCodes_, targetRoleCodes) };
    inline CreateAnnouncementRequest& setTargetRoleCodes(vector<string> && targetRoleCodes) { DARABONBA_PTR_SET_RVALUE(targetRoleCodes_, targetRoleCodes) };


    // targetRoleMode Field Functions 
    bool hasTargetRoleMode() const { return this->targetRoleMode_ != nullptr;};
    void deleteTargetRoleMode() { this->targetRoleMode_ = nullptr;};
    inline string getTargetRoleMode() const { DARABONBA_PTR_GET_DEFAULT(targetRoleMode_, "") };
    inline CreateAnnouncementRequest& setTargetRoleMode(string targetRoleMode) { DARABONBA_PTR_SET_VALUE(targetRoleMode_, targetRoleMode) };


    // targetTenantIds Field Functions 
    bool hasTargetTenantIds() const { return this->targetTenantIds_ != nullptr;};
    void deleteTargetTenantIds() { this->targetTenantIds_ = nullptr;};
    inline const vector<int64_t> & getTargetTenantIds() const { DARABONBA_PTR_GET_CONST(targetTenantIds_, vector<int64_t>) };
    inline vector<int64_t> getTargetTenantIds() { DARABONBA_PTR_GET(targetTenantIds_, vector<int64_t>) };
    inline CreateAnnouncementRequest& setTargetTenantIds(const vector<int64_t> & targetTenantIds) { DARABONBA_PTR_SET_VALUE(targetTenantIds_, targetTenantIds) };
    inline CreateAnnouncementRequest& setTargetTenantIds(vector<int64_t> && targetTenantIds) { DARABONBA_PTR_SET_RVALUE(targetTenantIds_, targetTenantIds) };


    // targetTenantMode Field Functions 
    bool hasTargetTenantMode() const { return this->targetTenantMode_ != nullptr;};
    void deleteTargetTenantMode() { this->targetTenantMode_ = nullptr;};
    inline string getTargetTenantMode() const { DARABONBA_PTR_GET_DEFAULT(targetTenantMode_, "") };
    inline CreateAnnouncementRequest& setTargetTenantMode(string targetTenantMode) { DARABONBA_PTR_SET_VALUE(targetTenantMode_, targetTenantMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateAnnouncementRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateAnnouncementRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The content of the notice.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The display page. Valid values: ALL, FRONTEND, and BACKEND.
    shared_ptr<string> displayPage_ {};
    // The display type and group label.
    shared_ptr<string> displayType_ {};
    // The effective end time.
    shared_ptr<string> effectiveEnd_ {};
    // The effective start time in ISO 8601 format with time zone. If this parameter is not specified, the notice takes effect immediately.
    shared_ptr<string> effectiveStart_ {};
    // The priority. Valid values:
    // 
    // This parameter is required.
    shared_ptr<string> priority_ {};
    // Specifies whether to publish the notice immediately after creation.
    shared_ptr<bool> publishNow_ {};
    // The list of system role codes. This parameter is used when targetRoleMode is set to SPECIFIED.
    shared_ptr<vector<string>> targetRoleCodes_ {};
    // The target role scope. Valid values: ALL and SPECIFIED.
    shared_ptr<string> targetRoleMode_ {};
    // The list of target tenant IDs. This parameter is used when targetTenantMode is set to SPECIFIED.
    shared_ptr<vector<int64_t>> targetTenantIds_ {};
    // The target tenant scope. Valid values: ALL and SPECIFIED.
    shared_ptr<string> targetTenantMode_ {};
    // The ID of the tenant for which the notice takes effect.
    shared_ptr<string> tenantId_ {};
    // The title of the notice.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
