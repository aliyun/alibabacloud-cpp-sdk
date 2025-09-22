// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETICKETRECORDBYTICKETCODEPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETICKETRECORDBYTICKETCODEPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class UpdateTicketRecordByticketCodePopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTicketRecordByticketCodePopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgendaId, agendaId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTicketRecordByticketCodePopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgendaId, agendaId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    UpdateTicketRecordByticketCodePopRequest() = default ;
    UpdateTicketRecordByticketCodePopRequest(const UpdateTicketRecordByticketCodePopRequest &) = default ;
    UpdateTicketRecordByticketCodePopRequest(UpdateTicketRecordByticketCodePopRequest &&) = default ;
    UpdateTicketRecordByticketCodePopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTicketRecordByticketCodePopRequest() = default ;
    UpdateTicketRecordByticketCodePopRequest& operator=(const UpdateTicketRecordByticketCodePopRequest &) = default ;
    UpdateTicketRecordByticketCodePopRequest& operator=(UpdateTicketRecordByticketCodePopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agendaId_ != nullptr
        && this->code_ != nullptr && this->event_ != nullptr && this->sceneId_ != nullptr && this->time_ != nullptr; };
    // agendaId Field Functions 
    bool hasAgendaId() const { return this->agendaId_ != nullptr;};
    void deleteAgendaId() { this->agendaId_ = nullptr;};
    inline string agendaId() const { DARABONBA_PTR_GET_DEFAULT(agendaId_, "") };
    inline UpdateTicketRecordByticketCodePopRequest& setAgendaId(string agendaId) { DARABONBA_PTR_SET_VALUE(agendaId_, agendaId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateTicketRecordByticketCodePopRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline UpdateTicketRecordByticketCodePopRequest& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateTicketRecordByticketCodePopRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline UpdateTicketRecordByticketCodePopRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> agendaId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
