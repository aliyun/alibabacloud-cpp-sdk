// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDomainId, assetDomainId_);
      DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDomainId, assetDomainId_);
      DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListDataAssetsShrinkRequest() = default ;
    ListDataAssetsShrinkRequest(const ListDataAssetsShrinkRequest &) = default ;
    ListDataAssetsShrinkRequest(ListDataAssetsShrinkRequest &&) = default ;
    ListDataAssetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetsShrinkRequest() = default ;
    ListDataAssetsShrinkRequest& operator=(const ListDataAssetsShrinkRequest &) = default ;
    ListDataAssetsShrinkRequest& operator=(ListDataAssetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetDomainId_ == nullptr
        && this->categoryUuid_ == nullptr && this->dataAssetIdsShrink_ == nullptr && this->dataAssetType_ == nullptr && this->envType_ == nullptr && this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->tagsShrink_ == nullptr; };
    // assetDomainId Field Functions 
    bool hasAssetDomainId() const { return this->assetDomainId_ != nullptr;};
    void deleteAssetDomainId() { this->assetDomainId_ = nullptr;};
    inline int64_t getAssetDomainId() const { DARABONBA_PTR_GET_DEFAULT(assetDomainId_, 0L) };
    inline ListDataAssetsShrinkRequest& setAssetDomainId(int64_t assetDomainId) { DARABONBA_PTR_SET_VALUE(assetDomainId_, assetDomainId) };


    // categoryUuid Field Functions 
    bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
    void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
    inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
    inline ListDataAssetsShrinkRequest& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


    // dataAssetIdsShrink Field Functions 
    bool hasDataAssetIdsShrink() const { return this->dataAssetIdsShrink_ != nullptr;};
    void deleteDataAssetIdsShrink() { this->dataAssetIdsShrink_ = nullptr;};
    inline string getDataAssetIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataAssetIdsShrink_, "") };
    inline ListDataAssetsShrinkRequest& setDataAssetIdsShrink(string dataAssetIdsShrink) { DARABONBA_PTR_SET_VALUE(dataAssetIdsShrink_, dataAssetIdsShrink) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string getDataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline ListDataAssetsShrinkRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDataAssetsShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataAssetsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAssetsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAssetsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataAssetsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListDataAssetsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    shared_ptr<int64_t> assetDomainId_ {};
    shared_ptr<string> categoryUuid_ {};
    // The list of unique data asset IDs.
    shared_ptr<string> dataAssetIdsShrink_ {};
    // The Asset Type of the data asset. Valid values:
    // 
    // - ACS::DataWorks::Table: table.
    // 
    // - ACS::DataWorks::Task: scheduling node.
    shared_ptr<string> dataAssetType_ {};
    // The workspace environment to which the data asset belongs. Valid values:
    // - Dev: development environment.
    // - Prod: production environment.
    shared_ptr<string> envType_ {};
    shared_ptr<string> name_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The list of tags associated with data assets. Tags are used as query filters:
    // - Multiple values have an OR relationship. For example, `["key1:v1", "key2:v1", "key3:v1"]` queries data assets that contain any of the specified tags.
    // - If this parameter is not specified or is left empty, no tag-based filtering is applied.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
