// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEMANTICJOBRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEMANTICJOBRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListSemanticJobRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSemanticJobRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSemanticJobRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSemanticJobRunsRequest() = default ;
    ListSemanticJobRunsRequest(const ListSemanticJobRunsRequest &) = default ;
    ListSemanticJobRunsRequest(ListSemanticJobRunsRequest &&) = default ;
    ListSemanticJobRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSemanticJobRunsRequest() = default ;
    ListSemanticJobRunsRequest& operator=(const ListSemanticJobRunsRequest &) = default ;
    ListSemanticJobRunsRequest& operator=(ListSemanticJobRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListSemanticJobRunsRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSemanticJobRunsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSemanticJobRunsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The job name. Use the Data.Name value from the CreateSemanticJob response or the Name value from a ListSemanticJobs list item.
    // 
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // The page number, starting from 1. If this parameter is omitted or set to a value less than or equal to 0, page 1 is returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of run records per page. If this parameter is omitted or set to a value less than or equal to 0, the default value 50 is used. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
