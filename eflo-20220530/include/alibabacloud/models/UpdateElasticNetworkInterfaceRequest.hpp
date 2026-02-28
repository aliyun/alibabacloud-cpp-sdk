// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEELASTICNETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEELASTICNETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateElasticNetworkInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateElasticNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateElasticNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    UpdateElasticNetworkInterfaceRequest() = default ;
    UpdateElasticNetworkInterfaceRequest(const UpdateElasticNetworkInterfaceRequest &) = default ;
    UpdateElasticNetworkInterfaceRequest(UpdateElasticNetworkInterfaceRequest &&) = default ;
    UpdateElasticNetworkInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateElasticNetworkInterfaceRequest() = default ;
    UpdateElasticNetworkInterfaceRequest& operator=(const UpdateElasticNetworkInterfaceRequest &) = default ;
    UpdateElasticNetworkInterfaceRequest& operator=(UpdateElasticNetworkInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->elasticNetworkInterfaceId_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateElasticNetworkInterfaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateElasticNetworkInterfaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline UpdateElasticNetworkInterfaceRequest& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateElasticNetworkInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateElasticNetworkInterfaceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The description of the variable.
    shared_ptr<string> description_ {};
    // Lingjun Elastic Network Interface ID
    // 
    // This parameter is required.
    shared_ptr<string> elasticNetworkInterfaceId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
