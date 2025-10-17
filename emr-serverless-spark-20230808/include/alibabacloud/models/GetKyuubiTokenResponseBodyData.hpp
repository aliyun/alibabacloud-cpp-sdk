// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKYUUBITOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETKYUUBITOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKyuubiTokenResponseBodyDataAutoExpireConfiguration.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetKyuubiTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKyuubiTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(memberArns, memberArns_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKyuubiTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(memberArns, memberArns_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
    };
    GetKyuubiTokenResponseBodyData() = default ;
    GetKyuubiTokenResponseBodyData(const GetKyuubiTokenResponseBodyData &) = default ;
    GetKyuubiTokenResponseBodyData(GetKyuubiTokenResponseBodyData &&) = default ;
    GetKyuubiTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKyuubiTokenResponseBodyData() = default ;
    GetKyuubiTokenResponseBodyData& operator=(const GetKyuubiTokenResponseBodyData &) = default ;
    GetKyuubiTokenResponseBodyData& operator=(GetKyuubiTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoExpireConfiguration_ == nullptr
        && return this->createTime_ == nullptr && return this->createdBy_ == nullptr && return this->expireTime_ == nullptr && return this->lastUsedTime_ == nullptr && return this->memberArns_ == nullptr
        && return this->name_ == nullptr && return this->token_ == nullptr && return this->tokenId_ == nullptr; };
    // autoExpireConfiguration Field Functions 
    bool hasAutoExpireConfiguration() const { return this->autoExpireConfiguration_ != nullptr;};
    void deleteAutoExpireConfiguration() { this->autoExpireConfiguration_ = nullptr;};
    inline const Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration & autoExpireConfiguration() const { DARABONBA_PTR_GET_CONST(autoExpireConfiguration_, Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration) };
    inline Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration autoExpireConfiguration() { DARABONBA_PTR_GET(autoExpireConfiguration_, Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration) };
    inline GetKyuubiTokenResponseBodyData& setAutoExpireConfiguration(const Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration & autoExpireConfiguration) { DARABONBA_PTR_SET_VALUE(autoExpireConfiguration_, autoExpireConfiguration) };
    inline GetKyuubiTokenResponseBodyData& setAutoExpireConfiguration(Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration && autoExpireConfiguration) { DARABONBA_PTR_SET_RVALUE(autoExpireConfiguration_, autoExpireConfiguration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetKyuubiTokenResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline GetKyuubiTokenResponseBodyData& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetKyuubiTokenResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline GetKyuubiTokenResponseBodyData& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // memberArns Field Functions 
    bool hasMemberArns() const { return this->memberArns_ != nullptr;};
    void deleteMemberArns() { this->memberArns_ = nullptr;};
    inline const vector<string> & memberArns() const { DARABONBA_PTR_GET_CONST(memberArns_, vector<string>) };
    inline vector<string> memberArns() { DARABONBA_PTR_GET(memberArns_, vector<string>) };
    inline GetKyuubiTokenResponseBodyData& setMemberArns(const vector<string> & memberArns) { DARABONBA_PTR_SET_VALUE(memberArns_, memberArns) };
    inline GetKyuubiTokenResponseBodyData& setMemberArns(vector<string> && memberArns) { DARABONBA_PTR_SET_RVALUE(memberArns_, memberArns) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetKyuubiTokenResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetKyuubiTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string tokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline GetKyuubiTokenResponseBodyData& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    std::shared_ptr<Models::GetKyuubiTokenResponseBodyDataAutoExpireConfiguration> autoExpireConfiguration_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    std::shared_ptr<vector<string>> memberArns_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // Token ID。
    std::shared_ptr<string> tokenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
