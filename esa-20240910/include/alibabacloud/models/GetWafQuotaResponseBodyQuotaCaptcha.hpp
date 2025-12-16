// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTACAPTCHA_HPP_
#define ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTACAPTCHA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafQuotaInteger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafQuotaResponseBodyQuotaCaptcha : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafQuotaResponseBodyQuotaCaptcha& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafQuotaResponseBodyQuotaCaptcha& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
    };
    GetWafQuotaResponseBodyQuotaCaptcha() = default ;
    GetWafQuotaResponseBodyQuotaCaptcha(const GetWafQuotaResponseBodyQuotaCaptcha &) = default ;
    GetWafQuotaResponseBodyQuotaCaptcha(GetWafQuotaResponseBodyQuotaCaptcha &&) = default ;
    GetWafQuotaResponseBodyQuotaCaptcha(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafQuotaResponseBodyQuotaCaptcha() = default ;
    GetWafQuotaResponseBodyQuotaCaptcha& operator=(const GetWafQuotaResponseBodyQuotaCaptcha &) = default ;
    GetWafQuotaResponseBodyQuotaCaptcha& operator=(GetWafQuotaResponseBodyQuotaCaptcha &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->numberTotal_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetWafQuotaResponseBodyQuotaCaptcha& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // numberTotal Field Functions 
    bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
    void deleteNumberTotal() { this->numberTotal_ = nullptr;};
    inline const Models::WafQuotaInteger & numberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger numberTotal() { DARABONBA_PTR_GET(numberTotal_, Models::WafQuotaInteger) };
    inline GetWafQuotaResponseBodyQuotaCaptcha& setNumberTotal(const Models::WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
    inline GetWafQuotaResponseBodyQuotaCaptcha& setNumberTotal(Models::WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<Models::WafQuotaInteger> numberTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
