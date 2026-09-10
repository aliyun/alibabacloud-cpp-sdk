// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTASKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTASKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckTaskConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTaskConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTaskConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetDataCheckTaskConfigRequest() = default ;
    GetDataCheckTaskConfigRequest(const GetDataCheckTaskConfigRequest &) = default ;
    GetDataCheckTaskConfigRequest(GetDataCheckTaskConfigRequest &&) = default ;
    GetDataCheckTaskConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTaskConfigRequest() = default ;
    GetDataCheckTaskConfigRequest& operator=(const GetDataCheckTaskConfigRequest &) = default ;
    GetDataCheckTaskConfigRequest& operator=(GetDataCheckTaskConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetDataCheckTaskConfigRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the data validation task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
