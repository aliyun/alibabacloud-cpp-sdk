// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSAUTHTOKENSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSMSAUTHTOKENSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetSmsAuthTokensResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsAuthTokensResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizToken, bizToken_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(StsAccessKeyId, stsAccessKeyId_);
      DARABONBA_PTR_TO_JSON(StsAccessKeySecret, stsAccessKeySecret_);
      DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsAuthTokensResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizToken, bizToken_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(StsAccessKeyId, stsAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(StsAccessKeySecret, stsAccessKeySecret_);
      DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
    };
    GetSmsAuthTokensResponseBodyData() = default ;
    GetSmsAuthTokensResponseBodyData(const GetSmsAuthTokensResponseBodyData &) = default ;
    GetSmsAuthTokensResponseBodyData(GetSmsAuthTokensResponseBodyData &&) = default ;
    GetSmsAuthTokensResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsAuthTokensResponseBodyData() = default ;
    GetSmsAuthTokensResponseBodyData& operator=(const GetSmsAuthTokensResponseBodyData &) = default ;
    GetSmsAuthTokensResponseBodyData& operator=(GetSmsAuthTokensResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizToken_ != nullptr
        && this->expireTime_ != nullptr && this->stsAccessKeyId_ != nullptr && this->stsAccessKeySecret_ != nullptr && this->stsToken_ != nullptr; };
    // bizToken Field Functions 
    bool hasBizToken() const { return this->bizToken_ != nullptr;};
    void deleteBizToken() { this->bizToken_ = nullptr;};
    inline string bizToken() const { DARABONBA_PTR_GET_DEFAULT(bizToken_, "") };
    inline GetSmsAuthTokensResponseBodyData& setBizToken(string bizToken) { DARABONBA_PTR_SET_VALUE(bizToken_, bizToken) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetSmsAuthTokensResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // stsAccessKeyId Field Functions 
    bool hasStsAccessKeyId() const { return this->stsAccessKeyId_ != nullptr;};
    void deleteStsAccessKeyId() { this->stsAccessKeyId_ = nullptr;};
    inline string stsAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(stsAccessKeyId_, "") };
    inline GetSmsAuthTokensResponseBodyData& setStsAccessKeyId(string stsAccessKeyId) { DARABONBA_PTR_SET_VALUE(stsAccessKeyId_, stsAccessKeyId) };


    // stsAccessKeySecret Field Functions 
    bool hasStsAccessKeySecret() const { return this->stsAccessKeySecret_ != nullptr;};
    void deleteStsAccessKeySecret() { this->stsAccessKeySecret_ = nullptr;};
    inline string stsAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(stsAccessKeySecret_, "") };
    inline GetSmsAuthTokensResponseBodyData& setStsAccessKeySecret(string stsAccessKeySecret) { DARABONBA_PTR_SET_VALUE(stsAccessKeySecret_, stsAccessKeySecret) };


    // stsToken Field Functions 
    bool hasStsToken() const { return this->stsToken_ != nullptr;};
    void deleteStsToken() { this->stsToken_ = nullptr;};
    inline string stsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
    inline GetSmsAuthTokensResponseBodyData& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


  protected:
    // The business token.
    std::shared_ptr<string> bizToken_ = nullptr;
    // The time when the token expired. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The AccessKey ID.
    std::shared_ptr<string> stsAccessKeyId_ = nullptr;
    // The AccessKey secret.
    std::shared_ptr<string> stsAccessKeySecret_ = nullptr;
    // The security token.
    std::shared_ptr<string> stsToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
