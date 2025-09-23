// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIDDINGDOCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBIDDINGDOCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListBiddingDocResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBiddingDocResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStep, taskStep_);
    };
    friend void from_json(const Darabonba::Json& j, ListBiddingDocResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStep, taskStep_);
    };
    ListBiddingDocResponseBodyData() = default ;
    ListBiddingDocResponseBodyData(const ListBiddingDocResponseBodyData &) = default ;
    ListBiddingDocResponseBodyData(ListBiddingDocResponseBodyData &&) = default ;
    ListBiddingDocResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBiddingDocResponseBodyData() = default ;
    ListBiddingDocResponseBodyData& operator=(const ListBiddingDocResponseBodyData &) = default ;
    ListBiddingDocResponseBodyData& operator=(ListBiddingDocResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeStart_ != nullptr
        && this->taskId_ != nullptr && this->taskName_ != nullptr && this->taskStatus_ != nullptr && this->taskStep_ != nullptr; };
    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline ListBiddingDocResponseBodyData& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListBiddingDocResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListBiddingDocResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListBiddingDocResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStep Field Functions 
    bool hasTaskStep() const { return this->taskStep_ != nullptr;};
    void deleteTaskStep() { this->taskStep_ = nullptr;};
    inline string taskStep() const { DARABONBA_PTR_GET_DEFAULT(taskStep_, "") };
    inline ListBiddingDocResponseBodyData& setTaskStep(string taskStep) { DARABONBA_PTR_SET_VALUE(taskStep_, taskStep) };


  protected:
    std::shared_ptr<string> createTimeStart_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> taskStep_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
