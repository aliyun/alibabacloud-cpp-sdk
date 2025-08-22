// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEEVENTBRIDGEINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEEVENTBRIDGEINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateEventBridgeIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateEventBridgeIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventBridgeIntegration, eventBridgeIntegration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateEventBridgeIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBridgeIntegration, eventBridgeIntegration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateEventBridgeIntegrationResponseBody() = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody(const CreateOrUpdateEventBridgeIntegrationResponseBody &) = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody(CreateOrUpdateEventBridgeIntegrationResponseBody &&) = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateEventBridgeIntegrationResponseBody() = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody& operator=(const CreateOrUpdateEventBridgeIntegrationResponseBody &) = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody& operator=(CreateOrUpdateEventBridgeIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBridgeIntegration_ != nullptr
        && this->requestId_ != nullptr; };
    // eventBridgeIntegration Field Functions 
    bool hasEventBridgeIntegration() const { return this->eventBridgeIntegration_ != nullptr;};
    void deleteEventBridgeIntegration() { this->eventBridgeIntegration_ = nullptr;};
    inline const CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration & eventBridgeIntegration() const { DARABONBA_PTR_GET_CONST(eventBridgeIntegration_, CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration) };
    inline CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration eventBridgeIntegration() { DARABONBA_PTR_GET(eventBridgeIntegration_, CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration) };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody& setEventBridgeIntegration(const CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration & eventBridgeIntegration) { DARABONBA_PTR_SET_VALUE(eventBridgeIntegration_, eventBridgeIntegration) };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody& setEventBridgeIntegration(CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration && eventBridgeIntegration) { DARABONBA_PTR_SET_RVALUE(eventBridgeIntegration_, eventBridgeIntegration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the EventBridge integration.
    std::shared_ptr<CreateOrUpdateEventBridgeIntegrationResponseBodyEventBridgeIntegration> eventBridgeIntegration_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
