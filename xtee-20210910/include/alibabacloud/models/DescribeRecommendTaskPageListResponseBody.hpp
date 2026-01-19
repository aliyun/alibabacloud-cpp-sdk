// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKPAGELISTRESPONSEBODY_HPP_
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
  class DescribeRecommendTaskPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeRecommendTaskPageListResponseBody() = default ;
    DescribeRecommendTaskPageListResponseBody(const DescribeRecommendTaskPageListResponseBody &) = default ;
    DescribeRecommendTaskPageListResponseBody(DescribeRecommendTaskPageListResponseBody &&) = default ;
    DescribeRecommendTaskPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskPageListResponseBody() = default ;
    DescribeRecommendTaskPageListResponseBody& operator=(const DescribeRecommendTaskPageListResponseBody &) = default ;
    DescribeRecommendTaskPageListResponseBody& operator=(DescribeRecommendTaskPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(expectVelocities, expectVelocities_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(normalCount, normalCount_);
        DARABONBA_PTR_TO_JSON(normalSize, normalSize_);
        DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(riskSize, riskSize_);
        DARABONBA_PTR_TO_JSON(sampleName, sampleName_);
        DARABONBA_PTR_TO_JSON(sampleScene, sampleScene_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(expectVelocities, expectVelocities_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(normalCount, normalCount_);
        DARABONBA_PTR_FROM_JSON(normalSize, normalSize_);
        DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(riskSize, riskSize_);
        DARABONBA_PTR_FROM_JSON(sampleName, sampleName_);
        DARABONBA_PTR_FROM_JSON(sampleScene, sampleScene_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
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
      virtual bool empty() const override { return this->expectVelocities_ == nullptr
        && this->gmtCreate_ == nullptr && this->normalCount_ == nullptr && this->normalSize_ == nullptr && this->riskCount_ == nullptr && this->riskSize_ == nullptr
        && this->sampleName_ == nullptr && this->sampleScene_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr; };
      // expectVelocities Field Functions 
      bool hasExpectVelocities() const { return this->expectVelocities_ != nullptr;};
      void deleteExpectVelocities() { this->expectVelocities_ = nullptr;};
      inline const vector<string> & getExpectVelocities() const { DARABONBA_PTR_GET_CONST(expectVelocities_, vector<string>) };
      inline vector<string> getExpectVelocities() { DARABONBA_PTR_GET(expectVelocities_, vector<string>) };
      inline ResultObject& setExpectVelocities(const vector<string> & expectVelocities) { DARABONBA_PTR_SET_VALUE(expectVelocities_, expectVelocities) };
      inline ResultObject& setExpectVelocities(vector<string> && expectVelocities) { DARABONBA_PTR_SET_RVALUE(expectVelocities_, expectVelocities) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // normalCount Field Functions 
      bool hasNormalCount() const { return this->normalCount_ != nullptr;};
      void deleteNormalCount() { this->normalCount_ = nullptr;};
      inline int64_t getNormalCount() const { DARABONBA_PTR_GET_DEFAULT(normalCount_, 0L) };
      inline ResultObject& setNormalCount(int64_t normalCount) { DARABONBA_PTR_SET_VALUE(normalCount_, normalCount) };


      // normalSize Field Functions 
      bool hasNormalSize() const { return this->normalSize_ != nullptr;};
      void deleteNormalSize() { this->normalSize_ = nullptr;};
      inline int64_t getNormalSize() const { DARABONBA_PTR_GET_DEFAULT(normalSize_, 0L) };
      inline ResultObject& setNormalSize(int64_t normalSize) { DARABONBA_PTR_SET_VALUE(normalSize_, normalSize) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline ResultObject& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // riskSize Field Functions 
      bool hasRiskSize() const { return this->riskSize_ != nullptr;};
      void deleteRiskSize() { this->riskSize_ = nullptr;};
      inline int64_t getRiskSize() const { DARABONBA_PTR_GET_DEFAULT(riskSize_, 0L) };
      inline ResultObject& setRiskSize(int64_t riskSize) { DARABONBA_PTR_SET_VALUE(riskSize_, riskSize) };


      // sampleName Field Functions 
      bool hasSampleName() const { return this->sampleName_ != nullptr;};
      void deleteSampleName() { this->sampleName_ = nullptr;};
      inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
      inline ResultObject& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


      // sampleScene Field Functions 
      bool hasSampleScene() const { return this->sampleScene_ != nullptr;};
      void deleteSampleScene() { this->sampleScene_ = nullptr;};
      inline string getSampleScene() const { DARABONBA_PTR_GET_DEFAULT(sampleScene_, "") };
      inline ResultObject& setSampleScene(string sampleScene) { DARABONBA_PTR_SET_VALUE(sampleScene_, sampleScene) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline ResultObject& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline ResultObject& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline ResultObject& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // Impact indicators
      shared_ptr<vector<string>> expectVelocities_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Number of samples
      shared_ptr<int64_t> normalCount_ {};
      // Number of normal samples
      shared_ptr<int64_t> normalSize_ {};
      // Number of records displayed on the current page.
      shared_ptr<int64_t> riskCount_ {};
      // Number of risk samples
      shared_ptr<int64_t> riskSize_ {};
      // Sample name
      shared_ptr<string> sampleName_ {};
      // Sample scenario
      shared_ptr<string> sampleScene_ {};
      // Task ID.
      shared_ptr<int64_t> taskId_ {};
      // Task name.
      shared_ptr<string> taskName_ {};
      // Task status.
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecommendTaskPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRecommendTaskPageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRecommendTaskPageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeRecommendTaskPageListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeRecommendTaskPageListResponseBody::ResultObject>) };
    inline vector<DescribeRecommendTaskPageListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeRecommendTaskPageListResponseBody::ResultObject>) };
    inline DescribeRecommendTaskPageListResponseBody& setResultObject(const vector<DescribeRecommendTaskPageListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRecommendTaskPageListResponseBody& setResultObject(vector<DescribeRecommendTaskPageListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeRecommendTaskPageListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeRecommendTaskPageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Current page number
    shared_ptr<int32_t> currentPage_ {};
    // Page size, with a default value of 10
    shared_ptr<int32_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeRecommendTaskPageListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
