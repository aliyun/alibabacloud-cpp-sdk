// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateVideoCreationTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoCreationTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(estimatedWaitTimeInSeconds, estimatedWaitTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoCreationTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(estimatedWaitTimeInSeconds, estimatedWaitTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CreateVideoCreationTaskResponseBodyData() = default ;
    CreateVideoCreationTaskResponseBodyData(const CreateVideoCreationTaskResponseBodyData &) = default ;
    CreateVideoCreationTaskResponseBodyData(CreateVideoCreationTaskResponseBodyData &&) = default ;
    CreateVideoCreationTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoCreationTaskResponseBodyData() = default ;
    CreateVideoCreationTaskResponseBodyData& operator=(const CreateVideoCreationTaskResponseBodyData &) = default ;
    CreateVideoCreationTaskResponseBodyData& operator=(CreateVideoCreationTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->estimatedWaitTimeInSeconds_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // estimatedWaitTimeInSeconds Field Functions 
    bool hasEstimatedWaitTimeInSeconds() const { return this->estimatedWaitTimeInSeconds_ != nullptr;};
    void deleteEstimatedWaitTimeInSeconds() { this->estimatedWaitTimeInSeconds_ = nullptr;};
    inline int64_t estimatedWaitTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(estimatedWaitTimeInSeconds_, 0L) };
    inline CreateVideoCreationTaskResponseBodyData& setEstimatedWaitTimeInSeconds(int64_t estimatedWaitTimeInSeconds) { DARABONBA_PTR_SET_VALUE(estimatedWaitTimeInSeconds_, estimatedWaitTimeInSeconds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVideoCreationTaskResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateVideoCreationTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> estimatedWaitTimeInSeconds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
