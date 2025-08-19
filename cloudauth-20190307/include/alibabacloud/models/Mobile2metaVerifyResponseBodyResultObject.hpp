// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE2METAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILE2METAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile2MetaVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile2MetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile2MetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    Mobile2MetaVerifyResponseBodyResultObject() = default ;
    Mobile2MetaVerifyResponseBodyResultObject(const Mobile2MetaVerifyResponseBodyResultObject &) = default ;
    Mobile2MetaVerifyResponseBodyResultObject(Mobile2MetaVerifyResponseBodyResultObject &&) = default ;
    Mobile2MetaVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile2MetaVerifyResponseBodyResultObject() = default ;
    Mobile2MetaVerifyResponseBodyResultObject& operator=(const Mobile2MetaVerifyResponseBodyResultObject &) = default ;
    Mobile2MetaVerifyResponseBodyResultObject& operator=(Mobile2MetaVerifyResponseBodyResultObject &&) = default ;
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
    inline Mobile2MetaVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline Mobile2MetaVerifyResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    // Verification result:
    // - 1: Consistent verification
    // - 2: Inconsistent verification
    // - 3: No record found
    std::shared_ptr<string> bizCode_ = nullptr;
    // Operator name:
    // - CMCC: China Mobile
    // - CUCC: China Unicom
    // - CTCC: China Telecom
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
