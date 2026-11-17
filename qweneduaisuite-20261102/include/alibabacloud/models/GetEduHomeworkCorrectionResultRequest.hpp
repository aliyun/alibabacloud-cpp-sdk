// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDUHOMEWORKCORRECTIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDUHOMEWORKCORRECTIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class GetEduHomeworkCorrectionResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEduHomeworkCorrectionResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEduHomeworkCorrectionResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetEduHomeworkCorrectionResultRequest() = default ;
    GetEduHomeworkCorrectionResultRequest(const GetEduHomeworkCorrectionResultRequest &) = default ;
    GetEduHomeworkCorrectionResultRequest(GetEduHomeworkCorrectionResultRequest &&) = default ;
    GetEduHomeworkCorrectionResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEduHomeworkCorrectionResultRequest() = default ;
    GetEduHomeworkCorrectionResultRequest& operator=(const GetEduHomeworkCorrectionResultRequest &) = default ;
    GetEduHomeworkCorrectionResultRequest& operator=(GetEduHomeworkCorrectionResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetEduHomeworkCorrectionResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
