// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWMEMBEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWMEMBEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetWmEmbedTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWmEmbedTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWmEmbedTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetWmEmbedTaskRequest() = default ;
    GetWmEmbedTaskRequest(const GetWmEmbedTaskRequest &) = default ;
    GetWmEmbedTaskRequest(GetWmEmbedTaskRequest &&) = default ;
    GetWmEmbedTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWmEmbedTaskRequest() = default ;
    GetWmEmbedTaskRequest& operator=(const GetWmEmbedTaskRequest &) = default ;
    GetWmEmbedTaskRequest& operator=(GetWmEmbedTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWmEmbedTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
