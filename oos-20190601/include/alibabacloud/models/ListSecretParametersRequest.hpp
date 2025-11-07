// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListSecretParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Recursive, recursive_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Recursive, recursive_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    ListSecretParametersRequest() = default ;
    ListSecretParametersRequest(const ListSecretParametersRequest &) = default ;
    ListSecretParametersRequest(ListSecretParametersRequest &&) = default ;
    ListSecretParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretParametersRequest() = default ;
    ListSecretParametersRequest& operator=(const ListSecretParametersRequest &) = default ;
    ListSecretParametersRequest& operator=(ListSecretParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->name_ == nullptr && return this->nextToken_ == nullptr && return this->path_ == nullptr && return this->recursive_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->sortField_ == nullptr && return this->sortOrder_ == nullptr && return this->tags_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecretParametersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSecretParametersRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecretParametersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListSecretParametersRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // recursive Field Functions 
    bool hasRecursive() const { return this->recursive_ != nullptr;};
    void deleteRecursive() { this->recursive_ = nullptr;};
    inline bool recursive() const { DARABONBA_PTR_GET_DEFAULT(recursive_, false) };
    inline ListSecretParametersRequest& setRecursive(bool recursive) { DARABONBA_PTR_SET_VALUE(recursive_, recursive) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSecretParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecretParametersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListSecretParametersRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListSecretParametersRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline ListSecretParametersRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListSecretParametersRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The number of entries per page. Valid values: 10 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The name of the parameter. **You can enter a keyword to query parameter names in fuzzy match mode.
    std::shared_ptr<string> name_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The path of the parameter. For example, if the name of a parameter is /path/path1/Myparameter, the path of the parameter is /path/path1/.
    std::shared_ptr<string> path_ = nullptr;
    // Specifies whether to query parameters from all levels of directories in the specified path. Default value: false.
    std::shared_ptr<bool> recursive_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The field used to sort the query results. Valid values:
    // 
    // *   Name
    // *   CreatedDate
    std::shared_ptr<string> sortField_ = nullptr;
    // The order in which the entries are sorted. Valid values:
    // 
    // *   Ascending
    // *   Descending (Default)
    std::shared_ptr<string> sortOrder_ = nullptr;
    // The tags of the parameter.
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
