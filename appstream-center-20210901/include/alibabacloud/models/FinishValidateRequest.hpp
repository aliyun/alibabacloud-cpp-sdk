// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHVALIDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINISHVALIDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class FinishValidateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishValidateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FinishValidateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    FinishValidateRequest() = default ;
    FinishValidateRequest(const FinishValidateRequest &) = default ;
    FinishValidateRequest(FinishValidateRequest &&) = default ;
    FinishValidateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishValidateRequest() = default ;
    FinishValidateRequest& operator=(const FinishValidateRequest &) = default ;
    FinishValidateRequest& operator=(FinishValidateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersionId_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline FinishValidateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
    inline FinishValidateRequest& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline FinishValidateRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FinishValidateRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The application ID used for exact match queries. If omitted, the results are not filtered by application ID.
    shared_ptr<string> appId_ {};
    // The application version ID. **Required**. It must match the application version corresponding to the AdaptorId. This parameter is not the image version ID.
    shared_ptr<string> appVersionId_ {};
    // The verification result.
    // 
    // This parameter is required.
    shared_ptr<bool> status_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
