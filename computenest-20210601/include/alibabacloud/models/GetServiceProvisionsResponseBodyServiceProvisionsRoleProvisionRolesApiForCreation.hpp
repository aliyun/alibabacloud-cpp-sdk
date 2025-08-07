// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSROLEPROVISIONROLESAPIFORCREATION_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSROLEPROVISIONROLESAPIFORCREATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
    };
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation(const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation(GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation &&) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& operator=(const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& operator=(GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiName_ != nullptr
        && this->apiProductId_ != nullptr && this->apiType_ != nullptr && this->parameters_ != nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiProductId Field Functions 
    bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
    void deleteApiProductId() { this->apiProductId_ = nullptr;};
    inline string apiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


  protected:
    // The name of the API operation.
    std::shared_ptr<string> apiName_ = nullptr;
    // The ID of the Alibaba Cloud service to which the API operation belongs.
    std::shared_ptr<string> apiProductId_ = nullptr;
    // The type of the API operation. Valid values:
    // 
    // *   Open: public
    // *   Inner: private
    std::shared_ptr<string> apiType_ = nullptr;
    // The ROS parameters of the cluster.
    Darabonba::Json parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
