// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINPROXYTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINPROXYTOKENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListDomainProxyTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainProxyTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainProxyTokens, domainProxyTokens_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainProxyTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainProxyTokens, domainProxyTokens_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDomainProxyTokensResponseBody() = default ;
    ListDomainProxyTokensResponseBody(const ListDomainProxyTokensResponseBody &) = default ;
    ListDomainProxyTokensResponseBody(ListDomainProxyTokensResponseBody &&) = default ;
    ListDomainProxyTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainProxyTokensResponseBody() = default ;
    ListDomainProxyTokensResponseBody& operator=(const ListDomainProxyTokensResponseBody &) = default ;
    ListDomainProxyTokensResponseBody& operator=(ListDomainProxyTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainProxyTokens : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainProxyTokens& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(DomainProxyToken, domainProxyToken_);
        DARABONBA_PTR_TO_JSON(DomainProxyTokenId, domainProxyTokenId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DomainProxyTokens& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(DomainProxyToken, domainProxyToken_);
        DARABONBA_PTR_FROM_JSON(DomainProxyTokenId, domainProxyTokenId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DomainProxyTokens() = default ;
      DomainProxyTokens(const DomainProxyTokens &) = default ;
      DomainProxyTokens(DomainProxyTokens &&) = default ;
      DomainProxyTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainProxyTokens() = default ;
      DomainProxyTokens& operator=(const DomainProxyTokens &) = default ;
      DomainProxyTokens& operator=(DomainProxyTokens &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainId_ == nullptr && this->domainProxyToken_ == nullptr && this->domainProxyTokenId_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DomainProxyTokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline DomainProxyTokens& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // domainProxyToken Field Functions 
      bool hasDomainProxyToken() const { return this->domainProxyToken_ != nullptr;};
      void deleteDomainProxyToken() { this->domainProxyToken_ = nullptr;};
      inline string getDomainProxyToken() const { DARABONBA_PTR_GET_DEFAULT(domainProxyToken_, "") };
      inline DomainProxyTokens& setDomainProxyToken(string domainProxyToken) { DARABONBA_PTR_SET_VALUE(domainProxyToken_, domainProxyToken) };


      // domainProxyTokenId Field Functions 
      bool hasDomainProxyTokenId() const { return this->domainProxyTokenId_ != nullptr;};
      void deleteDomainProxyTokenId() { this->domainProxyTokenId_ = nullptr;};
      inline string getDomainProxyTokenId() const { DARABONBA_PTR_GET_DEFAULT(domainProxyTokenId_, "") };
      inline DomainProxyTokens& setDomainProxyTokenId(string domainProxyTokenId) { DARABONBA_PTR_SET_VALUE(domainProxyTokenId_, domainProxyTokenId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DomainProxyTokens& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline DomainProxyTokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DomainProxyTokens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DomainProxyTokens& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the proxy token of the domain name was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The domain ID.
      shared_ptr<string> domainId_ {};
      // The proxy token of the domain.
      shared_ptr<string> domainProxyToken_ {};
      // The ID of the proxy token of the domain.
      shared_ptr<string> domainProxyTokenId_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The time when the proxy token of the domain name was last used. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> lastUsedTime_ {};
      // The state of the proxy token. Valid values:
      // 
      // *   enabled
      // *   disabled
      shared_ptr<string> status_ {};
      // The time when the proxy token of the domain name was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->domainProxyTokens_ == nullptr
        && this->requestId_ == nullptr; };
    // domainProxyTokens Field Functions 
    bool hasDomainProxyTokens() const { return this->domainProxyTokens_ != nullptr;};
    void deleteDomainProxyTokens() { this->domainProxyTokens_ = nullptr;};
    inline const vector<ListDomainProxyTokensResponseBody::DomainProxyTokens> & getDomainProxyTokens() const { DARABONBA_PTR_GET_CONST(domainProxyTokens_, vector<ListDomainProxyTokensResponseBody::DomainProxyTokens>) };
    inline vector<ListDomainProxyTokensResponseBody::DomainProxyTokens> getDomainProxyTokens() { DARABONBA_PTR_GET(domainProxyTokens_, vector<ListDomainProxyTokensResponseBody::DomainProxyTokens>) };
    inline ListDomainProxyTokensResponseBody& setDomainProxyTokens(const vector<ListDomainProxyTokensResponseBody::DomainProxyTokens> & domainProxyTokens) { DARABONBA_PTR_SET_VALUE(domainProxyTokens_, domainProxyTokens) };
    inline ListDomainProxyTokensResponseBody& setDomainProxyTokens(vector<ListDomainProxyTokensResponseBody::DomainProxyTokens> && domainProxyTokens) { DARABONBA_PTR_SET_RVALUE(domainProxyTokens_, domainProxyTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainProxyTokensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The proxy tokens of the domain name.
    shared_ptr<vector<ListDomainProxyTokensResponseBody::DomainProxyTokens>> domainProxyTokens_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
