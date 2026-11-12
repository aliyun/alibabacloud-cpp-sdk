// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFORAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFORAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetAccountForAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountForAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_TO_JSON(RetValue, retValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountForAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
    };
    GetAccountForAppResponseBody() = default ;
    GetAccountForAppResponseBody(const GetAccountForAppResponseBody &) = default ;
    GetAccountForAppResponseBody(GetAccountForAppResponseBody &&) = default ;
    GetAccountForAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountForAppResponseBody() = default ;
    GetAccountForAppResponseBody& operator=(const GetAccountForAppResponseBody &) = default ;
    GetAccountForAppResponseBody& operator=(GetAccountForAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetValue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetValue& obj) { 
        DARABONBA_PTR_TO_JSON(IsVip, isVip_);
        DARABONBA_PTR_TO_JSON(StrVipExpire, strVipExpire_);
        DARABONBA_PTR_TO_JSON(VipExpireAt, vipExpireAt_);
      };
      friend void from_json(const Darabonba::Json& j, RetValue& obj) { 
        DARABONBA_PTR_FROM_JSON(IsVip, isVip_);
        DARABONBA_PTR_FROM_JSON(StrVipExpire, strVipExpire_);
        DARABONBA_PTR_FROM_JSON(VipExpireAt, vipExpireAt_);
      };
      RetValue() = default ;
      RetValue(const RetValue &) = default ;
      RetValue(RetValue &&) = default ;
      RetValue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetValue() = default ;
      RetValue& operator=(const RetValue &) = default ;
      RetValue& operator=(RetValue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isVip_ == nullptr
        && this->strVipExpire_ == nullptr && this->vipExpireAt_ == nullptr; };
      // isVip Field Functions 
      bool hasIsVip() const { return this->isVip_ != nullptr;};
      void deleteIsVip() { this->isVip_ = nullptr;};
      inline bool getIsVip() const { DARABONBA_PTR_GET_DEFAULT(isVip_, false) };
      inline RetValue& setIsVip(bool isVip) { DARABONBA_PTR_SET_VALUE(isVip_, isVip) };


      // strVipExpire Field Functions 
      bool hasStrVipExpire() const { return this->strVipExpire_ != nullptr;};
      void deleteStrVipExpire() { this->strVipExpire_ = nullptr;};
      inline string getStrVipExpire() const { DARABONBA_PTR_GET_DEFAULT(strVipExpire_, "") };
      inline RetValue& setStrVipExpire(string strVipExpire) { DARABONBA_PTR_SET_VALUE(strVipExpire_, strVipExpire) };


      // vipExpireAt Field Functions 
      bool hasVipExpireAt() const { return this->vipExpireAt_ != nullptr;};
      void deleteVipExpireAt() { this->vipExpireAt_ = nullptr;};
      inline int64_t getVipExpireAt() const { DARABONBA_PTR_GET_DEFAULT(vipExpireAt_, 0L) };
      inline RetValue& setVipExpireAt(int64_t vipExpireAt) { DARABONBA_PTR_SET_VALUE(vipExpireAt_, vipExpireAt) };


    protected:
      // Indicates whether the user is an authorized member.
      shared_ptr<bool> isVip_ {};
      // Membership expiration time.
      shared_ptr<string> strVipExpire_ {};
      // Millisecond-level UNIX timestamp.
      // 
      // - If the user has activated membership, returns the membership expiration time.
      // - If the user has never activated membership, the value is always `0`.
      shared_ptr<int64_t> vipExpireAt_ {};
    };

    virtual bool empty() const override { return this->retCode_ == nullptr
        && this->retMsg_ == nullptr && this->retValue_ == nullptr; };
    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline GetAccountForAppResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retMsg Field Functions 
    bool hasRetMsg() const { return this->retMsg_ != nullptr;};
    void deleteRetMsg() { this->retMsg_ = nullptr;};
    inline string getRetMsg() const { DARABONBA_PTR_GET_DEFAULT(retMsg_, "") };
    inline GetAccountForAppResponseBody& setRetMsg(string retMsg) { DARABONBA_PTR_SET_VALUE(retMsg_, retMsg) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline const GetAccountForAppResponseBody::RetValue & getRetValue() const { DARABONBA_PTR_GET_CONST(retValue_, GetAccountForAppResponseBody::RetValue) };
    inline GetAccountForAppResponseBody::RetValue getRetValue() { DARABONBA_PTR_GET(retValue_, GetAccountForAppResponseBody::RetValue) };
    inline GetAccountForAppResponseBody& setRetValue(const GetAccountForAppResponseBody::RetValue & retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };
    inline GetAccountForAppResponseBody& setRetValue(GetAccountForAppResponseBody::RetValue && retValue) { DARABONBA_PTR_SET_RVALUE(retValue_, retValue) };


  protected:
    // Error code returned. A value of `0` indicates success.
    shared_ptr<int32_t> retCode_ {};
    // Error message returned. No message is returned upon success.
    shared_ptr<string> retMsg_ {};
    // List of result objects returned.
    shared_ptr<GetAccountForAppResponseBody::RetValue> retValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
