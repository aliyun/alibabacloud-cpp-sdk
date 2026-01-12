// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIMASTERMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_AIMASTERMESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AIMasterMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIMasterMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Extended, extended_);
      DARABONBA_PTR_TO_JSON(JobRestartCount, jobRestartCount_);
      DARABONBA_PTR_TO_JSON(MessageContent, messageContent_);
      DARABONBA_PTR_TO_JSON(MessageEvent, messageEvent_);
      DARABONBA_PTR_TO_JSON(MessageVersion, messageVersion_);
      DARABONBA_PTR_TO_JSON(RestartType, restartType_);
    };
    friend void from_json(const Darabonba::Json& j, AIMasterMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Extended, extended_);
      DARABONBA_PTR_FROM_JSON(JobRestartCount, jobRestartCount_);
      DARABONBA_PTR_FROM_JSON(MessageContent, messageContent_);
      DARABONBA_PTR_FROM_JSON(MessageEvent, messageEvent_);
      DARABONBA_PTR_FROM_JSON(MessageVersion, messageVersion_);
      DARABONBA_PTR_FROM_JSON(RestartType, restartType_);
    };
    AIMasterMessage() = default ;
    AIMasterMessage(const AIMasterMessage &) = default ;
    AIMasterMessage(AIMasterMessage &&) = default ;
    AIMasterMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIMasterMessage() = default ;
    AIMasterMessage& operator=(const AIMasterMessage &) = default ;
    AIMasterMessage& operator=(AIMasterMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extended_ == nullptr
        && this->jobRestartCount_ == nullptr && this->messageContent_ == nullptr && this->messageEvent_ == nullptr && this->messageVersion_ == nullptr && this->restartType_ == nullptr; };
    // extended Field Functions 
    bool hasExtended() const { return this->extended_ != nullptr;};
    void deleteExtended() { this->extended_ = nullptr;};
    inline string getExtended() const { DARABONBA_PTR_GET_DEFAULT(extended_, "") };
    inline AIMasterMessage& setExtended(string extended) { DARABONBA_PTR_SET_VALUE(extended_, extended) };


    // jobRestartCount Field Functions 
    bool hasJobRestartCount() const { return this->jobRestartCount_ != nullptr;};
    void deleteJobRestartCount() { this->jobRestartCount_ = nullptr;};
    inline int32_t getJobRestartCount() const { DARABONBA_PTR_GET_DEFAULT(jobRestartCount_, 0) };
    inline AIMasterMessage& setJobRestartCount(int32_t jobRestartCount) { DARABONBA_PTR_SET_VALUE(jobRestartCount_, jobRestartCount) };


    // messageContent Field Functions 
    bool hasMessageContent() const { return this->messageContent_ != nullptr;};
    void deleteMessageContent() { this->messageContent_ = nullptr;};
    inline string getMessageContent() const { DARABONBA_PTR_GET_DEFAULT(messageContent_, "") };
    inline AIMasterMessage& setMessageContent(string messageContent) { DARABONBA_PTR_SET_VALUE(messageContent_, messageContent) };


    // messageEvent Field Functions 
    bool hasMessageEvent() const { return this->messageEvent_ != nullptr;};
    void deleteMessageEvent() { this->messageEvent_ = nullptr;};
    inline string getMessageEvent() const { DARABONBA_PTR_GET_DEFAULT(messageEvent_, "") };
    inline AIMasterMessage& setMessageEvent(string messageEvent) { DARABONBA_PTR_SET_VALUE(messageEvent_, messageEvent) };


    // messageVersion Field Functions 
    bool hasMessageVersion() const { return this->messageVersion_ != nullptr;};
    void deleteMessageVersion() { this->messageVersion_ = nullptr;};
    inline int32_t getMessageVersion() const { DARABONBA_PTR_GET_DEFAULT(messageVersion_, 0) };
    inline AIMasterMessage& setMessageVersion(int32_t messageVersion) { DARABONBA_PTR_SET_VALUE(messageVersion_, messageVersion) };


    // restartType Field Functions 
    bool hasRestartType() const { return this->restartType_ != nullptr;};
    void deleteRestartType() { this->restartType_ = nullptr;};
    inline string getRestartType() const { DARABONBA_PTR_GET_DEFAULT(restartType_, "") };
    inline AIMasterMessage& setRestartType(string restartType) { DARABONBA_PTR_SET_VALUE(restartType_, restartType) };


  protected:
    shared_ptr<string> extended_ {};
    shared_ptr<int32_t> jobRestartCount_ {};
    shared_ptr<string> messageContent_ {};
    shared_ptr<string> messageEvent_ {};
    shared_ptr<int32_t> messageVersion_ {};
    shared_ptr<string> restartType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
