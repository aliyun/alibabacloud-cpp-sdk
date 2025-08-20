// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCompletionMessageRequestMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
    };
    RunCompletionMessageRequest() = default ;
    RunCompletionMessageRequest(const RunCompletionMessageRequest &) = default ;
    RunCompletionMessageRequest(RunCompletionMessageRequest &&) = default ;
    RunCompletionMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionMessageRequest() = default ;
    RunCompletionMessageRequest& operator=(const RunCompletionMessageRequest &) = default ;
    RunCompletionMessageRequest& operator=(RunCompletionMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messages_ != nullptr
        && this->modelCode_ != nullptr && this->stream_ != nullptr && this->responseFormatType_ != nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<RunCompletionMessageRequestMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<RunCompletionMessageRequestMessages>) };
    inline vector<RunCompletionMessageRequestMessages> messages() { DARABONBA_PTR_GET(messages_, vector<RunCompletionMessageRequestMessages>) };
    inline RunCompletionMessageRequest& setMessages(const vector<RunCompletionMessageRequestMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunCompletionMessageRequest& setMessages(vector<RunCompletionMessageRequestMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline RunCompletionMessageRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunCompletionMessageRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string responseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline RunCompletionMessageRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<RunCompletionMessageRequestMessages>> messages_ = nullptr;
    std::shared_ptr<string> modelCode_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<string> responseFormatType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
