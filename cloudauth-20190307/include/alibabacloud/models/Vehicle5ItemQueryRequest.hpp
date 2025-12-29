// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLE5ITEMQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VEHICLE5ITEMQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Vehicle5ItemQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Vehicle5ItemQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
    };
    friend void from_json(const Darabonba::Json& j, Vehicle5ItemQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
    };
    Vehicle5ItemQueryRequest() = default ;
    Vehicle5ItemQueryRequest(const Vehicle5ItemQueryRequest &) = default ;
    Vehicle5ItemQueryRequest(Vehicle5ItemQueryRequest &&) = default ;
    Vehicle5ItemQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Vehicle5ItemQueryRequest() = default ;
    Vehicle5ItemQueryRequest& operator=(const Vehicle5ItemQueryRequest &) = default ;
    Vehicle5ItemQueryRequest& operator=(Vehicle5ItemQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramType_ == nullptr
        && this->vehicleNum_ == nullptr && this->vehicleType_ == nullptr; };
    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Vehicle5ItemQueryRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string getVehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline Vehicle5ItemQueryRequest& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string getVehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline Vehicle5ItemQueryRequest& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


  protected:
    // Parameter type:
    // 
    // - **normal**: Unencrypted.
    // - **md5**: MD5 encrypted.
    shared_ptr<string> paramType_ {};
    // License plate number
    // 
    // > 
    // > - When paramType is set to normal, enter the plain text.
    // > - When paramType is set to md5, enter the plain text of all but the last two characters of the license plate + MD5 encryption (32-bit lowercase MD5) of the last two characters.
    shared_ptr<string> vehicleNum_ {};
    // Vehicle type
    // 
    // > 
    // > - 02: Ordinary passenger car
    // > - 52: New energy passenger car
    shared_ptr<string> vehicleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
