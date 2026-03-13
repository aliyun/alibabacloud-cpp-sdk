// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybooksResponseBody() = default ;
    DescribePlaybooksResponseBody(const DescribePlaybooksResponseBody &) = default ;
    DescribePlaybooksResponseBody(DescribePlaybooksResponseBody &&) = default ;
    DescribePlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybooksResponseBody() = default ;
    DescribePlaybooksResponseBody& operator=(const DescribePlaybooksResponseBody &) = default ;
    DescribePlaybooksResponseBody& operator=(DescribePlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Playbooks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Playbooks& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(LastRuntime, lastRuntime_);
        DARABONBA_PTR_TO_JSON(OwnType, ownType_);
        DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Playbooks& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(LastRuntime, lastRuntime_);
        DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
        DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Playbooks() = default ;
      Playbooks(const Playbooks &) = default ;
      Playbooks(Playbooks &&) = default ;
      Playbooks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Playbooks() = default ;
      Playbooks& operator=(const Playbooks &) = default ;
      Playbooks& operator=(Playbooks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->lastRuntime_ == nullptr
        && this->ownType_ == nullptr && this->paramType_ == nullptr && this->playbookUuid_ == nullptr && this->tenantId_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline int32_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
      inline Playbooks& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Playbooks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Playbooks& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Playbooks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Playbooks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // lastRuntime Field Functions 
      bool hasLastRuntime() const { return this->lastRuntime_ != nullptr;};
      void deleteLastRuntime() { this->lastRuntime_ = nullptr;};
      inline int64_t getLastRuntime() const { DARABONBA_PTR_GET_DEFAULT(lastRuntime_, 0L) };
      inline Playbooks& setLastRuntime(int64_t lastRuntime) { DARABONBA_PTR_SET_VALUE(lastRuntime_, lastRuntime) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline string getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
      inline Playbooks& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // paramType Field Functions 
      bool hasParamType() const { return this->paramType_ != nullptr;};
      void deleteParamType() { this->paramType_ = nullptr;};
      inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
      inline Playbooks& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Playbooks& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Playbooks& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The status indicator of the playbook. Values:
      // 
      // - **1**: Indicates the playbook is activated.
      // - **0**: Indicates the playbook is deactivated.
      shared_ptr<int32_t> active_ {};
      // The description of the playbook.
      shared_ptr<string> description_ {};
      // The display name of the playbook.
      shared_ptr<string> displayName_ {};
      // The creation time of the playbook, in 13-digit timestamp format.
      shared_ptr<int64_t> gmtCreate_ {};
      // The modification time of the playbook.
      shared_ptr<string> gmtModified_ {};
      // The last execution time of the playbook, in 13-digit timestamp format.
      shared_ptr<int64_t> lastRuntime_ {};
      // The type of the playbook. Values:
      // 
      // - **preset**: Predefined playbook.
      // - **user**: Custom playbook.
      shared_ptr<string> ownType_ {};
      // The trigger method for the playbook, with a default value of **query all**. Possible values are:
      // - **template-incident**: Security incident.
      // - **template-ip**: IP entity.
      // - **template-file**: File entity.
      // - **template-process**: Process entity.
      // - **template-alert**: Security alert.
      // - **template-domain**: Domain entity.
      // - **template-container**: Container entity.
      // - **template-host**: Host entity.
      shared_ptr<string> paramType_ {};
      // The UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number in pagination queries.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of items per page in pagination queries.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of items found.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->playbooks_ == nullptr && this->requestId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribePlaybooksResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribePlaybooksResponseBody::Page) };
    inline DescribePlaybooksResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribePlaybooksResponseBody::Page) };
    inline DescribePlaybooksResponseBody& setPage(const DescribePlaybooksResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribePlaybooksResponseBody& setPage(DescribePlaybooksResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // playbooks Field Functions 
    bool hasPlaybooks() const { return this->playbooks_ != nullptr;};
    void deletePlaybooks() { this->playbooks_ = nullptr;};
    inline const vector<DescribePlaybooksResponseBody::Playbooks> & getPlaybooks() const { DARABONBA_PTR_GET_CONST(playbooks_, vector<DescribePlaybooksResponseBody::Playbooks>) };
    inline vector<DescribePlaybooksResponseBody::Playbooks> getPlaybooks() { DARABONBA_PTR_GET(playbooks_, vector<DescribePlaybooksResponseBody::Playbooks>) };
    inline DescribePlaybooksResponseBody& setPlaybooks(const vector<DescribePlaybooksResponseBody::Playbooks> & playbooks) { DARABONBA_PTR_SET_VALUE(playbooks_, playbooks) };
    inline DescribePlaybooksResponseBody& setPlaybooks(vector<DescribePlaybooksResponseBody::Playbooks> && playbooks) { DARABONBA_PTR_SET_RVALUE(playbooks_, playbooks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Pagination query information.
    shared_ptr<DescribePlaybooksResponseBody::Page> page_ {};
    // List of playbooks.
    shared_ptr<vector<DescribePlaybooksResponseBody::Playbooks>> playbooks_ {};
    // The ID of the current request, generated by Alibaba Cloud as a unique identifier for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
