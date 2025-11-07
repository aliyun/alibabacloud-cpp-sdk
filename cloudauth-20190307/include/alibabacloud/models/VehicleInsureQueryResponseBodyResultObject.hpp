// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleInsureQueryResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleInsureQueryResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(VehicleInfo, vehicleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleInsureQueryResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(VehicleInfo, vehicleInfo_);
    };
    VehicleInsureQueryResponseBodyResultObject() = default ;
    VehicleInsureQueryResponseBodyResultObject(const VehicleInsureQueryResponseBodyResultObject &) = default ;
    VehicleInsureQueryResponseBodyResultObject(VehicleInsureQueryResponseBodyResultObject &&) = default ;
    VehicleInsureQueryResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleInsureQueryResponseBodyResultObject() = default ;
    VehicleInsureQueryResponseBodyResultObject& operator=(const VehicleInsureQueryResponseBodyResultObject &) = default ;
    VehicleInsureQueryResponseBodyResultObject& operator=(VehicleInsureQueryResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->vehicleInfo_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline VehicleInsureQueryResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // vehicleInfo Field Functions 
    bool hasVehicleInfo() const { return this->vehicleInfo_ != nullptr;};
    void deleteVehicleInfo() { this->vehicleInfo_ = nullptr;};
    inline string vehicleInfo() const { DARABONBA_PTR_GET_DEFAULT(vehicleInfo_, "") };
    inline VehicleInsureQueryResponseBodyResultObject& setVehicleInfo(string vehicleInfo) { DARABONBA_PTR_SET_VALUE(vehicleInfo_, vehicleInfo) };


  protected:
    // Verification result code:
    // 
    // > 
    // > - 1: Found (charged)
    // > - 3: No record found (not charged)
    std::shared_ptr<string> bizCode_ = nullptr;
    // Insurance date information
    std::shared_ptr<string> vehicleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
