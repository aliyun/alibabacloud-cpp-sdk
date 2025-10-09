// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRoutineRelatedRecordsResponseBodyRelatedRecords.hpp>
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
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->relatedRecords_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineRelatedRecordsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineRelatedRecordsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relatedRecords Field Functions 
    bool hasRelatedRecords() const { return this->relatedRecords_ != nullptr;};
    void deleteRelatedRecords() { this->relatedRecords_ = nullptr;};
    inline const vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords> & relatedRecords() const { DARABONBA_PTR_GET_CONST(relatedRecords_, vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords>) };
    inline vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords> relatedRecords() { DARABONBA_PTR_GET(relatedRecords_, vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords>) };
    inline ListRoutineRelatedRecordsResponseBody& setRelatedRecords(const vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords> & relatedRecords) { DARABONBA_PTR_SET_VALUE(relatedRecords_, relatedRecords) };
    inline ListRoutineRelatedRecordsResponseBody& setRelatedRecords(vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords> && relatedRecords) { DARABONBA_PTR_SET_RVALUE(relatedRecords_, relatedRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineRelatedRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRoutineRelatedRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The list of records associated with the edge function.
    std::shared_ptr<vector<ListRoutineRelatedRecordsResponseBodyRelatedRecords>> relatedRecords_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
