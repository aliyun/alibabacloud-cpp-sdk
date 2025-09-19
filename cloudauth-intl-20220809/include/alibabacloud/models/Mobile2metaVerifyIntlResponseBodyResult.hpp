// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE2METAVERIFYINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MOBILE2METAVERIFYINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Mobile2MetaVerifyIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile2MetaVerifyIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile2MetaVerifyIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    Mobile2MetaVerifyIntlResponseBodyResult() = default ;
    Mobile2MetaVerifyIntlResponseBodyResult(const Mobile2MetaVerifyIntlResponseBodyResult &) = default ;
    Mobile2MetaVerifyIntlResponseBodyResult(Mobile2MetaVerifyIntlResponseBodyResult &&) = default ;
    Mobile2MetaVerifyIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile2MetaVerifyIntlResponseBodyResult() = default ;
    Mobile2MetaVerifyIntlResponseBodyResult& operator=(const Mobile2MetaVerifyIntlResponseBodyResult &) = default ;
    Mobile2MetaVerifyIntlResponseBodyResult& operator=(Mobile2MetaVerifyIntlResponseBodyResult &&) = default ;
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
    inline Mobile2MetaVerifyIntlResponseBodyResult& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline Mobile2MetaVerifyIntlResponseBodyResult& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    // The verification result:
    // 
    // - 1: The information is consistent. (Billed)
    // 
    // - 2: The information is inconsistent. (Billed)
    // 
    // - 3: No record is found. (Not billed)
    std::shared_ptr<string> bizCode_ = nullptr;
    // The carrier name:
    // 
    // - CMCC: China Mobile
    // 
    // - CUCC: China Unicom
    // 
    // - CTCC: China Telecom
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
