// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHARTRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHARTRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChartReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChartReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Chart, chart_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListChartReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Chart, chart_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    ListChartReleaseRequest() = default ;
    ListChartReleaseRequest(const ListChartReleaseRequest &) = default ;
    ListChartReleaseRequest(ListChartReleaseRequest &&) = default ;
    ListChartReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChartReleaseRequest() = default ;
    ListChartReleaseRequest& operator=(const ListChartReleaseRequest &) = default ;
    ListChartReleaseRequest& operator=(ListChartReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chart_ == nullptr
        && this->instanceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr; };
    // chart Field Functions 
    bool hasChart() const { return this->chart_ != nullptr;};
    void deleteChart() { this->chart_ = nullptr;};
    inline string getChart() const { DARABONBA_PTR_GET_DEFAULT(chart_, "") };
    inline ListChartReleaseRequest& setChart(string chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChartReleaseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChartReleaseRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChartReleaseRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListChartReleaseRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListChartReleaseRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


  protected:
    // The chart whose versions you want to query.
    shared_ptr<string> chart_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoName_ {};
    // The name of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> repoNamespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
