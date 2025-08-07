// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZATIONCONFIGLISTRESPONSEBODYDATAMODELCUSTOMIZATIONDATASETPO_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZATIONCONFIGLISTRESPONSEBODYDATAMODELCUSTOMIZATIONDATASETPO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& obj) { 
      DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModeCustomizationId, modeCustomizationId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelStatus, modelStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModeCustomizationId, modeCustomizationId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelStatus, modelStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo() = default ;
    GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo(const GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo &) = default ;
    GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo(GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo &&) = default ;
    GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo() = default ;
    GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& operator=(const GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo &) = default ;
    GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& operator=(GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrVersion_ != nullptr
        && this->createTime_ != nullptr && this->modeCustomizationId_ != nullptr && this->modelId_ != nullptr && this->modelName_ != nullptr && this->modelStatus_ != nullptr
        && this->taskType_ != nullptr; };
    // asrVersion Field Functions 
    bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
    void deleteAsrVersion() { this->asrVersion_ = nullptr;};
    inline int32_t asrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modeCustomizationId Field Functions 
    bool hasModeCustomizationId() const { return this->modeCustomizationId_ != nullptr;};
    void deleteModeCustomizationId() { this->modeCustomizationId_ = nullptr;};
    inline string modeCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modeCustomizationId_, "") };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setModeCustomizationId(string modeCustomizationId) { DARABONBA_PTR_SET_VALUE(modeCustomizationId_, modeCustomizationId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelStatus Field Functions 
    bool hasModelStatus() const { return this->modelStatus_ != nullptr;};
    void deleteModelStatus() { this->modelStatus_ = nullptr;};
    inline int32_t modelStatus() const { DARABONBA_PTR_GET_DEFAULT(modelStatus_, 0) };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setModelStatus(int32_t modelStatus) { DARABONBA_PTR_SET_VALUE(modelStatus_, modelStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<int32_t> asrVersion_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modeCustomizationId_ = nullptr;
    std::shared_ptr<int64_t> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<int32_t> modelStatus_ = nullptr;
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
