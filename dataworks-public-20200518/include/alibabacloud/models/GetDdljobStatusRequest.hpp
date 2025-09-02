// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDDLJOBSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDDLJOBSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDDLJobStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDDLJobStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDDLJobStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetDDLJobStatusRequest() = default ;
    GetDDLJobStatusRequest(const GetDDLJobStatusRequest &) = default ;
    GetDDLJobStatusRequest(GetDDLJobStatusRequest &&) = default ;
    GetDDLJobStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDDLJobStatusRequest() = default ;
    GetDDLJobStatusRequest& operator=(const GetDDLJobStatusRequest &) = default ;
    GetDDLJobStatusRequest& operator=(GetDDLJobStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDDLJobStatusRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the DDL task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
