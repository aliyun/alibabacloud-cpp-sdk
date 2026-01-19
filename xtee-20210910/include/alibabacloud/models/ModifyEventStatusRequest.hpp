// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEVENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEVENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModifyEventStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEventStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(fromEventSatus, fromEventSatus_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(toEventSatus, toEventSatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEventStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(fromEventSatus, fromEventSatus_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(toEventSatus, toEventSatus_);
    };
    ModifyEventStatusRequest() = default ;
    ModifyEventStatusRequest(const ModifyEventStatusRequest &) = default ;
    ModifyEventStatusRequest(ModifyEventStatusRequest &&) = default ;
    ModifyEventStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEventStatusRequest() = default ;
    ModifyEventStatusRequest& operator=(const ModifyEventStatusRequest &) = default ;
    ModifyEventStatusRequest& operator=(ModifyEventStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->eventCode_ == nullptr && this->fromEventSatus_ == nullptr && this->regId_ == nullptr && this->toEventSatus_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyEventStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline ModifyEventStatusRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline ModifyEventStatusRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // fromEventSatus Field Functions 
    bool hasFromEventSatus() const { return this->fromEventSatus_ != nullptr;};
    void deleteFromEventSatus() { this->fromEventSatus_ = nullptr;};
    inline string getFromEventSatus() const { DARABONBA_PTR_GET_DEFAULT(fromEventSatus_, "") };
    inline ModifyEventStatusRequest& setFromEventSatus(string fromEventSatus) { DARABONBA_PTR_SET_VALUE(fromEventSatus_, fromEventSatus) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModifyEventStatusRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // toEventSatus Field Functions 
    bool hasToEventSatus() const { return this->toEventSatus_ != nullptr;};
    void deleteToEventSatus() { this->toEventSatus_ = nullptr;};
    inline string getToEventSatus() const { DARABONBA_PTR_GET_DEFAULT(toEventSatus_, "") };
    inline ModifyEventStatusRequest& setToEventSatus(string toEventSatus) { DARABONBA_PTR_SET_VALUE(toEventSatus_, toEventSatus) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Creation type
    shared_ptr<string> createType_ {};
    // Event code
    shared_ptr<string> eventCode_ {};
    // Initial event status, to avoid duplicate submissions or historical replays
    shared_ptr<string> fromEventSatus_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Updated event status
    shared_ptr<string> toEventSatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
