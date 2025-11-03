// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
    };
    CreateTrafficMirrorSessionResponseBody() = default ;
    CreateTrafficMirrorSessionResponseBody(const CreateTrafficMirrorSessionResponseBody &) = default ;
    CreateTrafficMirrorSessionResponseBody(CreateTrafficMirrorSessionResponseBody &&) = default ;
    CreateTrafficMirrorSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorSessionResponseBody() = default ;
    CreateTrafficMirrorSessionResponseBody& operator=(const CreateTrafficMirrorSessionResponseBody &) = default ;
    CreateTrafficMirrorSessionResponseBody& operator=(CreateTrafficMirrorSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->trafficMirrorSessionId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficMirrorSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTrafficMirrorSessionResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // trafficMirrorSessionId Field Functions 
    bool hasTrafficMirrorSessionId() const { return this->trafficMirrorSessionId_ != nullptr;};
    void deleteTrafficMirrorSessionId() { this->trafficMirrorSessionId_ = nullptr;};
    inline string trafficMirrorSessionId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionId_, "") };
    inline CreateTrafficMirrorSessionResponseBody& setTrafficMirrorSessionId(string trafficMirrorSessionId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionId_, trafficMirrorSessionId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the mirrored traffic belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the traffic mirror session.
    std::shared_ptr<string> trafficMirrorSessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
