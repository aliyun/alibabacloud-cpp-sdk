// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSERESPONSEBODYDATAFACERESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSERESPONSEBODYDATAFACERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDrivingLicenseResponseBodyDataFaceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDrivingLicenseResponseBodyDataFaceResult& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(EngineNumber, engineNumber_);
      DARABONBA_PTR_TO_JSON(IssueDate, issueDate_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PlateNumber, plateNumber_);
      DARABONBA_PTR_TO_JSON(RegisterDate, registerDate_);
      DARABONBA_PTR_TO_JSON(UseCharacter, useCharacter_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_TO_JSON(Vin, vin_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDrivingLicenseResponseBodyDataFaceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(EngineNumber, engineNumber_);
      DARABONBA_PTR_FROM_JSON(IssueDate, issueDate_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PlateNumber, plateNumber_);
      DARABONBA_PTR_FROM_JSON(RegisterDate, registerDate_);
      DARABONBA_PTR_FROM_JSON(UseCharacter, useCharacter_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_FROM_JSON(Vin, vin_);
    };
    RecognizeDrivingLicenseResponseBodyDataFaceResult() = default ;
    RecognizeDrivingLicenseResponseBodyDataFaceResult(const RecognizeDrivingLicenseResponseBodyDataFaceResult &) = default ;
    RecognizeDrivingLicenseResponseBodyDataFaceResult(RecognizeDrivingLicenseResponseBodyDataFaceResult &&) = default ;
    RecognizeDrivingLicenseResponseBodyDataFaceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDrivingLicenseResponseBodyDataFaceResult() = default ;
    RecognizeDrivingLicenseResponseBodyDataFaceResult& operator=(const RecognizeDrivingLicenseResponseBodyDataFaceResult &) = default ;
    RecognizeDrivingLicenseResponseBodyDataFaceResult& operator=(RecognizeDrivingLicenseResponseBodyDataFaceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->engineNumber_ != nullptr && this->issueDate_ != nullptr && this->model_ != nullptr && this->owner_ != nullptr && this->plateNumber_ != nullptr
        && this->registerDate_ != nullptr && this->useCharacter_ != nullptr && this->vehicleType_ != nullptr && this->vin_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // engineNumber Field Functions 
    bool hasEngineNumber() const { return this->engineNumber_ != nullptr;};
    void deleteEngineNumber() { this->engineNumber_ = nullptr;};
    inline string engineNumber() const { DARABONBA_PTR_GET_DEFAULT(engineNumber_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setEngineNumber(string engineNumber) { DARABONBA_PTR_SET_VALUE(engineNumber_, engineNumber) };


    // issueDate Field Functions 
    bool hasIssueDate() const { return this->issueDate_ != nullptr;};
    void deleteIssueDate() { this->issueDate_ = nullptr;};
    inline string issueDate() const { DARABONBA_PTR_GET_DEFAULT(issueDate_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setIssueDate(string issueDate) { DARABONBA_PTR_SET_VALUE(issueDate_, issueDate) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // plateNumber Field Functions 
    bool hasPlateNumber() const { return this->plateNumber_ != nullptr;};
    void deletePlateNumber() { this->plateNumber_ = nullptr;};
    inline string plateNumber() const { DARABONBA_PTR_GET_DEFAULT(plateNumber_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setPlateNumber(string plateNumber) { DARABONBA_PTR_SET_VALUE(plateNumber_, plateNumber) };


    // registerDate Field Functions 
    bool hasRegisterDate() const { return this->registerDate_ != nullptr;};
    void deleteRegisterDate() { this->registerDate_ = nullptr;};
    inline string registerDate() const { DARABONBA_PTR_GET_DEFAULT(registerDate_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setRegisterDate(string registerDate) { DARABONBA_PTR_SET_VALUE(registerDate_, registerDate) };


    // useCharacter Field Functions 
    bool hasUseCharacter() const { return this->useCharacter_ != nullptr;};
    void deleteUseCharacter() { this->useCharacter_ = nullptr;};
    inline string useCharacter() const { DARABONBA_PTR_GET_DEFAULT(useCharacter_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setUseCharacter(string useCharacter) { DARABONBA_PTR_SET_VALUE(useCharacter_, useCharacter) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string vehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


    // vin Field Functions 
    bool hasVin() const { return this->vin_ != nullptr;};
    void deleteVin() { this->vin_ = nullptr;};
    inline string vin() const { DARABONBA_PTR_GET_DEFAULT(vin_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataFaceResult& setVin(string vin) { DARABONBA_PTR_SET_VALUE(vin_, vin) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> engineNumber_ = nullptr;
    std::shared_ptr<string> issueDate_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> plateNumber_ = nullptr;
    std::shared_ptr<string> registerDate_ = nullptr;
    std::shared_ptr<string> useCharacter_ = nullptr;
    std::shared_ptr<string> vehicleType_ = nullptr;
    std::shared_ptr<string> vin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
