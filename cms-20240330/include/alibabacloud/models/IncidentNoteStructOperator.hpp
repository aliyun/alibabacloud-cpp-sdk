// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTNOTESTRUCTOPERATOR_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTNOTESTRUCTOPERATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentNoteStructOperator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentNoteStructOperator& obj) { 
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentNoteStructOperator& obj) { 
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    IncidentNoteStructOperator() = default ;
    IncidentNoteStructOperator(const IncidentNoteStructOperator &) = default ;
    IncidentNoteStructOperator(IncidentNoteStructOperator &&) = default ;
    IncidentNoteStructOperator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentNoteStructOperator() = default ;
    IncidentNoteStructOperator& operator=(const IncidentNoteStructOperator &) = default ;
    IncidentNoteStructOperator& operator=(IncidentNoteStructOperator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contact_ != nullptr
        && this->contactId_ != nullptr && this->name_ != nullptr && this->userId_ != nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline string contact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
    inline IncidentNoteStructOperator& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline IncidentNoteStructOperator& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentNoteStructOperator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline IncidentNoteStructOperator& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> contact_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
