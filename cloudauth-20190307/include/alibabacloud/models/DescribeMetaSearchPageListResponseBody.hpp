// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaSearchPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaSearchPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaSearchPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeMetaSearchPageListResponseBody() = default ;
    DescribeMetaSearchPageListResponseBody(const DescribeMetaSearchPageListResponseBody &) = default ;
    DescribeMetaSearchPageListResponseBody(DescribeMetaSearchPageListResponseBody &&) = default ;
    DescribeMetaSearchPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaSearchPageListResponseBody() = default ;
    DescribeMetaSearchPageListResponseBody& operator=(const DescribeMetaSearchPageListResponseBody &) = default ;
    DescribeMetaSearchPageListResponseBody& operator=(DescribeMetaSearchPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Api, api_);
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(BankCard, bankCard_);
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
        DARABONBA_PTR_TO_JSON(IspName, ispName_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Request, request_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(RequestJson, requestJson_);
        DARABONBA_PTR_TO_JSON(Response, response_);
        DARABONBA_PTR_TO_JSON(ResponseJson, responseJson_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Api, api_);
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(BankCard, bankCard_);
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
        DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Request, request_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(RequestJson, requestJson_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
        DARABONBA_PTR_FROM_JSON(ResponseJson, responseJson_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Response() = default ;
        Response(const Response &) = default ;
        Response(Response &&) = default ;
        Response(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Response() = default ;
        Response& operator=(const Response &) = default ;
        Response& operator=(Response &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          Data() = default ;
          Data(const Data &) = default ;
          Data(Data &&) = default ;
          Data(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Data() = default ;
          Data& operator=(const Data &) = default ;
          Data& operator=(Data &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->approvedCount_ == nullptr
        && this->approvedLoad_ == nullptr && this->axleCount_ == nullptr && this->backWheelDistance_ == nullptr && this->bankCard_ == nullptr && this->bizCode_ == nullptr
        && this->brand_ == nullptr && this->color_ == nullptr && this->displacement_ == nullptr && this->engineNum_ == nullptr && this->engineType_ == nullptr
        && this->frontWheelDistance_ == nullptr && this->fuelType_ == nullptr && this->inspectionDate_ == nullptr && this->modelNum_ == nullptr && this->power_ == nullptr
        && this->registrationDate_ == nullptr && this->releaseDate_ == nullptr && this->retirementDate_ == nullptr && this->totalMass_ == nullptr && this->type_ == nullptr
        && this->unladenMass_ == nullptr && this->useProperty_ == nullptr && this->vehicleState_ == nullptr && this->vin_ == nullptr && this->wheelBase_ == nullptr; };
          // approvedCount Field Functions 
          bool hasApprovedCount() const { return this->approvedCount_ != nullptr;};
          void deleteApprovedCount() { this->approvedCount_ = nullptr;};
          inline string getApprovedCount() const { DARABONBA_PTR_GET_DEFAULT(approvedCount_, "") };
          inline Data& setApprovedCount(string approvedCount) { DARABONBA_PTR_SET_VALUE(approvedCount_, approvedCount) };


          // approvedLoad Field Functions 
          bool hasApprovedLoad() const { return this->approvedLoad_ != nullptr;};
          void deleteApprovedLoad() { this->approvedLoad_ = nullptr;};
          inline string getApprovedLoad() const { DARABONBA_PTR_GET_DEFAULT(approvedLoad_, "") };
          inline Data& setApprovedLoad(string approvedLoad) { DARABONBA_PTR_SET_VALUE(approvedLoad_, approvedLoad) };


          // axleCount Field Functions 
          bool hasAxleCount() const { return this->axleCount_ != nullptr;};
          void deleteAxleCount() { this->axleCount_ = nullptr;};
          inline string getAxleCount() const { DARABONBA_PTR_GET_DEFAULT(axleCount_, "") };
          inline Data& setAxleCount(string axleCount) { DARABONBA_PTR_SET_VALUE(axleCount_, axleCount) };


          // backWheelDistance Field Functions 
          bool hasBackWheelDistance() const { return this->backWheelDistance_ != nullptr;};
          void deleteBackWheelDistance() { this->backWheelDistance_ = nullptr;};
          inline string getBackWheelDistance() const { DARABONBA_PTR_GET_DEFAULT(backWheelDistance_, "") };
          inline Data& setBackWheelDistance(string backWheelDistance) { DARABONBA_PTR_SET_VALUE(backWheelDistance_, backWheelDistance) };


          // bankCard Field Functions 
          bool hasBankCard() const { return this->bankCard_ != nullptr;};
          void deleteBankCard() { this->bankCard_ = nullptr;};
          inline string getBankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
          inline Data& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


          // bizCode Field Functions 
          bool hasBizCode() const { return this->bizCode_ != nullptr;};
          void deleteBizCode() { this->bizCode_ = nullptr;};
          inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
          inline Data& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


          // brand Field Functions 
          bool hasBrand() const { return this->brand_ != nullptr;};
          void deleteBrand() { this->brand_ = nullptr;};
          inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
          inline Data& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


          // color Field Functions 
          bool hasColor() const { return this->color_ != nullptr;};
          void deleteColor() { this->color_ = nullptr;};
          inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
          inline Data& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


          // displacement Field Functions 
          bool hasDisplacement() const { return this->displacement_ != nullptr;};
          void deleteDisplacement() { this->displacement_ = nullptr;};
          inline string getDisplacement() const { DARABONBA_PTR_GET_DEFAULT(displacement_, "") };
          inline Data& setDisplacement(string displacement) { DARABONBA_PTR_SET_VALUE(displacement_, displacement) };


          // engineNum Field Functions 
          bool hasEngineNum() const { return this->engineNum_ != nullptr;};
          void deleteEngineNum() { this->engineNum_ = nullptr;};
          inline string getEngineNum() const { DARABONBA_PTR_GET_DEFAULT(engineNum_, "") };
          inline Data& setEngineNum(string engineNum) { DARABONBA_PTR_SET_VALUE(engineNum_, engineNum) };


          // engineType Field Functions 
          bool hasEngineType() const { return this->engineType_ != nullptr;};
          void deleteEngineType() { this->engineType_ = nullptr;};
          inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
          inline Data& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


          // frontWheelDistance Field Functions 
          bool hasFrontWheelDistance() const { return this->frontWheelDistance_ != nullptr;};
          void deleteFrontWheelDistance() { this->frontWheelDistance_ = nullptr;};
          inline string getFrontWheelDistance() const { DARABONBA_PTR_GET_DEFAULT(frontWheelDistance_, "") };
          inline Data& setFrontWheelDistance(string frontWheelDistance) { DARABONBA_PTR_SET_VALUE(frontWheelDistance_, frontWheelDistance) };


          // fuelType Field Functions 
          bool hasFuelType() const { return this->fuelType_ != nullptr;};
          void deleteFuelType() { this->fuelType_ = nullptr;};
          inline string getFuelType() const { DARABONBA_PTR_GET_DEFAULT(fuelType_, "") };
          inline Data& setFuelType(string fuelType) { DARABONBA_PTR_SET_VALUE(fuelType_, fuelType) };


          // inspectionDate Field Functions 
          bool hasInspectionDate() const { return this->inspectionDate_ != nullptr;};
          void deleteInspectionDate() { this->inspectionDate_ = nullptr;};
          inline string getInspectionDate() const { DARABONBA_PTR_GET_DEFAULT(inspectionDate_, "") };
          inline Data& setInspectionDate(string inspectionDate) { DARABONBA_PTR_SET_VALUE(inspectionDate_, inspectionDate) };


          // modelNum Field Functions 
          bool hasModelNum() const { return this->modelNum_ != nullptr;};
          void deleteModelNum() { this->modelNum_ = nullptr;};
          inline string getModelNum() const { DARABONBA_PTR_GET_DEFAULT(modelNum_, "") };
          inline Data& setModelNum(string modelNum) { DARABONBA_PTR_SET_VALUE(modelNum_, modelNum) };


          // power Field Functions 
          bool hasPower() const { return this->power_ != nullptr;};
          void deletePower() { this->power_ = nullptr;};
          inline string getPower() const { DARABONBA_PTR_GET_DEFAULT(power_, "") };
          inline Data& setPower(string power) { DARABONBA_PTR_SET_VALUE(power_, power) };


          // registrationDate Field Functions 
          bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
          void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
          inline string getRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
          inline Data& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


          // releaseDate Field Functions 
          bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
          void deleteReleaseDate() { this->releaseDate_ = nullptr;};
          inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
          inline Data& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


          // retirementDate Field Functions 
          bool hasRetirementDate() const { return this->retirementDate_ != nullptr;};
          void deleteRetirementDate() { this->retirementDate_ = nullptr;};
          inline string getRetirementDate() const { DARABONBA_PTR_GET_DEFAULT(retirementDate_, "") };
          inline Data& setRetirementDate(string retirementDate) { DARABONBA_PTR_SET_VALUE(retirementDate_, retirementDate) };


          // totalMass Field Functions 
          bool hasTotalMass() const { return this->totalMass_ != nullptr;};
          void deleteTotalMass() { this->totalMass_ = nullptr;};
          inline string getTotalMass() const { DARABONBA_PTR_GET_DEFAULT(totalMass_, "") };
          inline Data& setTotalMass(string totalMass) { DARABONBA_PTR_SET_VALUE(totalMass_, totalMass) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // unladenMass Field Functions 
          bool hasUnladenMass() const { return this->unladenMass_ != nullptr;};
          void deleteUnladenMass() { this->unladenMass_ = nullptr;};
          inline string getUnladenMass() const { DARABONBA_PTR_GET_DEFAULT(unladenMass_, "") };
          inline Data& setUnladenMass(string unladenMass) { DARABONBA_PTR_SET_VALUE(unladenMass_, unladenMass) };


          // useProperty Field Functions 
          bool hasUseProperty() const { return this->useProperty_ != nullptr;};
          void deleteUseProperty() { this->useProperty_ = nullptr;};
          inline string getUseProperty() const { DARABONBA_PTR_GET_DEFAULT(useProperty_, "") };
          inline Data& setUseProperty(string useProperty) { DARABONBA_PTR_SET_VALUE(useProperty_, useProperty) };


          // vehicleState Field Functions 
          bool hasVehicleState() const { return this->vehicleState_ != nullptr;};
          void deleteVehicleState() { this->vehicleState_ = nullptr;};
          inline string getVehicleState() const { DARABONBA_PTR_GET_DEFAULT(vehicleState_, "") };
          inline Data& setVehicleState(string vehicleState) { DARABONBA_PTR_SET_VALUE(vehicleState_, vehicleState) };


          // vin Field Functions 
          bool hasVin() const { return this->vin_ != nullptr;};
          void deleteVin() { this->vin_ = nullptr;};
          inline string getVin() const { DARABONBA_PTR_GET_DEFAULT(vin_, "") };
          inline Data& setVin(string vin) { DARABONBA_PTR_SET_VALUE(vin_, vin) };


          // wheelBase Field Functions 
          bool hasWheelBase() const { return this->wheelBase_ != nullptr;};
          void deleteWheelBase() { this->wheelBase_ = nullptr;};
          inline string getWheelBase() const { DARABONBA_PTR_GET_DEFAULT(wheelBase_, "") };
          inline Data& setWheelBase(string wheelBase) { DARABONBA_PTR_SET_VALUE(wheelBase_, wheelBase) };


        protected:
          shared_ptr<string> approvedCount_ {};
          shared_ptr<string> approvedLoad_ {};
          shared_ptr<string> axleCount_ {};
          shared_ptr<string> backWheelDistance_ {};
          shared_ptr<string> bankCard_ {};
          shared_ptr<string> bizCode_ {};
          shared_ptr<string> brand_ {};
          shared_ptr<string> color_ {};
          shared_ptr<string> displacement_ {};
          shared_ptr<string> engineNum_ {};
          shared_ptr<string> engineType_ {};
          shared_ptr<string> frontWheelDistance_ {};
          shared_ptr<string> fuelType_ {};
          shared_ptr<string> inspectionDate_ {};
          shared_ptr<string> modelNum_ {};
          shared_ptr<string> power_ {};
          shared_ptr<string> registrationDate_ {};
          shared_ptr<string> releaseDate_ {};
          shared_ptr<string> retirementDate_ {};
          shared_ptr<string> totalMass_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> unladenMass_ {};
          shared_ptr<string> useProperty_ {};
          shared_ptr<string> vehicleState_ {};
          shared_ptr<string> vin_ {};
          shared_ptr<string> wheelBase_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Response& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const Response::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Response::Data) };
        inline Response::Data getData() { DARABONBA_PTR_GET(data_, Response::Data) };
        inline Response& setData(const Response::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Response& setData(Response::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Response& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<Response::Data> data_ {};
        shared_ptr<string> message_ {};
      };

      class Request : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Request& obj) { 
          DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
          DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
          DARABONBA_PTR_TO_JSON(VehicleTypeName, vehicleTypeName_);
        };
        friend void from_json(const Darabonba::Json& j, Request& obj) { 
          DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
          DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
          DARABONBA_PTR_FROM_JSON(VehicleTypeName, vehicleTypeName_);
        };
        Request() = default ;
        Request(const Request &) = default ;
        Request(Request &&) = default ;
        Request(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Request() = default ;
        Request& operator=(const Request &) = default ;
        Request& operator=(Request &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vehicleNum_ == nullptr
        && this->vehicleType_ == nullptr && this->vehicleTypeName_ == nullptr; };
        // vehicleNum Field Functions 
        bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
        void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
        inline string getVehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
        inline Request& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


        // vehicleType Field Functions 
        bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
        void deleteVehicleType() { this->vehicleType_ = nullptr;};
        inline string getVehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
        inline Request& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


        // vehicleTypeName Field Functions 
        bool hasVehicleTypeName() const { return this->vehicleTypeName_ != nullptr;};
        void deleteVehicleTypeName() { this->vehicleTypeName_ = nullptr;};
        inline string getVehicleTypeName() const { DARABONBA_PTR_GET_DEFAULT(vehicleTypeName_, "") };
        inline Request& setVehicleTypeName(string vehicleTypeName) { DARABONBA_PTR_SET_VALUE(vehicleTypeName_, vehicleTypeName) };


      protected:
        shared_ptr<string> vehicleNum_ {};
        shared_ptr<string> vehicleType_ {};
        shared_ptr<string> vehicleTypeName_ {};
      };

      virtual bool empty() const override { return this->api_ == nullptr
        && this->apiName_ == nullptr && this->bankCard_ == nullptr && this->bizCode_ == nullptr && this->date_ == nullptr && this->identifyNum_ == nullptr
        && this->ispName_ == nullptr && this->mobile_ == nullptr && this->request_ == nullptr && this->requestId_ == nullptr && this->requestJson_ == nullptr
        && this->response_ == nullptr && this->responseJson_ == nullptr && this->subCode_ == nullptr && this->userName_ == nullptr && this->vehicleNum_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
      inline Items& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Items& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // bankCard Field Functions 
      bool hasBankCard() const { return this->bankCard_ != nullptr;};
      void deleteBankCard() { this->bankCard_ = nullptr;};
      inline string getBankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
      inline Items& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline Items& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Items& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // identifyNum Field Functions 
      bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
      void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
      inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
      inline Items& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline Items& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Items& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // request Field Functions 
      bool hasRequest() const { return this->request_ != nullptr;};
      void deleteRequest() { this->request_ = nullptr;};
      inline const Items::Request & getRequest() const { DARABONBA_PTR_GET_CONST(request_, Items::Request) };
      inline Items::Request getRequest() { DARABONBA_PTR_GET(request_, Items::Request) };
      inline Items& setRequest(const Items::Request & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
      inline Items& setRequest(Items::Request && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Items& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // requestJson Field Functions 
      bool hasRequestJson() const { return this->requestJson_ != nullptr;};
      void deleteRequestJson() { this->requestJson_ = nullptr;};
      inline string getRequestJson() const { DARABONBA_PTR_GET_DEFAULT(requestJson_, "") };
      inline Items& setRequestJson(string requestJson) { DARABONBA_PTR_SET_VALUE(requestJson_, requestJson) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Items::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Items::Response) };
      inline Items::Response getResponse() { DARABONBA_PTR_GET(response_, Items::Response) };
      inline Items& setResponse(const Items::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Items& setResponse(Items::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


      // responseJson Field Functions 
      bool hasResponseJson() const { return this->responseJson_ != nullptr;};
      void deleteResponseJson() { this->responseJson_ = nullptr;};
      inline string getResponseJson() const { DARABONBA_PTR_GET_DEFAULT(responseJson_, "") };
      inline Items& setResponseJson(string responseJson) { DARABONBA_PTR_SET_VALUE(responseJson_, responseJson) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Items& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // vehicleNum Field Functions 
      bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
      void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
      inline string getVehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
      inline Items& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


    protected:
      shared_ptr<string> api_ {};
      shared_ptr<string> apiName_ {};
      shared_ptr<string> bankCard_ {};
      shared_ptr<string> bizCode_ {};
      shared_ptr<string> date_ {};
      shared_ptr<string> identifyNum_ {};
      shared_ptr<string> ispName_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<Items::Request> request_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> requestJson_ {};
      shared_ptr<Items::Response> response_ {};
      shared_ptr<string> responseJson_ {};
      shared_ptr<string> subCode_ {};
      shared_ptr<string> userName_ {};
      shared_ptr<string> vehicleNum_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeMetaSearchPageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMetaSearchPageListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMetaSearchPageListResponseBody::Items>) };
    inline vector<DescribeMetaSearchPageListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeMetaSearchPageListResponseBody::Items>) };
    inline DescribeMetaSearchPageListResponseBody& setItems(const vector<DescribeMetaSearchPageListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMetaSearchPageListResponseBody& setItems(vector<DescribeMetaSearchPageListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetaSearchPageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetaSearchPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMetaSearchPageListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeMetaSearchPageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<DescribeMetaSearchPageListResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
