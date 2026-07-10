// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleMetaVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleMetaVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_TO_JSON(VerifyMetaType, verifyMetaType_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleMetaVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_FROM_JSON(VerifyMetaType, verifyMetaType_);
    };
    VehicleMetaVerifyRequest() = default ;
    VehicleMetaVerifyRequest(const VehicleMetaVerifyRequest &) = default ;
    VehicleMetaVerifyRequest(VehicleMetaVerifyRequest &&) = default ;
    VehicleMetaVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleMetaVerifyRequest() = default ;
    VehicleMetaVerifyRequest& operator=(const VehicleMetaVerifyRequest &) = default ;
    VehicleMetaVerifyRequest& operator=(VehicleMetaVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyNum_ == nullptr
        && this->paramType_ == nullptr && this->userName_ == nullptr && this->vehicleNum_ == nullptr && this->vehicleType_ == nullptr && this->verifyMetaType_ == nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline VehicleMetaVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline VehicleMetaVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline VehicleMetaVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string getVehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline VehicleMetaVerifyRequest& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string getVehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline VehicleMetaVerifyRequest& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


    // verifyMetaType Field Functions 
    bool hasVerifyMetaType() const { return this->verifyMetaType_ != nullptr;};
    void deleteVerifyMetaType() { this->verifyMetaType_ = nullptr;};
    inline string getVerifyMetaType() const { DARABONBA_PTR_GET_DEFAULT(verifyMetaType_, "") };
    inline VehicleMetaVerifyRequest& setVerifyMetaType(string verifyMetaType) { DARABONBA_PTR_SET_VALUE(verifyMetaType_, verifyMetaType) };


  protected:
    // The ID card number.
    // 
    // This parameter is required when VerifyMetaType is set to VEHICLE_3_META.
    // > 
    // > - When paramType is set to normal, enter the plaintext.
    // > - When paramType is set to md5, enter the first 6 digits of the ID card number in plaintext + the MD5-encrypted date of birth (32-bit lowercase MD5) + the last 4 digits of the ID card number.
    shared_ptr<string> identifyNum_ {};
    // The parameter type. Valid values:
    // 
    // - normal: not encrypted.
    // - md5: MD5-encrypted.
    shared_ptr<string> paramType_ {};
    // The name.
    // 
    // > Note
    // > - When paramType is set to normal, enter the plaintext.
    // > - When paramType is set to md5, enter the MD5-encrypted first character of the name (32-bit lowercase MD5) + the remaining characters of the name in plaintext.
    shared_ptr<string> userName_ {};
    // The license plate number.
    // 
    // > 
    // > - When paramType is set to normal, enter the plaintext.
    // > - When paramType is set to md5, enter the characters of the license plate number except the last two in plaintext + the MD5-encrypted last two characters (32-bit lowercase MD5).
    shared_ptr<string> vehicleNum_ {};
    // The vehicle type.
    shared_ptr<string> vehicleType_ {};
    // The verification type.
    // 
    // > 
    // > - VEHICLE_2_META: two-element verification. Verifies the name and license plate number.
    // > - VEHICLE_3_META: three-element verification. Verifies the name, license plate number, and ID card number.
    shared_ptr<string> verifyMetaType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
