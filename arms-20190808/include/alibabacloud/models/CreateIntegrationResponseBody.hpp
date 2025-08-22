// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIntegrationResponseBodyIntegration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIntegrationResponseBody() = default ;
    CreateIntegrationResponseBody(const CreateIntegrationResponseBody &) = default ;
    CreateIntegrationResponseBody(CreateIntegrationResponseBody &&) = default ;
    CreateIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationResponseBody() = default ;
    CreateIntegrationResponseBody& operator=(const CreateIntegrationResponseBody &) = default ;
    CreateIntegrationResponseBody& operator=(CreateIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->integration_ != nullptr
        && this->requestId_ != nullptr; };
    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline const CreateIntegrationResponseBodyIntegration & integration() const { DARABONBA_PTR_GET_CONST(integration_, CreateIntegrationResponseBodyIntegration) };
    inline CreateIntegrationResponseBodyIntegration integration() { DARABONBA_PTR_GET(integration_, CreateIntegrationResponseBodyIntegration) };
    inline CreateIntegrationResponseBody& setIntegration(const CreateIntegrationResponseBodyIntegration & integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };
    inline CreateIntegrationResponseBody& setIntegration(CreateIntegrationResponseBodyIntegration && integration) { DARABONBA_PTR_SET_RVALUE(integration_, integration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the alert integration.
    std::shared_ptr<CreateIntegrationResponseBodyIntegration> integration_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
