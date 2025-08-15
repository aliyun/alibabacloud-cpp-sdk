// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVYCOMPUTETOKENRESPONSEBODYDATATOKENS_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVYCOMPUTETOKENRESPONSEBODYDATATOKENS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLivyComputeTokenResponseBodyDataTokens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivyComputeTokenResponseBodyDataTokens& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(createdby, createdby_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivyComputeTokenResponseBodyDataTokens& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(createdby, createdby_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
    };
    ListLivyComputeTokenResponseBodyDataTokens() = default ;
    ListLivyComputeTokenResponseBodyDataTokens(const ListLivyComputeTokenResponseBodyDataTokens &) = default ;
    ListLivyComputeTokenResponseBodyDataTokens(ListLivyComputeTokenResponseBodyDataTokens &&) = default ;
    ListLivyComputeTokenResponseBodyDataTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivyComputeTokenResponseBodyDataTokens() = default ;
    ListLivyComputeTokenResponseBodyDataTokens& operator=(const ListLivyComputeTokenResponseBodyDataTokens &) = default ;
    ListLivyComputeTokenResponseBodyDataTokens& operator=(ListLivyComputeTokenResponseBodyDataTokens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createdby_ != nullptr && this->expireTime_ != nullptr && this->lastUsedTime_ != nullptr && this->name_ != nullptr && this->token_ != nullptr
        && this->tokenId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListLivyComputeTokenResponseBodyDataTokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdby Field Functions 
    bool hasCreatedby() const { return this->createdby_ != nullptr;};
    void deleteCreatedby() { this->createdby_ = nullptr;};
    inline string createdby() const { DARABONBA_PTR_GET_DEFAULT(createdby_, "") };
    inline ListLivyComputeTokenResponseBodyDataTokens& setCreatedby(string createdby) { DARABONBA_PTR_SET_VALUE(createdby_, createdby) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListLivyComputeTokenResponseBodyDataTokens& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ListLivyComputeTokenResponseBodyDataTokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLivyComputeTokenResponseBodyDataTokens& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListLivyComputeTokenResponseBodyDataTokens& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string tokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline ListLivyComputeTokenResponseBodyDataTokens& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> createdby_ = nullptr;
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
