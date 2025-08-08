// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetResult4QueryInstancePrice4ModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResult4QueryInstancePrice4ModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResult4QueryInstancePrice4ModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetResult4QueryInstancePrice4ModifyRequest() = default ;
    GetResult4QueryInstancePrice4ModifyRequest(const GetResult4QueryInstancePrice4ModifyRequest &) = default ;
    GetResult4QueryInstancePrice4ModifyRequest(GetResult4QueryInstancePrice4ModifyRequest &&) = default ;
    GetResult4QueryInstancePrice4ModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResult4QueryInstancePrice4ModifyRequest() = default ;
    GetResult4QueryInstancePrice4ModifyRequest& operator=(const GetResult4QueryInstancePrice4ModifyRequest &) = default ;
    GetResult4QueryInstancePrice4ModifyRequest& operator=(GetResult4QueryInstancePrice4ModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->taskId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetResult4QueryInstancePrice4ModifyRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetResult4QueryInstancePrice4ModifyRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
