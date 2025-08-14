// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSQUEUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenInterRegionTrafficQosQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenInterRegionTrafficQosQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QosQueueId, qosQueueId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenInterRegionTrafficQosQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QosQueueId, qosQueueId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCenInterRegionTrafficQosQueueResponseBody() = default ;
    CreateCenInterRegionTrafficQosQueueResponseBody(const CreateCenInterRegionTrafficQosQueueResponseBody &) = default ;
    CreateCenInterRegionTrafficQosQueueResponseBody(CreateCenInterRegionTrafficQosQueueResponseBody &&) = default ;
    CreateCenInterRegionTrafficQosQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenInterRegionTrafficQosQueueResponseBody() = default ;
    CreateCenInterRegionTrafficQosQueueResponseBody& operator=(const CreateCenInterRegionTrafficQosQueueResponseBody &) = default ;
    CreateCenInterRegionTrafficQosQueueResponseBody& operator=(CreateCenInterRegionTrafficQosQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qosQueueId_ != nullptr
        && this->requestId_ != nullptr; };
    // qosQueueId Field Functions 
    bool hasQosQueueId() const { return this->qosQueueId_ != nullptr;};
    void deleteQosQueueId() { this->qosQueueId_ = nullptr;};
    inline string qosQueueId() const { DARABONBA_PTR_GET_DEFAULT(qosQueueId_, "") };
    inline CreateCenInterRegionTrafficQosQueueResponseBody& setQosQueueId(string qosQueueId) { DARABONBA_PTR_SET_VALUE(qosQueueId_, qosQueueId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCenInterRegionTrafficQosQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the queue.
    std::shared_ptr<string> qosQueueId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
