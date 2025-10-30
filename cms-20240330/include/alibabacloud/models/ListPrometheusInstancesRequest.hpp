// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusInstancesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceIds, prometheusInstanceIds_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceIds, prometheusInstanceIds_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListPrometheusInstancesRequest() = default ;
    ListPrometheusInstancesRequest(const ListPrometheusInstancesRequest &) = default ;
    ListPrometheusInstancesRequest(ListPrometheusInstancesRequest &&) = default ;
    ListPrometheusInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstancesRequest() = default ;
    ListPrometheusInstancesRequest& operator=(const ListPrometheusInstancesRequest &) = default ;
    ListPrometheusInstancesRequest& operator=(ListPrometheusInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterRegionIds_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->prometheusInstanceIds_ == nullptr && return this->prometheusInstanceName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceType_ == nullptr && return this->tag_ == nullptr && return this->version_ == nullptr; };
    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string filterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListPrometheusInstancesRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrometheusInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrometheusInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prometheusInstanceIds Field Functions 
    bool hasPrometheusInstanceIds() const { return this->prometheusInstanceIds_ != nullptr;};
    void deletePrometheusInstanceIds() { this->prometheusInstanceIds_ = nullptr;};
    inline string prometheusInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceIds_, "") };
    inline ListPrometheusInstancesRequest& setPrometheusInstanceIds(string prometheusInstanceIds) { DARABONBA_PTR_SET_VALUE(prometheusInstanceIds_, prometheusInstanceIds) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline ListPrometheusInstancesRequest& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPrometheusInstancesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListPrometheusInstancesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListPrometheusInstancesRequestTag>) };
    inline vector<ListPrometheusInstancesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListPrometheusInstancesRequestTag>) };
    inline ListPrometheusInstancesRequest& setTag(const vector<ListPrometheusInstancesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListPrometheusInstancesRequest& setTag(vector<ListPrometheusInstancesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusInstancesRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Specified list of regionIds to filter (comma-separated).
    std::shared_ptr<string> filterRegionIds_ = nullptr;
    // Maximum number of records to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Query token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // List of instance IDs (comma-separated)
    std::shared_ptr<string> prometheusInstanceIds_ = nullptr;
    // Instance name (partial match supported)
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Resource type of the instance.
    std::shared_ptr<string> resourceType_ = nullptr;
    // List of tags.
    std::shared_ptr<vector<ListPrometheusInstancesRequestTag>> tag_ = nullptr;
    // Instance version: V1 or V2
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
