// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTEGRATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTEGRATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteIntegrationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIntegrationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIntegrationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
    };
    DeleteIntegrationsRequest() = default ;
    DeleteIntegrationsRequest(const DeleteIntegrationsRequest &) = default ;
    DeleteIntegrationsRequest(DeleteIntegrationsRequest &&) = default ;
    DeleteIntegrationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIntegrationsRequest() = default ;
    DeleteIntegrationsRequest& operator=(const DeleteIntegrationsRequest &) = default ;
    DeleteIntegrationsRequest& operator=(DeleteIntegrationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->integrationId_ != nullptr; };
    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline int64_t integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
    inline DeleteIntegrationsRequest& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


  protected:
    // The ID of the alert integration.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> integrationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
