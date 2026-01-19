// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeListModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeListModelResponseBody() = default ;
    DescribeListModelResponseBody(const DescribeListModelResponseBody &) = default ;
    DescribeListModelResponseBody(DescribeListModelResponseBody &&) = default ;
    DescribeListModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListModelResponseBody() = default ;
    DescribeListModelResponseBody& operator=(const DescribeListModelResponseBody &) = default ;
    DescribeListModelResponseBody& operator=(DescribeListModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucId_ == nullptr
        && this->createTime_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelScene_ == nullptr
        && this->modelStatus_ == nullptr && this->taskId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->userLocalFileName_ == nullptr; };
      // bucId Field Functions 
      bool hasBucId() const { return this->bucId_ != nullptr;};
      void deleteBucId() { this->bucId_ = nullptr;};
      inline string getBucId() const { DARABONBA_PTR_GET_DEFAULT(bucId_, "") };
      inline ResultObject& setBucId(string bucId) { DARABONBA_PTR_SET_VALUE(bucId_, bucId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResultObject& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modelCode Field Functions 
      bool hasModelCode() const { return this->modelCode_ != nullptr;};
      void deleteModelCode() { this->modelCode_ = nullptr;};
      inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
      inline ResultObject& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline ResultObject& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline ResultObject& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelScene Field Functions 
      bool hasModelScene() const { return this->modelScene_ != nullptr;};
      void deleteModelScene() { this->modelScene_ = nullptr;};
      inline string getModelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
      inline ResultObject& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


      // modelStatus Field Functions 
      bool hasModelStatus() const { return this->modelStatus_ != nullptr;};
      void deleteModelStatus() { this->modelStatus_ = nullptr;};
      inline string getModelStatus() const { DARABONBA_PTR_GET_DEFAULT(modelStatus_, "") };
      inline ResultObject& setModelStatus(string modelStatus) { DARABONBA_PTR_SET_VALUE(modelStatus_, modelStatus) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ResultObject& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResultObject& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ResultObject& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userLocalFileName Field Functions 
      bool hasUserLocalFileName() const { return this->userLocalFileName_ != nullptr;};
      void deleteUserLocalFileName() { this->userLocalFileName_ = nullptr;};
      inline string getUserLocalFileName() const { DARABONBA_PTR_GET_DEFAULT(userLocalFileName_, "") };
      inline ResultObject& setUserLocalFileName(string userLocalFileName) { DARABONBA_PTR_SET_VALUE(userLocalFileName_, userLocalFileName) };


    protected:
      // Uploader ID.
      shared_ptr<string> bucId_ {};
      // Creation time.
      shared_ptr<string> createTime_ {};
      // Model code.
      shared_ptr<string> modelCode_ {};
      // Unique identifier of the model in use.
      shared_ptr<string> modelId_ {};
      // Model name.
      shared_ptr<string> modelName_ {};
      // Model scenario.
      shared_ptr<string> modelScene_ {};
      // Model status, values: -**ENABLED**: Enabled-**DISABLED**: Disabled
      shared_ptr<string> modelStatus_ {};
      // Task ID.
      shared_ptr<string> taskId_ {};
      // Last update time of the model.
      shared_ptr<string> updateTime_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // File name.
      shared_ptr<string> userLocalFileName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeListModelResponseBody& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeListModelResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeListModelResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeListModelResponseBody::ResultObject>) };
    inline vector<DescribeListModelResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeListModelResponseBody::ResultObject>) };
    inline DescribeListModelResponseBody& setResultObject(const vector<DescribeListModelResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeListModelResponseBody& setResultObject(vector<DescribeListModelResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline string getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, "") };
    inline DescribeListModelResponseBody& setTotalItem(string totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline string getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, "") };
    inline DescribeListModelResponseBody& setTotalPage(string totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    shared_ptr<string> currentPage_ {};
    // Number of items per page.
    shared_ptr<string> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned data.
    shared_ptr<vector<DescribeListModelResponseBody::ResultObject>> resultObject_ {};
    // Total number of records.
    shared_ptr<string> totalItem_ {};
    // Total number of pages.
    shared_ptr<string> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
