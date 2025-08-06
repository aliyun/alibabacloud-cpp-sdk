// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUCKETREDUNDANCYTRANSITIONRESPONSEBODYREDUNDANCYTRANSITIONINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTBUCKETREDUNDANCYTRANSITIONRESPONSEBODYREDUNDANCYTRANSITIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EstimatedRemainingTime, estimatedRemainingTime_);
      DARABONBA_PTR_TO_JSON(ProcessPercentage, processPercentage_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EstimatedRemainingTime, estimatedRemainingTime_);
      DARABONBA_PTR_FROM_JSON(ProcessPercentage, processPercentage_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo() = default ;
    ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo(const ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo &) = default ;
    ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo(ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo &&) = default ;
    ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo() = default ;
    ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& operator=(const ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo &) = default ;
    ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& operator=(ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->endTime_ != nullptr && this->estimatedRemainingTime_ != nullptr && this->processPercentage_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->taskId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // estimatedRemainingTime Field Functions 
    bool hasEstimatedRemainingTime() const { return this->estimatedRemainingTime_ != nullptr;};
    void deleteEstimatedRemainingTime() { this->estimatedRemainingTime_ = nullptr;};
    inline string estimatedRemainingTime() const { DARABONBA_PTR_GET_DEFAULT(estimatedRemainingTime_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setEstimatedRemainingTime(string estimatedRemainingTime) { DARABONBA_PTR_SET_VALUE(estimatedRemainingTime_, estimatedRemainingTime) };


    // processPercentage Field Functions 
    bool hasProcessPercentage() const { return this->processPercentage_ != nullptr;};
    void deleteProcessPercentage() { this->processPercentage_ = nullptr;};
    inline string processPercentage() const { DARABONBA_PTR_GET_DEFAULT(processPercentage_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setProcessPercentage(string processPercentage) { DARABONBA_PTR_SET_VALUE(processPercentage_, processPercentage) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> estimatedRemainingTime_ = nullptr;
    std::shared_ptr<string> processPercentage_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
