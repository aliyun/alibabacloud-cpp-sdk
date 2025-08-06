// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StopInstancesResponseBodyInstanceResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StopInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StopInstancesResponseBody() = default ;
    StopInstancesResponseBody(const StopInstancesResponseBody &) = default ;
    StopInstancesResponseBody(StopInstancesResponseBody &&) = default ;
    StopInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstancesResponseBody() = default ;
    StopInstancesResponseBody& operator=(const StopInstancesResponseBody &) = default ;
    StopInstancesResponseBody& operator=(StopInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceResponses_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceResponses Field Functions 
    bool hasInstanceResponses() const { return this->instanceResponses_ != nullptr;};
    void deleteInstanceResponses() { this->instanceResponses_ = nullptr;};
    inline const StopInstancesResponseBodyInstanceResponses & instanceResponses() const { DARABONBA_PTR_GET_CONST(instanceResponses_, StopInstancesResponseBodyInstanceResponses) };
    inline StopInstancesResponseBodyInstanceResponses instanceResponses() { DARABONBA_PTR_GET(instanceResponses_, StopInstancesResponseBodyInstanceResponses) };
    inline StopInstancesResponseBody& setInstanceResponses(const StopInstancesResponseBodyInstanceResponses & instanceResponses) { DARABONBA_PTR_SET_VALUE(instanceResponses_, instanceResponses) };
    inline StopInstancesResponseBody& setInstanceResponses(StopInstancesResponseBodyInstanceResponses && instanceResponses) { DARABONBA_PTR_SET_RVALUE(instanceResponses_, instanceResponses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance-specific responses, which contain the status of each instance before and after the operation was called and the results of the operation.
    std::shared_ptr<StopInstancesResponseBodyInstanceResponses> instanceResponses_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
