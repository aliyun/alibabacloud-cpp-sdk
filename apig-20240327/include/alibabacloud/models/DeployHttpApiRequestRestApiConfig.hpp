// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTRESTAPICONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTRESTAPICONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployHttpApiRequestRestApiConfigEnvironment.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeployHttpApiRequestRestApiConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHttpApiRequestRestApiConfig& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environment, environment_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(operationIds, operationIds_);
      DARABONBA_PTR_TO_JSON(revisionId, revisionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHttpApiRequestRestApiConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environment, environment_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(operationIds, operationIds_);
      DARABONBA_PTR_FROM_JSON(revisionId, revisionId_);
    };
    DeployHttpApiRequestRestApiConfig() = default ;
    DeployHttpApiRequestRestApiConfig(const DeployHttpApiRequestRestApiConfig &) = default ;
    DeployHttpApiRequestRestApiConfig(DeployHttpApiRequestRestApiConfig &&) = default ;
    DeployHttpApiRequestRestApiConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHttpApiRequestRestApiConfig() = default ;
    DeployHttpApiRequestRestApiConfig& operator=(const DeployHttpApiRequestRestApiConfig &) = default ;
    DeployHttpApiRequestRestApiConfig& operator=(DeployHttpApiRequestRestApiConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->environment_ != nullptr && this->gatewayId_ != nullptr && this->operationIds_ != nullptr && this->revisionId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeployHttpApiRequestRestApiConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const Models::DeployHttpApiRequestRestApiConfigEnvironment & environment() const { DARABONBA_PTR_GET_CONST(environment_, Models::DeployHttpApiRequestRestApiConfigEnvironment) };
    inline Models::DeployHttpApiRequestRestApiConfigEnvironment environment() { DARABONBA_PTR_GET(environment_, Models::DeployHttpApiRequestRestApiConfigEnvironment) };
    inline DeployHttpApiRequestRestApiConfig& setEnvironment(const Models::DeployHttpApiRequestRestApiConfigEnvironment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline DeployHttpApiRequestRestApiConfig& setEnvironment(Models::DeployHttpApiRequestRestApiConfigEnvironment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DeployHttpApiRequestRestApiConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // operationIds Field Functions 
    bool hasOperationIds() const { return this->operationIds_ != nullptr;};
    void deleteOperationIds() { this->operationIds_ = nullptr;};
    inline const vector<string> & operationIds() const { DARABONBA_PTR_GET_CONST(operationIds_, vector<string>) };
    inline vector<string> operationIds() { DARABONBA_PTR_GET(operationIds_, vector<string>) };
    inline DeployHttpApiRequestRestApiConfig& setOperationIds(const vector<string> & operationIds) { DARABONBA_PTR_SET_VALUE(operationIds_, operationIds) };
    inline DeployHttpApiRequestRestApiConfig& setOperationIds(vector<string> && operationIds) { DARABONBA_PTR_SET_RVALUE(operationIds_, operationIds) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline string revisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
    inline DeployHttpApiRequestRestApiConfig& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


  protected:
    // Publication description.
    std::shared_ptr<string> description_ = nullptr;
    // Publication environment configuration.
    std::shared_ptr<Models::DeployHttpApiRequestRestApiConfigEnvironment> environment_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<vector<string>> operationIds_ = nullptr;
    // Historical version number. If this field is specified, the publication information will be based on the historical version information.
    std::shared_ptr<string> revisionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
