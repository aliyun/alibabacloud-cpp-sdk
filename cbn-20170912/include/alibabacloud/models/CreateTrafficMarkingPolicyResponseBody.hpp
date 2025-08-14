// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTrafficMarkingPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMarkingPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMarkingPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
    };
    CreateTrafficMarkingPolicyResponseBody() = default ;
    CreateTrafficMarkingPolicyResponseBody(const CreateTrafficMarkingPolicyResponseBody &) = default ;
    CreateTrafficMarkingPolicyResponseBody(CreateTrafficMarkingPolicyResponseBody &&) = default ;
    CreateTrafficMarkingPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMarkingPolicyResponseBody() = default ;
    CreateTrafficMarkingPolicyResponseBody& operator=(const CreateTrafficMarkingPolicyResponseBody &) = default ;
    CreateTrafficMarkingPolicyResponseBody& operator=(CreateTrafficMarkingPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trafficMarkingPolicyId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficMarkingPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string trafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline CreateTrafficMarkingPolicyResponseBody& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the traffic marking policy.
    std::shared_ptr<string> trafficMarkingPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
