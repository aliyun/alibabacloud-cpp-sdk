// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDatasetRequestDatasetConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetRequest() = default ;
    UpdateDatasetRequest(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest(UpdateDatasetRequest &&) = default ;
    UpdateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequest() = default ;
    UpdateDatasetRequest& operator=(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest& operator=(UpdateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetConfig_ != nullptr
        && this->datasetDescription_ != nullptr && this->datasetId_ != nullptr && this->searchDatasetEnable_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetConfig Field Functions 
    bool hasDatasetConfig() const { return this->datasetConfig_ != nullptr;};
    void deleteDatasetConfig() { this->datasetConfig_ = nullptr;};
    inline const UpdateDatasetRequestDatasetConfig & datasetConfig() const { DARABONBA_PTR_GET_CONST(datasetConfig_, UpdateDatasetRequestDatasetConfig) };
    inline UpdateDatasetRequestDatasetConfig datasetConfig() { DARABONBA_PTR_GET(datasetConfig_, UpdateDatasetRequestDatasetConfig) };
    inline UpdateDatasetRequest& setDatasetConfig(const UpdateDatasetRequestDatasetConfig & datasetConfig) { DARABONBA_PTR_SET_VALUE(datasetConfig_, datasetConfig) };
    inline UpdateDatasetRequest& setDatasetConfig(UpdateDatasetRequestDatasetConfig && datasetConfig) { DARABONBA_PTR_SET_RVALUE(datasetConfig_, datasetConfig) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string datasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline UpdateDatasetRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline UpdateDatasetRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t searchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline UpdateDatasetRequest& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<UpdateDatasetRequestDatasetConfig> datasetConfig_ = nullptr;
    std::shared_ptr<string> datasetDescription_ = nullptr;
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<int32_t> searchDatasetEnable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
