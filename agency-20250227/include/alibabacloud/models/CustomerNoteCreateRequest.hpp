// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTECREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTECREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactInformation, contactInformation_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(NoteContent, noteContent_);
      DARABONBA_PTR_TO_JSON(TouchDate, touchDate_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactInformation, contactInformation_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(NoteContent, noteContent_);
      DARABONBA_PTR_FROM_JSON(TouchDate, touchDate_);
    };
    CustomerNoteCreateRequest() = default ;
    CustomerNoteCreateRequest(const CustomerNoteCreateRequest &) = default ;
    CustomerNoteCreateRequest(CustomerNoteCreateRequest &&) = default ;
    CustomerNoteCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteCreateRequest() = default ;
    CustomerNoteCreateRequest& operator=(const CustomerNoteCreateRequest &) = default ;
    CustomerNoteCreateRequest& operator=(CustomerNoteCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactInformation_ == nullptr
        && this->contactName_ == nullptr && this->customerName_ == nullptr && this->customerUid_ == nullptr && this->noteContent_ == nullptr && this->touchDate_ == nullptr; };
    // contactInformation Field Functions 
    bool hasContactInformation() const { return this->contactInformation_ != nullptr;};
    void deleteContactInformation() { this->contactInformation_ = nullptr;};
    inline string getContactInformation() const { DARABONBA_PTR_GET_DEFAULT(contactInformation_, "") };
    inline CustomerNoteCreateRequest& setContactInformation(string contactInformation) { DARABONBA_PTR_SET_VALUE(contactInformation_, contactInformation) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CustomerNoteCreateRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline CustomerNoteCreateRequest& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline string getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, "") };
    inline CustomerNoteCreateRequest& setCustomerUid(string customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // noteContent Field Functions 
    bool hasNoteContent() const { return this->noteContent_ != nullptr;};
    void deleteNoteContent() { this->noteContent_ = nullptr;};
    inline string getNoteContent() const { DARABONBA_PTR_GET_DEFAULT(noteContent_, "") };
    inline CustomerNoteCreateRequest& setNoteContent(string noteContent) { DARABONBA_PTR_SET_VALUE(noteContent_, noteContent) };


    // touchDate Field Functions 
    bool hasTouchDate() const { return this->touchDate_ != nullptr;};
    void deleteTouchDate() { this->touchDate_ = nullptr;};
    inline int64_t getTouchDate() const { DARABONBA_PTR_GET_DEFAULT(touchDate_, 0L) };
    inline CustomerNoteCreateRequest& setTouchDate(int64_t touchDate) { DARABONBA_PTR_SET_VALUE(touchDate_, touchDate) };


  protected:
    shared_ptr<string> contactInformation_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> customerName_ {};
    shared_ptr<string> customerUid_ {};
    shared_ptr<string> noteContent_ {};
    shared_ptr<int64_t> touchDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
