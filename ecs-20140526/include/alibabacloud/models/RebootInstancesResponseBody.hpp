// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REBOOTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RebootInstancesResponseBodyInstanceResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RebootInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RebootInstancesResponseBody() = default ;
    RebootInstancesResponseBody(const RebootInstancesResponseBody &) = default ;
    RebootInstancesResponseBody(RebootInstancesResponseBody &&) = default ;
    RebootInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootInstancesResponseBody() = default ;
    RebootInstancesResponseBody& operator=(const RebootInstancesResponseBody &) = default ;
    RebootInstancesResponseBody& operator=(RebootInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceResponses_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceResponses Field Functions 
    bool hasInstanceResponses() const { return this->instanceResponses_ != nullptr;};
    void deleteInstanceResponses() { this->instanceResponses_ = nullptr;};
    inline const RebootInstancesResponseBodyInstanceResponses & instanceResponses() const { DARABONBA_PTR_GET_CONST(instanceResponses_, RebootInstancesResponseBodyInstanceResponses) };
    inline RebootInstancesResponseBodyInstanceResponses instanceResponses() { DARABONBA_PTR_GET(instanceResponses_, RebootInstancesResponseBodyInstanceResponses) };
    inline RebootInstancesResponseBody& setInstanceResponses(const RebootInstancesResponseBodyInstanceResponses & instanceResponses) { DARABONBA_PTR_SET_VALUE(instanceResponses_, instanceResponses) };
    inline RebootInstancesResponseBody& setInstanceResponses(RebootInstancesResponseBodyInstanceResponses && instanceResponses) { DARABONBA_PTR_SET_RVALUE(instanceResponses_, instanceResponses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RebootInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about instance-specific responses, which contain the status of each instance before and after the operation is called and the results of the operation.
    std::shared_ptr<RebootInstancesResponseBodyInstanceResponses> instanceResponses_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
