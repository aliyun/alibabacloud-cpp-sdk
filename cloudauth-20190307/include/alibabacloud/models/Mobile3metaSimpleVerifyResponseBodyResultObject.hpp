// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METASIMPLEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METASIMPLEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaSimpleVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaSimpleVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaSimpleVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    Mobile3MetaSimpleVerifyResponseBodyResultObject() = default ;
    Mobile3MetaSimpleVerifyResponseBodyResultObject(const Mobile3MetaSimpleVerifyResponseBodyResultObject &) = default ;
    Mobile3MetaSimpleVerifyResponseBodyResultObject(Mobile3MetaSimpleVerifyResponseBodyResultObject &&) = default ;
    Mobile3MetaSimpleVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaSimpleVerifyResponseBodyResultObject() = default ;
    Mobile3MetaSimpleVerifyResponseBodyResultObject& operator=(const Mobile3MetaSimpleVerifyResponseBodyResultObject &) = default ;
    Mobile3MetaSimpleVerifyResponseBodyResultObject& operator=(Mobile3MetaSimpleVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr
        && this->ispName_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Mobile3MetaSimpleVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline Mobile3MetaSimpleVerifyResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    // Verification result code:
    // - **1**: Verification consistent.
    // - **2**: Verification inconsistent.
    // - **3**: No record found.
    std::shared_ptr<string> bizCode_ = nullptr;
    // ISP name:
    // 
    // - **CMCC**: China Mobile.
    // - **CUCC**: China Unicom.
    // - **CTCC**: China Telecom.
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
