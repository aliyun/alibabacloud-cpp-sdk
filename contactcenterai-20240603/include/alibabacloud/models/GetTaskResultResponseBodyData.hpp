// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskResultResponseBodyDataAsrResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(asrResult, asrResult_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(asrResult, asrResult_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    GetTaskResultResponseBodyData() = default ;
    GetTaskResultResponseBodyData(const GetTaskResultResponseBodyData &) = default ;
    GetTaskResultResponseBodyData(GetTaskResultResponseBodyData &&) = default ;
    GetTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResultResponseBodyData() = default ;
    GetTaskResultResponseBodyData& operator=(const GetTaskResultResponseBodyData &) = default ;
    GetTaskResultResponseBodyData& operator=(GetTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrResult_ != nullptr
        && this->extra_ != nullptr && this->taskErrorMessage_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr && this->text_ != nullptr; };
    // asrResult Field Functions 
    bool hasAsrResult() const { return this->asrResult_ != nullptr;};
    void deleteAsrResult() { this->asrResult_ = nullptr;};
    inline const vector<Models::GetTaskResultResponseBodyDataAsrResult> & asrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, vector<Models::GetTaskResultResponseBodyDataAsrResult>) };
    inline vector<Models::GetTaskResultResponseBodyDataAsrResult> asrResult() { DARABONBA_PTR_GET(asrResult_, vector<Models::GetTaskResultResponseBodyDataAsrResult>) };
    inline GetTaskResultResponseBodyData& setAsrResult(const vector<Models::GetTaskResultResponseBodyDataAsrResult> & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
    inline GetTaskResultResponseBodyData& setAsrResult(vector<Models::GetTaskResultResponseBodyDataAsrResult> && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetTaskResultResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline GetTaskResultResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetTaskResultResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetTaskResultResponseBodyData& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::GetTaskResultResponseBodyDataAsrResult>> asrResult_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
