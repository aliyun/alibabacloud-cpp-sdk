// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTURINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTURINGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20260101
{
namespace Models
{
  class SubmitTuringTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTuringTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(idempotentKey, idempotentKey_);
      DARABONBA_PTR_TO_JSON(imgUrl, imgUrl_);
      DARABONBA_PTR_TO_JSON(resolution, resolution_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTuringTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(idempotentKey, idempotentKey_);
      DARABONBA_PTR_FROM_JSON(imgUrl, imgUrl_);
      DARABONBA_PTR_FROM_JSON(resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    SubmitTuringTaskRequest() = default ;
    SubmitTuringTaskRequest(const SubmitTuringTaskRequest &) = default ;
    SubmitTuringTaskRequest(SubmitTuringTaskRequest &&) = default ;
    SubmitTuringTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTuringTaskRequest() = default ;
    SubmitTuringTaskRequest& operator=(const SubmitTuringTaskRequest &) = default ;
    SubmitTuringTaskRequest& operator=(SubmitTuringTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && this->idempotentKey_ == nullptr && this->imgUrl_ == nullptr && this->resolution_ == nullptr && this->resourceType_ == nullptr && this->taskType_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline SubmitTuringTaskRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // idempotentKey Field Functions 
    bool hasIdempotentKey() const { return this->idempotentKey_ != nullptr;};
    void deleteIdempotentKey() { this->idempotentKey_ = nullptr;};
    inline string getIdempotentKey() const { DARABONBA_PTR_GET_DEFAULT(idempotentKey_, "") };
    inline SubmitTuringTaskRequest& setIdempotentKey(string idempotentKey) { DARABONBA_PTR_SET_VALUE(idempotentKey_, idempotentKey) };


    // imgUrl Field Functions 
    bool hasImgUrl() const { return this->imgUrl_ != nullptr;};
    void deleteImgUrl() { this->imgUrl_ = nullptr;};
    inline string getImgUrl() const { DARABONBA_PTR_GET_DEFAULT(imgUrl_, "") };
    inline SubmitTuringTaskRequest& setImgUrl(string imgUrl) { DARABONBA_PTR_SET_VALUE(imgUrl_, imgUrl) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SubmitTuringTaskRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline SubmitTuringTaskRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SubmitTuringTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> idempotentKey_ {};
    shared_ptr<string> imgUrl_ {};
    shared_ptr<string> resolution_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20260101
#endif
