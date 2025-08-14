// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertOutputDetailResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    MediaConvertOutputDetail() = default ;
    MediaConvertOutputDetail(const MediaConvertOutputDetail &) = default ;
    MediaConvertOutputDetail(MediaConvertOutputDetail &&) = default ;
    MediaConvertOutputDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetail() = default ;
    MediaConvertOutputDetail& operator=(const MediaConvertOutputDetail &) = default ;
    MediaConvertOutputDetail& operator=(MediaConvertOutputDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->createTime_ != nullptr && this->finishTime_ != nullptr && this->message_ != nullptr && this->name_ != nullptr && this->result_ != nullptr
        && this->status_ != nullptr && this->taskId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MediaConvertOutputDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MediaConvertOutputDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline MediaConvertOutputDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MediaConvertOutputDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertOutputDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const MediaConvertOutputDetailResult & result() const { DARABONBA_PTR_GET_CONST(result_, MediaConvertOutputDetailResult) };
    inline MediaConvertOutputDetailResult result() { DARABONBA_PTR_GET(result_, MediaConvertOutputDetailResult) };
    inline MediaConvertOutputDetail& setResult(const MediaConvertOutputDetailResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MediaConvertOutputDetail& setResult(MediaConvertOutputDetailResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline MediaConvertOutputDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline MediaConvertOutputDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<MediaConvertOutputDetailResult> result_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
