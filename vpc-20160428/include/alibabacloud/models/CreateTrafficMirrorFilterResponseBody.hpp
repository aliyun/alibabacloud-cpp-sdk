// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
    };
    CreateTrafficMirrorFilterResponseBody() = default ;
    CreateTrafficMirrorFilterResponseBody(const CreateTrafficMirrorFilterResponseBody &) = default ;
    CreateTrafficMirrorFilterResponseBody(CreateTrafficMirrorFilterResponseBody &&) = default ;
    CreateTrafficMirrorFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterResponseBody() = default ;
    CreateTrafficMirrorFilterResponseBody& operator=(const CreateTrafficMirrorFilterResponseBody &) = default ;
    CreateTrafficMirrorFilterResponseBody& operator=(CreateTrafficMirrorFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->trafficMirrorFilterId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficMirrorFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTrafficMirrorFilterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline CreateTrafficMirrorFilterResponseBody& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the mirrored traffic belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the filter.
    shared_ptr<string> trafficMirrorFilterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
