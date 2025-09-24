// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETJOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATASETJOBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DatasetJobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetJobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetJobConfigId, datasetJobConfigId_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetJobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetJobConfigId, datasetJobConfigId_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DatasetJobConfig() = default ;
    DatasetJobConfig(const DatasetJobConfig &) = default ;
    DatasetJobConfig(DatasetJobConfig &&) = default ;
    DatasetJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetJobConfig() = default ;
    DatasetJobConfig& operator=(const DatasetJobConfig &) = default ;
    DatasetJobConfig& operator=(DatasetJobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->configType_ != nullptr && this->createTime_ != nullptr && this->datasetJobConfigId_ != nullptr && this->datasetVersion_ != nullptr && this->modifyTime_ != nullptr
        && this->workspaceId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DatasetJobConfig& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline DatasetJobConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DatasetJobConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetJobConfigId Field Functions 
    bool hasDatasetJobConfigId() const { return this->datasetJobConfigId_ != nullptr;};
    void deleteDatasetJobConfigId() { this->datasetJobConfigId_ = nullptr;};
    inline string datasetJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(datasetJobConfigId_, "") };
    inline DatasetJobConfig& setDatasetJobConfigId(string datasetJobConfigId) { DARABONBA_PTR_SET_VALUE(datasetJobConfigId_, datasetJobConfigId) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline DatasetJobConfig& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DatasetJobConfig& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DatasetJobConfig& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> datasetJobConfigId_ = nullptr;
    std::shared_ptr<string> datasetVersion_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
