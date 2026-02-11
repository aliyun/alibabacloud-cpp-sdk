// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESRESPONSEBODY_HPP_
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
  class ListEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEntitiesResponseBody() = default ;
    ListEntitiesResponseBody(const ListEntitiesResponseBody &) = default ;
    ListEntitiesResponseBody(ListEntitiesResponseBody &&) = default ;
    ListEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesResponseBody() = default ;
    ListEntitiesResponseBody& operator=(const ListEntitiesResponseBody &) = default ;
    ListEntitiesResponseBody& operator=(ListEntitiesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentConfidence, agentConfidence_);
          DARABONBA_PTR_TO_JSON(AgentDisposalMethod, agentDisposalMethod_);
          DARABONBA_PTR_TO_JSON(AgentDisposalPlaybookUuid, agentDisposalPlaybookUuid_);
          DARABONBA_PTR_TO_JSON(AgentDisposalSuggestion, agentDisposalSuggestion_);
          DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
          DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityInfo, entityInfo_);
          DARABONBA_PTR_TO_JSON(EntityName, entityName_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
          DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_TO_JSON(IsAsset, isAsset_);
          DARABONBA_PTR_TO_JSON(IsMalware, isMalware_);
          DARABONBA_PTR_TO_JSON(MalwareType, malwareType_);
          DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentConfidence, agentConfidence_);
          DARABONBA_PTR_FROM_JSON(AgentDisposalMethod, agentDisposalMethod_);
          DARABONBA_PTR_FROM_JSON(AgentDisposalPlaybookUuid, agentDisposalPlaybookUuid_);
          DARABONBA_PTR_FROM_JSON(AgentDisposalSuggestion, agentDisposalSuggestion_);
          DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
          DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityInfo, entityInfo_);
          DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
          DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_FROM_JSON(IsAsset, isAsset_);
          DARABONBA_PTR_FROM_JSON(IsMalware, isMalware_);
          DARABONBA_PTR_FROM_JSON(MalwareType, malwareType_);
          DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
        virtual bool empty() const override { return this->agentConfidence_ == nullptr
        && this->agentDisposalMethod_ == nullptr && this->agentDisposalPlaybookUuid_ == nullptr && this->agentDisposalSuggestion_ == nullptr && this->alertNum_ == nullptr && this->alertUuid_ == nullptr
        && this->aliuid_ == nullptr && this->cloudCode_ == nullptr && this->entityId_ == nullptr && this->entityInfo_ == nullptr && this->entityName_ == nullptr
        && this->entityType_ == nullptr && this->entityUuid_ == nullptr && this->eventNum_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->incidentUuid_ == nullptr && this->isAsset_ == nullptr && this->isMalware_ == nullptr && this->malwareType_ == nullptr
        && this->subUserId_ == nullptr && this->tags_ == nullptr; };
        // agentConfidence Field Functions 
        bool hasAgentConfidence() const { return this->agentConfidence_ != nullptr;};
        void deleteAgentConfidence() { this->agentConfidence_ = nullptr;};
        inline string getAgentConfidence() const { DARABONBA_PTR_GET_DEFAULT(agentConfidence_, "") };
        inline ResponseData& setAgentConfidence(string agentConfidence) { DARABONBA_PTR_SET_VALUE(agentConfidence_, agentConfidence) };


        // agentDisposalMethod Field Functions 
        bool hasAgentDisposalMethod() const { return this->agentDisposalMethod_ != nullptr;};
        void deleteAgentDisposalMethod() { this->agentDisposalMethod_ = nullptr;};
        inline string getAgentDisposalMethod() const { DARABONBA_PTR_GET_DEFAULT(agentDisposalMethod_, "") };
        inline ResponseData& setAgentDisposalMethod(string agentDisposalMethod) { DARABONBA_PTR_SET_VALUE(agentDisposalMethod_, agentDisposalMethod) };


        // agentDisposalPlaybookUuid Field Functions 
        bool hasAgentDisposalPlaybookUuid() const { return this->agentDisposalPlaybookUuid_ != nullptr;};
        void deleteAgentDisposalPlaybookUuid() { this->agentDisposalPlaybookUuid_ = nullptr;};
        inline string getAgentDisposalPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(agentDisposalPlaybookUuid_, "") };
        inline ResponseData& setAgentDisposalPlaybookUuid(string agentDisposalPlaybookUuid) { DARABONBA_PTR_SET_VALUE(agentDisposalPlaybookUuid_, agentDisposalPlaybookUuid) };


        // agentDisposalSuggestion Field Functions 
        bool hasAgentDisposalSuggestion() const { return this->agentDisposalSuggestion_ != nullptr;};
        void deleteAgentDisposalSuggestion() { this->agentDisposalSuggestion_ = nullptr;};
        inline string getAgentDisposalSuggestion() const { DARABONBA_PTR_GET_DEFAULT(agentDisposalSuggestion_, "") };
        inline ResponseData& setAgentDisposalSuggestion(string agentDisposalSuggestion) { DARABONBA_PTR_SET_VALUE(agentDisposalSuggestion_, agentDisposalSuggestion) };


        // alertNum Field Functions 
        bool hasAlertNum() const { return this->alertNum_ != nullptr;};
        void deleteAlertNum() { this->alertNum_ = nullptr;};
        inline int32_t getAlertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
        inline ResponseData& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


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


        // cloudCode Field Functions 
        bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
        void deleteCloudCode() { this->cloudCode_ = nullptr;};
        inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
        inline ResponseData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline ResponseData& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityInfo Field Functions 
        bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
        void deleteEntityInfo() { this->entityInfo_ = nullptr;};
        inline string getEntityInfo() const { DARABONBA_PTR_GET_DEFAULT(entityInfo_, "") };
        inline ResponseData& setEntityInfo(string entityInfo) { DARABONBA_PTR_SET_VALUE(entityInfo_, entityInfo) };


        // entityName Field Functions 
        bool hasEntityName() const { return this->entityName_ != nullptr;};
        void deleteEntityName() { this->entityName_ = nullptr;};
        inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
        inline ResponseData& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline ResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // entityUuid Field Functions 
        bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
        void deleteEntityUuid() { this->entityUuid_ = nullptr;};
        inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
        inline ResponseData& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


        // eventNum Field Functions 
        bool hasEventNum() const { return this->eventNum_ != nullptr;};
        void deleteEventNum() { this->eventNum_ = nullptr;};
        inline int32_t getEventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0) };
        inline ResponseData& setEventNum(int32_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


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


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // isAsset Field Functions 
        bool hasIsAsset() const { return this->isAsset_ != nullptr;};
        void deleteIsAsset() { this->isAsset_ = nullptr;};
        inline string getIsAsset() const { DARABONBA_PTR_GET_DEFAULT(isAsset_, "") };
        inline ResponseData& setIsAsset(string isAsset) { DARABONBA_PTR_SET_VALUE(isAsset_, isAsset) };


        // isMalware Field Functions 
        bool hasIsMalware() const { return this->isMalware_ != nullptr;};
        void deleteIsMalware() { this->isMalware_ = nullptr;};
        inline string getIsMalware() const { DARABONBA_PTR_GET_DEFAULT(isMalware_, "") };
        inline ResponseData& setIsMalware(string isMalware) { DARABONBA_PTR_SET_VALUE(isMalware_, isMalware) };


        // malwareType Field Functions 
        bool hasMalwareType() const { return this->malwareType_ != nullptr;};
        void deleteMalwareType() { this->malwareType_ = nullptr;};
        inline string getMalwareType() const { DARABONBA_PTR_GET_DEFAULT(malwareType_, "") };
        inline ResponseData& setMalwareType(string malwareType) { DARABONBA_PTR_SET_VALUE(malwareType_, malwareType) };


        // subUserId Field Functions 
        bool hasSubUserId() const { return this->subUserId_ != nullptr;};
        void deleteSubUserId() { this->subUserId_ = nullptr;};
        inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
        inline ResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline ResponseData& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      protected:
        shared_ptr<string> agentConfidence_ {};
        shared_ptr<string> agentDisposalMethod_ {};
        shared_ptr<string> agentDisposalPlaybookUuid_ {};
        shared_ptr<string> agentDisposalSuggestion_ {};
        shared_ptr<int32_t> alertNum_ {};
        shared_ptr<string> alertUuid_ {};
        shared_ptr<int64_t> aliuid_ {};
        shared_ptr<string> cloudCode_ {};
        shared_ptr<string> entityId_ {};
        shared_ptr<string> entityInfo_ {};
        shared_ptr<string> entityName_ {};
        shared_ptr<string> entityType_ {};
        shared_ptr<string> entityUuid_ {};
        shared_ptr<int32_t> eventNum_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> incidentUuid_ {};
        shared_ptr<string> isAsset_ {};
        shared_ptr<string> isMalware_ {};
        shared_ptr<string> malwareType_ {};
        shared_ptr<int64_t> subUserId_ {};
        shared_ptr<string> tags_ {};
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
        shared_ptr<int32_t> currentPage_ {};
        shared_ptr<int32_t> pageSize_ {};
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
      shared_ptr<Data::PageInfo> pageInfo_ {};
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEntitiesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEntitiesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEntitiesResponseBody::Data) };
    inline ListEntitiesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEntitiesResponseBody::Data) };
    inline ListEntitiesResponseBody& setData(const ListEntitiesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEntitiesResponseBody& setData(ListEntitiesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEntitiesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEntitiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListEntitiesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
