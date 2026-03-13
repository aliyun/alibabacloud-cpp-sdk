// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACACHESERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACACHESERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CacheService.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class ListDataCacheServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCacheServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CacheServices, cacheServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCacheServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheServices, cacheServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataCacheServicesResponseBody() = default ;
    ListDataCacheServicesResponseBody(const ListDataCacheServicesResponseBody &) = default ;
    ListDataCacheServicesResponseBody(ListDataCacheServicesResponseBody &&) = default ;
    ListDataCacheServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCacheServicesResponseBody() = default ;
    ListDataCacheServicesResponseBody& operator=(const ListDataCacheServicesResponseBody &) = default ;
    ListDataCacheServicesResponseBody& operator=(ListDataCacheServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheServices_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cacheServices Field Functions 
    bool hasCacheServices() const { return this->cacheServices_ != nullptr;};
    void deleteCacheServices() { this->cacheServices_ = nullptr;};
    inline const vector<CacheService> & getCacheServices() const { DARABONBA_PTR_GET_CONST(cacheServices_, vector<CacheService>) };
    inline vector<CacheService> getCacheServices() { DARABONBA_PTR_GET(cacheServices_, vector<CacheService>) };
    inline ListDataCacheServicesResponseBody& setCacheServices(const vector<CacheService> & cacheServices) { DARABONBA_PTR_SET_VALUE(cacheServices_, cacheServices) };
    inline ListDataCacheServicesResponseBody& setCacheServices(vector<CacheService> && cacheServices) { DARABONBA_PTR_SET_RVALUE(cacheServices_, cacheServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCacheServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataCacheServicesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<CacheService>> cacheServices_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
