// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRTCTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRTCTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetRtcTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRtcTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(RtcId, rtcId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetRtcTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(RtcId, rtcId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetRtcTokenResponseBodyData() = default ;
    GetRtcTokenResponseBodyData(const GetRtcTokenResponseBodyData &) = default ;
    GetRtcTokenResponseBodyData(GetRtcTokenResponseBodyData &&) = default ;
    GetRtcTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRtcTokenResponseBodyData() = default ;
    GetRtcTokenResponseBodyData& operator=(const GetRtcTokenResponseBodyData &) = default ;
    GetRtcTokenResponseBodyData& operator=(GetRtcTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->rtcId_ != nullptr && this->token_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetRtcTokenResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // rtcId Field Functions 
    bool hasRtcId() const { return this->rtcId_ != nullptr;};
    void deleteRtcId() { this->rtcId_ = nullptr;};
    inline string rtcId() const { DARABONBA_PTR_GET_DEFAULT(rtcId_, "") };
    inline GetRtcTokenResponseBodyData& setRtcId(string rtcId) { DARABONBA_PTR_SET_VALUE(rtcId_, rtcId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetRtcTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> rtcId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
