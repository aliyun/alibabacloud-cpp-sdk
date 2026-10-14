// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIFGRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIFGRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAifgResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAifgResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAifgResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetAifgResultRequest() = default ;
    GetAifgResultRequest(const GetAifgResultRequest &) = default ;
    GetAifgResultRequest(GetAifgResultRequest &&) = default ;
    GetAifgResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAifgResultRequest() = default ;
    GetAifgResultRequest& operator=(const GetAifgResultRequest &) = default ;
    GetAifgResultRequest& operator=(GetAifgResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAifgResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
