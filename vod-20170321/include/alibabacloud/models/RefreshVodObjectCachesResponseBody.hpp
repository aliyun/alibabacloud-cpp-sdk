// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHVODOBJECTCACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHVODOBJECTCACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RefreshVodObjectCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshVodObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshVodObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshVodObjectCachesResponseBody() = default ;
    RefreshVodObjectCachesResponseBody(const RefreshVodObjectCachesResponseBody &) = default ;
    RefreshVodObjectCachesResponseBody(RefreshVodObjectCachesResponseBody &&) = default ;
    RefreshVodObjectCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshVodObjectCachesResponseBody() = default ;
    RefreshVodObjectCachesResponseBody& operator=(const RefreshVodObjectCachesResponseBody &) = default ;
    RefreshVodObjectCachesResponseBody& operator=(RefreshVodObjectCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refreshTaskId_ == nullptr
        && this->requestId_ == nullptr; };
    // refreshTaskId Field Functions 
    bool hasRefreshTaskId() const { return this->refreshTaskId_ != nullptr;};
    void deleteRefreshTaskId() { this->refreshTaskId_ = nullptr;};
    inline string getRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(refreshTaskId_, "") };
    inline RefreshVodObjectCachesResponseBody& setRefreshTaskId(string refreshTaskId) { DARABONBA_PTR_SET_VALUE(refreshTaskId_, refreshTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshVodObjectCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the purge task. Multiple task IDs are separated by commas (,).
    // The returned purge task IDs are merged based on the following rules:
    // 
    // Purge tasks (at URL granularity) submitted for the same domain name within the same second are merged into a single RefreshTaskId.
    // If purge tasks (at URL granularity) submitted for the same domain name within the same second exceed 2,000, they are merged into one RefreshTaskId per 2,000 tasks.
    shared_ptr<string> refreshTaskId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
