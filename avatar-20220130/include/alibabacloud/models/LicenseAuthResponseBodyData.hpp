// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LICENSEAUTHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LICENSEAUTHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class LicenseAuthResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LicenseAuthResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, LicenseAuthResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    LicenseAuthResponseBodyData() = default ;
    LicenseAuthResponseBodyData(const LicenseAuthResponseBodyData &) = default ;
    LicenseAuthResponseBodyData(LicenseAuthResponseBodyData &&) = default ;
    LicenseAuthResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LicenseAuthResponseBodyData() = default ;
    LicenseAuthResponseBodyData& operator=(const LicenseAuthResponseBodyData &) = default ;
    LicenseAuthResponseBodyData& operator=(LicenseAuthResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->token_ != nullptr; };
    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline LicenseAuthResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
