// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleMetaVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleMetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleMetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
    };
    VehicleMetaVerifyResponseBodyResultObject() = default ;
    VehicleMetaVerifyResponseBodyResultObject(const VehicleMetaVerifyResponseBodyResultObject &) = default ;
    VehicleMetaVerifyResponseBodyResultObject(VehicleMetaVerifyResponseBodyResultObject &&) = default ;
    VehicleMetaVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleMetaVerifyResponseBodyResultObject() = default ;
    VehicleMetaVerifyResponseBodyResultObject& operator=(const VehicleMetaVerifyResponseBodyResultObject &) = default ;
    VehicleMetaVerifyResponseBodyResultObject& operator=(VehicleMetaVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline VehicleMetaVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


  protected:
    // Verification result.
    // 
    // - 1: Consistent (billable)
    // - 2: Inconsistent (billable)
    // - 3: No record found (non-billable)
    std::shared_ptr<string> bizCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
