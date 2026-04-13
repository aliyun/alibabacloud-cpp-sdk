// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class CreateChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_ANY_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_ANY_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateChatRequest() = default ;
    CreateChatRequest(const CreateChatRequest &) = default ;
    CreateChatRequest(CreateChatRequest &&) = default ;
    CreateChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatRequest() = default ;
    CreateChatRequest& operator=(const CreateChatRequest &) = default ;
    CreateChatRequest& operator=(CreateChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraData_ == nullptr
        && this->payload_ == nullptr && this->question_ == nullptr && this->title_ == nullptr; };
    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline CreateChatRequest& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline     const Darabonba::Json & getPayload() const { DARABONBA_GET(payload_) };
    Darabonba::Json & getPayload() { DARABONBA_GET(payload_) };
    inline CreateChatRequest& setPayload(const Darabonba::Json & payload) { DARABONBA_SET_VALUE(payload_, payload) };
    inline CreateChatRequest& setPayload(Darabonba::Json && payload) { DARABONBA_SET_RVALUE(payload_, payload) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline const ChatDetail & getQuestion() const { DARABONBA_PTR_GET_CONST(question_, ChatDetail) };
    inline ChatDetail getQuestion() { DARABONBA_PTR_GET(question_, ChatDetail) };
    inline CreateChatRequest& setQuestion(const ChatDetail & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
    inline CreateChatRequest& setQuestion(ChatDetail && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateChatRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> extraData_ {};
    Darabonba::Json payload_ {};
    shared_ptr<ChatDetail> question_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
