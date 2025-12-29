// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfigShrink_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetShrinkRequest() = default ;
    UpdateDatasetShrinkRequest(const UpdateDatasetShrinkRequest &) = default ;
    UpdateDatasetShrinkRequest(UpdateDatasetShrinkRequest &&) = default ;
    UpdateDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetShrinkRequest() = default ;
    UpdateDatasetShrinkRequest& operator=(const UpdateDatasetShrinkRequest &) = default ;
    UpdateDatasetShrinkRequest& operator=(UpdateDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetConfigShrink_ == nullptr
        && this->datasetDescription_ == nullptr && this->datasetId_ == nullptr && this->searchDatasetEnable_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetConfigShrink Field Functions 
    bool hasDatasetConfigShrink() const { return this->datasetConfigShrink_ != nullptr;};
    void deleteDatasetConfigShrink() { this->datasetConfigShrink_ = nullptr;};
    inline string getDatasetConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetConfigShrink_, "") };
    inline UpdateDatasetShrinkRequest& setDatasetConfigShrink(string datasetConfigShrink) { DARABONBA_PTR_SET_VALUE(datasetConfigShrink_, datasetConfigShrink) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline UpdateDatasetShrinkRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline UpdateDatasetShrinkRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t getSearchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline UpdateDatasetShrinkRequest& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> datasetConfigShrink_ {};
    shared_ptr<string> datasetDescription_ {};
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<int32_t> searchDatasetEnable_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
