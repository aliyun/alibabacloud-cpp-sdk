// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYV2RESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYV2RESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleMetaVerifyV2ResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleMetaVerifyV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(VehicleInfo, vehicleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleMetaVerifyV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(VehicleInfo, vehicleInfo_);
    };
    VehicleMetaVerifyV2ResponseBodyResultObject() = default ;
    VehicleMetaVerifyV2ResponseBodyResultObject(const VehicleMetaVerifyV2ResponseBodyResultObject &) = default ;
    VehicleMetaVerifyV2ResponseBodyResultObject(VehicleMetaVerifyV2ResponseBodyResultObject &&) = default ;
    VehicleMetaVerifyV2ResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleMetaVerifyV2ResponseBodyResultObject() = default ;
    VehicleMetaVerifyV2ResponseBodyResultObject& operator=(const VehicleMetaVerifyV2ResponseBodyResultObject &) = default ;
    VehicleMetaVerifyV2ResponseBodyResultObject& operator=(VehicleMetaVerifyV2ResponseBodyResultObject &&) = default ;
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
    inline VehicleMetaVerifyV2ResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // vehicleInfo Field Functions 
    bool hasVehicleInfo() const { return this->vehicleInfo_ != nullptr;};
    void deleteVehicleInfo() { this->vehicleInfo_ = nullptr;};
    inline string vehicleInfo() const { DARABONBA_PTR_GET_DEFAULT(vehicleInfo_, "") };
    inline VehicleMetaVerifyV2ResponseBodyResultObject& setVehicleInfo(string vehicleInfo) { DARABONBA_PTR_SET_VALUE(vehicleInfo_, vehicleInfo) };


  protected:
    // Verification result code:
    // - **1**: Verification consistent.
    // - **2**: Verification inconsistent.
    // - **3**: No record found.
    std::shared_ptr<string> bizCode_ = nullptr;
    // Detailed vehicle information.
    std::shared_ptr<string> vehicleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
