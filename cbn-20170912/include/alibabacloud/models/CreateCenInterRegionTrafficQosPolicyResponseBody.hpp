// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenInterRegionTrafficQosPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenInterRegionTrafficQosPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenInterRegionTrafficQosPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
    };
    CreateCenInterRegionTrafficQosPolicyResponseBody() = default ;
    CreateCenInterRegionTrafficQosPolicyResponseBody(const CreateCenInterRegionTrafficQosPolicyResponseBody &) = default ;
    CreateCenInterRegionTrafficQosPolicyResponseBody(CreateCenInterRegionTrafficQosPolicyResponseBody &&) = default ;
    CreateCenInterRegionTrafficQosPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenInterRegionTrafficQosPolicyResponseBody() = default ;
    CreateCenInterRegionTrafficQosPolicyResponseBody& operator=(const CreateCenInterRegionTrafficQosPolicyResponseBody &) = default ;
    CreateCenInterRegionTrafficQosPolicyResponseBody& operator=(CreateCenInterRegionTrafficQosPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trafficQosPolicyId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCenInterRegionTrafficQosPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficQosPolicyId Field Functions 
    bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
    void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
    inline string trafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
    inline CreateCenInterRegionTrafficQosPolicyResponseBody& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> trafficQosPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
