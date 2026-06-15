// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACHECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACHECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CacheCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetCacheClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCacheClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cacheClusters, cacheClusters_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCacheClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cacheClusters, cacheClusters_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCacheClusterResponseBody() = default ;
    GetCacheClusterResponseBody(const GetCacheClusterResponseBody &) = default ;
    GetCacheClusterResponseBody(GetCacheClusterResponseBody &&) = default ;
    GetCacheClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCacheClusterResponseBody() = default ;
    GetCacheClusterResponseBody& operator=(const GetCacheClusterResponseBody &) = default ;
    GetCacheClusterResponseBody& operator=(GetCacheClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheClusters_ == nullptr
        && this->requestId_ == nullptr; };
    // cacheClusters Field Functions 
    bool hasCacheClusters() const { return this->cacheClusters_ != nullptr;};
    void deleteCacheClusters() { this->cacheClusters_ = nullptr;};
    inline const CacheCluster & getCacheClusters() const { DARABONBA_PTR_GET_CONST(cacheClusters_, CacheCluster) };
    inline CacheCluster getCacheClusters() { DARABONBA_PTR_GET(cacheClusters_, CacheCluster) };
    inline GetCacheClusterResponseBody& setCacheClusters(const CacheCluster & cacheClusters) { DARABONBA_PTR_SET_VALUE(cacheClusters_, cacheClusters) };
    inline GetCacheClusterResponseBody& setCacheClusters(CacheCluster && cacheClusters) { DARABONBA_PTR_SET_RVALUE(cacheClusters_, cacheClusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCacheClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CacheCluster> cacheClusters_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
