// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERREQUESTTRAVELERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERREQUESTTRAVELERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderRequestTravelerInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderRequestTravelerInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(cert_valid_date, certValidDate_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
      DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_TO_JSON(out_user_id, outUserId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(sex, sex_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderRequestTravelerInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(cert_valid_date, certValidDate_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_FROM_JSON(out_user_id, outUserId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(sex, sex_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightCreateOrderRequestTravelerInfoList() = default ;
    FlightCreateOrderRequestTravelerInfoList(const FlightCreateOrderRequestTravelerInfoList &) = default ;
    FlightCreateOrderRequestTravelerInfoList(FlightCreateOrderRequestTravelerInfoList &&) = default ;
    FlightCreateOrderRequestTravelerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderRequestTravelerInfoList() = default ;
    FlightCreateOrderRequestTravelerInfoList& operator=(const FlightCreateOrderRequestTravelerInfoList &) = default ;
    FlightCreateOrderRequestTravelerInfoList& operator=(FlightCreateOrderRequestTravelerInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->certNation_ != nullptr && this->certNo_ != nullptr && this->certType_ != nullptr && this->certValidDate_ != nullptr && this->name_ != nullptr
        && this->nationality_ != nullptr && this->nationalityCode_ != nullptr && this->outUserId_ != nullptr && this->phone_ != nullptr && this->sex_ != nullptr
        && this->type_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certNation Field Functions 
    bool hasCertNation() const { return this->certNation_ != nullptr;};
    void deleteCertNation() { this->certNation_ = nullptr;};
    inline string certNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certValidDate Field Functions 
    bool hasCertValidDate() const { return this->certValidDate_ != nullptr;};
    void deleteCertValidDate() { this->certValidDate_ = nullptr;};
    inline string certValidDate() const { DARABONBA_PTR_GET_DEFAULT(certValidDate_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setCertValidDate(string certValidDate) { DARABONBA_PTR_SET_VALUE(certValidDate_, certValidDate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // nationalityCode Field Functions 
    bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
    void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
    inline string nationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


    // outUserId Field Functions 
    bool hasOutUserId() const { return this->outUserId_ != nullptr;};
    void deleteOutUserId() { this->outUserId_ = nullptr;};
    inline string outUserId() const { DARABONBA_PTR_GET_DEFAULT(outUserId_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setOutUserId(string outUserId) { DARABONBA_PTR_SET_VALUE(outUserId_, outUserId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // sex Field Functions 
    bool hasSex() const { return this->sex_ != nullptr;};
    void deleteSex() { this->sex_ = nullptr;};
    inline int32_t sex() const { DARABONBA_PTR_GET_DEFAULT(sex_, 0) };
    inline FlightCreateOrderRequestTravelerInfoList& setSex(int32_t sex) { DARABONBA_PTR_SET_VALUE(sex_, sex) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FlightCreateOrderRequestTravelerInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> certNation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certType_ = nullptr;
    std::shared_ptr<string> certValidDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // 国籍
    std::shared_ptr<string> nationality_ = nullptr;
    // 国籍二字码
    std::shared_ptr<string> nationalityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<int32_t> sex_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
