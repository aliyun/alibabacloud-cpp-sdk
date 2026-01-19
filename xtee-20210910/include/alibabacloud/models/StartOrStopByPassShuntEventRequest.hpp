// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTORSTOPBYPASSSHUNTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTORSTOPBYPASSSHUNTEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class StartOrStopByPassShuntEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartOrStopByPassShuntEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StartOrStopByPassShuntEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    StartOrStopByPassShuntEventRequest() = default ;
    StartOrStopByPassShuntEventRequest(const StartOrStopByPassShuntEventRequest &) = default ;
    StartOrStopByPassShuntEventRequest(StartOrStopByPassShuntEventRequest &&) = default ;
    StartOrStopByPassShuntEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartOrStopByPassShuntEventRequest() = default ;
    StartOrStopByPassShuntEventRequest& operator=(const StartOrStopByPassShuntEventRequest &) = default ;
    StartOrStopByPassShuntEventRequest& operator=(StartOrStopByPassShuntEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->eventId_ == nullptr && this->regId_ == nullptr && this->status_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline StartOrStopByPassShuntEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline StartOrStopByPassShuntEventRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline StartOrStopByPassShuntEventRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StartOrStopByPassShuntEventRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Event ID.
    shared_ptr<int64_t> eventId_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
