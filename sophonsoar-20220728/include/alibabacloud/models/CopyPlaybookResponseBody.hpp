// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class CopyPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopyPlaybookResponseBody() = default ;
    CopyPlaybookResponseBody(const CopyPlaybookResponseBody &) = default ;
    CopyPlaybookResponseBody(CopyPlaybookResponseBody &&) = default ;
    CopyPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyPlaybookResponseBody() = default ;
    CopyPlaybookResponseBody& operator=(const CopyPlaybookResponseBody &) = default ;
    CopyPlaybookResponseBody& operator=(CopyPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(FailNum, failNum_);
        DARABONBA_PTR_TO_JSON(FailRate, failRate_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(HistoryMd5, historyMd5_);
        DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
        DARABONBA_PTR_TO_JSON(LastRuntime, lastRuntime_);
        DARABONBA_PTR_TO_JSON(LogicReleaseTaskflowMd5, logicReleaseTaskflowMd5_);
        DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_TO_JSON(OwnType, ownType_);
        DARABONBA_PTR_TO_JSON(Permission, permission_);
        DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_TO_JSON(SuccNum, succNum_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(FailNum, failNum_);
        DARABONBA_PTR_FROM_JSON(FailRate, failRate_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(HistoryMd5, historyMd5_);
        DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
        DARABONBA_PTR_FROM_JSON(LastRuntime, lastRuntime_);
        DARABONBA_PTR_FROM_JSON(LogicReleaseTaskflowMd5, logicReleaseTaskflowMd5_);
        DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
        DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_FROM_JSON(SuccNum, succNum_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->failNum_ == nullptr && this->failRate_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->historyMd5_ == nullptr && this->inputParams_ == nullptr && this->lastRuntime_ == nullptr && this->logicReleaseTaskflowMd5_ == nullptr
        && this->outputParams_ == nullptr && this->ownType_ == nullptr && this->permission_ == nullptr && this->playbookStatus_ == nullptr && this->playbookUuid_ == nullptr
        && this->succNum_ == nullptr && this->tenantId_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline int32_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
      inline Data& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // failNum Field Functions 
      bool hasFailNum() const { return this->failNum_ != nullptr;};
      void deleteFailNum() { this->failNum_ = nullptr;};
      inline int32_t getFailNum() const { DARABONBA_PTR_GET_DEFAULT(failNum_, 0) };
      inline Data& setFailNum(int32_t failNum) { DARABONBA_PTR_SET_VALUE(failNum_, failNum) };


      // failRate Field Functions 
      bool hasFailRate() const { return this->failRate_ != nullptr;};
      void deleteFailRate() { this->failRate_ = nullptr;};
      inline double getFailRate() const { DARABONBA_PTR_GET_DEFAULT(failRate_, 0.0) };
      inline Data& setFailRate(double failRate) { DARABONBA_PTR_SET_VALUE(failRate_, failRate) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // historyMd5 Field Functions 
      bool hasHistoryMd5() const { return this->historyMd5_ != nullptr;};
      void deleteHistoryMd5() { this->historyMd5_ = nullptr;};
      inline int32_t getHistoryMd5() const { DARABONBA_PTR_GET_DEFAULT(historyMd5_, 0) };
      inline Data& setHistoryMd5(int32_t historyMd5) { DARABONBA_PTR_SET_VALUE(historyMd5_, historyMd5) };


      // inputParams Field Functions 
      bool hasInputParams() const { return this->inputParams_ != nullptr;};
      void deleteInputParams() { this->inputParams_ = nullptr;};
      inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
      inline Data& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


      // lastRuntime Field Functions 
      bool hasLastRuntime() const { return this->lastRuntime_ != nullptr;};
      void deleteLastRuntime() { this->lastRuntime_ = nullptr;};
      inline int64_t getLastRuntime() const { DARABONBA_PTR_GET_DEFAULT(lastRuntime_, 0L) };
      inline Data& setLastRuntime(int64_t lastRuntime) { DARABONBA_PTR_SET_VALUE(lastRuntime_, lastRuntime) };


      // logicReleaseTaskflowMd5 Field Functions 
      bool hasLogicReleaseTaskflowMd5() const { return this->logicReleaseTaskflowMd5_ != nullptr;};
      void deleteLogicReleaseTaskflowMd5() { this->logicReleaseTaskflowMd5_ = nullptr;};
      inline string getLogicReleaseTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(logicReleaseTaskflowMd5_, "") };
      inline Data& setLogicReleaseTaskflowMd5(string logicReleaseTaskflowMd5) { DARABONBA_PTR_SET_VALUE(logicReleaseTaskflowMd5_, logicReleaseTaskflowMd5) };


      // outputParams Field Functions 
      bool hasOutputParams() const { return this->outputParams_ != nullptr;};
      void deleteOutputParams() { this->outputParams_ = nullptr;};
      inline string getOutputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
      inline Data& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline string getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
      inline Data& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline int32_t getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, 0) };
      inline Data& setPermission(int32_t permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // playbookStatus Field Functions 
      bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
      void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
      inline int32_t getPlaybookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
      inline Data& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Data& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // succNum Field Functions 
      bool hasSuccNum() const { return this->succNum_ != nullptr;};
      void deleteSuccNum() { this->succNum_ = nullptr;};
      inline int32_t getSuccNum() const { DARABONBA_PTR_GET_DEFAULT(succNum_, 0) };
      inline Data& setSuccNum(int32_t succNum) { DARABONBA_PTR_SET_VALUE(succNum_, succNum) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The status of the playbook. Valid values:
      // 
      // *   1: enabled.
      // *   0: disabled.
      shared_ptr<int32_t> active_ {};
      // The description of the playbook.
      shared_ptr<string> description_ {};
      // The name of the new playbook.
      shared_ptr<string> displayName_ {};
      // The number of playbook execution failures.
      shared_ptr<int32_t> failNum_ {};
      // The failure rate of playbook execution.
      shared_ptr<double> failRate_ {};
      // The time when the playbook was created. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the playbook was modified. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtModified_ {};
      // The number of historical versions of the playbook.
      shared_ptr<int32_t> historyMd5_ {};
      // The input parameters of the playbook.
      shared_ptr<string> inputParams_ {};
      // The time when the playbook was last run. The value is a 13-digit timestamp.
      shared_ptr<int64_t> lastRuntime_ {};
      // The online version MD5 of the playbook.
      shared_ptr<string> logicReleaseTaskflowMd5_ {};
      // The output parameters of the playbook.
      shared_ptr<string> outputParams_ {};
      // The type of the playbook. Valid values:
      // 
      // *   preset: predefined playbook.
      // *   user: custom playbook.
      shared_ptr<string> ownType_ {};
      // The permission to operate the playbook. Valid values:
      // 
      // *   1: view.
      // *   2: edit.
      shared_ptr<int32_t> permission_ {};
      // The status of the playbook.
      shared_ptr<int32_t> playbookStatus_ {};
      // The UUID of the new playbook.
      shared_ptr<string> playbookUuid_ {};
      // The number of successful playbook executions.
      shared_ptr<int32_t> succNum_ {};
      // The ID of the user to which the playbook belongs.
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CopyPlaybookResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CopyPlaybookResponseBody::Data) };
    inline CopyPlaybookResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CopyPlaybookResponseBody::Data) };
    inline CopyPlaybookResponseBody& setData(const CopyPlaybookResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CopyPlaybookResponseBody& setData(CopyPlaybookResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const CopyPlaybookResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, CopyPlaybookResponseBody::Page) };
    inline CopyPlaybookResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, CopyPlaybookResponseBody::Page) };
    inline CopyPlaybookResponseBody& setPage(const CopyPlaybookResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline CopyPlaybookResponseBody& setPage(CopyPlaybookResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<CopyPlaybookResponseBody::Data> data_ {};
    // The pagination information.
    shared_ptr<CopyPlaybookResponseBody::Page> page_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
