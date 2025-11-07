// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEDETECTRESPONSEBODYRESULTOBJECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_MOBILEDETECTRESPONSEBODYRESULTOBJECTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileDetectResponseBodyResultObjectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileDetectResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, MobileDetectResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    MobileDetectResponseBodyResultObjectItems() = default ;
    MobileDetectResponseBodyResultObjectItems(const MobileDetectResponseBodyResultObjectItems &) = default ;
    MobileDetectResponseBodyResultObjectItems(MobileDetectResponseBodyResultObjectItems &&) = default ;
    MobileDetectResponseBodyResultObjectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileDetectResponseBodyResultObjectItems() = default ;
    MobileDetectResponseBodyResultObjectItems& operator=(const MobileDetectResponseBodyResultObjectItems &) = default ;
    MobileDetectResponseBodyResultObjectItems& operator=(MobileDetectResponseBodyResultObjectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->bizCode_ == nullptr && return this->ispName_ == nullptr && return this->mobile_ == nullptr && return this->subCode_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline MobileDetectResponseBodyResultObjectItems& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline MobileDetectResponseBodyResultObjectItems& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline MobileDetectResponseBodyResultObjectItems& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline MobileDetectResponseBodyResultObjectItems& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline MobileDetectResponseBodyResultObjectItems& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Phone number\\"s area (only for plaintext phone numbers)
    std::shared_ptr<string> area_ = nullptr;
    // Verification result
    // 
    // - 1: Available online 
    // - 2: Not available online
    // - 3: No query result
    std::shared_ptr<string> bizCode_ = nullptr;
    // Operator name
    // 
    // - CMCC: China Mobile 
    // - CUCC: China Unicom 
    // - CTCC: China Telecom
    std::shared_ptr<string> ispName_ = nullptr;
    // Phone number
    std::shared_ptr<string> mobile_ = nullptr;
    // Verification details
    // 
    // - 101: Available number
    // - 102: Empty number
    // - 103: Suspended 
    // - 104: Silent number (inactive small number, new number, non-smartphone user within the last six months) 
    // - 105: Risky number (long-term shutdown or no voice service activated and prone to complaints)
    // - 301: No record found
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
