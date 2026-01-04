// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTTRAFFICQOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTTRAFFICQOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateExpressConnectTrafficQosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressConnectTrafficQosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressConnectTrafficQosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExpressConnectTrafficQosResponseBody() = default ;
    CreateExpressConnectTrafficQosResponseBody(const CreateExpressConnectTrafficQosResponseBody &) = default ;
    CreateExpressConnectTrafficQosResponseBody(CreateExpressConnectTrafficQosResponseBody &&) = default ;
    CreateExpressConnectTrafficQosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressConnectTrafficQosResponseBody() = default ;
    CreateExpressConnectTrafficQosResponseBody& operator=(const CreateExpressConnectTrafficQosResponseBody &) = default ;
    CreateExpressConnectTrafficQosResponseBody& operator=(CreateExpressConnectTrafficQosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qosId_ == nullptr
        && this->requestId_ == nullptr; };
    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateExpressConnectTrafficQosResponseBody& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExpressConnectTrafficQosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the QoS policy.
    shared_ptr<string> qosId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
