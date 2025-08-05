// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGEREQUEST_HPP_
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
  class GetJobResourceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResourceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(quotaNicknameList, quotaNicknameList_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResourceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(quotaNicknameList, quotaNicknameList_);
    };
    GetJobResourceUsageRequest() = default ;
    GetJobResourceUsageRequest(const GetJobResourceUsageRequest &) = default ;
    GetJobResourceUsageRequest(GetJobResourceUsageRequest &&) = default ;
    GetJobResourceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResourceUsageRequest() = default ;
    GetJobResourceUsageRequest& operator=(const GetJobResourceUsageRequest &) = default ;
    GetJobResourceUsageRequest& operator=(GetJobResourceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->jobOwnerList_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->quotaNicknameList_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetJobResourceUsageRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // jobOwnerList Field Functions 
    bool hasJobOwnerList() const { return this->jobOwnerList_ != nullptr;};
    void deleteJobOwnerList() { this->jobOwnerList_ = nullptr;};
    inline const vector<string> & jobOwnerList() const { DARABONBA_PTR_GET_CONST(jobOwnerList_, vector<string>) };
    inline vector<string> jobOwnerList() { DARABONBA_PTR_GET(jobOwnerList_, vector<string>) };
    inline GetJobResourceUsageRequest& setJobOwnerList(const vector<string> & jobOwnerList) { DARABONBA_PTR_SET_VALUE(jobOwnerList_, jobOwnerList) };
    inline GetJobResourceUsageRequest& setJobOwnerList(vector<string> && jobOwnerList) { DARABONBA_PTR_SET_RVALUE(jobOwnerList_, jobOwnerList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetJobResourceUsageRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetJobResourceUsageRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quotaNicknameList Field Functions 
    bool hasQuotaNicknameList() const { return this->quotaNicknameList_ != nullptr;};
    void deleteQuotaNicknameList() { this->quotaNicknameList_ = nullptr;};
    inline const vector<string> & quotaNicknameList() const { DARABONBA_PTR_GET_CONST(quotaNicknameList_, vector<string>) };
    inline vector<string> quotaNicknameList() { DARABONBA_PTR_GET(quotaNicknameList_, vector<string>) };
    inline GetJobResourceUsageRequest& setQuotaNicknameList(const vector<string> & quotaNicknameList) { DARABONBA_PTR_SET_VALUE(quotaNicknameList_, quotaNicknameList) };
    inline GetJobResourceUsageRequest& setQuotaNicknameList(vector<string> && quotaNicknameList) { DARABONBA_PTR_SET_RVALUE(quotaNicknameList_, quotaNicknameList) };


  protected:
    // The date that is accurate to the day part for the query. The date must be in the yyyy-MM-dd format.
    // 
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    // The list of job executors.
    std::shared_ptr<vector<string>> jobOwnerList_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The list of nicknames of quotas that are used by jobs.
    std::shared_ptr<vector<string>> quotaNicknameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
