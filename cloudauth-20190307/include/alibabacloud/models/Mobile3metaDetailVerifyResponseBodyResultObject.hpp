// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaDetailVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaDetailVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaDetailVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    Mobile3MetaDetailVerifyResponseBodyResultObject() = default ;
    Mobile3MetaDetailVerifyResponseBodyResultObject(const Mobile3MetaDetailVerifyResponseBodyResultObject &) = default ;
    Mobile3MetaDetailVerifyResponseBodyResultObject(Mobile3MetaDetailVerifyResponseBodyResultObject &&) = default ;
    Mobile3MetaDetailVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaDetailVerifyResponseBodyResultObject() = default ;
    Mobile3MetaDetailVerifyResponseBodyResultObject& operator=(const Mobile3MetaDetailVerifyResponseBodyResultObject &) = default ;
    Mobile3MetaDetailVerifyResponseBodyResultObject& operator=(Mobile3MetaDetailVerifyResponseBodyResultObject &&) = default ;
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
    inline Mobile3MetaDetailVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline Mobile3MetaDetailVerifyResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline Mobile3MetaDetailVerifyResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Verification result code:
    // - **1**: Verification consistent.
    // - **2**: Verification inconsistent.
    // - **3**: No record found.
    std::shared_ptr<string> bizCode_ = nullptr;
    // Operator name:
    // 
    // - **CMCC**: China Mobile.
    // - **CUCC**: China Unicom.
    // - **CTCC**: China Telecom.
    std::shared_ptr<string> ispName_ = nullptr;
    // Detailed verification results:
    // 
    // - **101**: Verification passed.
    // - **201**: Mobile number and name do not match, mobile number and ID number do not match.
    // - **202**: Mobile number and name match, but mobile number and ID number do not match.
    // - **203**: Mobile number and ID number match, but mobile number and name do not match.
    // - **204**: Other inconsistencies.
    // - **301**: No record found.
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
