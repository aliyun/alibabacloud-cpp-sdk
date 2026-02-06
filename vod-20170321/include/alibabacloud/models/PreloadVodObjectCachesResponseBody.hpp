// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADVODOBJECTCACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRELOADVODOBJECTCACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class PreloadVodObjectCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadVodObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreloadTaskId, preloadTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadVodObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreloadTaskId, preloadTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PreloadVodObjectCachesResponseBody() = default ;
    PreloadVodObjectCachesResponseBody(const PreloadVodObjectCachesResponseBody &) = default ;
    PreloadVodObjectCachesResponseBody(PreloadVodObjectCachesResponseBody &&) = default ;
    PreloadVodObjectCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadVodObjectCachesResponseBody() = default ;
    PreloadVodObjectCachesResponseBody& operator=(const PreloadVodObjectCachesResponseBody &) = default ;
    PreloadVodObjectCachesResponseBody& operator=(PreloadVodObjectCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preloadTaskId_ == nullptr
        && this->requestId_ == nullptr; };
    // preloadTaskId Field Functions 
    bool hasPreloadTaskId() const { return this->preloadTaskId_ != nullptr;};
    void deletePreloadTaskId() { this->preloadTaskId_ = nullptr;};
    inline string getPreloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(preloadTaskId_, "") };
    inline PreloadVodObjectCachesResponseBody& setPreloadTaskId(string preloadTaskId) { DARABONBA_PTR_SET_VALUE(preloadTaskId_, preloadTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreloadVodObjectCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the prefetch task. Separate multiple task IDs with commas (,).
    shared_ptr<string> preloadTaskId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
