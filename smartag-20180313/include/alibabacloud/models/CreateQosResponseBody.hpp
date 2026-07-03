// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateQosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateQosResponseBody() = default ;
    CreateQosResponseBody(const CreateQosResponseBody &) = default ;
    CreateQosResponseBody(CreateQosResponseBody &&) = default ;
    CreateQosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosResponseBody() = default ;
    CreateQosResponseBody& operator=(const CreateQosResponseBody &) = default ;
    CreateQosResponseBody& operator=(CreateQosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qosId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateQosResponseBody& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateQosResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The instance ID of the QoS policy.
    shared_ptr<string> qosId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the QoS policy instance belongs.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
