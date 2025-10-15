// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVICTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVICTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class EvictTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvictTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, EvictTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    EvictTaskRequest() = default ;
    EvictTaskRequest(const EvictTaskRequest &) = default ;
    EvictTaskRequest(EvictTaskRequest &&) = default ;
    EvictTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvictTaskRequest() = default ;
    EvictTaskRequest& operator=(const EvictTaskRequest &) = default ;
    EvictTaskRequest& operator=(EvictTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline EvictTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
