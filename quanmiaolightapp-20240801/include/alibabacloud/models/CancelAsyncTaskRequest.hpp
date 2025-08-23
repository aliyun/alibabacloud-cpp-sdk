// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELASYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELASYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class CancelAsyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAsyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAsyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CancelAsyncTaskRequest() = default ;
    CancelAsyncTaskRequest(const CancelAsyncTaskRequest &) = default ;
    CancelAsyncTaskRequest(CancelAsyncTaskRequest &&) = default ;
    CancelAsyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAsyncTaskRequest() = default ;
    CancelAsyncTaskRequest& operator=(const CancelAsyncTaskRequest &) = default ;
    CancelAsyncTaskRequest& operator=(CancelAsyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelAsyncTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
