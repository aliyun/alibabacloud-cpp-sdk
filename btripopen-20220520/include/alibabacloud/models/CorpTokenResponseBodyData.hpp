// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORPTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CORPTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CorpTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CorpTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(expire, expire_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, CorpTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(expire, expire_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    CorpTokenResponseBodyData() = default ;
    CorpTokenResponseBodyData(const CorpTokenResponseBodyData &) = default ;
    CorpTokenResponseBodyData(CorpTokenResponseBodyData &&) = default ;
    CorpTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CorpTokenResponseBodyData() = default ;
    CorpTokenResponseBodyData& operator=(const CorpTokenResponseBodyData &) = default ;
    CorpTokenResponseBodyData& operator=(CorpTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expire_ != nullptr
        && this->token_ != nullptr; };
    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline CorpTokenResponseBodyData& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CorpTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<int64_t> expire_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
