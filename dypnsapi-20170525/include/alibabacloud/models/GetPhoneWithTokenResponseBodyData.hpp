// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONEWITHTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPHONEWITHTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetPhoneWithTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneWithTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneWithTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
    };
    GetPhoneWithTokenResponseBodyData() = default ;
    GetPhoneWithTokenResponseBodyData(const GetPhoneWithTokenResponseBodyData &) = default ;
    GetPhoneWithTokenResponseBodyData(GetPhoneWithTokenResponseBodyData &&) = default ;
    GetPhoneWithTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneWithTokenResponseBodyData() = default ;
    GetPhoneWithTokenResponseBodyData& operator=(const GetPhoneWithTokenResponseBodyData &) = default ;
    GetPhoneWithTokenResponseBodyData& operator=(GetPhoneWithTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobile_ != nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetPhoneWithTokenResponseBodyData& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


  protected:
    // The phone number.
    std::shared_ptr<string> mobile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
