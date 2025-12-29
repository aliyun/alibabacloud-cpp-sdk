// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceIds, prometheusInstanceIds_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceIds, prometheusInstanceIds_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListPrometheusInstancesShrinkRequest() = default ;
    ListPrometheusInstancesShrinkRequest(const ListPrometheusInstancesShrinkRequest &) = default ;
    ListPrometheusInstancesShrinkRequest(ListPrometheusInstancesShrinkRequest &&) = default ;
    ListPrometheusInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstancesShrinkRequest() = default ;
    ListPrometheusInstancesShrinkRequest& operator=(const ListPrometheusInstancesShrinkRequest &) = default ;
    ListPrometheusInstancesShrinkRequest& operator=(ListPrometheusInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterRegionIds_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->prometheusInstanceIds_ == nullptr && this->prometheusInstanceName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceType_ == nullptr && this->tagShrink_ == nullptr && this->version_ == nullptr; };
    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string getFilterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListPrometheusInstancesShrinkRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrometheusInstancesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrometheusInstancesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prometheusInstanceIds Field Functions 
    bool hasPrometheusInstanceIds() const { return this->prometheusInstanceIds_ != nullptr;};
    void deletePrometheusInstanceIds() { this->prometheusInstanceIds_ = nullptr;};
    inline string getPrometheusInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceIds_, "") };
    inline ListPrometheusInstancesShrinkRequest& setPrometheusInstanceIds(string prometheusInstanceIds) { DARABONBA_PTR_SET_VALUE(prometheusInstanceIds_, prometheusInstanceIds) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string getPrometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline ListPrometheusInstancesShrinkRequest& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusInstancesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPrometheusInstancesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListPrometheusInstancesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusInstancesShrinkRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Specified list of regionIds to filter (comma-separated).
    shared_ptr<string> filterRegionIds_ {};
    // Maximum number of records to return.
    shared_ptr<int32_t> maxResults_ {};
    // Query token.
    shared_ptr<string> nextToken_ {};
    // List of instance IDs (comma-separated)
    shared_ptr<string> prometheusInstanceIds_ {};
    // Instance name (partial match supported)
    shared_ptr<string> prometheusInstanceName_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Resource type of the instance.
    shared_ptr<string> resourceType_ {};
    // List of tags.
    shared_ptr<string> tagShrink_ {};
    // Instance version: V1 or V2
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
