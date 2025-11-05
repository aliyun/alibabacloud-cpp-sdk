// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHOBJECTCACHEBYCACHETAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHOBJECTCACHEBYCACHETAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class RefreshObjectCacheByCacheTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshObjectCacheByCacheTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshObjectCacheByCacheTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshObjectCacheByCacheTagResponseBody() = default ;
    RefreshObjectCacheByCacheTagResponseBody(const RefreshObjectCacheByCacheTagResponseBody &) = default ;
    RefreshObjectCacheByCacheTagResponseBody(RefreshObjectCacheByCacheTagResponseBody &&) = default ;
    RefreshObjectCacheByCacheTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshObjectCacheByCacheTagResponseBody() = default ;
    RefreshObjectCacheByCacheTagResponseBody& operator=(const RefreshObjectCacheByCacheTagResponseBody &) = default ;
    RefreshObjectCacheByCacheTagResponseBody& operator=(RefreshObjectCacheByCacheTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refreshTaskId_ == nullptr
        && return this->requestId_ == nullptr; };
    // refreshTaskId Field Functions 
    bool hasRefreshTaskId() const { return this->refreshTaskId_ != nullptr;};
    void deleteRefreshTaskId() { this->refreshTaskId_ = nullptr;};
    inline string refreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(refreshTaskId_, "") };
    inline RefreshObjectCacheByCacheTagResponseBody& setRefreshTaskId(string refreshTaskId) { DARABONBA_PTR_SET_VALUE(refreshTaskId_, refreshTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshObjectCacheByCacheTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the refresh task. If multiple tasks are returned, the task IDs are separated by commas (,). The task IDs are merged based on the following rules:
    // 
    // *   If the tasks are specified for the same accelerated domain name, submitted within the same second, and run to refresh content based on URLs instead of directories, the task IDs are merged into one task ID (RefreshTaskId).
    // *   If the number of tasks that are specified for the same accelerated domain name, submitted within the same second, and run to refresh content based on URLs instead of directories exceeds 2,000, every 2,000 task IDs are merged into one task ID (RefreshTaskId).
    std::shared_ptr<string> refreshTaskId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
