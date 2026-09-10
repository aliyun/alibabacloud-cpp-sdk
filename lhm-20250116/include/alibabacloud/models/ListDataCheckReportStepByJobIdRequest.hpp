// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKREPORTSTEPBYJOBIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKREPORTSTEPBYJOBIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckReportStepByJobIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckReportStepByJobIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckReportStepByJobIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListDataCheckReportStepByJobIdRequest() = default ;
    ListDataCheckReportStepByJobIdRequest(const ListDataCheckReportStepByJobIdRequest &) = default ;
    ListDataCheckReportStepByJobIdRequest(ListDataCheckReportStepByJobIdRequest &&) = default ;
    ListDataCheckReportStepByJobIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckReportStepByJobIdRequest() = default ;
    ListDataCheckReportStepByJobIdRequest& operator=(const ListDataCheckReportStepByJobIdRequest &) = default ;
    ListDataCheckReportStepByJobIdRequest& operator=(ListDataCheckReportStepByJobIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListDataCheckReportStepByJobIdRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckReportStepByJobIdRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckReportStepByJobIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
