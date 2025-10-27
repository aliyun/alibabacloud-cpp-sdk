// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTTASKSUCCEEDEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTTASKSUCCEEDEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ReportTaskSucceededRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportTaskSucceededRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(TaskToken, taskToken_);
    };
    friend void from_json(const Darabonba::Json& j, ReportTaskSucceededRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(TaskToken, taskToken_);
    };
    ReportTaskSucceededRequest() = default ;
    ReportTaskSucceededRequest(const ReportTaskSucceededRequest &) = default ;
    ReportTaskSucceededRequest(ReportTaskSucceededRequest &&) = default ;
    ReportTaskSucceededRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportTaskSucceededRequest() = default ;
    ReportTaskSucceededRequest& operator=(const ReportTaskSucceededRequest &) = default ;
    ReportTaskSucceededRequest& operator=(ReportTaskSucceededRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->taskToken_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ReportTaskSucceededRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // taskToken Field Functions 
    bool hasTaskToken() const { return this->taskToken_ != nullptr;};
    void deleteTaskToken() { this->taskToken_ = nullptr;};
    inline string taskToken() const { DARABONBA_PTR_GET_DEFAULT(taskToken_, "") };
    inline ReportTaskSucceededRequest& setTaskToken(string taskToken) { DARABONBA_PTR_SET_VALUE(taskToken_, taskToken) };


  protected:
    // The output information of the task whose execution success you want to report.
    // 
    // This parameter is required.
    std::shared_ptr<string> output_ = nullptr;
    // The token of the task whose execution you want to report. The task token is passed to the called service, such as Message Service (MNS) or Function Compute. For MNS, the value of this parameter can be obtained from a message. For Function Compute, the value of this parameter can be obtained from an event. For more information, see [Service integration modes](https://help.aliyun.com/document_detail/2592915.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
