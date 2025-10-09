// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGDATAASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGDATAASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagDataAssetsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TagDataAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagDataAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoTraceEnabled, autoTraceEnabled_);
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagDataAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoTraceEnabled, autoTraceEnabled_);
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    TagDataAssetsRequest() = default ;
    TagDataAssetsRequest(const TagDataAssetsRequest &) = default ;
    TagDataAssetsRequest(TagDataAssetsRequest &&) = default ;
    TagDataAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagDataAssetsRequest() = default ;
    TagDataAssetsRequest& operator=(const TagDataAssetsRequest &) = default ;
    TagDataAssetsRequest& operator=(TagDataAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoTraceEnabled_ != nullptr
        && this->dataAssetIds_ != nullptr && this->dataAssetType_ != nullptr && this->envType_ != nullptr && this->projectId_ != nullptr && this->tags_ != nullptr; };
    // autoTraceEnabled Field Functions 
    bool hasAutoTraceEnabled() const { return this->autoTraceEnabled_ != nullptr;};
    void deleteAutoTraceEnabled() { this->autoTraceEnabled_ = nullptr;};
    inline bool autoTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoTraceEnabled_, false) };
    inline TagDataAssetsRequest& setAutoTraceEnabled(bool autoTraceEnabled) { DARABONBA_PTR_SET_VALUE(autoTraceEnabled_, autoTraceEnabled) };


    // dataAssetIds Field Functions 
    bool hasDataAssetIds() const { return this->dataAssetIds_ != nullptr;};
    void deleteDataAssetIds() { this->dataAssetIds_ = nullptr;};
    inline const vector<string> & dataAssetIds() const { DARABONBA_PTR_GET_CONST(dataAssetIds_, vector<string>) };
    inline vector<string> dataAssetIds() { DARABONBA_PTR_GET(dataAssetIds_, vector<string>) };
    inline TagDataAssetsRequest& setDataAssetIds(const vector<string> & dataAssetIds) { DARABONBA_PTR_SET_VALUE(dataAssetIds_, dataAssetIds) };
    inline TagDataAssetsRequest& setDataAssetIds(vector<string> && dataAssetIds) { DARABONBA_PTR_SET_RVALUE(dataAssetIds_, dataAssetIds) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string dataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline TagDataAssetsRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TagDataAssetsRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TagDataAssetsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<TagDataAssetsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TagDataAssetsRequestTags>) };
    inline vector<TagDataAssetsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<TagDataAssetsRequestTags>) };
    inline TagDataAssetsRequest& setTags(const vector<TagDataAssetsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TagDataAssetsRequest& setTags(vector<TagDataAssetsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Specifies whether to enable lineage-based automatic backtracking.
    std::shared_ptr<bool> autoTraceEnabled_ = nullptr;
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
    // The tags that you want to add to data assets.
    // 
    // This parameter is required.
    std::shared_ptr<vector<TagDataAssetsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
