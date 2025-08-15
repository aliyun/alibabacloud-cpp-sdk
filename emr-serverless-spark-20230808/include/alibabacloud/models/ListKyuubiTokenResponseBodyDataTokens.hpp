// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBITOKENRESPONSEBODYDATATOKENS_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBITOKENRESPONSEBODYDATATOKENS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiTokenResponseBodyDataTokens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiTokenResponseBodyDataTokens& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiTokenResponseBodyDataTokens& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
    };
    ListKyuubiTokenResponseBodyDataTokens() = default ;
    ListKyuubiTokenResponseBodyDataTokens(const ListKyuubiTokenResponseBodyDataTokens &) = default ;
    ListKyuubiTokenResponseBodyDataTokens(ListKyuubiTokenResponseBodyDataTokens &&) = default ;
    ListKyuubiTokenResponseBodyDataTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiTokenResponseBodyDataTokens() = default ;
    ListKyuubiTokenResponseBodyDataTokens& operator=(const ListKyuubiTokenResponseBodyDataTokens &) = default ;
    ListKyuubiTokenResponseBodyDataTokens& operator=(ListKyuubiTokenResponseBodyDataTokens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createdBy_ != nullptr && this->expireTime_ != nullptr && this->lastUsedTime_ != nullptr && this->name_ != nullptr && this->token_ != nullptr
        && this->tokenId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListKyuubiTokenResponseBodyDataTokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ListKyuubiTokenResponseBodyDataTokens& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListKyuubiTokenResponseBodyDataTokens& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ListKyuubiTokenResponseBodyDataTokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListKyuubiTokenResponseBodyDataTokens& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListKyuubiTokenResponseBodyDataTokens& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string tokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline ListKyuubiTokenResponseBodyDataTokens& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // Token ID。
    std::shared_ptr<string> tokenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
