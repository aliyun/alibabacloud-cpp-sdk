// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEBUSINESSLICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEBUSINESSLICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeBusinessLicenseResponseBodyDataEmblem.hpp>
#include <alibabacloud/models/RecognizeBusinessLicenseResponseBodyDataQRCode.hpp>
#include <alibabacloud/models/RecognizeBusinessLicenseResponseBodyDataStamp.hpp>
#include <alibabacloud/models/RecognizeBusinessLicenseResponseBodyDataTitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeBusinessLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeBusinessLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(Capital, capital_);
      DARABONBA_PTR_TO_JSON(Emblem, emblem_);
      DARABONBA_PTR_TO_JSON(EstablishDate, establishDate_);
      DARABONBA_PTR_TO_JSON(LegalPerson, legalPerson_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QRCode, QRCode_);
      DARABONBA_PTR_TO_JSON(RegisterNumber, registerNumber_);
      DARABONBA_PTR_TO_JSON(Stamp, stamp_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ValidPeriod, validPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeBusinessLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(Capital, capital_);
      DARABONBA_PTR_FROM_JSON(Emblem, emblem_);
      DARABONBA_PTR_FROM_JSON(EstablishDate, establishDate_);
      DARABONBA_PTR_FROM_JSON(LegalPerson, legalPerson_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QRCode, QRCode_);
      DARABONBA_PTR_FROM_JSON(RegisterNumber, registerNumber_);
      DARABONBA_PTR_FROM_JSON(Stamp, stamp_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ValidPeriod, validPeriod_);
    };
    RecognizeBusinessLicenseResponseBodyData() = default ;
    RecognizeBusinessLicenseResponseBodyData(const RecognizeBusinessLicenseResponseBodyData &) = default ;
    RecognizeBusinessLicenseResponseBodyData(RecognizeBusinessLicenseResponseBodyData &&) = default ;
    RecognizeBusinessLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeBusinessLicenseResponseBodyData() = default ;
    RecognizeBusinessLicenseResponseBodyData& operator=(const RecognizeBusinessLicenseResponseBodyData &) = default ;
    RecognizeBusinessLicenseResponseBodyData& operator=(RecognizeBusinessLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->angle_ != nullptr && this->business_ != nullptr && this->capital_ != nullptr && this->emblem_ != nullptr && this->establishDate_ != nullptr
        && this->legalPerson_ != nullptr && this->name_ != nullptr && this->QRCode_ != nullptr && this->registerNumber_ != nullptr && this->stamp_ != nullptr
        && this->title_ != nullptr && this->type_ != nullptr && this->validPeriod_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline float angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0.0) };
    inline RecognizeBusinessLicenseResponseBodyData& setAngle(float angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // capital Field Functions 
    bool hasCapital() const { return this->capital_ != nullptr;};
    void deleteCapital() { this->capital_ = nullptr;};
    inline string capital() const { DARABONBA_PTR_GET_DEFAULT(capital_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setCapital(string capital) { DARABONBA_PTR_SET_VALUE(capital_, capital) };


    // emblem Field Functions 
    bool hasEmblem() const { return this->emblem_ != nullptr;};
    void deleteEmblem() { this->emblem_ = nullptr;};
    inline const Models::RecognizeBusinessLicenseResponseBodyDataEmblem & emblem() const { DARABONBA_PTR_GET_CONST(emblem_, Models::RecognizeBusinessLicenseResponseBodyDataEmblem) };
    inline Models::RecognizeBusinessLicenseResponseBodyDataEmblem emblem() { DARABONBA_PTR_GET(emblem_, Models::RecognizeBusinessLicenseResponseBodyDataEmblem) };
    inline RecognizeBusinessLicenseResponseBodyData& setEmblem(const Models::RecognizeBusinessLicenseResponseBodyDataEmblem & emblem) { DARABONBA_PTR_SET_VALUE(emblem_, emblem) };
    inline RecognizeBusinessLicenseResponseBodyData& setEmblem(Models::RecognizeBusinessLicenseResponseBodyDataEmblem && emblem) { DARABONBA_PTR_SET_RVALUE(emblem_, emblem) };


    // establishDate Field Functions 
    bool hasEstablishDate() const { return this->establishDate_ != nullptr;};
    void deleteEstablishDate() { this->establishDate_ = nullptr;};
    inline string establishDate() const { DARABONBA_PTR_GET_DEFAULT(establishDate_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setEstablishDate(string establishDate) { DARABONBA_PTR_SET_VALUE(establishDate_, establishDate) };


    // legalPerson Field Functions 
    bool hasLegalPerson() const { return this->legalPerson_ != nullptr;};
    void deleteLegalPerson() { this->legalPerson_ = nullptr;};
    inline string legalPerson() const { DARABONBA_PTR_GET_DEFAULT(legalPerson_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setLegalPerson(string legalPerson) { DARABONBA_PTR_SET_VALUE(legalPerson_, legalPerson) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // QRCode Field Functions 
    bool hasQRCode() const { return this->QRCode_ != nullptr;};
    void deleteQRCode() { this->QRCode_ = nullptr;};
    inline const Models::RecognizeBusinessLicenseResponseBodyDataQRCode & QRCode() const { DARABONBA_PTR_GET_CONST(QRCode_, Models::RecognizeBusinessLicenseResponseBodyDataQRCode) };
    inline Models::RecognizeBusinessLicenseResponseBodyDataQRCode QRCode() { DARABONBA_PTR_GET(QRCode_, Models::RecognizeBusinessLicenseResponseBodyDataQRCode) };
    inline RecognizeBusinessLicenseResponseBodyData& setQRCode(const Models::RecognizeBusinessLicenseResponseBodyDataQRCode & QRCode) { DARABONBA_PTR_SET_VALUE(QRCode_, QRCode) };
    inline RecognizeBusinessLicenseResponseBodyData& setQRCode(Models::RecognizeBusinessLicenseResponseBodyDataQRCode && QRCode) { DARABONBA_PTR_SET_RVALUE(QRCode_, QRCode) };


    // registerNumber Field Functions 
    bool hasRegisterNumber() const { return this->registerNumber_ != nullptr;};
    void deleteRegisterNumber() { this->registerNumber_ = nullptr;};
    inline string registerNumber() const { DARABONBA_PTR_GET_DEFAULT(registerNumber_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setRegisterNumber(string registerNumber) { DARABONBA_PTR_SET_VALUE(registerNumber_, registerNumber) };


    // stamp Field Functions 
    bool hasStamp() const { return this->stamp_ != nullptr;};
    void deleteStamp() { this->stamp_ = nullptr;};
    inline const Models::RecognizeBusinessLicenseResponseBodyDataStamp & stamp() const { DARABONBA_PTR_GET_CONST(stamp_, Models::RecognizeBusinessLicenseResponseBodyDataStamp) };
    inline Models::RecognizeBusinessLicenseResponseBodyDataStamp stamp() { DARABONBA_PTR_GET(stamp_, Models::RecognizeBusinessLicenseResponseBodyDataStamp) };
    inline RecognizeBusinessLicenseResponseBodyData& setStamp(const Models::RecognizeBusinessLicenseResponseBodyDataStamp & stamp) { DARABONBA_PTR_SET_VALUE(stamp_, stamp) };
    inline RecognizeBusinessLicenseResponseBodyData& setStamp(Models::RecognizeBusinessLicenseResponseBodyDataStamp && stamp) { DARABONBA_PTR_SET_RVALUE(stamp_, stamp) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline const Models::RecognizeBusinessLicenseResponseBodyDataTitle & title() const { DARABONBA_PTR_GET_CONST(title_, Models::RecognizeBusinessLicenseResponseBodyDataTitle) };
    inline Models::RecognizeBusinessLicenseResponseBodyDataTitle title() { DARABONBA_PTR_GET(title_, Models::RecognizeBusinessLicenseResponseBodyDataTitle) };
    inline RecognizeBusinessLicenseResponseBodyData& setTitle(const Models::RecognizeBusinessLicenseResponseBodyDataTitle & title) { DARABONBA_PTR_SET_VALUE(title_, title) };
    inline RecognizeBusinessLicenseResponseBodyData& setTitle(Models::RecognizeBusinessLicenseResponseBodyDataTitle && title) { DARABONBA_PTR_SET_RVALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // validPeriod Field Functions 
    bool hasValidPeriod() const { return this->validPeriod_ != nullptr;};
    void deleteValidPeriod() { this->validPeriod_ = nullptr;};
    inline string validPeriod() const { DARABONBA_PTR_GET_DEFAULT(validPeriod_, "") };
    inline RecognizeBusinessLicenseResponseBodyData& setValidPeriod(string validPeriod) { DARABONBA_PTR_SET_VALUE(validPeriod_, validPeriod) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<float> angle_ = nullptr;
    std::shared_ptr<string> business_ = nullptr;
    std::shared_ptr<string> capital_ = nullptr;
    std::shared_ptr<Models::RecognizeBusinessLicenseResponseBodyDataEmblem> emblem_ = nullptr;
    std::shared_ptr<string> establishDate_ = nullptr;
    std::shared_ptr<string> legalPerson_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::RecognizeBusinessLicenseResponseBodyDataQRCode> QRCode_ = nullptr;
    std::shared_ptr<string> registerNumber_ = nullptr;
    std::shared_ptr<Models::RecognizeBusinessLicenseResponseBodyDataStamp> stamp_ = nullptr;
    std::shared_ptr<Models::RecognizeBusinessLicenseResponseBodyDataTitle> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> validPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
