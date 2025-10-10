// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHEALTHCHECKTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHEALTHCHECKTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class DeleteHealthCheckTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHealthCheckTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateIds, healthCheckTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHealthCheckTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateIds, healthCheckTemplateIds_);
    };
    DeleteHealthCheckTemplatesRequest() = default ;
    DeleteHealthCheckTemplatesRequest(const DeleteHealthCheckTemplatesRequest &) = default ;
    DeleteHealthCheckTemplatesRequest(DeleteHealthCheckTemplatesRequest &&) = default ;
    DeleteHealthCheckTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHealthCheckTemplatesRequest() = default ;
    DeleteHealthCheckTemplatesRequest& operator=(const DeleteHealthCheckTemplatesRequest &) = default ;
    DeleteHealthCheckTemplatesRequest& operator=(DeleteHealthCheckTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->healthCheckTemplateIds_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteHealthCheckTemplatesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteHealthCheckTemplatesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckTemplateIds Field Functions 
    bool hasHealthCheckTemplateIds() const { return this->healthCheckTemplateIds_ != nullptr;};
    void deleteHealthCheckTemplateIds() { this->healthCheckTemplateIds_ = nullptr;};
    inline const vector<string> & healthCheckTemplateIds() const { DARABONBA_PTR_GET_CONST(healthCheckTemplateIds_, vector<string>) };
    inline vector<string> healthCheckTemplateIds() { DARABONBA_PTR_GET(healthCheckTemplateIds_, vector<string>) };
    inline DeleteHealthCheckTemplatesRequest& setHealthCheckTemplateIds(const vector<string> & healthCheckTemplateIds) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateIds_, healthCheckTemplateIds) };
    inline DeleteHealthCheckTemplatesRequest& setHealthCheckTemplateIds(vector<string> && healthCheckTemplateIds) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplateIds_, healthCheckTemplateIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a **2xx HTTP** status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The IDs of health check templates. You can specify at most 10 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> healthCheckTemplateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
