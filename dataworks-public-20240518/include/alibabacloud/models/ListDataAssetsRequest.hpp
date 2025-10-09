// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataAssetsRequestTags.hpp>
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
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
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
    virtual bool empty() const override { this->dataAssetIds_ != nullptr
        && this->dataAssetType_ != nullptr && this->envType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr
        && this->tags_ != nullptr; };
    // dataAssetIds Field Functions 
    bool hasDataAssetIds() const { return this->dataAssetIds_ != nullptr;};
    void deleteDataAssetIds() { this->dataAssetIds_ = nullptr;};
    inline const vector<string> & dataAssetIds() const { DARABONBA_PTR_GET_CONST(dataAssetIds_, vector<string>) };
    inline vector<string> dataAssetIds() { DARABONBA_PTR_GET(dataAssetIds_, vector<string>) };
    inline ListDataAssetsRequest& setDataAssetIds(const vector<string> & dataAssetIds) { DARABONBA_PTR_SET_VALUE(dataAssetIds_, dataAssetIds) };
    inline ListDataAssetsRequest& setDataAssetIds(vector<string> && dataAssetIds) { DARABONBA_PTR_SET_RVALUE(dataAssetIds_, dataAssetIds) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string dataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline ListDataAssetsRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDataAssetsRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAssetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAssetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataAssetsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListDataAssetsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListDataAssetsRequestTags>) };
    inline vector<ListDataAssetsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListDataAssetsRequestTags>) };
    inline ListDataAssetsRequest& setTags(const vector<ListDataAssetsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListDataAssetsRequest& setTags(vector<ListDataAssetsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The data asset IDs.
    std::shared_ptr<vector<string>> dataAssetIds_ = nullptr;
    // The type of the data asset. Valid values:
    // 
    // *   ACS::DataWorks::Table
    // *   ACS::DataWorks::Task
    std::shared_ptr<string> dataAssetType_ = nullptr;
    // The environment of the workspace to which the data asset belongs. Valid values:
    // 
    // *   Dev: development environment
    // *   Prod: production environment
    std::shared_ptr<string> envType_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tags that are added to data assets. This parameter specifies a filter condition.
    // 
    // *   You can specify multiple tags, which are in the logical OR relation. For example, you can query the data assets that contain one of the following tags: `["key1:v1", "key2:v1", "key3:v1"]`.
    // *   If you do not configure this parameter, tag-based filtering is not performed.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ListDataAssetsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
