// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListJobTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobTemplates, jobTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobTemplates, jobTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobTemplatesResponseBody() = default ;
    ListJobTemplatesResponseBody(const ListJobTemplatesResponseBody &) = default ;
    ListJobTemplatesResponseBody(ListJobTemplatesResponseBody &&) = default ;
    ListJobTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobTemplatesResponseBody() = default ;
    ListJobTemplatesResponseBody& operator=(const ListJobTemplatesResponseBody &) = default ;
    ListJobTemplatesResponseBody& operator=(ListJobTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(ModifiedBy, modifiedBy_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, JobTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(ModifiedBy, modifiedBy_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      JobTemplates() = default ;
      JobTemplates(const JobTemplates &) = default ;
      JobTemplates(JobTemplates &&) = default ;
      JobTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobTemplates() = default ;
      JobTemplates& operator=(const JobTemplates &) = default ;
      JobTemplates& operator=(JobTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultVersion_ == nullptr
        && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifyTime_ == nullptr && this->metadata_ == nullptr && this->modifiedBy_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline int32_t getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, 0) };
      inline JobTemplates& setDefaultVersion(int32_t defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline JobTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline JobTemplates& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifyTime Field Functions 
      bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
      void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
      inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
      inline JobTemplates& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline JobTemplates& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline JobTemplates& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // modifiedBy Field Functions 
      bool hasModifiedBy() const { return this->modifiedBy_ != nullptr;};
      void deleteModifiedBy() { this->modifiedBy_ = nullptr;};
      inline string getModifiedBy() const { DARABONBA_PTR_GET_DEFAULT(modifiedBy_, "") };
      inline JobTemplates& setModifiedBy(string modifiedBy) { DARABONBA_PTR_SET_VALUE(modifiedBy_, modifiedBy) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline JobTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline JobTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline JobTemplates& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline JobTemplates& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline JobTemplates& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The default version number.
      shared_ptr<int32_t> defaultVersion_ {};
      // The description of the job template.
      shared_ptr<string> description_ {};
      // The creation time of the template, in UTC and ISO 8601 format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // The modification time of the template, in UTC and ISO 8601 format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtModifyTime_ {};
      // Custom metadata, represented as a collection of key-value pairs.
      Darabonba::Json metadata_ {};
      // The ID of the modifier.
      shared_ptr<string> modifiedBy_ {};
      // The ID of the job template.
      shared_ptr<string> templateId_ {};
      // The name of the job template.
      shared_ptr<string> templateName_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // The ID of the creator.
      shared_ptr<string> userId_ {};
      // The ID of the workspace.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->jobTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobTemplates Field Functions 
    bool hasJobTemplates() const { return this->jobTemplates_ != nullptr;};
    void deleteJobTemplates() { this->jobTemplates_ = nullptr;};
    inline const vector<ListJobTemplatesResponseBody::JobTemplates> & getJobTemplates() const { DARABONBA_PTR_GET_CONST(jobTemplates_, vector<ListJobTemplatesResponseBody::JobTemplates>) };
    inline vector<ListJobTemplatesResponseBody::JobTemplates> getJobTemplates() { DARABONBA_PTR_GET(jobTemplates_, vector<ListJobTemplatesResponseBody::JobTemplates>) };
    inline ListJobTemplatesResponseBody& setJobTemplates(const vector<ListJobTemplatesResponseBody::JobTemplates> & jobTemplates) { DARABONBA_PTR_SET_VALUE(jobTemplates_, jobTemplates) };
    inline ListJobTemplatesResponseBody& setJobTemplates(vector<ListJobTemplatesResponseBody::JobTemplates> && jobTemplates) { DARABONBA_PTR_SET_RVALUE(jobTemplates_, jobTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of job templates.
    shared_ptr<vector<ListJobTemplatesResponseBody::JobTemplates>> jobTemplates_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of results on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique ID of the request. Use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of job templates that match the filter conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
