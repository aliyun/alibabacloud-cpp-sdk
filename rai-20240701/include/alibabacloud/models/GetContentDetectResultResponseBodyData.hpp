// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTENTDETECTRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONTENTDETECTRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetContentDetectResultResponseBodyDataDetectResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetContentDetectResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContentDetectResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetectResultList, detectResultList_);
      DARABONBA_PTR_TO_JSON(ProcessedCount, processedCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetContentDetectResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectResultList, detectResultList_);
      DARABONBA_PTR_FROM_JSON(ProcessedCount, processedCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetContentDetectResultResponseBodyData() = default ;
    GetContentDetectResultResponseBodyData(const GetContentDetectResultResponseBodyData &) = default ;
    GetContentDetectResultResponseBodyData(GetContentDetectResultResponseBodyData &&) = default ;
    GetContentDetectResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContentDetectResultResponseBodyData() = default ;
    GetContentDetectResultResponseBodyData& operator=(const GetContentDetectResultResponseBodyData &) = default ;
    GetContentDetectResultResponseBodyData& operator=(GetContentDetectResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectResultList_ == nullptr
        && return this->processedCount_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr && return this->totalCount_ == nullptr; };
    // detectResultList Field Functions 
    bool hasDetectResultList() const { return this->detectResultList_ != nullptr;};
    void deleteDetectResultList() { this->detectResultList_ = nullptr;};
    inline const vector<Models::GetContentDetectResultResponseBodyDataDetectResultList> & detectResultList() const { DARABONBA_PTR_GET_CONST(detectResultList_, vector<Models::GetContentDetectResultResponseBodyDataDetectResultList>) };
    inline vector<Models::GetContentDetectResultResponseBodyDataDetectResultList> detectResultList() { DARABONBA_PTR_GET(detectResultList_, vector<Models::GetContentDetectResultResponseBodyDataDetectResultList>) };
    inline GetContentDetectResultResponseBodyData& setDetectResultList(const vector<Models::GetContentDetectResultResponseBodyDataDetectResultList> & detectResultList) { DARABONBA_PTR_SET_VALUE(detectResultList_, detectResultList) };
    inline GetContentDetectResultResponseBodyData& setDetectResultList(vector<Models::GetContentDetectResultResponseBodyDataDetectResultList> && detectResultList) { DARABONBA_PTR_SET_RVALUE(detectResultList_, detectResultList) };


    // processedCount Field Functions 
    bool hasProcessedCount() const { return this->processedCount_ != nullptr;};
    void deleteProcessedCount() { this->processedCount_ = nullptr;};
    inline int32_t processedCount() const { DARABONBA_PTR_GET_DEFAULT(processedCount_, 0) };
    inline GetContentDetectResultResponseBodyData& setProcessedCount(int32_t processedCount) { DARABONBA_PTR_SET_VALUE(processedCount_, processedCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetContentDetectResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline GetContentDetectResultResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetContentDetectResultResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::GetContentDetectResultResponseBodyDataDetectResultList>> detectResultList_ = nullptr;
    std::shared_ptr<int32_t> processedCount_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
