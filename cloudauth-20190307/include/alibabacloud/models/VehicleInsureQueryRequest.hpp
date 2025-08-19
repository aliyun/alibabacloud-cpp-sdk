// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleInsureQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleInsureQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_TO_JSON(Vin, vin_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleInsureQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_FROM_JSON(Vin, vin_);
    };
    VehicleInsureQueryRequest() = default ;
    VehicleInsureQueryRequest(const VehicleInsureQueryRequest &) = default ;
    VehicleInsureQueryRequest(VehicleInsureQueryRequest &&) = default ;
    VehicleInsureQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleInsureQueryRequest() = default ;
    VehicleInsureQueryRequest& operator=(const VehicleInsureQueryRequest &) = default ;
    VehicleInsureQueryRequest& operator=(VehicleInsureQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramType_ != nullptr
        && this->vehicleNum_ != nullptr && this->vehicleType_ != nullptr && this->vin_ != nullptr; };
    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline VehicleInsureQueryRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string vehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline VehicleInsureQueryRequest& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string vehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline VehicleInsureQueryRequest& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


    // vin Field Functions 
    bool hasVin() const { return this->vin_ != nullptr;};
    void deleteVin() { this->vin_ = nullptr;};
    inline string vin() const { DARABONBA_PTR_GET_DEFAULT(vin_, "") };
    inline VehicleInsureQueryRequest& setVin(string vin) { DARABONBA_PTR_SET_VALUE(vin_, vin) };


  protected:
    // Parameter type:
    // 
    // - **normal**: Unencrypted.
    // - **md5**: MD5 encrypted.
    std::shared_ptr<string> paramType_ = nullptr;
    // License plate number
    // > 
    // > - When `paramType` is set to `normal`, enter the plain text.
    // > - When `paramType` is set to `md5`, enter the plain text of all but the last two characters of the license plate + the MD5 encryption (32 lowercase characters) of the last two characters of the license plate.
    std::shared_ptr<string> vehicleNum_ = nullptr;
    // Driver\\"s license vehicle type.
    std::shared_ptr<string> vehicleType_ = nullptr;
    // Vehicle identification code, i.e., the vehicle VIN
    // 
    // 
    // > 
    // > - When `paramType` is set to `normal`, enter the plain text.
    // > - When `paramType` is set to `md5`, enter the plain text of all but the last four characters of the VIN + the MD5 encryption (32 lowercase characters) of the last four characters of the VIN.
    std::shared_ptr<string> vin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
