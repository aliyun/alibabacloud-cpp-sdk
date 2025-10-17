// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Id2MetaPeriodVerifyIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaPeriodVerifyIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaPeriodVerifyIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    Id2MetaPeriodVerifyIntlResponseBodyResult() = default ;
    Id2MetaPeriodVerifyIntlResponseBodyResult(const Id2MetaPeriodVerifyIntlResponseBodyResult &) = default ;
    Id2MetaPeriodVerifyIntlResponseBodyResult(Id2MetaPeriodVerifyIntlResponseBodyResult &&) = default ;
    Id2MetaPeriodVerifyIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaPeriodVerifyIntlResponseBodyResult() = default ;
    Id2MetaPeriodVerifyIntlResponseBodyResult& operator=(const Id2MetaPeriodVerifyIntlResponseBodyResult &) = default ;
    Id2MetaPeriodVerifyIntlResponseBodyResult& operator=(Id2MetaPeriodVerifyIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passed_ == nullptr
        && return this->subCode_ == nullptr; };
    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline Id2MetaPeriodVerifyIntlResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline Id2MetaPeriodVerifyIntlResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // The final authentication result. Valid values:
    // 
    // - **Y**, via
    // 
    // - **N**: The authentication is not passed.
    std::shared_ptr<string> passed_ = nullptr;
    // A description of the authentication result. For more information, see [ResultObject.SubCode error codes](https://www.alibabacloud.com/help/en/ekyc/latest/dateverify?spm=a2c63.p38356.0.i32#d1f36d445az8i).
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
