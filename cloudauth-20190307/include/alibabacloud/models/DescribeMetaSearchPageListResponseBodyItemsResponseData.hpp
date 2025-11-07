// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMSRESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMSRESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaSearchPageListResponseBodyItemsResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaSearchPageListResponseBodyItemsResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovedCount, approvedCount_);
      DARABONBA_PTR_TO_JSON(ApprovedLoad, approvedLoad_);
      DARABONBA_PTR_TO_JSON(AxleCount, axleCount_);
      DARABONBA_PTR_TO_JSON(BackWheelDistance, backWheelDistance_);
      DARABONBA_PTR_TO_JSON(BankCard, bankCard_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Displacement, displacement_);
      DARABONBA_PTR_TO_JSON(EngineNum, engineNum_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(FrontWheelDistance, frontWheelDistance_);
      DARABONBA_PTR_TO_JSON(FuelType, fuelType_);
      DARABONBA_PTR_TO_JSON(InspectionDate, inspectionDate_);
      DARABONBA_PTR_TO_JSON(ModelNum, modelNum_);
      DARABONBA_PTR_TO_JSON(Power, power_);
      DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_TO_JSON(ReleaseDate, releaseDate_);
      DARABONBA_PTR_TO_JSON(RetirementDate, retirementDate_);
      DARABONBA_PTR_TO_JSON(TotalMass, totalMass_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UnladenMass, unladenMass_);
      DARABONBA_PTR_TO_JSON(UseProperty, useProperty_);
      DARABONBA_PTR_TO_JSON(VehicleState, vehicleState_);
      DARABONBA_PTR_TO_JSON(Vin, vin_);
      DARABONBA_PTR_TO_JSON(WheelBase, wheelBase_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaSearchPageListResponseBodyItemsResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovedCount, approvedCount_);
      DARABONBA_PTR_FROM_JSON(ApprovedLoad, approvedLoad_);
      DARABONBA_PTR_FROM_JSON(AxleCount, axleCount_);
      DARABONBA_PTR_FROM_JSON(BackWheelDistance, backWheelDistance_);
      DARABONBA_PTR_FROM_JSON(BankCard, bankCard_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Displacement, displacement_);
      DARABONBA_PTR_FROM_JSON(EngineNum, engineNum_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(FrontWheelDistance, frontWheelDistance_);
      DARABONBA_PTR_FROM_JSON(FuelType, fuelType_);
      DARABONBA_PTR_FROM_JSON(InspectionDate, inspectionDate_);
      DARABONBA_PTR_FROM_JSON(ModelNum, modelNum_);
      DARABONBA_PTR_FROM_JSON(Power, power_);
      DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_FROM_JSON(ReleaseDate, releaseDate_);
      DARABONBA_PTR_FROM_JSON(RetirementDate, retirementDate_);
      DARABONBA_PTR_FROM_JSON(TotalMass, totalMass_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UnladenMass, unladenMass_);
      DARABONBA_PTR_FROM_JSON(UseProperty, useProperty_);
      DARABONBA_PTR_FROM_JSON(VehicleState, vehicleState_);
      DARABONBA_PTR_FROM_JSON(Vin, vin_);
      DARABONBA_PTR_FROM_JSON(WheelBase, wheelBase_);
    };
    DescribeMetaSearchPageListResponseBodyItemsResponseData() = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponseData(const DescribeMetaSearchPageListResponseBodyItemsResponseData &) = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponseData(DescribeMetaSearchPageListResponseBodyItemsResponseData &&) = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaSearchPageListResponseBodyItemsResponseData() = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponseData& operator=(const DescribeMetaSearchPageListResponseBodyItemsResponseData &) = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponseData& operator=(DescribeMetaSearchPageListResponseBodyItemsResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvedCount_ == nullptr
        && return this->approvedLoad_ == nullptr && return this->axleCount_ == nullptr && return this->backWheelDistance_ == nullptr && return this->bankCard_ == nullptr && return this->bizCode_ == nullptr
        && return this->brand_ == nullptr && return this->color_ == nullptr && return this->displacement_ == nullptr && return this->engineNum_ == nullptr && return this->engineType_ == nullptr
        && return this->frontWheelDistance_ == nullptr && return this->fuelType_ == nullptr && return this->inspectionDate_ == nullptr && return this->modelNum_ == nullptr && return this->power_ == nullptr
        && return this->registrationDate_ == nullptr && return this->releaseDate_ == nullptr && return this->retirementDate_ == nullptr && return this->totalMass_ == nullptr && return this->type_ == nullptr
        && return this->unladenMass_ == nullptr && return this->useProperty_ == nullptr && return this->vehicleState_ == nullptr && return this->vin_ == nullptr && return this->wheelBase_ == nullptr; };
    // approvedCount Field Functions 
    bool hasApprovedCount() const { return this->approvedCount_ != nullptr;};
    void deleteApprovedCount() { this->approvedCount_ = nullptr;};
    inline string approvedCount() const { DARABONBA_PTR_GET_DEFAULT(approvedCount_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setApprovedCount(string approvedCount) { DARABONBA_PTR_SET_VALUE(approvedCount_, approvedCount) };


    // approvedLoad Field Functions 
    bool hasApprovedLoad() const { return this->approvedLoad_ != nullptr;};
    void deleteApprovedLoad() { this->approvedLoad_ = nullptr;};
    inline string approvedLoad() const { DARABONBA_PTR_GET_DEFAULT(approvedLoad_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setApprovedLoad(string approvedLoad) { DARABONBA_PTR_SET_VALUE(approvedLoad_, approvedLoad) };


    // axleCount Field Functions 
    bool hasAxleCount() const { return this->axleCount_ != nullptr;};
    void deleteAxleCount() { this->axleCount_ = nullptr;};
    inline string axleCount() const { DARABONBA_PTR_GET_DEFAULT(axleCount_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setAxleCount(string axleCount) { DARABONBA_PTR_SET_VALUE(axleCount_, axleCount) };


    // backWheelDistance Field Functions 
    bool hasBackWheelDistance() const { return this->backWheelDistance_ != nullptr;};
    void deleteBackWheelDistance() { this->backWheelDistance_ = nullptr;};
    inline string backWheelDistance() const { DARABONBA_PTR_GET_DEFAULT(backWheelDistance_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setBackWheelDistance(string backWheelDistance) { DARABONBA_PTR_SET_VALUE(backWheelDistance_, backWheelDistance) };


    // bankCard Field Functions 
    bool hasBankCard() const { return this->bankCard_ != nullptr;};
    void deleteBankCard() { this->bankCard_ = nullptr;};
    inline string bankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // displacement Field Functions 
    bool hasDisplacement() const { return this->displacement_ != nullptr;};
    void deleteDisplacement() { this->displacement_ = nullptr;};
    inline string displacement() const { DARABONBA_PTR_GET_DEFAULT(displacement_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setDisplacement(string displacement) { DARABONBA_PTR_SET_VALUE(displacement_, displacement) };


    // engineNum Field Functions 
    bool hasEngineNum() const { return this->engineNum_ != nullptr;};
    void deleteEngineNum() { this->engineNum_ = nullptr;};
    inline string engineNum() const { DARABONBA_PTR_GET_DEFAULT(engineNum_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setEngineNum(string engineNum) { DARABONBA_PTR_SET_VALUE(engineNum_, engineNum) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // frontWheelDistance Field Functions 
    bool hasFrontWheelDistance() const { return this->frontWheelDistance_ != nullptr;};
    void deleteFrontWheelDistance() { this->frontWheelDistance_ = nullptr;};
    inline string frontWheelDistance() const { DARABONBA_PTR_GET_DEFAULT(frontWheelDistance_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setFrontWheelDistance(string frontWheelDistance) { DARABONBA_PTR_SET_VALUE(frontWheelDistance_, frontWheelDistance) };


    // fuelType Field Functions 
    bool hasFuelType() const { return this->fuelType_ != nullptr;};
    void deleteFuelType() { this->fuelType_ = nullptr;};
    inline string fuelType() const { DARABONBA_PTR_GET_DEFAULT(fuelType_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setFuelType(string fuelType) { DARABONBA_PTR_SET_VALUE(fuelType_, fuelType) };


    // inspectionDate Field Functions 
    bool hasInspectionDate() const { return this->inspectionDate_ != nullptr;};
    void deleteInspectionDate() { this->inspectionDate_ = nullptr;};
    inline string inspectionDate() const { DARABONBA_PTR_GET_DEFAULT(inspectionDate_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setInspectionDate(string inspectionDate) { DARABONBA_PTR_SET_VALUE(inspectionDate_, inspectionDate) };


    // modelNum Field Functions 
    bool hasModelNum() const { return this->modelNum_ != nullptr;};
    void deleteModelNum() { this->modelNum_ = nullptr;};
    inline string modelNum() const { DARABONBA_PTR_GET_DEFAULT(modelNum_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setModelNum(string modelNum) { DARABONBA_PTR_SET_VALUE(modelNum_, modelNum) };


    // power Field Functions 
    bool hasPower() const { return this->power_ != nullptr;};
    void deletePower() { this->power_ = nullptr;};
    inline string power() const { DARABONBA_PTR_GET_DEFAULT(power_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setPower(string power) { DARABONBA_PTR_SET_VALUE(power_, power) };


    // registrationDate Field Functions 
    bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
    void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
    inline string registrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


    // releaseDate Field Functions 
    bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
    void deleteReleaseDate() { this->releaseDate_ = nullptr;};
    inline string releaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


    // retirementDate Field Functions 
    bool hasRetirementDate() const { return this->retirementDate_ != nullptr;};
    void deleteRetirementDate() { this->retirementDate_ = nullptr;};
    inline string retirementDate() const { DARABONBA_PTR_GET_DEFAULT(retirementDate_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setRetirementDate(string retirementDate) { DARABONBA_PTR_SET_VALUE(retirementDate_, retirementDate) };


    // totalMass Field Functions 
    bool hasTotalMass() const { return this->totalMass_ != nullptr;};
    void deleteTotalMass() { this->totalMass_ = nullptr;};
    inline string totalMass() const { DARABONBA_PTR_GET_DEFAULT(totalMass_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setTotalMass(string totalMass) { DARABONBA_PTR_SET_VALUE(totalMass_, totalMass) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unladenMass Field Functions 
    bool hasUnladenMass() const { return this->unladenMass_ != nullptr;};
    void deleteUnladenMass() { this->unladenMass_ = nullptr;};
    inline string unladenMass() const { DARABONBA_PTR_GET_DEFAULT(unladenMass_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setUnladenMass(string unladenMass) { DARABONBA_PTR_SET_VALUE(unladenMass_, unladenMass) };


    // useProperty Field Functions 
    bool hasUseProperty() const { return this->useProperty_ != nullptr;};
    void deleteUseProperty() { this->useProperty_ = nullptr;};
    inline string useProperty() const { DARABONBA_PTR_GET_DEFAULT(useProperty_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setUseProperty(string useProperty) { DARABONBA_PTR_SET_VALUE(useProperty_, useProperty) };


    // vehicleState Field Functions 
    bool hasVehicleState() const { return this->vehicleState_ != nullptr;};
    void deleteVehicleState() { this->vehicleState_ = nullptr;};
    inline string vehicleState() const { DARABONBA_PTR_GET_DEFAULT(vehicleState_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setVehicleState(string vehicleState) { DARABONBA_PTR_SET_VALUE(vehicleState_, vehicleState) };


    // vin Field Functions 
    bool hasVin() const { return this->vin_ != nullptr;};
    void deleteVin() { this->vin_ = nullptr;};
    inline string vin() const { DARABONBA_PTR_GET_DEFAULT(vin_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setVin(string vin) { DARABONBA_PTR_SET_VALUE(vin_, vin) };


    // wheelBase Field Functions 
    bool hasWheelBase() const { return this->wheelBase_ != nullptr;};
    void deleteWheelBase() { this->wheelBase_ = nullptr;};
    inline string wheelBase() const { DARABONBA_PTR_GET_DEFAULT(wheelBase_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponseData& setWheelBase(string wheelBase) { DARABONBA_PTR_SET_VALUE(wheelBase_, wheelBase) };


  protected:
    std::shared_ptr<string> approvedCount_ = nullptr;
    std::shared_ptr<string> approvedLoad_ = nullptr;
    std::shared_ptr<string> axleCount_ = nullptr;
    std::shared_ptr<string> backWheelDistance_ = nullptr;
    std::shared_ptr<string> bankCard_ = nullptr;
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<string> brand_ = nullptr;
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> displacement_ = nullptr;
    std::shared_ptr<string> engineNum_ = nullptr;
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<string> frontWheelDistance_ = nullptr;
    std::shared_ptr<string> fuelType_ = nullptr;
    std::shared_ptr<string> inspectionDate_ = nullptr;
    std::shared_ptr<string> modelNum_ = nullptr;
    std::shared_ptr<string> power_ = nullptr;
    std::shared_ptr<string> registrationDate_ = nullptr;
    std::shared_ptr<string> releaseDate_ = nullptr;
    std::shared_ptr<string> retirementDate_ = nullptr;
    std::shared_ptr<string> totalMass_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> unladenMass_ = nullptr;
    std::shared_ptr<string> useProperty_ = nullptr;
    std::shared_ptr<string> vehicleState_ = nullptr;
    std::shared_ptr<string> vin_ = nullptr;
    std::shared_ptr<string> wheelBase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
