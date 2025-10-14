// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetProjectTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetProjectTaskRequest() = default ;
    GetProjectTaskRequest(const GetProjectTaskRequest &) = default ;
    GetProjectTaskRequest(GetProjectTaskRequest &&) = default ;
    GetProjectTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectTaskRequest() = default ;
    GetProjectTaskRequest& operator=(const GetProjectTaskRequest &) = default ;
    GetProjectTaskRequest& operator=(GetProjectTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idempotentId_ == nullptr
        && return this->taskId_ == nullptr; };
    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string idempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline GetProjectTaskRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetProjectTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> idempotentId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
