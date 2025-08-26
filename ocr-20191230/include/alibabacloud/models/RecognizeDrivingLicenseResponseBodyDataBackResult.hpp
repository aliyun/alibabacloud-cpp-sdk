// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSERESPONSEBODYDATABACKRESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSERESPONSEBODYDATABACKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDrivingLicenseResponseBodyDataBackResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDrivingLicenseResponseBodyDataBackResult& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovedLoad, approvedLoad_);
      DARABONBA_PTR_TO_JSON(ApprovedPassengerCapacity, approvedPassengerCapacity_);
      DARABONBA_PTR_TO_JSON(EnergyType, energyType_);
      DARABONBA_PTR_TO_JSON(FileNumber, fileNumber_);
      DARABONBA_PTR_TO_JSON(GrossMass, grossMass_);
      DARABONBA_PTR_TO_JSON(InspectionRecord, inspectionRecord_);
      DARABONBA_PTR_TO_JSON(OverallDimension, overallDimension_);
      DARABONBA_PTR_TO_JSON(PlateNumber, plateNumber_);
      DARABONBA_PTR_TO_JSON(TractionMass, tractionMass_);
      DARABONBA_PTR_TO_JSON(UnladenMass, unladenMass_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDrivingLicenseResponseBodyDataBackResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovedLoad, approvedLoad_);
      DARABONBA_PTR_FROM_JSON(ApprovedPassengerCapacity, approvedPassengerCapacity_);
      DARABONBA_PTR_FROM_JSON(EnergyType, energyType_);
      DARABONBA_PTR_FROM_JSON(FileNumber, fileNumber_);
      DARABONBA_PTR_FROM_JSON(GrossMass, grossMass_);
      DARABONBA_PTR_FROM_JSON(InspectionRecord, inspectionRecord_);
      DARABONBA_PTR_FROM_JSON(OverallDimension, overallDimension_);
      DARABONBA_PTR_FROM_JSON(PlateNumber, plateNumber_);
      DARABONBA_PTR_FROM_JSON(TractionMass, tractionMass_);
      DARABONBA_PTR_FROM_JSON(UnladenMass, unladenMass_);
    };
    RecognizeDrivingLicenseResponseBodyDataBackResult() = default ;
    RecognizeDrivingLicenseResponseBodyDataBackResult(const RecognizeDrivingLicenseResponseBodyDataBackResult &) = default ;
    RecognizeDrivingLicenseResponseBodyDataBackResult(RecognizeDrivingLicenseResponseBodyDataBackResult &&) = default ;
    RecognizeDrivingLicenseResponseBodyDataBackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDrivingLicenseResponseBodyDataBackResult() = default ;
    RecognizeDrivingLicenseResponseBodyDataBackResult& operator=(const RecognizeDrivingLicenseResponseBodyDataBackResult &) = default ;
    RecognizeDrivingLicenseResponseBodyDataBackResult& operator=(RecognizeDrivingLicenseResponseBodyDataBackResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvedLoad_ != nullptr
        && this->approvedPassengerCapacity_ != nullptr && this->energyType_ != nullptr && this->fileNumber_ != nullptr && this->grossMass_ != nullptr && this->inspectionRecord_ != nullptr
        && this->overallDimension_ != nullptr && this->plateNumber_ != nullptr && this->tractionMass_ != nullptr && this->unladenMass_ != nullptr; };
    // approvedLoad Field Functions 
    bool hasApprovedLoad() const { return this->approvedLoad_ != nullptr;};
    void deleteApprovedLoad() { this->approvedLoad_ = nullptr;};
    inline string approvedLoad() const { DARABONBA_PTR_GET_DEFAULT(approvedLoad_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setApprovedLoad(string approvedLoad) { DARABONBA_PTR_SET_VALUE(approvedLoad_, approvedLoad) };


    // approvedPassengerCapacity Field Functions 
    bool hasApprovedPassengerCapacity() const { return this->approvedPassengerCapacity_ != nullptr;};
    void deleteApprovedPassengerCapacity() { this->approvedPassengerCapacity_ = nullptr;};
    inline string approvedPassengerCapacity() const { DARABONBA_PTR_GET_DEFAULT(approvedPassengerCapacity_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setApprovedPassengerCapacity(string approvedPassengerCapacity) { DARABONBA_PTR_SET_VALUE(approvedPassengerCapacity_, approvedPassengerCapacity) };


    // energyType Field Functions 
    bool hasEnergyType() const { return this->energyType_ != nullptr;};
    void deleteEnergyType() { this->energyType_ = nullptr;};
    inline string energyType() const { DARABONBA_PTR_GET_DEFAULT(energyType_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setEnergyType(string energyType) { DARABONBA_PTR_SET_VALUE(energyType_, energyType) };


    // fileNumber Field Functions 
    bool hasFileNumber() const { return this->fileNumber_ != nullptr;};
    void deleteFileNumber() { this->fileNumber_ = nullptr;};
    inline string fileNumber() const { DARABONBA_PTR_GET_DEFAULT(fileNumber_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setFileNumber(string fileNumber) { DARABONBA_PTR_SET_VALUE(fileNumber_, fileNumber) };


    // grossMass Field Functions 
    bool hasGrossMass() const { return this->grossMass_ != nullptr;};
    void deleteGrossMass() { this->grossMass_ = nullptr;};
    inline string grossMass() const { DARABONBA_PTR_GET_DEFAULT(grossMass_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setGrossMass(string grossMass) { DARABONBA_PTR_SET_VALUE(grossMass_, grossMass) };


    // inspectionRecord Field Functions 
    bool hasInspectionRecord() const { return this->inspectionRecord_ != nullptr;};
    void deleteInspectionRecord() { this->inspectionRecord_ = nullptr;};
    inline string inspectionRecord() const { DARABONBA_PTR_GET_DEFAULT(inspectionRecord_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setInspectionRecord(string inspectionRecord) { DARABONBA_PTR_SET_VALUE(inspectionRecord_, inspectionRecord) };


    // overallDimension Field Functions 
    bool hasOverallDimension() const { return this->overallDimension_ != nullptr;};
    void deleteOverallDimension() { this->overallDimension_ = nullptr;};
    inline string overallDimension() const { DARABONBA_PTR_GET_DEFAULT(overallDimension_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setOverallDimension(string overallDimension) { DARABONBA_PTR_SET_VALUE(overallDimension_, overallDimension) };


    // plateNumber Field Functions 
    bool hasPlateNumber() const { return this->plateNumber_ != nullptr;};
    void deletePlateNumber() { this->plateNumber_ = nullptr;};
    inline string plateNumber() const { DARABONBA_PTR_GET_DEFAULT(plateNumber_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setPlateNumber(string plateNumber) { DARABONBA_PTR_SET_VALUE(plateNumber_, plateNumber) };


    // tractionMass Field Functions 
    bool hasTractionMass() const { return this->tractionMass_ != nullptr;};
    void deleteTractionMass() { this->tractionMass_ = nullptr;};
    inline string tractionMass() const { DARABONBA_PTR_GET_DEFAULT(tractionMass_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setTractionMass(string tractionMass) { DARABONBA_PTR_SET_VALUE(tractionMass_, tractionMass) };


    // unladenMass Field Functions 
    bool hasUnladenMass() const { return this->unladenMass_ != nullptr;};
    void deleteUnladenMass() { this->unladenMass_ = nullptr;};
    inline string unladenMass() const { DARABONBA_PTR_GET_DEFAULT(unladenMass_, "") };
    inline RecognizeDrivingLicenseResponseBodyDataBackResult& setUnladenMass(string unladenMass) { DARABONBA_PTR_SET_VALUE(unladenMass_, unladenMass) };


  protected:
    std::shared_ptr<string> approvedLoad_ = nullptr;
    std::shared_ptr<string> approvedPassengerCapacity_ = nullptr;
    std::shared_ptr<string> energyType_ = nullptr;
    std::shared_ptr<string> fileNumber_ = nullptr;
    std::shared_ptr<string> grossMass_ = nullptr;
    std::shared_ptr<string> inspectionRecord_ = nullptr;
    std::shared_ptr<string> overallDimension_ = nullptr;
    std::shared_ptr<string> plateNumber_ = nullptr;
    std::shared_ptr<string> tractionMass_ = nullptr;
    std::shared_ptr<string> unladenMass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
