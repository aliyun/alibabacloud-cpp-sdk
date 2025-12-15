// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobsRequestJobFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobFilter, jobFilter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobFilter, jobFilter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListJobsRequest() = default ;
    ListJobsRequest(const ListJobsRequest &) = default ;
    ListJobsRequest(ListJobsRequest &&) = default ;
    ListJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequest() = default ;
    ListJobsRequest& operator=(const ListJobsRequest &) = default ;
    ListJobsRequest& operator=(ListJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->jobFilter_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobFilter Field Functions 
    bool hasJobFilter() const { return this->jobFilter_ != nullptr;};
    void deleteJobFilter() { this->jobFilter_ = nullptr;};
    inline const ListJobsRequestJobFilter & jobFilter() const { DARABONBA_PTR_GET_CONST(jobFilter_, ListJobsRequestJobFilter) };
    inline ListJobsRequestJobFilter jobFilter() { DARABONBA_PTR_GET(jobFilter_, ListJobsRequestJobFilter) };
    inline ListJobsRequest& setJobFilter(const ListJobsRequestJobFilter & jobFilter) { DARABONBA_PTR_SET_VALUE(jobFilter_, jobFilter) };
    inline ListJobsRequest& setJobFilter(ListJobsRequestJobFilter && jobFilter) { DARABONBA_PTR_SET_RVALUE(jobFilter_, jobFilter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListJobsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListJobsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The job filter information.
    std::shared_ptr<ListJobsRequestJobFilter> jobFilter_ = nullptr;
    // The page number of the page to return.
    // 
    // *   Pages start from page 1.
    // *   Default value: 1
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // *   Maximum value: 50.
    // *   Default value: 10
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
