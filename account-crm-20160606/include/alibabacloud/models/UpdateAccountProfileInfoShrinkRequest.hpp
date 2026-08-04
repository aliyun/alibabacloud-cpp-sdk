// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTPROFILEINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTPROFILEINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class UpdateAccountProfileInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountProfileInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAttribute, accountAttribute_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Address2, address2_);
      DARABONBA_PTR_TO_JSON(BindAlipayNo, bindAlipayNo_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CityJsonString, cityJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(ContactMethod, contactMethod_);
      DARABONBA_PTR_TO_JSON(DistrictJsonString, districtJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(Fax, fax_);
      DARABONBA_PTR_TO_JSON(FirstName, firstName_);
      DARABONBA_PTR_TO_JSON(Head, head_);
      DARABONBA_PTR_TO_JSON(HeadColor, headColor_);
      DARABONBA_PTR_TO_JSON(LastName, lastName_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(PostCode, postCode_);
      DARABONBA_PTR_TO_JSON(ProvinceJsonString, provinceJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(SelfServicingBusinessRegNum, selfServicingBusinessRegNum_);
      DARABONBA_PTR_TO_JSON(SelfServicingIdentificationNum, selfServicingIdentificationNum_);
      DARABONBA_PTR_TO_JSON(TrueName, trueName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountProfileInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAttribute, accountAttribute_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Address2, address2_);
      DARABONBA_PTR_FROM_JSON(BindAlipayNo, bindAlipayNo_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CityJsonString, cityJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(ContactMethod, contactMethod_);
      DARABONBA_PTR_FROM_JSON(DistrictJsonString, districtJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(Fax, fax_);
      DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
      DARABONBA_PTR_FROM_JSON(Head, head_);
      DARABONBA_PTR_FROM_JSON(HeadColor, headColor_);
      DARABONBA_PTR_FROM_JSON(LastName, lastName_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
      DARABONBA_PTR_FROM_JSON(ProvinceJsonString, provinceJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(SelfServicingBusinessRegNum, selfServicingBusinessRegNum_);
      DARABONBA_PTR_FROM_JSON(SelfServicingIdentificationNum, selfServicingIdentificationNum_);
      DARABONBA_PTR_FROM_JSON(TrueName, trueName_);
    };
    UpdateAccountProfileInfoShrinkRequest() = default ;
    UpdateAccountProfileInfoShrinkRequest(const UpdateAccountProfileInfoShrinkRequest &) = default ;
    UpdateAccountProfileInfoShrinkRequest(UpdateAccountProfileInfoShrinkRequest &&) = default ;
    UpdateAccountProfileInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountProfileInfoShrinkRequest() = default ;
    UpdateAccountProfileInfoShrinkRequest& operator=(const UpdateAccountProfileInfoShrinkRequest &) = default ;
    UpdateAccountProfileInfoShrinkRequest& operator=(UpdateAccountProfileInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountAttribute_ == nullptr
        && this->address_ == nullptr && this->address2_ == nullptr && this->bindAlipayNo_ == nullptr && this->certType_ == nullptr && this->cityJsonStringShrink_ == nullptr
        && this->contactMethod_ == nullptr && this->districtJsonStringShrink_ == nullptr && this->fax_ == nullptr && this->firstName_ == nullptr && this->head_ == nullptr
        && this->headColor_ == nullptr && this->lastName_ == nullptr && this->PK_ == nullptr && this->phone_ == nullptr && this->postCode_ == nullptr
        && this->provinceJsonStringShrink_ == nullptr && this->selfServicingBusinessRegNum_ == nullptr && this->selfServicingIdentificationNum_ == nullptr && this->trueName_ == nullptr; };
    // accountAttribute Field Functions 
    bool hasAccountAttribute() const { return this->accountAttribute_ != nullptr;};
    void deleteAccountAttribute() { this->accountAttribute_ = nullptr;};
    inline string getAccountAttribute() const { DARABONBA_PTR_GET_DEFAULT(accountAttribute_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setAccountAttribute(string accountAttribute) { DARABONBA_PTR_SET_VALUE(accountAttribute_, accountAttribute) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // address2 Field Functions 
    bool hasAddress2() const { return this->address2_ != nullptr;};
    void deleteAddress2() { this->address2_ = nullptr;};
    inline string getAddress2() const { DARABONBA_PTR_GET_DEFAULT(address2_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setAddress2(string address2) { DARABONBA_PTR_SET_VALUE(address2_, address2) };


    // bindAlipayNo Field Functions 
    bool hasBindAlipayNo() const { return this->bindAlipayNo_ != nullptr;};
    void deleteBindAlipayNo() { this->bindAlipayNo_ = nullptr;};
    inline string getBindAlipayNo() const { DARABONBA_PTR_GET_DEFAULT(bindAlipayNo_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setBindAlipayNo(string bindAlipayNo) { DARABONBA_PTR_SET_VALUE(bindAlipayNo_, bindAlipayNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // cityJsonStringShrink Field Functions 
    bool hasCityJsonStringShrink() const { return this->cityJsonStringShrink_ != nullptr;};
    void deleteCityJsonStringShrink() { this->cityJsonStringShrink_ = nullptr;};
    inline string getCityJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(cityJsonStringShrink_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setCityJsonStringShrink(string cityJsonStringShrink) { DARABONBA_PTR_SET_VALUE(cityJsonStringShrink_, cityJsonStringShrink) };


    // contactMethod Field Functions 
    bool hasContactMethod() const { return this->contactMethod_ != nullptr;};
    void deleteContactMethod() { this->contactMethod_ = nullptr;};
    inline string getContactMethod() const { DARABONBA_PTR_GET_DEFAULT(contactMethod_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setContactMethod(string contactMethod) { DARABONBA_PTR_SET_VALUE(contactMethod_, contactMethod) };


    // districtJsonStringShrink Field Functions 
    bool hasDistrictJsonStringShrink() const { return this->districtJsonStringShrink_ != nullptr;};
    void deleteDistrictJsonStringShrink() { this->districtJsonStringShrink_ = nullptr;};
    inline string getDistrictJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(districtJsonStringShrink_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setDistrictJsonStringShrink(string districtJsonStringShrink) { DARABONBA_PTR_SET_VALUE(districtJsonStringShrink_, districtJsonStringShrink) };


    // fax Field Functions 
    bool hasFax() const { return this->fax_ != nullptr;};
    void deleteFax() { this->fax_ = nullptr;};
    inline string getFax() const { DARABONBA_PTR_GET_DEFAULT(fax_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setFax(string fax) { DARABONBA_PTR_SET_VALUE(fax_, fax) };


    // firstName Field Functions 
    bool hasFirstName() const { return this->firstName_ != nullptr;};
    void deleteFirstName() { this->firstName_ = nullptr;};
    inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


    // head Field Functions 
    bool hasHead() const { return this->head_ != nullptr;};
    void deleteHead() { this->head_ = nullptr;};
    inline string getHead() const { DARABONBA_PTR_GET_DEFAULT(head_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setHead(string head) { DARABONBA_PTR_SET_VALUE(head_, head) };


    // headColor Field Functions 
    bool hasHeadColor() const { return this->headColor_ != nullptr;};
    void deleteHeadColor() { this->headColor_ = nullptr;};
    inline string getHeadColor() const { DARABONBA_PTR_GET_DEFAULT(headColor_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setHeadColor(string headColor) { DARABONBA_PTR_SET_VALUE(headColor_, headColor) };


    // lastName Field Functions 
    bool hasLastName() const { return this->lastName_ != nullptr;};
    void deleteLastName() { this->lastName_ = nullptr;};
    inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // postCode Field Functions 
    bool hasPostCode() const { return this->postCode_ != nullptr;};
    void deletePostCode() { this->postCode_ = nullptr;};
    inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


    // provinceJsonStringShrink Field Functions 
    bool hasProvinceJsonStringShrink() const { return this->provinceJsonStringShrink_ != nullptr;};
    void deleteProvinceJsonStringShrink() { this->provinceJsonStringShrink_ = nullptr;};
    inline string getProvinceJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(provinceJsonStringShrink_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setProvinceJsonStringShrink(string provinceJsonStringShrink) { DARABONBA_PTR_SET_VALUE(provinceJsonStringShrink_, provinceJsonStringShrink) };


    // selfServicingBusinessRegNum Field Functions 
    bool hasSelfServicingBusinessRegNum() const { return this->selfServicingBusinessRegNum_ != nullptr;};
    void deleteSelfServicingBusinessRegNum() { this->selfServicingBusinessRegNum_ = nullptr;};
    inline string getSelfServicingBusinessRegNum() const { DARABONBA_PTR_GET_DEFAULT(selfServicingBusinessRegNum_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setSelfServicingBusinessRegNum(string selfServicingBusinessRegNum) { DARABONBA_PTR_SET_VALUE(selfServicingBusinessRegNum_, selfServicingBusinessRegNum) };


    // selfServicingIdentificationNum Field Functions 
    bool hasSelfServicingIdentificationNum() const { return this->selfServicingIdentificationNum_ != nullptr;};
    void deleteSelfServicingIdentificationNum() { this->selfServicingIdentificationNum_ = nullptr;};
    inline string getSelfServicingIdentificationNum() const { DARABONBA_PTR_GET_DEFAULT(selfServicingIdentificationNum_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setSelfServicingIdentificationNum(string selfServicingIdentificationNum) { DARABONBA_PTR_SET_VALUE(selfServicingIdentificationNum_, selfServicingIdentificationNum) };


    // trueName Field Functions 
    bool hasTrueName() const { return this->trueName_ != nullptr;};
    void deleteTrueName() { this->trueName_ = nullptr;};
    inline string getTrueName() const { DARABONBA_PTR_GET_DEFAULT(trueName_, "") };
    inline UpdateAccountProfileInfoShrinkRequest& setTrueName(string trueName) { DARABONBA_PTR_SET_VALUE(trueName_, trueName) };


  protected:
    shared_ptr<string> accountAttribute_ {};
    shared_ptr<string> address_ {};
    shared_ptr<string> address2_ {};
    shared_ptr<string> bindAlipayNo_ {};
    shared_ptr<string> certType_ {};
    shared_ptr<string> cityJsonStringShrink_ {};
    shared_ptr<string> contactMethod_ {};
    shared_ptr<string> districtJsonStringShrink_ {};
    shared_ptr<string> fax_ {};
    shared_ptr<string> firstName_ {};
    shared_ptr<string> head_ {};
    shared_ptr<string> headColor_ {};
    shared_ptr<string> lastName_ {};
    shared_ptr<string> PK_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> postCode_ {};
    shared_ptr<string> provinceJsonStringShrink_ {};
    shared_ptr<string> selfServicingBusinessRegNum_ {};
    shared_ptr<string> selfServicingIdentificationNum_ {};
    shared_ptr<string> trueName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
