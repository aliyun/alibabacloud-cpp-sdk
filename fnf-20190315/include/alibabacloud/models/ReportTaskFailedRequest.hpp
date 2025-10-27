// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTTASKFAILEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTTASKFAILEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ReportTaskFailedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportTaskFailedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(TaskToken, taskToken_);
    };
    friend void from_json(const Darabonba::Json& j, ReportTaskFailedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(TaskToken, taskToken_);
    };
    ReportTaskFailedRequest() = default ;
    ReportTaskFailedRequest(const ReportTaskFailedRequest &) = default ;
    ReportTaskFailedRequest(ReportTaskFailedRequest &&) = default ;
    ReportTaskFailedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportTaskFailedRequest() = default ;
    ReportTaskFailedRequest& operator=(const ReportTaskFailedRequest &) = default ;
    ReportTaskFailedRequest& operator=(ReportTaskFailedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cause_ == nullptr
        && return this->error_ == nullptr && return this->taskToken_ == nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline ReportTaskFailedRequest& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline ReportTaskFailedRequest& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // taskToken Field Functions 
    bool hasTaskToken() const { return this->taskToken_ != nullptr;};
    void deleteTaskToken() { this->taskToken_ = nullptr;};
    inline string taskToken() const { DARABONBA_PTR_GET_DEFAULT(taskToken_, "") };
    inline ReportTaskFailedRequest& setTaskToken(string taskToken) { DARABONBA_PTR_SET_VALUE(taskToken_, taskToken) };


  protected:
    // The cause of the failure. The value must be 1 to 4,096 characters in length.
    std::shared_ptr<string> cause_ = nullptr;
    // The error code for the failed task. The error code must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> error_ = nullptr;
    // The token of the task whose execution you want to report. The task token is passed to the called service, such as Message Service (MNS) or Function Compute. For MNS, the value of this parameter can be obtained from a message. For Function Compute, the value of this parameter can be obtained from an event. For more information, see [Service integration modes](https://help.aliyun.com/document_detail/2592915.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
