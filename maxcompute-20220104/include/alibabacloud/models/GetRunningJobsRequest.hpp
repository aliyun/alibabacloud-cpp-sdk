// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRunningJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(quotaNicknameList, quotaNicknameList_);
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(quotaNicknameList, quotaNicknameList_);
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    GetRunningJobsRequest() = default ;
    GetRunningJobsRequest(const GetRunningJobsRequest &) = default ;
    GetRunningJobsRequest(GetRunningJobsRequest &&) = default ;
    GetRunningJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningJobsRequest() = default ;
    GetRunningJobsRequest& operator=(const GetRunningJobsRequest &) = default ;
    GetRunningJobsRequest& operator=(GetRunningJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->jobOwnerList_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->quotaNicknameList_ == nullptr && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetRunningJobsRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // jobOwnerList Field Functions 
    bool hasJobOwnerList() const { return this->jobOwnerList_ != nullptr;};
    void deleteJobOwnerList() { this->jobOwnerList_ = nullptr;};
    inline const vector<string> & jobOwnerList() const { DARABONBA_PTR_GET_CONST(jobOwnerList_, vector<string>) };
    inline vector<string> jobOwnerList() { DARABONBA_PTR_GET(jobOwnerList_, vector<string>) };
    inline GetRunningJobsRequest& setJobOwnerList(const vector<string> & jobOwnerList) { DARABONBA_PTR_SET_VALUE(jobOwnerList_, jobOwnerList) };
    inline GetRunningJobsRequest& setJobOwnerList(vector<string> && jobOwnerList) { DARABONBA_PTR_SET_RVALUE(jobOwnerList_, jobOwnerList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetRunningJobsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetRunningJobsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quotaNicknameList Field Functions 
    bool hasQuotaNicknameList() const { return this->quotaNicknameList_ != nullptr;};
    void deleteQuotaNicknameList() { this->quotaNicknameList_ = nullptr;};
    inline const vector<string> & quotaNicknameList() const { DARABONBA_PTR_GET_CONST(quotaNicknameList_, vector<string>) };
    inline vector<string> quotaNicknameList() { DARABONBA_PTR_GET(quotaNicknameList_, vector<string>) };
    inline GetRunningJobsRequest& setQuotaNicknameList(const vector<string> & quotaNicknameList) { DARABONBA_PTR_SET_VALUE(quotaNicknameList_, quotaNicknameList) };
    inline GetRunningJobsRequest& setQuotaNicknameList(vector<string> && quotaNicknameList) { DARABONBA_PTR_SET_RVALUE(quotaNicknameList_, quotaNicknameList) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetRunningJobsRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The time when the query starts. This parameter specifies the time when a job is submitted.
    // 
    // *   The time range that is specified by the **from** and **to** request parameters is a closed interval. The start time and end time are included in the range. If the value of **from** is the same as the value of **to**, the time range is invalid, and a null value is returned.
    // *   The value is a UNIX timestamp that represents the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The list of job executors.
    std::shared_ptr<vector<string>> jobOwnerList_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The list of nicknames of quotas that are used by jobs.
    std::shared_ptr<vector<string>> quotaNicknameList_ = nullptr;
    // The time when the query ends. This parameter specifies the time when a job is submitted.
    // 
    // *   The time interval that is specified by the **from** and **to** request parameters is a closed interval. The start time and end time are included in the interval. If the value of **from** is the same as the value of **to**, the interval is invalid, and a null value is returned.
    // *   The value is a UNIX timestamp that represents the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
