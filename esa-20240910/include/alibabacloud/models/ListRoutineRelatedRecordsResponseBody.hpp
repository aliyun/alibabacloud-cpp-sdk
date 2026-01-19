// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineRelatedRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineRelatedRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelatedRecords, relatedRecords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineRelatedRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelatedRecords, relatedRecords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRoutineRelatedRecordsResponseBody() = default ;
    ListRoutineRelatedRecordsResponseBody(const ListRoutineRelatedRecordsResponseBody &) = default ;
    ListRoutineRelatedRecordsResponseBody(ListRoutineRelatedRecordsResponseBody &&) = default ;
    ListRoutineRelatedRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineRelatedRecordsResponseBody() = default ;
    ListRoutineRelatedRecordsResponseBody& operator=(const ListRoutineRelatedRecordsResponseBody &) = default ;
    ListRoutineRelatedRecordsResponseBody& operator=(ListRoutineRelatedRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelatedRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedRecords& obj) { 
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      };
      RelatedRecords() = default ;
      RelatedRecords(const RelatedRecords &) = default ;
      RelatedRecords(RelatedRecords &&) = default ;
      RelatedRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedRecords() = default ;
      RelatedRecords& operator=(const RelatedRecords &) = default ;
      RelatedRecords& operator=(RelatedRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->recordId_ == nullptr
        && this->recordName_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr; };
      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline RelatedRecords& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline RelatedRecords& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline RelatedRecords& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline RelatedRecords& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    protected:
      // The record ID of the domain name.
      shared_ptr<int64_t> recordId_ {};
      // The name of the record.
      shared_ptr<string> recordName_ {};
      // The website ID.
      shared_ptr<int64_t> siteId_ {};
      // The website name.
      shared_ptr<string> siteName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->relatedRecords_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineRelatedRecordsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineRelatedRecordsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relatedRecords Field Functions 
    bool hasRelatedRecords() const { return this->relatedRecords_ != nullptr;};
    void deleteRelatedRecords() { this->relatedRecords_ = nullptr;};
    inline const vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords> & getRelatedRecords() const { DARABONBA_PTR_GET_CONST(relatedRecords_, vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords>) };
    inline vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords> getRelatedRecords() { DARABONBA_PTR_GET(relatedRecords_, vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords>) };
    inline ListRoutineRelatedRecordsResponseBody& setRelatedRecords(const vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords> & relatedRecords) { DARABONBA_PTR_SET_VALUE(relatedRecords_, relatedRecords) };
    inline ListRoutineRelatedRecordsResponseBody& setRelatedRecords(vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords> && relatedRecords) { DARABONBA_PTR_SET_RVALUE(relatedRecords_, relatedRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineRelatedRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRoutineRelatedRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The list of records associated with the edge function.
    shared_ptr<vector<ListRoutineRelatedRecordsResponseBody::RelatedRecords>> relatedRecords_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
