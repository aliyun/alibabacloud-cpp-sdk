// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateStorageAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTaskSuccess, createTaskSuccess_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTaskSuccess, createTaskSuccess_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateStorageAnalysisTaskResponseBodyData() = default ;
    CreateStorageAnalysisTaskResponseBodyData(const CreateStorageAnalysisTaskResponseBodyData &) = default ;
    CreateStorageAnalysisTaskResponseBodyData(CreateStorageAnalysisTaskResponseBodyData &&) = default ;
    CreateStorageAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageAnalysisTaskResponseBodyData() = default ;
    CreateStorageAnalysisTaskResponseBodyData& operator=(const CreateStorageAnalysisTaskResponseBodyData &) = default ;
    CreateStorageAnalysisTaskResponseBodyData& operator=(CreateStorageAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTaskSuccess_ == nullptr
        && return this->errorMessage_ == nullptr && return this->taskId_ == nullptr; };
    // createTaskSuccess Field Functions 
    bool hasCreateTaskSuccess() const { return this->createTaskSuccess_ != nullptr;};
    void deleteCreateTaskSuccess() { this->createTaskSuccess_ = nullptr;};
    inline bool createTaskSuccess() const { DARABONBA_PTR_GET_DEFAULT(createTaskSuccess_, false) };
    inline CreateStorageAnalysisTaskResponseBodyData& setCreateTaskSuccess(bool createTaskSuccess) { DARABONBA_PTR_SET_VALUE(createTaskSuccess_, createTaskSuccess) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateStorageAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateStorageAnalysisTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Indicates whether the task is created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> createTaskSuccess_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
