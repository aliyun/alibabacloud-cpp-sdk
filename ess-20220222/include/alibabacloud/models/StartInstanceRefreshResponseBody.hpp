// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartInstanceRefreshResponseBody() = default ;
    StartInstanceRefreshResponseBody(const StartInstanceRefreshResponseBody &) = default ;
    StartInstanceRefreshResponseBody(StartInstanceRefreshResponseBody &&) = default ;
    StartInstanceRefreshResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshResponseBody() = default ;
    StartInstanceRefreshResponseBody& operator=(const StartInstanceRefreshResponseBody &) = default ;
    StartInstanceRefreshResponseBody& operator=(StartInstanceRefreshResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceRefreshTaskId_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceRefreshTaskId Field Functions 
    bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
    void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
    inline string instanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
    inline StartInstanceRefreshResponseBody& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartInstanceRefreshResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance refresh task.
    std::shared_ptr<string> instanceRefreshTaskId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
