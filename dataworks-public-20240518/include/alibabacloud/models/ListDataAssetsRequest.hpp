// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDomainId, assetDomainId_);
      DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDomainId, assetDomainId_);
      DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListDataAssetsRequest() = default ;
    ListDataAssetsRequest(const ListDataAssetsRequest &) = default ;
    ListDataAssetsRequest(ListDataAssetsRequest &&) = default ;
    ListDataAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetsRequest() = default ;
    ListDataAssetsRequest& operator=(const ListDataAssetsRequest &) = default ;
    ListDataAssetsRequest& operator=(ListDataAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The custom tag key.
      // 
      // The tag key can be up to 64 characters in length, cannot start with `dw:`, and supports only letters, digits, and the following special characters: `-@#*<>|[]()+=&%$!~`.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->assetDomainId_ == nullptr
        && this->categoryUuid_ == nullptr && this->dataAssetIds_ == nullptr && this->dataAssetType_ == nullptr && this->envType_ == nullptr && this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->tags_ == nullptr; };
    // assetDomainId Field Functions 
    bool hasAssetDomainId() const { return this->assetDomainId_ != nullptr;};
    void deleteAssetDomainId() { this->assetDomainId_ = nullptr;};
    inline int64_t getAssetDomainId() const { DARABONBA_PTR_GET_DEFAULT(assetDomainId_, 0L) };
    inline ListDataAssetsRequest& setAssetDomainId(int64_t assetDomainId) { DARABONBA_PTR_SET_VALUE(assetDomainId_, assetDomainId) };


    // categoryUuid Field Functions 
    bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
    void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
    inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
    inline ListDataAssetsRequest& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


    // dataAssetIds Field Functions 
    bool hasDataAssetIds() const { return this->dataAssetIds_ != nullptr;};
    void deleteDataAssetIds() { this->dataAssetIds_ = nullptr;};
    inline const vector<string> & getDataAssetIds() const { DARABONBA_PTR_GET_CONST(dataAssetIds_, vector<string>) };
    inline vector<string> getDataAssetIds() { DARABONBA_PTR_GET(dataAssetIds_, vector<string>) };
    inline ListDataAssetsRequest& setDataAssetIds(const vector<string> & dataAssetIds) { DARABONBA_PTR_SET_VALUE(dataAssetIds_, dataAssetIds) };
    inline ListDataAssetsRequest& setDataAssetIds(vector<string> && dataAssetIds) { DARABONBA_PTR_SET_RVALUE(dataAssetIds_, dataAssetIds) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string getDataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline ListDataAssetsRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDataAssetsRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataAssetsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAssetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAssetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataAssetsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListDataAssetsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListDataAssetsRequest::Tags>) };
    inline vector<ListDataAssetsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListDataAssetsRequest::Tags>) };
    inline ListDataAssetsRequest& setTags(const vector<ListDataAssetsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListDataAssetsRequest& setTags(vector<ListDataAssetsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<int64_t> assetDomainId_ {};
    shared_ptr<string> categoryUuid_ {};
    // The list of unique data asset IDs.
    shared_ptr<vector<string>> dataAssetIds_ {};
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
    shared_ptr<vector<ListDataAssetsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
