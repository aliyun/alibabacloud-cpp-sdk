// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      // This parameter is required.
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->modelCode_ == nullptr && this->stream_ == nullptr && this->responseFormatType_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<RunCompletionMessageRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<RunCompletionMessageRequest::Messages>) };
    inline vector<RunCompletionMessageRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<RunCompletionMessageRequest::Messages>) };
    inline RunCompletionMessageRequest& setMessages(const vector<RunCompletionMessageRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunCompletionMessageRequest& setMessages(vector<RunCompletionMessageRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline RunCompletionMessageRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunCompletionMessageRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string getResponseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline RunCompletionMessageRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


  protected:
    // This parameter is required.
    shared_ptr<vector<RunCompletionMessageRequest::Messages>> messages_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<bool> stream_ {};
    shared_ptr<string> responseFormatType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
