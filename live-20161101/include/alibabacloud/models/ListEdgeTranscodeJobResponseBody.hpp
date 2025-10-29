// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGETRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGETRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEdgeTranscodeJobResponseBodyJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEdgeTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEdgeTranscodeJobResponseBody() = default ;
    ListEdgeTranscodeJobResponseBody(const ListEdgeTranscodeJobResponseBody &) = default ;
    ListEdgeTranscodeJobResponseBody(ListEdgeTranscodeJobResponseBody &&) = default ;
    ListEdgeTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeTranscodeJobResponseBody() = default ;
    ListEdgeTranscodeJobResponseBody& operator=(const ListEdgeTranscodeJobResponseBody &) = default ;
    ListEdgeTranscodeJobResponseBody& operator=(ListEdgeTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const ListEdgeTranscodeJobResponseBodyJobList & jobList() const { DARABONBA_PTR_GET_CONST(jobList_, ListEdgeTranscodeJobResponseBodyJobList) };
    inline ListEdgeTranscodeJobResponseBodyJobList jobList() { DARABONBA_PTR_GET(jobList_, ListEdgeTranscodeJobResponseBodyJobList) };
    inline ListEdgeTranscodeJobResponseBody& setJobList(const ListEdgeTranscodeJobResponseBodyJobList & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline ListEdgeTranscodeJobResponseBody& setJobList(ListEdgeTranscodeJobResponseBodyJobList && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEdgeTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEdgeTranscodeJobResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The edge transcoding tasks.
    std::shared_ptr<ListEdgeTranscodeJobResponseBodyJobList> jobList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
