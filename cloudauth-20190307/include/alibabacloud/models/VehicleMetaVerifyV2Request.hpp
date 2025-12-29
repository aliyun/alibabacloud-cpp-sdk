// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleMetaVerifyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleMetaVerifyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_TO_JSON(VerifyMetaType, verifyMetaType_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleMetaVerifyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_FROM_JSON(VerifyMetaType, verifyMetaType_);
    };
    VehicleMetaVerifyV2Request() = default ;
    VehicleMetaVerifyV2Request(const VehicleMetaVerifyV2Request &) = default ;
    VehicleMetaVerifyV2Request(VehicleMetaVerifyV2Request &&) = default ;
    VehicleMetaVerifyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleMetaVerifyV2Request() = default ;
    VehicleMetaVerifyV2Request& operator=(const VehicleMetaVerifyV2Request &) = default ;
    VehicleMetaVerifyV2Request& operator=(VehicleMetaVerifyV2Request &&) = default ;
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
    inline VehicleMetaVerifyV2Request& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline VehicleMetaVerifyV2Request& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline VehicleMetaVerifyV2Request& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string getVehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline VehicleMetaVerifyV2Request& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string getVehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline VehicleMetaVerifyV2Request& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


    // verifyMetaType Field Functions 
    bool hasVerifyMetaType() const { return this->verifyMetaType_ != nullptr;};
    void deleteVerifyMetaType() { this->verifyMetaType_ = nullptr;};
    inline string getVerifyMetaType() const { DARABONBA_PTR_GET_DEFAULT(verifyMetaType_, "") };
    inline VehicleMetaVerifyV2Request& setVerifyMetaType(string verifyMetaType) { DARABONBA_PTR_SET_VALUE(verifyMetaType_, verifyMetaType) };


  protected:
    // ID number.
    // 
    // This is a required field when VerifyMetaType is VEHICLE_3_META.
    // 
    // > 
    // > - When paramType is normal, enter plain text.
    // > - When paramType is md5, enter the first 6 digits in plain text + MD5 (32 lowercase) of the birth date + the last 4 digits in plain text.
    shared_ptr<string> identifyNum_ {};
    // Parameter type:
    // 
    // - normal: Unencrypted.
    // - md5: Md5 encrypted.
    shared_ptr<string> paramType_ {};
    // Name
    // > 
    // > - When paramType is normal, enter plain text.
    // > - When paramType is md5, enter the first character of the name as MD5 (32 lowercase) + the rest of the name in plain text.
    shared_ptr<string> userName_ {};
    // License plate number
    // 
    // > 
    // > - When paramType is normal, enter plain text.
    // > - When paramType is md5, enter all but the last two characters in plain text + the last two characters as MD5 (32 lowercase).
    shared_ptr<string> vehicleNum_ {};
    // Vehicle type
    shared_ptr<string> vehicleType_ {};
    // Verification type
    // 
    // > 
    // > - VEHICLE_2_META: Two-element verification, name + license plate number verification;
    // > - VEHICLE_3_META: Three-element verification, name + license plate number + ID number verification;
    shared_ptr<string> verifyMetaType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
