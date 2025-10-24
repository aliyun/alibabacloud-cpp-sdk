// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobResourceUsageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResourceUsageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(jobOwnerList, jobOwnerListShrink_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(quotaNicknameList, quotaNicknameListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResourceUsageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(jobOwnerList, jobOwnerListShrink_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(quotaNicknameList, quotaNicknameListShrink_);
    };
    GetJobResourceUsageShrinkRequest() = default ;
    GetJobResourceUsageShrinkRequest(const GetJobResourceUsageShrinkRequest &) = default ;
    GetJobResourceUsageShrinkRequest(GetJobResourceUsageShrinkRequest &&) = default ;
    GetJobResourceUsageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResourceUsageShrinkRequest() = default ;
    GetJobResourceUsageShrinkRequest& operator=(const GetJobResourceUsageShrinkRequest &) = default ;
    GetJobResourceUsageShrinkRequest& operator=(GetJobResourceUsageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->jobOwnerListShrink_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->quotaNicknameListShrink_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetJobResourceUsageShrinkRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // jobOwnerListShrink Field Functions 
    bool hasJobOwnerListShrink() const { return this->jobOwnerListShrink_ != nullptr;};
    void deleteJobOwnerListShrink() { this->jobOwnerListShrink_ = nullptr;};
    inline string jobOwnerListShrink() const { DARABONBA_PTR_GET_DEFAULT(jobOwnerListShrink_, "") };
    inline GetJobResourceUsageShrinkRequest& setJobOwnerListShrink(string jobOwnerListShrink) { DARABONBA_PTR_SET_VALUE(jobOwnerListShrink_, jobOwnerListShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetJobResourceUsageShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetJobResourceUsageShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quotaNicknameListShrink Field Functions 
    bool hasQuotaNicknameListShrink() const { return this->quotaNicknameListShrink_ != nullptr;};
    void deleteQuotaNicknameListShrink() { this->quotaNicknameListShrink_ = nullptr;};
    inline string quotaNicknameListShrink() const { DARABONBA_PTR_GET_DEFAULT(quotaNicknameListShrink_, "") };
    inline GetJobResourceUsageShrinkRequest& setQuotaNicknameListShrink(string quotaNicknameListShrink) { DARABONBA_PTR_SET_VALUE(quotaNicknameListShrink_, quotaNicknameListShrink) };


  protected:
    // The date that is accurate to the day part for the query. The date must be in the yyyy-MM-dd format.
    // 
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    // The list of job executors.
    std::shared_ptr<string> jobOwnerListShrink_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The list of nicknames of quotas that are used by jobs.
    std::shared_ptr<string> quotaNicknameListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
