// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartInstancesResponseBodyInstanceResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StartInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartInstancesResponseBody() = default ;
    StartInstancesResponseBody(const StartInstancesResponseBody &) = default ;
    StartInstancesResponseBody(StartInstancesResponseBody &&) = default ;
    StartInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstancesResponseBody() = default ;
    StartInstancesResponseBody& operator=(const StartInstancesResponseBody &) = default ;
    StartInstancesResponseBody& operator=(StartInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceResponses_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceResponses Field Functions 
    bool hasInstanceResponses() const { return this->instanceResponses_ != nullptr;};
    void deleteInstanceResponses() { this->instanceResponses_ = nullptr;};
    inline const StartInstancesResponseBodyInstanceResponses & instanceResponses() const { DARABONBA_PTR_GET_CONST(instanceResponses_, StartInstancesResponseBodyInstanceResponses) };
    inline StartInstancesResponseBodyInstanceResponses instanceResponses() { DARABONBA_PTR_GET(instanceResponses_, StartInstancesResponseBodyInstanceResponses) };
    inline StartInstancesResponseBody& setInstanceResponses(const StartInstancesResponseBodyInstanceResponses & instanceResponses) { DARABONBA_PTR_SET_VALUE(instanceResponses_, instanceResponses) };
    inline StartInstancesResponseBody& setInstanceResponses(StartInstancesResponseBodyInstanceResponses && instanceResponses) { DARABONBA_PTR_SET_RVALUE(instanceResponses_, instanceResponses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ECS instance, such as the status of each instance before and after the operation is called and the operation results.
    std::shared_ptr<StartInstancesResponseBodyInstanceResponses> instanceResponses_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
