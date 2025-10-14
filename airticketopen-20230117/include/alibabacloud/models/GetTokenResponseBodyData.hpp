// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GetTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(expire_time, expireTime_);
      DARABONBA_PTR_TO_JSON(generate_time, generateTime_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(expire_time, expireTime_);
      DARABONBA_PTR_FROM_JSON(generate_time, generateTime_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    GetTokenResponseBodyData() = default ;
    GetTokenResponseBodyData(const GetTokenResponseBodyData &) = default ;
    GetTokenResponseBodyData(GetTokenResponseBodyData &&) = default ;
    GetTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenResponseBodyData() = default ;
    GetTokenResponseBodyData& operator=(const GetTokenResponseBodyData &) = default ;
    GetTokenResponseBodyData& operator=(GetTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->generateTime_ == nullptr && return this->token_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetTokenResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // generateTime Field Functions 
    bool hasGenerateTime() const { return this->generateTime_ != nullptr;};
    void deleteGenerateTime() { this->generateTime_ = nullptr;};
    inline int64_t generateTime() const { DARABONBA_PTR_GET_DEFAULT(generateTime_, 0L) };
    inline GetTokenResponseBodyData& setGenerateTime(int64_t generateTime) { DARABONBA_PTR_SET_VALUE(generateTime_, generateTime) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // Remaining valid time of the token in seconds
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // Timestamp of token generation in seconds
    std::shared_ptr<int64_t> generateTime_ = nullptr;
    // token
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
