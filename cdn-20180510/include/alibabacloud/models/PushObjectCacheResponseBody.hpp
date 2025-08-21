// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHOBJECTCACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHOBJECTCACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class PushObjectCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushObjectCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushTaskId, pushTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushObjectCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushTaskId, pushTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PushObjectCacheResponseBody() = default ;
    PushObjectCacheResponseBody(const PushObjectCacheResponseBody &) = default ;
    PushObjectCacheResponseBody(PushObjectCacheResponseBody &&) = default ;
    PushObjectCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushObjectCacheResponseBody() = default ;
    PushObjectCacheResponseBody& operator=(const PushObjectCacheResponseBody &) = default ;
    PushObjectCacheResponseBody& operator=(PushObjectCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushTaskId_ != nullptr
        && this->requestId_ != nullptr; };
    // pushTaskId Field Functions 
    bool hasPushTaskId() const { return this->pushTaskId_ != nullptr;};
    void deletePushTaskId() { this->pushTaskId_ = nullptr;};
    inline string pushTaskId() const { DARABONBA_PTR_GET_DEFAULT(pushTaskId_, "") };
    inline PushObjectCacheResponseBody& setPushTaskId(string pushTaskId) { DARABONBA_PTR_SET_VALUE(pushTaskId_, pushTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushObjectCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the prefetch task. If multiple tasks are returned, the IDs are separated by commas (,). The task IDs are merged based on the following rules:
    // 
    // *   If the tasks are set for the same accelerated domain name, submitted within the same second, and prefetch content from URLs instead of directories, the tasks IDs are merged into the same task ID (RushTaskId).
    // *   If the number of tasks that are set for the same accelerated domain name, submitted within the same second, and prefetch content from URLs instead of directories exceeds 500, every 500 task IDs are merged into the same task ID (RushTaskId).
    std::shared_ptr<string> pushTaskId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
