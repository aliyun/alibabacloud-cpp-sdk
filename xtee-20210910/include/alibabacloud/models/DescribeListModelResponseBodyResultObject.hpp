// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTMODELRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTMODELRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeListModelResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListModelResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(bucId, bucId_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelScene, modelScene_);
      DARABONBA_PTR_TO_JSON(modelStatus, modelStatus_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userLocalFileName, userLocalFileName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListModelResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(bucId, bucId_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelScene, modelScene_);
      DARABONBA_PTR_FROM_JSON(modelStatus, modelStatus_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userLocalFileName, userLocalFileName_);
    };
    DescribeListModelResponseBodyResultObject() = default ;
    DescribeListModelResponseBodyResultObject(const DescribeListModelResponseBodyResultObject &) = default ;
    DescribeListModelResponseBodyResultObject(DescribeListModelResponseBodyResultObject &&) = default ;
    DescribeListModelResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListModelResponseBodyResultObject() = default ;
    DescribeListModelResponseBodyResultObject& operator=(const DescribeListModelResponseBodyResultObject &) = default ;
    DescribeListModelResponseBodyResultObject& operator=(DescribeListModelResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucId_ != nullptr
        && this->createTime_ != nullptr && this->modelCode_ != nullptr && this->modelId_ != nullptr && this->modelName_ != nullptr && this->modelScene_ != nullptr
        && this->modelStatus_ != nullptr && this->taskId_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr && this->userLocalFileName_ != nullptr; };
    // bucId Field Functions 
    bool hasBucId() const { return this->bucId_ != nullptr;};
    void deleteBucId() { this->bucId_ = nullptr;};
    inline string bucId() const { DARABONBA_PTR_GET_DEFAULT(bucId_, "") };
    inline DescribeListModelResponseBodyResultObject& setBucId(string bucId) { DARABONBA_PTR_SET_VALUE(bucId_, bucId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeListModelResponseBodyResultObject& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline DescribeListModelResponseBodyResultObject& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline DescribeListModelResponseBodyResultObject& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeListModelResponseBodyResultObject& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelScene Field Functions 
    bool hasModelScene() const { return this->modelScene_ != nullptr;};
    void deleteModelScene() { this->modelScene_ = nullptr;};
    inline string modelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
    inline DescribeListModelResponseBodyResultObject& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


    // modelStatus Field Functions 
    bool hasModelStatus() const { return this->modelStatus_ != nullptr;};
    void deleteModelStatus() { this->modelStatus_ = nullptr;};
    inline string modelStatus() const { DARABONBA_PTR_GET_DEFAULT(modelStatus_, "") };
    inline DescribeListModelResponseBodyResultObject& setModelStatus(string modelStatus) { DARABONBA_PTR_SET_VALUE(modelStatus_, modelStatus) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeListModelResponseBodyResultObject& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeListModelResponseBodyResultObject& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeListModelResponseBodyResultObject& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userLocalFileName Field Functions 
    bool hasUserLocalFileName() const { return this->userLocalFileName_ != nullptr;};
    void deleteUserLocalFileName() { this->userLocalFileName_ = nullptr;};
    inline string userLocalFileName() const { DARABONBA_PTR_GET_DEFAULT(userLocalFileName_, "") };
    inline DescribeListModelResponseBodyResultObject& setUserLocalFileName(string userLocalFileName) { DARABONBA_PTR_SET_VALUE(userLocalFileName_, userLocalFileName) };


  protected:
    // Uploader ID.
    std::shared_ptr<string> bucId_ = nullptr;
    // Creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Model code.
    std::shared_ptr<string> modelCode_ = nullptr;
    // Unique identifier of the model in use.
    std::shared_ptr<string> modelId_ = nullptr;
    // Model name.
    std::shared_ptr<string> modelName_ = nullptr;
    // Model scenario.
    std::shared_ptr<string> modelScene_ = nullptr;
    // Model status, values: -**ENABLED**: Enabled-**DISABLED**: Disabled
    std::shared_ptr<string> modelStatus_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // Last update time of the model.
    std::shared_ptr<string> updateTime_ = nullptr;
    // User ID.
    std::shared_ptr<string> userId_ = nullptr;
    // File name.
    std::shared_ptr<string> userLocalFileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
