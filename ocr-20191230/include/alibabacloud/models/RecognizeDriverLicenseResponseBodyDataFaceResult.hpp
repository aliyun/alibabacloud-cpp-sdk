// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSERESPONSEBODYDATAFACERESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSERESPONSEBODYDATAFACERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDriverLicenseResponseBodyDataFaceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDriverLicenseResponseBodyDataFaceResult& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(BirthDate, birthDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(IssueDate, issueDate_);
      DARABONBA_PTR_TO_JSON(IssueUnit, issueUnit_);
      DARABONBA_PTR_TO_JSON(LicenseNumber, licenseNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Nationality, nationality_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDriverLicenseResponseBodyDataFaceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(BirthDate, birthDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(IssueDate, issueDate_);
      DARABONBA_PTR_FROM_JSON(IssueUnit, issueUnit_);
      DARABONBA_PTR_FROM_JSON(LicenseNumber, licenseNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
    };
    RecognizeDriverLicenseResponseBodyDataFaceResult() = default ;
    RecognizeDriverLicenseResponseBodyDataFaceResult(const RecognizeDriverLicenseResponseBodyDataFaceResult &) = default ;
    RecognizeDriverLicenseResponseBodyDataFaceResult(RecognizeDriverLicenseResponseBodyDataFaceResult &&) = default ;
    RecognizeDriverLicenseResponseBodyDataFaceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDriverLicenseResponseBodyDataFaceResult() = default ;
    RecognizeDriverLicenseResponseBodyDataFaceResult& operator=(const RecognizeDriverLicenseResponseBodyDataFaceResult &) = default ;
    RecognizeDriverLicenseResponseBodyDataFaceResult& operator=(RecognizeDriverLicenseResponseBodyDataFaceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->birthDate_ == nullptr && return this->endDate_ == nullptr && return this->gender_ == nullptr && return this->issueDate_ == nullptr && return this->issueUnit_ == nullptr
        && return this->licenseNumber_ == nullptr && return this->name_ == nullptr && return this->nationality_ == nullptr && return this->startDate_ == nullptr && return this->vehicleType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // birthDate Field Functions 
    bool hasBirthDate() const { return this->birthDate_ != nullptr;};
    void deleteBirthDate() { this->birthDate_ = nullptr;};
    inline string birthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // issueDate Field Functions 
    bool hasIssueDate() const { return this->issueDate_ != nullptr;};
    void deleteIssueDate() { this->issueDate_ = nullptr;};
    inline string issueDate() const { DARABONBA_PTR_GET_DEFAULT(issueDate_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setIssueDate(string issueDate) { DARABONBA_PTR_SET_VALUE(issueDate_, issueDate) };


    // issueUnit Field Functions 
    bool hasIssueUnit() const { return this->issueUnit_ != nullptr;};
    void deleteIssueUnit() { this->issueUnit_ = nullptr;};
    inline string issueUnit() const { DARABONBA_PTR_GET_DEFAULT(issueUnit_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setIssueUnit(string issueUnit) { DARABONBA_PTR_SET_VALUE(issueUnit_, issueUnit) };


    // licenseNumber Field Functions 
    bool hasLicenseNumber() const { return this->licenseNumber_ != nullptr;};
    void deleteLicenseNumber() { this->licenseNumber_ = nullptr;};
    inline string licenseNumber() const { DARABONBA_PTR_GET_DEFAULT(licenseNumber_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setLicenseNumber(string licenseNumber) { DARABONBA_PTR_SET_VALUE(licenseNumber_, licenseNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string vehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline RecognizeDriverLicenseResponseBodyDataFaceResult& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> birthDate_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> issueDate_ = nullptr;
    std::shared_ptr<string> issueUnit_ = nullptr;
    std::shared_ptr<string> licenseNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nationality_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> vehicleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
