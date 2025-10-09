// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGDATAASSETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGDATAASSETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TagDataAssetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagDataAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoTraceEnabled, autoTraceEnabled_);
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TagDataAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoTraceEnabled, autoTraceEnabled_);
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    TagDataAssetsShrinkRequest() = default ;
    TagDataAssetsShrinkRequest(const TagDataAssetsShrinkRequest &) = default ;
    TagDataAssetsShrinkRequest(TagDataAssetsShrinkRequest &&) = default ;
    TagDataAssetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagDataAssetsShrinkRequest() = default ;
    TagDataAssetsShrinkRequest& operator=(const TagDataAssetsShrinkRequest &) = default ;
    TagDataAssetsShrinkRequest& operator=(TagDataAssetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoTraceEnabled_ != nullptr
        && this->dataAssetIdsShrink_ != nullptr && this->dataAssetType_ != nullptr && this->envType_ != nullptr && this->projectId_ != nullptr && this->tagsShrink_ != nullptr; };
    // autoTraceEnabled Field Functions 
    bool hasAutoTraceEnabled() const { return this->autoTraceEnabled_ != nullptr;};
    void deleteAutoTraceEnabled() { this->autoTraceEnabled_ = nullptr;};
    inline bool autoTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoTraceEnabled_, false) };
    inline TagDataAssetsShrinkRequest& setAutoTraceEnabled(bool autoTraceEnabled) { DARABONBA_PTR_SET_VALUE(autoTraceEnabled_, autoTraceEnabled) };


    // dataAssetIdsShrink Field Functions 
    bool hasDataAssetIdsShrink() const { return this->dataAssetIdsShrink_ != nullptr;};
    void deleteDataAssetIdsShrink() { this->dataAssetIdsShrink_ = nullptr;};
    inline string dataAssetIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataAssetIdsShrink_, "") };
    inline TagDataAssetsShrinkRequest& setDataAssetIdsShrink(string dataAssetIdsShrink) { DARABONBA_PTR_SET_VALUE(dataAssetIdsShrink_, dataAssetIdsShrink) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string dataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline TagDataAssetsShrinkRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TagDataAssetsShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TagDataAssetsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline TagDataAssetsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // Specifies whether to enable lineage-based automatic backtracking.
    std::shared_ptr<bool> autoTraceEnabled_ = nullptr;
    // The data asset IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataAssetIdsShrink_ = nullptr;
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
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
