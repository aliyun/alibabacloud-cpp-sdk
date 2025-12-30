// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobFilter, jobFilterShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobFilter, jobFilterShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListJobsShrinkRequest() = default ;
    ListJobsShrinkRequest(const ListJobsShrinkRequest &) = default ;
    ListJobsShrinkRequest(ListJobsShrinkRequest &&) = default ;
    ListJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsShrinkRequest() = default ;
    ListJobsShrinkRequest& operator=(const ListJobsShrinkRequest &) = default ;
    ListJobsShrinkRequest& operator=(ListJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->jobFilterShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListJobsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobFilterShrink Field Functions 
    bool hasJobFilterShrink() const { return this->jobFilterShrink_ != nullptr;};
    void deleteJobFilterShrink() { this->jobFilterShrink_ = nullptr;};
    inline string getJobFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(jobFilterShrink_, "") };
    inline ListJobsShrinkRequest& setJobFilterShrink(string jobFilterShrink) { DARABONBA_PTR_SET_VALUE(jobFilterShrink_, jobFilterShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListJobsShrinkRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListJobsShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The job filter information.
    shared_ptr<string> jobFilterShrink_ {};
    // The page number of the page to return.
    // 
    // *   Pages start from page 1.
    // *   Default value: 1
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    // 
    // *   Maximum value: 50.
    // *   Default value: 10
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
