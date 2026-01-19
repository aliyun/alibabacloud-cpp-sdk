// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIEREDCACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTIEREDCACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetTieredCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTieredCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CacheArchitectureMode, cacheArchitectureMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTieredCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheArchitectureMode, cacheArchitectureMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTieredCacheResponseBody() = default ;
    GetTieredCacheResponseBody(const GetTieredCacheResponseBody &) = default ;
    GetTieredCacheResponseBody(GetTieredCacheResponseBody &&) = default ;
    GetTieredCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTieredCacheResponseBody() = default ;
    GetTieredCacheResponseBody& operator=(const GetTieredCacheResponseBody &) = default ;
    GetTieredCacheResponseBody& operator=(GetTieredCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheArchitectureMode_ == nullptr
        && this->requestId_ == nullptr; };
    // cacheArchitectureMode Field Functions 
    bool hasCacheArchitectureMode() const { return this->cacheArchitectureMode_ != nullptr;};
    void deleteCacheArchitectureMode() { this->cacheArchitectureMode_ = nullptr;};
    inline string getCacheArchitectureMode() const { DARABONBA_PTR_GET_DEFAULT(cacheArchitectureMode_, "") };
    inline GetTieredCacheResponseBody& setCacheArchitectureMode(string cacheArchitectureMode) { DARABONBA_PTR_SET_VALUE(cacheArchitectureMode_, cacheArchitectureMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTieredCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Multi-level cache architecture mode. Possible values:
    // - edge: Edge cache layer.
    // - edge_smart: Edge cache layer + intelligent cache layer.
    // - edge_regional: Edge cache layer + regional cache layer.
    // - edge_regional_smart: Edge cache layer + regional cache layer + intelligent cache layer.
    shared_ptr<string> cacheArchitectureMode_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
