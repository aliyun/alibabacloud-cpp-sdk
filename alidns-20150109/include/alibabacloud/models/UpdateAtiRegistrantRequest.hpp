// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATIREGISTRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATIREGISTRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateAtiRegistrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cc, cc_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DocumentCode, documentCode_);
      DARABONBA_PTR_TO_JSON(DocumentImage, documentImage_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Street, street_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cc, cc_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DocumentCode, documentCode_);
      DARABONBA_PTR_FROM_JSON(DocumentImage, documentImage_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Street, street_);
    };
    UpdateAtiRegistrantRequest() = default ;
    UpdateAtiRegistrantRequest(const UpdateAtiRegistrantRequest &) = default ;
    UpdateAtiRegistrantRequest(UpdateAtiRegistrantRequest &&) = default ;
    UpdateAtiRegistrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAtiRegistrantRequest() = default ;
    UpdateAtiRegistrantRequest& operator=(const UpdateAtiRegistrantRequest &) = default ;
    UpdateAtiRegistrantRequest& operator=(UpdateAtiRegistrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cc_ == nullptr
        && this->city_ == nullptr && this->clientToken_ == nullptr && this->documentCode_ == nullptr && this->documentImage_ == nullptr && this->documentType_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr && this->registrantId_ == nullptr && this->state_ == nullptr
        && this->street_ == nullptr; };
    // cc Field Functions 
    bool hasCc() const { return this->cc_ != nullptr;};
    void deleteCc() { this->cc_ = nullptr;};
    inline string getCc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
    inline UpdateAtiRegistrantRequest& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline UpdateAtiRegistrantRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAtiRegistrantRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // documentCode Field Functions 
    bool hasDocumentCode() const { return this->documentCode_ != nullptr;};
    void deleteDocumentCode() { this->documentCode_ = nullptr;};
    inline string getDocumentCode() const { DARABONBA_PTR_GET_DEFAULT(documentCode_, "") };
    inline UpdateAtiRegistrantRequest& setDocumentCode(string documentCode) { DARABONBA_PTR_SET_VALUE(documentCode_, documentCode) };


    // documentImage Field Functions 
    bool hasDocumentImage() const { return this->documentImage_ != nullptr;};
    void deleteDocumentImage() { this->documentImage_ = nullptr;};
    inline string getDocumentImage() const { DARABONBA_PTR_GET_DEFAULT(documentImage_, "") };
    inline UpdateAtiRegistrantRequest& setDocumentImage(string documentImage) { DARABONBA_PTR_SET_VALUE(documentImage_, documentImage) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline UpdateAtiRegistrantRequest& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateAtiRegistrantRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAtiRegistrantRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline UpdateAtiRegistrantRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline UpdateAtiRegistrantRequest& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateAtiRegistrantRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // street Field Functions 
    bool hasStreet() const { return this->street_ != nullptr;};
    void deleteStreet() { this->street_ = nullptr;};
    inline string getStreet() const { DARABONBA_PTR_GET_DEFAULT(street_, "") };
    inline UpdateAtiRegistrantRequest& setStreet(string street) { DARABONBA_PTR_SET_VALUE(street_, street) };


  protected:
    // The country.
    shared_ptr<string> cc_ {};
    // The city.
    shared_ptr<string> city_ {};
    // Ensures the idempotency of the request. Generate a unique parameter value from your client to ensure that the value is unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length.
    // 
    // If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The document number of the registrant. Maximum length: 50 characters.
    shared_ptr<string> documentCode_ {};
    // The document image of the registrant (Base64-encoded). The original file size must be between 50 KB and 3 MB.
    shared_ptr<string> documentImage_ {};
    // The document type of the registrant. For more information, see the appendix on document types.
    shared_ptr<string> documentType_ {};
    // The email address. Maximum length: 300 characters.
    shared_ptr<string> email_ {};
    // The name of the registrant. Maximum length: 255 characters.
    shared_ptr<string> name_ {};
    // The phone number of the registrant. Maximum length: 128 characters. If the country is China, the area code of a non-mobile phone number must match the city.
    shared_ptr<string> phone_ {};
    // The ID of the registrant profile.
    shared_ptr<string> registrantId_ {};
    // The state or province.
    shared_ptr<string> state_ {};
    // The street.
    shared_ptr<string> street_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
