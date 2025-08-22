// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTraceAppByPageRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTraceAppByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TraceAppName, traceAppName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TraceAppName, traceAppName_);
    };
    SearchTraceAppByPageRequest() = default ;
    SearchTraceAppByPageRequest(const SearchTraceAppByPageRequest &) = default ;
    SearchTraceAppByPageRequest(SearchTraceAppByPageRequest &&) = default ;
    SearchTraceAppByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByPageRequest() = default ;
    SearchTraceAppByPageRequest& operator=(const SearchTraceAppByPageRequest &) = default ;
    SearchTraceAppByPageRequest& operator=(SearchTraceAppByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->traceAppName_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchTraceAppByPageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTraceAppByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchTraceAppByPageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchTraceAppByPageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SearchTraceAppByPageRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SearchTraceAppByPageRequestTags>) };
    inline vector<SearchTraceAppByPageRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<SearchTraceAppByPageRequestTags>) };
    inline SearchTraceAppByPageRequest& setTags(const vector<SearchTraceAppByPageRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchTraceAppByPageRequest& setTags(vector<SearchTraceAppByPageRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // traceAppName Field Functions 
    bool hasTraceAppName() const { return this->traceAppName_ != nullptr;};
    void deleteTraceAppName() { this->traceAppName_ = nullptr;};
    inline string traceAppName() const { DARABONBA_PTR_GET_DEFAULT(traceAppName_, "") };
    inline SearchTraceAppByPageRequest& setTraceAppName(string traceAppName) { DARABONBA_PTR_SET_VALUE(traceAppName_, traceAppName) };


  protected:
    // The number of the page to return. Default value: `1`.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: `10`.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<SearchTraceAppByPageRequestTags>> tags_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> traceAppName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
