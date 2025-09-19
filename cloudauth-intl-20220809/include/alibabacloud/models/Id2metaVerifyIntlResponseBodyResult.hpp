// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Id2MetaVerifyIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
    };
    Id2MetaVerifyIntlResponseBodyResult() = default ;
    Id2MetaVerifyIntlResponseBodyResult(const Id2MetaVerifyIntlResponseBodyResult &) = default ;
    Id2MetaVerifyIntlResponseBodyResult(Id2MetaVerifyIntlResponseBodyResult &&) = default ;
    Id2MetaVerifyIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyIntlResponseBodyResult() = default ;
    Id2MetaVerifyIntlResponseBodyResult& operator=(const Id2MetaVerifyIntlResponseBodyResult &) = default ;
    Id2MetaVerifyIntlResponseBodyResult& operator=(Id2MetaVerifyIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Id2MetaVerifyIntlResponseBodyResult& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


  protected:
    // The verification result:
    // 
    // - 1: The information is consistent. This result is billable.
    // 
    // - 2: The information is inconsistent. This result is billable.
    // 
    // - 3: No record is found. This result is not billable.
    std::shared_ptr<string> bizCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
