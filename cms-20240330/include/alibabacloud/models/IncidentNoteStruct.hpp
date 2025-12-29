// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTNOTESTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTNOTESTRUCT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentNoteStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentNoteStruct& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(noteId, noteId_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentNoteStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(noteId, noteId_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IncidentNoteStruct() = default ;
    IncidentNoteStruct(const IncidentNoteStruct &) = default ;
    IncidentNoteStruct(IncidentNoteStruct &&) = default ;
    IncidentNoteStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentNoteStruct() = default ;
    IncidentNoteStruct& operator=(const IncidentNoteStruct &) = default ;
    IncidentNoteStruct& operator=(IncidentNoteStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Operator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Operator& obj) { 
        DARABONBA_PTR_TO_JSON(contact, contact_);
        DARABONBA_PTR_TO_JSON(contactId, contactId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Operator& obj) { 
        DARABONBA_PTR_FROM_JSON(contact, contact_);
        DARABONBA_PTR_FROM_JSON(contactId, contactId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      Operator() = default ;
      Operator(const Operator &) = default ;
      Operator(Operator &&) = default ;
      Operator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Operator() = default ;
      Operator& operator=(const Operator &) = default ;
      Operator& operator=(Operator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contact_ == nullptr
        && this->contactId_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
      inline Operator& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Operator& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Operator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Operator& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> contact_ {};
      shared_ptr<string> contactId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->format_ == nullptr && this->incidentId_ == nullptr && this->noteId_ == nullptr && this->operator_ == nullptr && this->time_ == nullptr
        && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline IncidentNoteStruct& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline IncidentNoteStruct& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string getIncidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentNoteStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline IncidentNoteStruct& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline const IncidentNoteStruct::Operator & getOperator() const { DARABONBA_PTR_GET_CONST(operator_, IncidentNoteStruct::Operator) };
    inline IncidentNoteStruct::Operator getOperator() { DARABONBA_PTR_GET(operator_, IncidentNoteStruct::Operator) };
    inline IncidentNoteStruct& setOperator(const IncidentNoteStruct::Operator & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
    inline IncidentNoteStruct& setOperator(IncidentNoteStruct::Operator && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentNoteStruct& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentNoteStruct& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> format_ {};
    shared_ptr<string> incidentId_ {};
    shared_ptr<string> noteId_ {};
    shared_ptr<IncidentNoteStruct::Operator> operator_ {};
    shared_ptr<int64_t> time_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
