// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUESTINSPERSONANDSEGMENTLISTINSURED_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUESTINSPERSONANDSEGMENTLISTINSURED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderCreateRequestInsPersonAndSegmentListInsured : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateRequestInsPersonAndSegmentListInsured& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(cert_name, certName_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateRequestInsPersonAndSegmentListInsured& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(cert_name, certName_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    InsureOrderCreateRequestInsPersonAndSegmentListInsured() = default ;
    InsureOrderCreateRequestInsPersonAndSegmentListInsured(const InsureOrderCreateRequestInsPersonAndSegmentListInsured &) = default ;
    InsureOrderCreateRequestInsPersonAndSegmentListInsured(InsureOrderCreateRequestInsPersonAndSegmentListInsured &&) = default ;
    InsureOrderCreateRequestInsPersonAndSegmentListInsured(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateRequestInsPersonAndSegmentListInsured() = default ;
    InsureOrderCreateRequestInsPersonAndSegmentListInsured& operator=(const InsureOrderCreateRequestInsPersonAndSegmentListInsured &) = default ;
    InsureOrderCreateRequestInsPersonAndSegmentListInsured& operator=(InsureOrderCreateRequestInsPersonAndSegmentListInsured &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->btripUserId_ != nullptr && this->certName_ != nullptr && this->certNo_ != nullptr && this->certType_ != nullptr && this->gender_ != nullptr
        && this->phone_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentListInsured& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<string> certType_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
