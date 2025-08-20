// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFORAPPRESPONSEBODYRETVALUE_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFORAPPRESPONSEBODYRETVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetAccountForAppResponseBodyRetValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountForAppResponseBodyRetValue& obj) { 
      DARABONBA_PTR_TO_JSON(IsVip, isVip_);
      DARABONBA_PTR_TO_JSON(StrVipExpire, strVipExpire_);
      DARABONBA_PTR_TO_JSON(VipExpireAt, vipExpireAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountForAppResponseBodyRetValue& obj) { 
      DARABONBA_PTR_FROM_JSON(IsVip, isVip_);
      DARABONBA_PTR_FROM_JSON(StrVipExpire, strVipExpire_);
      DARABONBA_PTR_FROM_JSON(VipExpireAt, vipExpireAt_);
    };
    GetAccountForAppResponseBodyRetValue() = default ;
    GetAccountForAppResponseBodyRetValue(const GetAccountForAppResponseBodyRetValue &) = default ;
    GetAccountForAppResponseBodyRetValue(GetAccountForAppResponseBodyRetValue &&) = default ;
    GetAccountForAppResponseBodyRetValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountForAppResponseBodyRetValue() = default ;
    GetAccountForAppResponseBodyRetValue& operator=(const GetAccountForAppResponseBodyRetValue &) = default ;
    GetAccountForAppResponseBodyRetValue& operator=(GetAccountForAppResponseBodyRetValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isVip_ != nullptr
        && this->strVipExpire_ != nullptr && this->vipExpireAt_ != nullptr; };
    // isVip Field Functions 
    bool hasIsVip() const { return this->isVip_ != nullptr;};
    void deleteIsVip() { this->isVip_ = nullptr;};
    inline bool isVip() const { DARABONBA_PTR_GET_DEFAULT(isVip_, false) };
    inline GetAccountForAppResponseBodyRetValue& setIsVip(bool isVip) { DARABONBA_PTR_SET_VALUE(isVip_, isVip) };


    // strVipExpire Field Functions 
    bool hasStrVipExpire() const { return this->strVipExpire_ != nullptr;};
    void deleteStrVipExpire() { this->strVipExpire_ = nullptr;};
    inline string strVipExpire() const { DARABONBA_PTR_GET_DEFAULT(strVipExpire_, "") };
    inline GetAccountForAppResponseBodyRetValue& setStrVipExpire(string strVipExpire) { DARABONBA_PTR_SET_VALUE(strVipExpire_, strVipExpire) };


    // vipExpireAt Field Functions 
    bool hasVipExpireAt() const { return this->vipExpireAt_ != nullptr;};
    void deleteVipExpireAt() { this->vipExpireAt_ = nullptr;};
    inline int64_t vipExpireAt() const { DARABONBA_PTR_GET_DEFAULT(vipExpireAt_, 0L) };
    inline GetAccountForAppResponseBodyRetValue& setVipExpireAt(int64_t vipExpireAt) { DARABONBA_PTR_SET_VALUE(vipExpireAt_, vipExpireAt) };


  protected:
    std::shared_ptr<bool> isVip_ = nullptr;
    std::shared_ptr<string> strVipExpire_ = nullptr;
    std::shared_ptr<int64_t> vipExpireAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
