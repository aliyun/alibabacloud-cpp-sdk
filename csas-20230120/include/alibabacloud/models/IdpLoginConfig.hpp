// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPLOGINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPLOGINCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpLoginConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpLoginConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MobileLoginType, mobileLoginType_);
      DARABONBA_PTR_TO_JSON(MobileMfaTypes, mobileMfaTypes_);
      DARABONBA_PTR_TO_JSON(PcLoginType, pcLoginType_);
      DARABONBA_PTR_TO_JSON(PcMfaTypes, pcMfaTypes_);
      DARABONBA_PTR_TO_JSON(TotpCorpVerifyAesKey, totpCorpVerifyAesKey_);
      DARABONBA_PTR_TO_JSON(TotpCorpVerifyToken, totpCorpVerifyToken_);
      DARABONBA_PTR_TO_JSON(TotpCorpVerifyUrl, totpCorpVerifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, IdpLoginConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileLoginType, mobileLoginType_);
      DARABONBA_PTR_FROM_JSON(MobileMfaTypes, mobileMfaTypes_);
      DARABONBA_PTR_FROM_JSON(PcLoginType, pcLoginType_);
      DARABONBA_PTR_FROM_JSON(PcMfaTypes, pcMfaTypes_);
      DARABONBA_PTR_FROM_JSON(TotpCorpVerifyAesKey, totpCorpVerifyAesKey_);
      DARABONBA_PTR_FROM_JSON(TotpCorpVerifyToken, totpCorpVerifyToken_);
      DARABONBA_PTR_FROM_JSON(TotpCorpVerifyUrl, totpCorpVerifyUrl_);
    };
    IdpLoginConfig() = default ;
    IdpLoginConfig(const IdpLoginConfig &) = default ;
    IdpLoginConfig(IdpLoginConfig &&) = default ;
    IdpLoginConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpLoginConfig() = default ;
    IdpLoginConfig& operator=(const IdpLoginConfig &) = default ;
    IdpLoginConfig& operator=(IdpLoginConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobileLoginType_ != nullptr
        && this->mobileMfaTypes_ != nullptr && this->pcLoginType_ != nullptr && this->pcMfaTypes_ != nullptr && this->totpCorpVerifyAesKey_ != nullptr && this->totpCorpVerifyToken_ != nullptr
        && this->totpCorpVerifyUrl_ != nullptr; };
    // mobileLoginType Field Functions 
    bool hasMobileLoginType() const { return this->mobileLoginType_ != nullptr;};
    void deleteMobileLoginType() { this->mobileLoginType_ = nullptr;};
    inline string mobileLoginType() const { DARABONBA_PTR_GET_DEFAULT(mobileLoginType_, "") };
    inline IdpLoginConfig& setMobileLoginType(string mobileLoginType) { DARABONBA_PTR_SET_VALUE(mobileLoginType_, mobileLoginType) };


    // mobileMfaTypes Field Functions 
    bool hasMobileMfaTypes() const { return this->mobileMfaTypes_ != nullptr;};
    void deleteMobileMfaTypes() { this->mobileMfaTypes_ = nullptr;};
    inline string mobileMfaTypes() const { DARABONBA_PTR_GET_DEFAULT(mobileMfaTypes_, "") };
    inline IdpLoginConfig& setMobileMfaTypes(string mobileMfaTypes) { DARABONBA_PTR_SET_VALUE(mobileMfaTypes_, mobileMfaTypes) };


    // pcLoginType Field Functions 
    bool hasPcLoginType() const { return this->pcLoginType_ != nullptr;};
    void deletePcLoginType() { this->pcLoginType_ = nullptr;};
    inline string pcLoginType() const { DARABONBA_PTR_GET_DEFAULT(pcLoginType_, "") };
    inline IdpLoginConfig& setPcLoginType(string pcLoginType) { DARABONBA_PTR_SET_VALUE(pcLoginType_, pcLoginType) };


    // pcMfaTypes Field Functions 
    bool hasPcMfaTypes() const { return this->pcMfaTypes_ != nullptr;};
    void deletePcMfaTypes() { this->pcMfaTypes_ = nullptr;};
    inline string pcMfaTypes() const { DARABONBA_PTR_GET_DEFAULT(pcMfaTypes_, "") };
    inline IdpLoginConfig& setPcMfaTypes(string pcMfaTypes) { DARABONBA_PTR_SET_VALUE(pcMfaTypes_, pcMfaTypes) };


    // totpCorpVerifyAesKey Field Functions 
    bool hasTotpCorpVerifyAesKey() const { return this->totpCorpVerifyAesKey_ != nullptr;};
    void deleteTotpCorpVerifyAesKey() { this->totpCorpVerifyAesKey_ = nullptr;};
    inline string totpCorpVerifyAesKey() const { DARABONBA_PTR_GET_DEFAULT(totpCorpVerifyAesKey_, "") };
    inline IdpLoginConfig& setTotpCorpVerifyAesKey(string totpCorpVerifyAesKey) { DARABONBA_PTR_SET_VALUE(totpCorpVerifyAesKey_, totpCorpVerifyAesKey) };


    // totpCorpVerifyToken Field Functions 
    bool hasTotpCorpVerifyToken() const { return this->totpCorpVerifyToken_ != nullptr;};
    void deleteTotpCorpVerifyToken() { this->totpCorpVerifyToken_ = nullptr;};
    inline string totpCorpVerifyToken() const { DARABONBA_PTR_GET_DEFAULT(totpCorpVerifyToken_, "") };
    inline IdpLoginConfig& setTotpCorpVerifyToken(string totpCorpVerifyToken) { DARABONBA_PTR_SET_VALUE(totpCorpVerifyToken_, totpCorpVerifyToken) };


    // totpCorpVerifyUrl Field Functions 
    bool hasTotpCorpVerifyUrl() const { return this->totpCorpVerifyUrl_ != nullptr;};
    void deleteTotpCorpVerifyUrl() { this->totpCorpVerifyUrl_ = nullptr;};
    inline string totpCorpVerifyUrl() const { DARABONBA_PTR_GET_DEFAULT(totpCorpVerifyUrl_, "") };
    inline IdpLoginConfig& setTotpCorpVerifyUrl(string totpCorpVerifyUrl) { DARABONBA_PTR_SET_VALUE(totpCorpVerifyUrl_, totpCorpVerifyUrl) };


  protected:
    std::shared_ptr<string> mobileLoginType_ = nullptr;
    std::shared_ptr<string> mobileMfaTypes_ = nullptr;
    std::shared_ptr<string> pcLoginType_ = nullptr;
    std::shared_ptr<string> pcMfaTypes_ = nullptr;
    std::shared_ptr<string> totpCorpVerifyAesKey_ = nullptr;
    std::shared_ptr<string> totpCorpVerifyToken_ = nullptr;
    std::shared_ptr<string> totpCorpVerifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
