// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStreamingJobsResponseBodyJobItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobItems, jobItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobItems, jobItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListStreamingJobsResponseBody() = default ;
    ListStreamingJobsResponseBody(const ListStreamingJobsResponseBody &) = default ;
    ListStreamingJobsResponseBody(ListStreamingJobsResponseBody &&) = default ;
    ListStreamingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingJobsResponseBody() = default ;
    ListStreamingJobsResponseBody& operator=(const ListStreamingJobsResponseBody &) = default ;
    ListStreamingJobsResponseBody& operator=(ListStreamingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobItems_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // jobItems Field Functions 
    bool hasJobItems() const { return this->jobItems_ != nullptr;};
    void deleteJobItems() { this->jobItems_ = nullptr;};
    inline const vector<ListStreamingJobsResponseBodyJobItems> & jobItems() const { DARABONBA_PTR_GET_CONST(jobItems_, vector<ListStreamingJobsResponseBodyJobItems>) };
    inline vector<ListStreamingJobsResponseBodyJobItems> jobItems() { DARABONBA_PTR_GET(jobItems_, vector<ListStreamingJobsResponseBodyJobItems>) };
    inline ListStreamingJobsResponseBody& setJobItems(const vector<ListStreamingJobsResponseBodyJobItems> & jobItems) { DARABONBA_PTR_SET_VALUE(jobItems_, jobItems) };
    inline ListStreamingJobsResponseBody& setJobItems(vector<ListStreamingJobsResponseBodyJobItems> && jobItems) { DARABONBA_PTR_SET_RVALUE(jobItems_, jobItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStreamingJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListStreamingJobsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListStreamingJobsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried jobs.
    std::shared_ptr<vector<ListStreamingJobsResponseBodyJobItems>> jobItems_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Number of records per page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of records.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
