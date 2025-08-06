// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINPROXYTOKENSRESPONSEBODYDOMAINPROXYTOKENS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINPROXYTOKENSRESPONSEBODYDOMAINPROXYTOKENS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListDomainProxyTokensResponseBodyDomainProxyTokens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainProxyTokensResponseBodyDomainProxyTokens& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainProxyToken, domainProxyToken_);
      DARABONBA_PTR_TO_JSON(DomainProxyTokenId, domainProxyTokenId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainProxyTokensResponseBodyDomainProxyTokens& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainProxyToken, domainProxyToken_);
      DARABONBA_PTR_FROM_JSON(DomainProxyTokenId, domainProxyTokenId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDomainProxyTokensResponseBodyDomainProxyTokens() = default ;
    ListDomainProxyTokensResponseBodyDomainProxyTokens(const ListDomainProxyTokensResponseBodyDomainProxyTokens &) = default ;
    ListDomainProxyTokensResponseBodyDomainProxyTokens(ListDomainProxyTokensResponseBodyDomainProxyTokens &&) = default ;
    ListDomainProxyTokensResponseBodyDomainProxyTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainProxyTokensResponseBodyDomainProxyTokens() = default ;
    ListDomainProxyTokensResponseBodyDomainProxyTokens& operator=(const ListDomainProxyTokensResponseBodyDomainProxyTokens &) = default ;
    ListDomainProxyTokensResponseBodyDomainProxyTokens& operator=(ListDomainProxyTokensResponseBodyDomainProxyTokens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->domainId_ != nullptr && this->domainProxyToken_ != nullptr && this->domainProxyTokenId_ != nullptr && this->instanceId_ != nullptr && this->lastUsedTime_ != nullptr
        && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainProxyToken Field Functions 
    bool hasDomainProxyToken() const { return this->domainProxyToken_ != nullptr;};
    void deleteDomainProxyToken() { this->domainProxyToken_ = nullptr;};
    inline string domainProxyToken() const { DARABONBA_PTR_GET_DEFAULT(domainProxyToken_, "") };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setDomainProxyToken(string domainProxyToken) { DARABONBA_PTR_SET_VALUE(domainProxyToken_, domainProxyToken) };


    // domainProxyTokenId Field Functions 
    bool hasDomainProxyTokenId() const { return this->domainProxyTokenId_ != nullptr;};
    void deleteDomainProxyTokenId() { this->domainProxyTokenId_ = nullptr;};
    inline string domainProxyTokenId() const { DARABONBA_PTR_GET_DEFAULT(domainProxyTokenId_, "") };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setDomainProxyTokenId(string domainProxyTokenId) { DARABONBA_PTR_SET_VALUE(domainProxyTokenId_, domainProxyTokenId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDomainProxyTokensResponseBodyDomainProxyTokens& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the proxy token of the domain name was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The domain ID.
    std::shared_ptr<string> domainId_ = nullptr;
    // The proxy token of the domain.
    std::shared_ptr<string> domainProxyToken_ = nullptr;
    // The ID of the proxy token of the domain.
    std::shared_ptr<string> domainProxyTokenId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the proxy token of the domain name was last used. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    // The state of the proxy token. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> status_ = nullptr;
    // The time when the proxy token of the domain name was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
