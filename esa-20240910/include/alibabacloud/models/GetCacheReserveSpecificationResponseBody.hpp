// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACHERESERVESPECIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACHERESERVESPECIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCacheReserveSpecificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCacheReserveSpecificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CacheReserveCapacity, cacheReserveCapacity_);
      DARABONBA_PTR_TO_JSON(CacheReserveRegion, cacheReserveRegion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCacheReserveSpecificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheReserveCapacity, cacheReserveCapacity_);
      DARABONBA_PTR_FROM_JSON(CacheReserveRegion, cacheReserveRegion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCacheReserveSpecificationResponseBody() = default ;
    GetCacheReserveSpecificationResponseBody(const GetCacheReserveSpecificationResponseBody &) = default ;
    GetCacheReserveSpecificationResponseBody(GetCacheReserveSpecificationResponseBody &&) = default ;
    GetCacheReserveSpecificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCacheReserveSpecificationResponseBody() = default ;
    GetCacheReserveSpecificationResponseBody& operator=(const GetCacheReserveSpecificationResponseBody &) = default ;
    GetCacheReserveSpecificationResponseBody& operator=(GetCacheReserveSpecificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheReserveCapacity_ == nullptr
        && this->cacheReserveRegion_ == nullptr && this->requestId_ == nullptr; };
    // cacheReserveCapacity Field Functions 
    bool hasCacheReserveCapacity() const { return this->cacheReserveCapacity_ != nullptr;};
    void deleteCacheReserveCapacity() { this->cacheReserveCapacity_ = nullptr;};
    inline const vector<string> & getCacheReserveCapacity() const { DARABONBA_PTR_GET_CONST(cacheReserveCapacity_, vector<string>) };
    inline vector<string> getCacheReserveCapacity() { DARABONBA_PTR_GET(cacheReserveCapacity_, vector<string>) };
    inline GetCacheReserveSpecificationResponseBody& setCacheReserveCapacity(const vector<string> & cacheReserveCapacity) { DARABONBA_PTR_SET_VALUE(cacheReserveCapacity_, cacheReserveCapacity) };
    inline GetCacheReserveSpecificationResponseBody& setCacheReserveCapacity(vector<string> && cacheReserveCapacity) { DARABONBA_PTR_SET_RVALUE(cacheReserveCapacity_, cacheReserveCapacity) };


    // cacheReserveRegion Field Functions 
    bool hasCacheReserveRegion() const { return this->cacheReserveRegion_ != nullptr;};
    void deleteCacheReserveRegion() { this->cacheReserveRegion_ = nullptr;};
    inline const vector<string> & getCacheReserveRegion() const { DARABONBA_PTR_GET_CONST(cacheReserveRegion_, vector<string>) };
    inline vector<string> getCacheReserveRegion() { DARABONBA_PTR_GET(cacheReserveRegion_, vector<string>) };
    inline GetCacheReserveSpecificationResponseBody& setCacheReserveRegion(const vector<string> & cacheReserveRegion) { DARABONBA_PTR_SET_VALUE(cacheReserveRegion_, cacheReserveRegion) };
    inline GetCacheReserveSpecificationResponseBody& setCacheReserveRegion(vector<string> && cacheReserveRegion) { DARABONBA_PTR_SET_RVALUE(cacheReserveRegion_, cacheReserveRegion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCacheReserveSpecificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of cache retention capacity specifications.
    shared_ptr<vector<string>> cacheReserveCapacity_ {};
    // List of cache retention region specifications.
    shared_ptr<vector<string>> cacheReserveRegion_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
