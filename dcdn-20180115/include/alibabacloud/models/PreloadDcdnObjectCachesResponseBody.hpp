// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADDCDNOBJECTCACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRELOADDCDNOBJECTCACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PreloadDcdnObjectCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadDcdnObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreloadTaskId, preloadTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadDcdnObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreloadTaskId, preloadTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PreloadDcdnObjectCachesResponseBody() = default ;
    PreloadDcdnObjectCachesResponseBody(const PreloadDcdnObjectCachesResponseBody &) = default ;
    PreloadDcdnObjectCachesResponseBody(PreloadDcdnObjectCachesResponseBody &&) = default ;
    PreloadDcdnObjectCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadDcdnObjectCachesResponseBody() = default ;
    PreloadDcdnObjectCachesResponseBody& operator=(const PreloadDcdnObjectCachesResponseBody &) = default ;
    PreloadDcdnObjectCachesResponseBody& operator=(PreloadDcdnObjectCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preloadTaskId_ != nullptr
        && this->requestId_ != nullptr; };
    // preloadTaskId Field Functions 
    bool hasPreloadTaskId() const { return this->preloadTaskId_ != nullptr;};
    void deletePreloadTaskId() { this->preloadTaskId_ = nullptr;};
    inline string preloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(preloadTaskId_, "") };
    inline PreloadDcdnObjectCachesResponseBody& setPreloadTaskId(string preloadTaskId) { DARABONBA_PTR_SET_VALUE(preloadTaskId_, preloadTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreloadDcdnObjectCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the prefetch task. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> preloadTaskId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
