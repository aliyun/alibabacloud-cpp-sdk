// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACHERESERVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACHERESERVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCacheReserveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCacheReserveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CacheReserveInstanceId, cacheReserveInstanceId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCacheReserveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheReserveInstanceId, cacheReserveInstanceId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCacheReserveResponseBody() = default ;
    GetCacheReserveResponseBody(const GetCacheReserveResponseBody &) = default ;
    GetCacheReserveResponseBody(GetCacheReserveResponseBody &&) = default ;
    GetCacheReserveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCacheReserveResponseBody() = default ;
    GetCacheReserveResponseBody& operator=(const GetCacheReserveResponseBody &) = default ;
    GetCacheReserveResponseBody& operator=(GetCacheReserveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheReserveInstanceId_ == nullptr
        && this->enable_ == nullptr && this->requestId_ == nullptr; };
    // cacheReserveInstanceId Field Functions 
    bool hasCacheReserveInstanceId() const { return this->cacheReserveInstanceId_ != nullptr;};
    void deleteCacheReserveInstanceId() { this->cacheReserveInstanceId_ = nullptr;};
    inline string getCacheReserveInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveInstanceId_, "") };
    inline GetCacheReserveResponseBody& setCacheReserveInstanceId(string cacheReserveInstanceId) { DARABONBA_PTR_SET_VALUE(cacheReserveInstanceId_, cacheReserveInstanceId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline GetCacheReserveResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCacheReserveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cache reserve instance ID.
    shared_ptr<string> cacheReserveInstanceId_ {};
    // The switch status. Valid values:
    // 
    // - **on**: Enabled.
    // - **off**: Disabled.
    shared_ptr<string> enable_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
