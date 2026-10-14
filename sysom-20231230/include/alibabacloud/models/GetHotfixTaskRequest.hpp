// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTFIXTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTFIXTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotfixTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotfixTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotfixTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetHotfixTaskRequest() = default ;
    GetHotfixTaskRequest(const GetHotfixTaskRequest &) = default ;
    GetHotfixTaskRequest(GetHotfixTaskRequest &&) = default ;
    GetHotfixTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotfixTaskRequest() = default ;
    GetHotfixTaskRequest& operator=(const GetHotfixTaskRequest &) = default ;
    GetHotfixTaskRequest& operator=(GetHotfixTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetHotfixTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the asynchronous task.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
