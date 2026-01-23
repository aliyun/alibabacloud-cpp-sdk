// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHARTRELEASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHARTRELEASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChartReleaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChartReleaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChartReleases, chartReleases_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChartReleaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartReleases, chartReleases_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChartReleaseResponseBody() = default ;
    ListChartReleaseResponseBody(const ListChartReleaseResponseBody &) = default ;
    ListChartReleaseResponseBody(ListChartReleaseResponseBody &&) = default ;
    ListChartReleaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChartReleaseResponseBody() = default ;
    ListChartReleaseResponseBody& operator=(const ListChartReleaseResponseBody &) = default ;
    ListChartReleaseResponseBody& operator=(ListChartReleaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChartReleases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChartReleases& obj) { 
        DARABONBA_PTR_TO_JSON(Chart, chart_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Release, release_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ChartReleases& obj) { 
        DARABONBA_PTR_FROM_JSON(Chart, chart_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Release, release_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ChartReleases() = default ;
      ChartReleases(const ChartReleases &) = default ;
      ChartReleases(ChartReleases &&) = default ;
      ChartReleases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChartReleases() = default ;
      ChartReleases& operator=(const ChartReleases &) = default ;
      ChartReleases& operator=(ChartReleases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chart_ == nullptr
        && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr && this->release_ == nullptr && this->repoId_ == nullptr && this->size_ == nullptr
        && this->status_ == nullptr; };
      // chart Field Functions 
      bool hasChart() const { return this->chart_ != nullptr;};
      void deleteChart() { this->chart_ = nullptr;};
      inline string getChart() const { DARABONBA_PTR_GET_DEFAULT(chart_, "") };
      inline ChartReleases& setChart(string chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ChartReleases& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline ChartReleases& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // release Field Functions 
      bool hasRelease() const { return this->release_ != nullptr;};
      void deleteRelease() { this->release_ = nullptr;};
      inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
      inline ChartReleases& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline ChartReleases& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline ChartReleases& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ChartReleases& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the chart version.
      shared_ptr<string> chart_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The time when the chart was last modified.
      shared_ptr<int64_t> modifiedTime_ {};
      // The version number of the chart.
      shared_ptr<string> release_ {};
      // The ID of the chart repository.
      shared_ptr<string> repoId_ {};
      // The size of the chart of the version. Unit: bytes.
      shared_ptr<string> size_ {};
      // The status of the chart.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->chartReleases_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // chartReleases Field Functions 
    bool hasChartReleases() const { return this->chartReleases_ != nullptr;};
    void deleteChartReleases() { this->chartReleases_ = nullptr;};
    inline const vector<ListChartReleaseResponseBody::ChartReleases> & getChartReleases() const { DARABONBA_PTR_GET_CONST(chartReleases_, vector<ListChartReleaseResponseBody::ChartReleases>) };
    inline vector<ListChartReleaseResponseBody::ChartReleases> getChartReleases() { DARABONBA_PTR_GET(chartReleases_, vector<ListChartReleaseResponseBody::ChartReleases>) };
    inline ListChartReleaseResponseBody& setChartReleases(const vector<ListChartReleaseResponseBody::ChartReleases> & chartReleases) { DARABONBA_PTR_SET_VALUE(chartReleases_, chartReleases) };
    inline ListChartReleaseResponseBody& setChartReleases(vector<ListChartReleaseResponseBody::ChartReleases> && chartReleases) { DARABONBA_PTR_SET_RVALUE(chartReleases_, chartReleases) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChartReleaseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListChartReleaseResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChartReleaseResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChartReleaseResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChartReleaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListChartReleaseResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of chart versions.
    shared_ptr<vector<ListChartReleaseResponseBody::ChartReleases>> chartReleases_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
