// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETPARAMETERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETPARAMETERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListSecretParametersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretParametersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Recursive, recursive_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretParametersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Recursive, recursive_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListSecretParametersShrinkRequest() = default ;
    ListSecretParametersShrinkRequest(const ListSecretParametersShrinkRequest &) = default ;
    ListSecretParametersShrinkRequest(ListSecretParametersShrinkRequest &&) = default ;
    ListSecretParametersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretParametersShrinkRequest() = default ;
    ListSecretParametersShrinkRequest& operator=(const ListSecretParametersShrinkRequest &) = default ;
    ListSecretParametersShrinkRequest& operator=(ListSecretParametersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->name_ == nullptr && this->nextToken_ == nullptr && this->path_ == nullptr && this->recursive_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sortField_ == nullptr && this->sortOrder_ == nullptr && this->tagsShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecretParametersShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSecretParametersShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecretParametersShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListSecretParametersShrinkRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // recursive Field Functions 
    bool hasRecursive() const { return this->recursive_ != nullptr;};
    void deleteRecursive() { this->recursive_ = nullptr;};
    inline bool getRecursive() const { DARABONBA_PTR_GET_DEFAULT(recursive_, false) };
    inline ListSecretParametersShrinkRequest& setRecursive(bool recursive) { DARABONBA_PTR_SET_VALUE(recursive_, recursive) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSecretParametersShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecretParametersShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListSecretParametersShrinkRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListSecretParametersShrinkRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListSecretParametersShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The number of entries per page. Valid values: 10 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the parameter. **You can enter a keyword to query parameter names in fuzzy match mode.
    shared_ptr<string> name_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The path of the parameter. For example, if the name of a parameter is /path/path1/Myparameter, the path of the parameter is /path/path1/.
    shared_ptr<string> path_ {};
    // Specifies whether to query parameters from all levels of directories in the specified path. Default value: false.
    shared_ptr<bool> recursive_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The field used to sort the query results. Valid values:
    // 
    // *   Name
    // *   CreatedDate
    shared_ptr<string> sortField_ {};
    // The order in which the entries are sorted. Valid values:
    // 
    // *   Ascending
    // *   Descending (Default)
    shared_ptr<string> sortOrder_ {};
    // The tags of the parameter.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
