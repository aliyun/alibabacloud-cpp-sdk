// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CreateAndPayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_TO_JSON(Guests, guests_);
      DARABONBA_PTR_TO_JSON(ItemOfferId, itemOfferId_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_FROM_JSON(Guests, guests_);
      DARABONBA_PTR_FROM_JSON(ItemOfferId, itemOfferId_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    CreateAndPayRequest() = default ;
    CreateAndPayRequest(const CreateAndPayRequest &) = default ;
    CreateAndPayRequest(CreateAndPayRequest &&) = default ;
    CreateAndPayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPayRequest() = default ;
    CreateAndPayRequest& operator=(const CreateAndPayRequest &) = default ;
    CreateAndPayRequest& operator=(CreateAndPayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contact& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(FirstName, firstName_);
        DARABONBA_PTR_TO_JSON(LastName, lastName_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
      };
      friend void from_json(const Darabonba::Json& j, Contact& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
        DARABONBA_PTR_FROM_JSON(LastName, lastName_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
      };
      Contact() = default ;
      Contact(const Contact &) = default ;
      Contact(Contact &&) = default ;
      Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contact() = default ;
      Contact& operator=(const Contact &) = default ;
      Contact& operator=(Contact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr && this->phone_ == nullptr && this->tracerId_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Contact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline Contact& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline Contact& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Contact& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // tracerId Field Functions 
      bool hasTracerId() const { return this->tracerId_ != nullptr;};
      void deleteTracerId() { this->tracerId_ = nullptr;};
      inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
      inline Contact& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<string> firstName_ {};
      shared_ptr<string> lastName_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> tracerId_ {};
    };

    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->contact_ == nullptr && this->externalOrderNo_ == nullptr && this->guests_ == nullptr && this->itemOfferId_ == nullptr && this->roomCount_ == nullptr
        && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline CreateAndPayRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const CreateAndPayRequest::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, CreateAndPayRequest::Contact) };
    inline CreateAndPayRequest::Contact getContact() { DARABONBA_PTR_GET(contact_, CreateAndPayRequest::Contact) };
    inline CreateAndPayRequest& setContact(const CreateAndPayRequest::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline CreateAndPayRequest& setContact(CreateAndPayRequest::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // externalOrderNo Field Functions 
    bool hasExternalOrderNo() const { return this->externalOrderNo_ != nullptr;};
    void deleteExternalOrderNo() { this->externalOrderNo_ = nullptr;};
    inline string getExternalOrderNo() const { DARABONBA_PTR_GET_DEFAULT(externalOrderNo_, "") };
    inline CreateAndPayRequest& setExternalOrderNo(string externalOrderNo) { DARABONBA_PTR_SET_VALUE(externalOrderNo_, externalOrderNo) };


    // guests Field Functions 
    bool hasGuests() const { return this->guests_ != nullptr;};
    void deleteGuests() { this->guests_ = nullptr;};
    inline const vector<vector<CreateAndPayRequest::Guests>> & getGuests() const { DARABONBA_PTR_GET_CONST(guests_, vector<vector<CreateAndPayRequest::Guests>>) };
    inline vector<vector<CreateAndPayRequest::Guests>> getGuests() { DARABONBA_PTR_GET(guests_, vector<vector<CreateAndPayRequest::Guests>>) };
    inline CreateAndPayRequest& setGuests(const vector<vector<CreateAndPayRequest::Guests>> & guests) { DARABONBA_PTR_SET_VALUE(guests_, guests) };
    inline CreateAndPayRequest& setGuests(vector<vector<CreateAndPayRequest::Guests>> && guests) { DARABONBA_PTR_SET_RVALUE(guests_, guests) };


    // itemOfferId Field Functions 
    bool hasItemOfferId() const { return this->itemOfferId_ != nullptr;};
    void deleteItemOfferId() { this->itemOfferId_ = nullptr;};
    inline string getItemOfferId() const { DARABONBA_PTR_GET_DEFAULT(itemOfferId_, "") };
    inline CreateAndPayRequest& setItemOfferId(string itemOfferId) { DARABONBA_PTR_SET_VALUE(itemOfferId_, itemOfferId) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline CreateAndPayRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline CreateAndPayRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<CreateAndPayRequest::Contact> contact_ {};
    shared_ptr<string> externalOrderNo_ {};
    // This parameter is required.
    shared_ptr<vector<vector<CreateAndPayRequest::Guests>>> guests_ {};
    // This parameter is required.
    shared_ptr<string> itemOfferId_ {};
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
