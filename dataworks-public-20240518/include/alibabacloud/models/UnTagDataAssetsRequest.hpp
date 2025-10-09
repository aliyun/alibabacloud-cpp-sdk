// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGDATAASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGDATAASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UnTagDataAssetsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UnTagDataAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnTagDataAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UnTagDataAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UnTagDataAssetsRequest() = default ;
    UnTagDataAssetsRequest(const UnTagDataAssetsRequest &) = default ;
    UnTagDataAssetsRequest(UnTagDataAssetsRequest &&) = default ;
    UnTagDataAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnTagDataAssetsRequest() = default ;
    UnTagDataAssetsRequest& operator=(const UnTagDataAssetsRequest &) = default ;
    UnTagDataAssetsRequest& operator=(UnTagDataAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataAssetIds_ != nullptr
        && this->dataAssetType_ != nullptr && this->envType_ != nullptr && this->projectId_ != nullptr && this->tags_ != nullptr; };
    // dataAssetIds Field Functions 
    bool hasDataAssetIds() const { return this->dataAssetIds_ != nullptr;};
    void deleteDataAssetIds() { this->dataAssetIds_ = nullptr;};
    inline const vector<string> & dataAssetIds() const { DARABONBA_PTR_GET_CONST(dataAssetIds_, vector<string>) };
    inline vector<string> dataAssetIds() { DARABONBA_PTR_GET(dataAssetIds_, vector<string>) };
    inline UnTagDataAssetsRequest& setDataAssetIds(const vector<string> & dataAssetIds) { DARABONBA_PTR_SET_VALUE(dataAssetIds_, dataAssetIds) };
    inline UnTagDataAssetsRequest& setDataAssetIds(vector<string> && dataAssetIds) { DARABONBA_PTR_SET_RVALUE(dataAssetIds_, dataAssetIds) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string dataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline UnTagDataAssetsRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UnTagDataAssetsRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UnTagDataAssetsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UnTagDataAssetsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UnTagDataAssetsRequestTags>) };
    inline vector<UnTagDataAssetsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UnTagDataAssetsRequestTags>) };
    inline UnTagDataAssetsRequest& setTags(const vector<UnTagDataAssetsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UnTagDataAssetsRequest& setTags(vector<UnTagDataAssetsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The data asset IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> dataAssetIds_ = nullptr;
    // The type of the data asset. Valid values:
    // 
    // *   ACS::DataWorks::Table
    // *   ACS::DataWorks::Task
    // 
    // This parameter is required.
    std::shared_ptr<string> dataAssetType_ = nullptr;
    // The environment of the workspace to which the data asset belongs. Valid values:
    // 
    // *   Dev: development environment
    // *   Prod: production environment
    std::shared_ptr<string> envType_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tags that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UnTagDataAssetsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
