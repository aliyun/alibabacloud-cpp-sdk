// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIntegrationResponseBodyIntegration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateIntegrationResponseBody() = default ;
    UpdateIntegrationResponseBody(const UpdateIntegrationResponseBody &) = default ;
    UpdateIntegrationResponseBody(UpdateIntegrationResponseBody &&) = default ;
    UpdateIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntegrationResponseBody() = default ;
    UpdateIntegrationResponseBody& operator=(const UpdateIntegrationResponseBody &) = default ;
    UpdateIntegrationResponseBody& operator=(UpdateIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->integration_ != nullptr
        && this->requestId_ != nullptr; };
    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline const UpdateIntegrationResponseBodyIntegration & integration() const { DARABONBA_PTR_GET_CONST(integration_, UpdateIntegrationResponseBodyIntegration) };
    inline UpdateIntegrationResponseBodyIntegration integration() { DARABONBA_PTR_GET(integration_, UpdateIntegrationResponseBodyIntegration) };
    inline UpdateIntegrationResponseBody& setIntegration(const UpdateIntegrationResponseBodyIntegration & integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };
    inline UpdateIntegrationResponseBody& setIntegration(UpdateIntegrationResponseBodyIntegration && integration) { DARABONBA_PTR_SET_RVALUE(integration_, integration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Information about the alert integration.
    std::shared_ptr<UpdateIntegrationResponseBodyIntegration> integration_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
