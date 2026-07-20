// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTEEDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTEEDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteEditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteEditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactInformation, contactInformation_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(NoteContent, noteContent_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(TouchDate, touchDate_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteEditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactInformation, contactInformation_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(NoteContent, noteContent_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(TouchDate, touchDate_);
    };
    CustomerNoteEditRequest() = default ;
    CustomerNoteEditRequest(const CustomerNoteEditRequest &) = default ;
    CustomerNoteEditRequest(CustomerNoteEditRequest &&) = default ;
    CustomerNoteEditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteEditRequest() = default ;
    CustomerNoteEditRequest& operator=(const CustomerNoteEditRequest &) = default ;
    CustomerNoteEditRequest& operator=(CustomerNoteEditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactInformation_ == nullptr
        && this->contactName_ == nullptr && this->noteContent_ == nullptr && this->noteId_ == nullptr && this->touchDate_ == nullptr; };
    // contactInformation Field Functions 
    bool hasContactInformation() const { return this->contactInformation_ != nullptr;};
    void deleteContactInformation() { this->contactInformation_ = nullptr;};
    inline string getContactInformation() const { DARABONBA_PTR_GET_DEFAULT(contactInformation_, "") };
    inline CustomerNoteEditRequest& setContactInformation(string contactInformation) { DARABONBA_PTR_SET_VALUE(contactInformation_, contactInformation) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CustomerNoteEditRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // noteContent Field Functions 
    bool hasNoteContent() const { return this->noteContent_ != nullptr;};
    void deleteNoteContent() { this->noteContent_ = nullptr;};
    inline string getNoteContent() const { DARABONBA_PTR_GET_DEFAULT(noteContent_, "") };
    inline CustomerNoteEditRequest& setNoteContent(string noteContent) { DARABONBA_PTR_SET_VALUE(noteContent_, noteContent) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline int64_t getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
    inline CustomerNoteEditRequest& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // touchDate Field Functions 
    bool hasTouchDate() const { return this->touchDate_ != nullptr;};
    void deleteTouchDate() { this->touchDate_ = nullptr;};
    inline int64_t getTouchDate() const { DARABONBA_PTR_GET_DEFAULT(touchDate_, 0L) };
    inline CustomerNoteEditRequest& setTouchDate(int64_t touchDate) { DARABONBA_PTR_SET_VALUE(touchDate_, touchDate) };


  protected:
    shared_ptr<string> contactInformation_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> noteContent_ {};
    shared_ptr<int64_t> noteId_ {};
    shared_ptr<int64_t> touchDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
