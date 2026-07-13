// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATIREGISTRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATIREGISTRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateAtiRegistrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cc, cc_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DocumentCode, documentCode_);
      DARABONBA_PTR_TO_JSON(DocumentImage, documentImage_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Street, street_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cc, cc_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DocumentCode, documentCode_);
      DARABONBA_PTR_FROM_JSON(DocumentImage, documentImage_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Street, street_);
    };
    CreateAtiRegistrantRequest() = default ;
    CreateAtiRegistrantRequest(const CreateAtiRegistrantRequest &) = default ;
    CreateAtiRegistrantRequest(CreateAtiRegistrantRequest &&) = default ;
    CreateAtiRegistrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAtiRegistrantRequest() = default ;
    CreateAtiRegistrantRequest& operator=(const CreateAtiRegistrantRequest &) = default ;
    CreateAtiRegistrantRequest& operator=(CreateAtiRegistrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cc_ == nullptr
        && this->city_ == nullptr && this->clientToken_ == nullptr && this->documentCode_ == nullptr && this->documentImage_ == nullptr && this->documentType_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr && this->state_ == nullptr && this->street_ == nullptr; };
    // cc Field Functions 
    bool hasCc() const { return this->cc_ != nullptr;};
    void deleteCc() { this->cc_ = nullptr;};
    inline string getCc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
    inline CreateAtiRegistrantRequest& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CreateAtiRegistrantRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAtiRegistrantRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // documentCode Field Functions 
    bool hasDocumentCode() const { return this->documentCode_ != nullptr;};
    void deleteDocumentCode() { this->documentCode_ = nullptr;};
    inline string getDocumentCode() const { DARABONBA_PTR_GET_DEFAULT(documentCode_, "") };
    inline CreateAtiRegistrantRequest& setDocumentCode(string documentCode) { DARABONBA_PTR_SET_VALUE(documentCode_, documentCode) };


    // documentImage Field Functions 
    bool hasDocumentImage() const { return this->documentImage_ != nullptr;};
    void deleteDocumentImage() { this->documentImage_ = nullptr;};
    inline string getDocumentImage() const { DARABONBA_PTR_GET_DEFAULT(documentImage_, "") };
    inline CreateAtiRegistrantRequest& setDocumentImage(string documentImage) { DARABONBA_PTR_SET_VALUE(documentImage_, documentImage) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline CreateAtiRegistrantRequest& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateAtiRegistrantRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAtiRegistrantRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateAtiRegistrantRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateAtiRegistrantRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // street Field Functions 
    bool hasStreet() const { return this->street_ != nullptr;};
    void deleteStreet() { this->street_ = nullptr;};
    inline string getStreet() const { DARABONBA_PTR_GET_DEFAULT(street_, "") };
    inline CreateAtiRegistrantRequest& setStreet(string street) { DARABONBA_PTR_SET_VALUE(street_, street) };


  protected:
    // The country or region of the registrant. Specify a 2-character country or region code in compliance with GB/T 2659.1-2022.
    // 
    // This parameter is required.
    shared_ptr<string> cc_ {};
    // The city of the registrant. The value cannot exceed 255 characters in length. If the country is China, the value must comply with GB/T 2260-2007.
    // 
    // This parameter is required.
    shared_ptr<string> city_ {};
    // Ensures the idempotency of the request. Generate a unique parameter value from your client to ensure that the value is unique across different requests. The ClientToken value supports only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The document number of the registrant. The value cannot exceed 50 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> documentCode_ {};
    // The document image of the registrant in Base64 encoding. The original file size must be between 50 KB and 3 MB.
    // 
    // This parameter is required.
    shared_ptr<string> documentImage_ {};
    // The document type of the registrant.
    // | Field | Description             |
    // | ---- | ---------------- |
    // | SFZ   | ID card  |
    // | HZ    | Passport  |
    // | ORG   | Organization code certificate  |
    // | YYZZ	| Business license |
    // | BDDM | Military unit code |
    // | CHNSHXYD	| Unified Social Credit Code certificate of the People\\"s Republic of China |
    // | GAJMTX | Mainland Travel Permit for Hong Kong and Macao Residents |
    // | GAJZZ	| Residence Permit for Hong Kong and Macao Residents |
    // | GATLYCZD	| Registration certificate for permanent representative offices of tourism departments in Hong Kong, Macao, and Taiwan |
    // | GAXWZNDJ	| Registration certificate for permanent mainland journalist stations of Hong Kong and Macao news agencies |
    // | GZJGZY	| Notary office practice certificate |
    // | JDDWFW | Military unit paid service license |
    // | JGZ	| Military officer certificate |
    // | JJHFR	| Foundation legal person registration certificate |
    // | LSZY	| Law firm practice license |
    // | MBFQY	| Private non-enterprise unit registration certificate |
    // | MBXXBX	| Private school operating license |
    // | NCJTJJZZ	| Rural collective economic organization registration certificate |
    // | QTTYDM | Other - Unified Social Credit Code  |
    // | SFJD	| Judicial appraisal license |
    // | SHTTFR | Social organization legal person registration certificate |
    // | SHFWJG	| Social service institution registration certificate |
    // | SYDWFR | Public institution legal person certificate |
    // | TYDM  | Unified Social Credit Code certificate  |
    // | YLJGZY	| Medical institution practice license |
    // | ZCWYHDJZ	| Arbitration commission registration certificate |
    // | ZJCS	| Religious activity venue registration certificate |
    // | BJWSXX	| Beijing operating license for schools for children of foreign embassy staff |
    // | JWJG	| Overseas institution certificate |
    // | JWFZFDBJ	| Overseas non-governmental organization representative office registration certificate |
    // | WGCZJG | Foreign enterprise permanent representative office registration certificate |
    // | WGZHWH	| Foreign cultural center registration certificate in China |
    // | WGZHXWJG	| Foreign news agency certificate in China |
    // | WJLSFZ| Foreigner permanent residence ID card |
    // | WLCZJG	| Approval registration certificate for permanent representative offices of foreign government tourism departments |
    // | QT     | Other |
    // 
    // This parameter is required.
    shared_ptr<string> documentType_ {};
    // The email address. The value cannot exceed 300 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The name of the registrant. The value cannot exceed 255 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The phone number of the registrant. The value cannot exceed 128 characters in length. If the country is China and the number is not a mobile phone number, the area code must match the city.
    // 
    // This parameter is required.
    shared_ptr<string> phone_ {};
    // The province of the registrant. The value cannot exceed 255 characters in length. If the country is China, the value must comply with GB/T 2260-2007.
    // 
    // This parameter is required.
    shared_ptr<string> state_ {};
    // The address of the registrant. The value cannot exceed 255 characters in length.
    shared_ptr<string> street_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
