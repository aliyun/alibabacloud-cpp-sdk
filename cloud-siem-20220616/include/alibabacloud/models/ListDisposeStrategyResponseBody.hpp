// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDisposeStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisposeStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisposeStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDisposeStrategyResponseBody() = default ;
    ListDisposeStrategyResponseBody(const ListDisposeStrategyResponseBody &) = default ;
    ListDisposeStrategyResponseBody(ListDisposeStrategyResponseBody &&) = default ;
    ListDisposeStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisposeStrategyResponseBody() = default ;
    ListDisposeStrategyResponseBody& operator=(const ListDisposeStrategyResponseBody &) = default ;
    ListDisposeStrategyResponseBody& operator=(ListDisposeStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
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
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_TO_JSON(EffectiveStatus, effectiveStatus_);
          DARABONBA_PTR_TO_JSON(Entity, entity_);
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
          DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
          DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
          DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubAliuid, subAliuid_);
          DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
          DARABONBA_PTR_TO_JSON(TaskUrl, taskUrl_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_FROM_JSON(EffectiveStatus, effectiveStatus_);
          DARABONBA_PTR_FROM_JSON(Entity, entity_);
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
          DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
          DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
          DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubAliuid, subAliuid_);
          DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
          DARABONBA_PTR_FROM_JSON(TaskUrl, taskUrl_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertUuid_ == nullptr
        && this->aliuid_ == nullptr && this->effectiveStatus_ == nullptr && this->entity_ == nullptr && this->entityId_ == nullptr && this->entityType_ == nullptr
        && this->errorMessage_ == nullptr && this->finishTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->incidentName_ == nullptr && this->incidentUuid_ == nullptr && this->playbookName_ == nullptr && this->playbookType_ == nullptr && this->playbookUuid_ == nullptr
        && this->scope_ == nullptr && this->sophonTaskId_ == nullptr && this->status_ == nullptr && this->subAliuid_ == nullptr && this->taskParam_ == nullptr
        && this->taskUrl_ == nullptr; };
        // alertUuid Field Functions 
        bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
        void deleteAlertUuid() { this->alertUuid_ = nullptr;};
        inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
        inline ResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


        // aliuid Field Functions 
        bool hasAliuid() const { return this->aliuid_ != nullptr;};
        void deleteAliuid() { this->aliuid_ = nullptr;};
        inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
        inline ResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


        // effectiveStatus Field Functions 
        bool hasEffectiveStatus() const { return this->effectiveStatus_ != nullptr;};
        void deleteEffectiveStatus() { this->effectiveStatus_ = nullptr;};
        inline int32_t getEffectiveStatus() const { DARABONBA_PTR_GET_DEFAULT(effectiveStatus_, 0) };
        inline ResponseData& setEffectiveStatus(int32_t effectiveStatus) { DARABONBA_PTR_SET_VALUE(effectiveStatus_, effectiveStatus) };


        // entity Field Functions 
        bool hasEntity() const { return this->entity_ != nullptr;};
        void deleteEntity() { this->entity_ = nullptr;};
        inline const vector<Darabonba::Json> & getEntity() const { DARABONBA_PTR_GET_CONST(entity_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getEntity() { DARABONBA_PTR_GET(entity_, vector<Darabonba::Json>) };
        inline ResponseData& setEntity(const vector<Darabonba::Json> & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
        inline ResponseData& setEntity(vector<Darabonba::Json> && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
        inline ResponseData& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline ResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ResponseData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline ResponseData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // incidentName Field Functions 
        bool hasIncidentName() const { return this->incidentName_ != nullptr;};
        void deleteIncidentName() { this->incidentName_ = nullptr;};
        inline string getIncidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
        inline ResponseData& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // playbookName Field Functions 
        bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
        void deletePlaybookName() { this->playbookName_ = nullptr;};
        inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
        inline ResponseData& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


        // playbookType Field Functions 
        bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
        void deletePlaybookType() { this->playbookType_ = nullptr;};
        inline string getPlaybookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
        inline ResponseData& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


        // playbookUuid Field Functions 
        bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
        void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
        inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
        inline ResponseData& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline const vector<Darabonba::Json> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getScope() { DARABONBA_PTR_GET(scope_, vector<Darabonba::Json>) };
        inline ResponseData& setScope(const vector<Darabonba::Json> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
        inline ResponseData& setScope(vector<Darabonba::Json> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


        // sophonTaskId Field Functions 
        bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
        void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
        inline string getSophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
        inline ResponseData& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subAliuid Field Functions 
        bool hasSubAliuid() const { return this->subAliuid_ != nullptr;};
        void deleteSubAliuid() { this->subAliuid_ = nullptr;};
        inline int64_t getSubAliuid() const { DARABONBA_PTR_GET_DEFAULT(subAliuid_, 0L) };
        inline ResponseData& setSubAliuid(int64_t subAliuid) { DARABONBA_PTR_SET_VALUE(subAliuid_, subAliuid) };


        // taskParam Field Functions 
        bool hasTaskParam() const { return this->taskParam_ != nullptr;};
        void deleteTaskParam() { this->taskParam_ = nullptr;};
        inline string getTaskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
        inline ResponseData& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


        // taskUrl Field Functions 
        bool hasTaskUrl() const { return this->taskUrl_ != nullptr;};
        void deleteTaskUrl() { this->taskUrl_ = nullptr;};
        inline string getTaskUrl() const { DARABONBA_PTR_GET_DEFAULT(taskUrl_, "") };
        inline ResponseData& setTaskUrl(string taskUrl) { DARABONBA_PTR_SET_VALUE(taskUrl_, taskUrl) };


      protected:
        // The UUID of the alert.
        shared_ptr<string> alertUuid_ {};
        // The ID of the Alibaba Cloud account that is associated with the policy in SIEM.
        shared_ptr<int64_t> aliuid_ {};
        // The status of the policy. Valid values:
        // 
        // *   0: invalid
        // *   1: valid
        shared_ptr<int32_t> effectiveStatus_ {};
        // The details of the entity. The value is a JSON array.
        shared_ptr<vector<Darabonba::Json>> entity_ {};
        // The ID of the entity.
        shared_ptr<int64_t> entityId_ {};
        // The type of the entity. Valid values:
        // 
        // *   ip
        // *   process
        // *   file
        shared_ptr<string> entityType_ {};
        // The summary information about the failed task.
        shared_ptr<string> errorMessage_ {};
        // The end time of the task.
        shared_ptr<string> finishTime_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The update time.
        shared_ptr<string> gmtModified_ {};
        // The ID of the policy.
        shared_ptr<int64_t> id_ {};
        // The name of the event.
        shared_ptr<string> incidentName_ {};
        // The UUID of the event.
        shared_ptr<string> incidentUuid_ {};
        // The name of the playbook, which is the unique identifier of the playbook.
        shared_ptr<string> playbookName_ {};
        // The type of the playbook. Valid values:
        // 
        // *   system: user-triggered playbook
        // *   custom: event-triggered playbook
        // *   custom_alert: alert-triggered playbook
        // *   soar-manual: user-run playbook
        // *   soar-mdr: MDR-run playbook
        shared_ptr<string> playbookType_ {};
        // The UUID of the playbook.
        shared_ptr<string> playbookUuid_ {};
        // The scope of the policy.
        shared_ptr<vector<Darabonba::Json>> scope_ {};
        // The ID of the SOAR handling policy.
        shared_ptr<string> sophonTaskId_ {};
        // The running status of the playbook. Valid values:
        // 
        // *   200: successful
        // *   10: deleted
        // *   5: failed
        // *   0: initial
        shared_ptr<int32_t> status_ {};
        // The ID of the Alibaba account that is used to configure the policy.
        shared_ptr<int64_t> subAliuid_ {};
        // The parameters that are used to trigger the playbook. The value is in the JSON format.
        shared_ptr<string> taskParam_ {};
        shared_ptr<string> taskUrl_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListDisposeStrategyResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDisposeStrategyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDisposeStrategyResponseBody::Data) };
    inline ListDisposeStrategyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDisposeStrategyResponseBody::Data) };
    inline ListDisposeStrategyResponseBody& setData(const ListDisposeStrategyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDisposeStrategyResponseBody& setData(ListDisposeStrategyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDisposeStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDisposeStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDisposeStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListDisposeStrategyResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
