// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusViewsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusViewsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusViewsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prometheusViewIds, prometheusViewIds_);
      DARABONBA_PTR_TO_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusViewsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prometheusViewIds, prometheusViewIds_);
      DARABONBA_PTR_FROM_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListPrometheusViewsRequest() = default ;
    ListPrometheusViewsRequest(const ListPrometheusViewsRequest &) = default ;
    ListPrometheusViewsRequest(ListPrometheusViewsRequest &&) = default ;
    ListPrometheusViewsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusViewsRequest() = default ;
    ListPrometheusViewsRequest& operator=(const ListPrometheusViewsRequest &) = default ;
    ListPrometheusViewsRequest& operator=(ListPrometheusViewsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterRegionIds_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->prometheusViewIds_ == nullptr && return this->prometheusViewName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceType_ == nullptr && return this->tag_ == nullptr && return this->version_ == nullptr && return this->workspace_ == nullptr; };
    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string filterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListPrometheusViewsRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrometheusViewsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrometheusViewsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prometheusViewIds Field Functions 
    bool hasPrometheusViewIds() const { return this->prometheusViewIds_ != nullptr;};
    void deletePrometheusViewIds() { this->prometheusViewIds_ = nullptr;};
    inline string prometheusViewIds() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewIds_, "") };
    inline ListPrometheusViewsRequest& setPrometheusViewIds(string prometheusViewIds) { DARABONBA_PTR_SET_VALUE(prometheusViewIds_, prometheusViewIds) };


    // prometheusViewName Field Functions 
    bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
    void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
    inline string prometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
    inline ListPrometheusViewsRequest& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusViewsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPrometheusViewsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListPrometheusViewsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListPrometheusViewsRequestTag>) };
    inline vector<ListPrometheusViewsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListPrometheusViewsRequestTag>) };
    inline ListPrometheusViewsRequest& setTag(const vector<ListPrometheusViewsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListPrometheusViewsRequest& setTag(vector<ListPrometheusViewsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusViewsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListPrometheusViewsRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> filterRegionIds_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> prometheusViewIds_ = nullptr;
    std::shared_ptr<string> prometheusViewName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<vector<ListPrometheusViewsRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
