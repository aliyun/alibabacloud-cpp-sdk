// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchRetcodeAppByPageRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchRetcodeAppByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRetcodeAppByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppId, retcodeAppId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppName, retcodeAppName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRetcodeAppByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppId, retcodeAppId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppName, retcodeAppName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    SearchRetcodeAppByPageRequest() = default ;
    SearchRetcodeAppByPageRequest(const SearchRetcodeAppByPageRequest &) = default ;
    SearchRetcodeAppByPageRequest(SearchRetcodeAppByPageRequest &&) = default ;
    SearchRetcodeAppByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRetcodeAppByPageRequest() = default ;
    SearchRetcodeAppByPageRequest& operator=(const SearchRetcodeAppByPageRequest &) = default ;
    SearchRetcodeAppByPageRequest& operator=(SearchRetcodeAppByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->retcodeAppId_ != nullptr && this->retcodeAppName_ != nullptr
        && this->tags_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchRetcodeAppByPageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchRetcodeAppByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchRetcodeAppByPageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchRetcodeAppByPageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retcodeAppId Field Functions 
    bool hasRetcodeAppId() const { return this->retcodeAppId_ != nullptr;};
    void deleteRetcodeAppId() { this->retcodeAppId_ = nullptr;};
    inline string retcodeAppId() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppId_, "") };
    inline SearchRetcodeAppByPageRequest& setRetcodeAppId(string retcodeAppId) { DARABONBA_PTR_SET_VALUE(retcodeAppId_, retcodeAppId) };


    // retcodeAppName Field Functions 
    bool hasRetcodeAppName() const { return this->retcodeAppName_ != nullptr;};
    void deleteRetcodeAppName() { this->retcodeAppName_ = nullptr;};
    inline string retcodeAppName() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppName_, "") };
    inline SearchRetcodeAppByPageRequest& setRetcodeAppName(string retcodeAppName) { DARABONBA_PTR_SET_VALUE(retcodeAppName_, retcodeAppName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SearchRetcodeAppByPageRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SearchRetcodeAppByPageRequestTags>) };
    inline vector<SearchRetcodeAppByPageRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<SearchRetcodeAppByPageRequestTags>) };
    inline SearchRetcodeAppByPageRequest& setTags(const vector<SearchRetcodeAppByPageRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchRetcodeAppByPageRequest& setTags(vector<SearchRetcodeAppByPageRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The application ID.
    // 
    // Log on to the **ARMS console**. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of an application. The URL in the browser address bar contains the pid of this application in the format of `pid=xxx`. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is `xxx%4074xxx`, you must replace **%40** with the at sign (@). The actual PID is `xxx@74xxx`.
    std::shared_ptr<string> retcodeAppId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> retcodeAppName_ = nullptr;
    // The tag.
    std::shared_ptr<vector<SearchRetcodeAppByPageRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
