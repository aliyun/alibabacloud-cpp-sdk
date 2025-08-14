// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEREQUESTTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEREQUESTTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendMessageRequestTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageRequestTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SpeechText, speechText_);
      DARABONBA_PTR_TO_JSON(interrupt, interrupt_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequestTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SpeechText, speechText_);
      DARABONBA_PTR_FROM_JSON(interrupt, interrupt_);
    };
    SendMessageRequestTextRequest() = default ;
    SendMessageRequestTextRequest(const SendMessageRequestTextRequest &) = default ;
    SendMessageRequestTextRequest(SendMessageRequestTextRequest &&) = default ;
    SendMessageRequestTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageRequestTextRequest() = default ;
    SendMessageRequestTextRequest& operator=(const SendMessageRequestTextRequest &) = default ;
    SendMessageRequestTextRequest& operator=(SendMessageRequestTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commandType_ != nullptr
        && this->id_ != nullptr && this->speechText_ != nullptr && this->interrupt_ != nullptr; };
    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string commandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline SendMessageRequestTextRequest& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SendMessageRequestTextRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // speechText Field Functions 
    bool hasSpeechText() const { return this->speechText_ != nullptr;};
    void deleteSpeechText() { this->speechText_ = nullptr;};
    inline string speechText() const { DARABONBA_PTR_GET_DEFAULT(speechText_, "") };
    inline SendMessageRequestTextRequest& setSpeechText(string speechText) { DARABONBA_PTR_SET_VALUE(speechText_, speechText) };


    // interrupt Field Functions 
    bool hasInterrupt() const { return this->interrupt_ != nullptr;};
    void deleteInterrupt() { this->interrupt_ = nullptr;};
    inline bool interrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
    inline SendMessageRequestTextRequest& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


  protected:
    std::shared_ptr<string> commandType_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> speechText_ = nullptr;
    std::shared_ptr<bool> interrupt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
