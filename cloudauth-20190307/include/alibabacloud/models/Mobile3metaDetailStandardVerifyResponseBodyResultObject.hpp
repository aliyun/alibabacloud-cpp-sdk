// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METADETAILSTANDARDVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METADETAILSTANDARDVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaDetailStandardVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaDetailStandardVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaDetailStandardVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    Mobile3MetaDetailStandardVerifyResponseBodyResultObject() = default ;
    Mobile3MetaDetailStandardVerifyResponseBodyResultObject(const Mobile3MetaDetailStandardVerifyResponseBodyResultObject &) = default ;
    Mobile3MetaDetailStandardVerifyResponseBodyResultObject(Mobile3MetaDetailStandardVerifyResponseBodyResultObject &&) = default ;
    Mobile3MetaDetailStandardVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaDetailStandardVerifyResponseBodyResultObject() = default ;
    Mobile3MetaDetailStandardVerifyResponseBodyResultObject& operator=(const Mobile3MetaDetailStandardVerifyResponseBodyResultObject &) = default ;
    Mobile3MetaDetailStandardVerifyResponseBodyResultObject& operator=(Mobile3MetaDetailStandardVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr
        && this->ispName_ != nullptr && this->subCode_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Mobile3MetaDetailStandardVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline Mobile3MetaDetailStandardVerifyResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline Mobile3MetaDetailStandardVerifyResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Verification result code:
    // - **1**: Verification matches.
    // - **2**: Verification does not match.
    // - **3**: No record found.
    std::shared_ptr<string> bizCode_ = nullptr;
    // ISP name:
    // 
    // - **CMCC**: China Mobile.
    // - **CUCC**: China Unicom.
    // - **CTCC**: China Telecom.
    // - **CBCC**: China Broadcasting Network.
    std::shared_ptr<string> ispName_ = nullptr;
    // Detailed verification results:
    // 
    // - 101: Passed, three elements are consistent.
    // - 201: The phone number does not match the name and ID number.
    // - 202: The phone number matches the name but does not match the ID number.
    // - 203: The phone number does not match the name but matches the ID number.
    // - 204: Other inconsistencies.
    // - 301: No record found.
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
