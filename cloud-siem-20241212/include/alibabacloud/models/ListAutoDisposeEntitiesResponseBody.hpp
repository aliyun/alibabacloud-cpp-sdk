// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTODISPOSEENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTODISPOSEENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListAutoDisposeEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoDisposeEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDecisionEntities, autoDecisionEntities_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoDisposeEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDecisionEntities, autoDecisionEntities_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAutoDisposeEntitiesResponseBody() = default ;
    ListAutoDisposeEntitiesResponseBody(const ListAutoDisposeEntitiesResponseBody &) = default ;
    ListAutoDisposeEntitiesResponseBody(ListAutoDisposeEntitiesResponseBody &&) = default ;
    ListAutoDisposeEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoDisposeEntitiesResponseBody() = default ;
    ListAutoDisposeEntitiesResponseBody& operator=(const ListAutoDisposeEntitiesResponseBody &) = default ;
    ListAutoDisposeEntitiesResponseBody& operator=(ListAutoDisposeEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoDecisionEntities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoDecisionEntities& obj) { 
        DARABONBA_PTR_TO_JSON(AlertId, alertId_);
        DARABONBA_PTR_TO_JSON(DisposalMethod, disposalMethod_);
        DARABONBA_PTR_TO_JSON(DisposeRecordId, disposeRecordId_);
        DARABONBA_PTR_TO_JSON(EntityName, entityName_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, AutoDecisionEntities& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
        DARABONBA_PTR_FROM_JSON(DisposalMethod, disposalMethod_);
        DARABONBA_PTR_FROM_JSON(DisposeRecordId, disposeRecordId_);
        DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      AutoDecisionEntities() = default ;
      AutoDecisionEntities(const AutoDecisionEntities &) = default ;
      AutoDecisionEntities(AutoDecisionEntities &&) = default ;
      AutoDecisionEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoDecisionEntities() = default ;
      AutoDecisionEntities& operator=(const AutoDecisionEntities &) = default ;
      AutoDecisionEntities& operator=(AutoDecisionEntities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertId_ == nullptr
        && this->disposalMethod_ == nullptr && this->disposeRecordId_ == nullptr && this->entityName_ == nullptr && this->entityType_ == nullptr && this->entityUuid_ == nullptr
        && this->playbookUuid_ == nullptr && this->uuid_ == nullptr; };
      // alertId Field Functions 
      bool hasAlertId() const { return this->alertId_ != nullptr;};
      void deleteAlertId() { this->alertId_ = nullptr;};
      inline string getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, "") };
      inline AutoDecisionEntities& setAlertId(string alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


      // disposalMethod Field Functions 
      bool hasDisposalMethod() const { return this->disposalMethod_ != nullptr;};
      void deleteDisposalMethod() { this->disposalMethod_ = nullptr;};
      inline string getDisposalMethod() const { DARABONBA_PTR_GET_DEFAULT(disposalMethod_, "") };
      inline AutoDecisionEntities& setDisposalMethod(string disposalMethod) { DARABONBA_PTR_SET_VALUE(disposalMethod_, disposalMethod) };


      // disposeRecordId Field Functions 
      bool hasDisposeRecordId() const { return this->disposeRecordId_ != nullptr;};
      void deleteDisposeRecordId() { this->disposeRecordId_ = nullptr;};
      inline string getDisposeRecordId() const { DARABONBA_PTR_GET_DEFAULT(disposeRecordId_, "") };
      inline AutoDecisionEntities& setDisposeRecordId(string disposeRecordId) { DARABONBA_PTR_SET_VALUE(disposeRecordId_, disposeRecordId) };


      // entityName Field Functions 
      bool hasEntityName() const { return this->entityName_ != nullptr;};
      void deleteEntityName() { this->entityName_ = nullptr;};
      inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
      inline AutoDecisionEntities& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline AutoDecisionEntities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // entityUuid Field Functions 
      bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
      void deleteEntityUuid() { this->entityUuid_ = nullptr;};
      inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
      inline AutoDecisionEntities& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline AutoDecisionEntities& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AutoDecisionEntities& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> alertId_ {};
      shared_ptr<string> disposalMethod_ {};
      shared_ptr<string> disposeRecordId_ {};
      shared_ptr<string> entityName_ {};
      shared_ptr<string> entityType_ {};
      shared_ptr<string> entityUuid_ {};
      shared_ptr<string> playbookUuid_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->autoDecisionEntities_ == nullptr
        && this->currentPage_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // autoDecisionEntities Field Functions 
    bool hasAutoDecisionEntities() const { return this->autoDecisionEntities_ != nullptr;};
    void deleteAutoDecisionEntities() { this->autoDecisionEntities_ = nullptr;};
    inline const vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities> & getAutoDecisionEntities() const { DARABONBA_PTR_GET_CONST(autoDecisionEntities_, vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities>) };
    inline vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities> getAutoDecisionEntities() { DARABONBA_PTR_GET(autoDecisionEntities_, vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities>) };
    inline ListAutoDisposeEntitiesResponseBody& setAutoDecisionEntities(const vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities> & autoDecisionEntities) { DARABONBA_PTR_SET_VALUE(autoDecisionEntities_, autoDecisionEntities) };
    inline ListAutoDisposeEntitiesResponseBody& setAutoDecisionEntities(vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities> && autoDecisionEntities) { DARABONBA_PTR_SET_RVALUE(autoDecisionEntities_, autoDecisionEntities) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAutoDisposeEntitiesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoDisposeEntitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoDisposeEntitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAutoDisposeEntitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoDisposeEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAutoDisposeEntitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAutoDisposeEntitiesResponseBody::AutoDecisionEntities>> autoDecisionEntities_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
