// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEELASTICNETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEELASTICNETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DeleteElasticNetworkInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteElasticNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteElasticNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteElasticNetworkInterfaceRequest() = default ;
    DeleteElasticNetworkInterfaceRequest(const DeleteElasticNetworkInterfaceRequest &) = default ;
    DeleteElasticNetworkInterfaceRequest(DeleteElasticNetworkInterfaceRequest &&) = default ;
    DeleteElasticNetworkInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteElasticNetworkInterfaceRequest() = default ;
    DeleteElasticNetworkInterfaceRequest& operator=(const DeleteElasticNetworkInterfaceRequest &) = default ;
    DeleteElasticNetworkInterfaceRequest& operator=(DeleteElasticNetworkInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->elasticNetworkInterfaceId_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteElasticNetworkInterfaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string elasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline DeleteElasticNetworkInterfaceRequest& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteElasticNetworkInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // By default, popApi is not ignored and idempotent
    std::shared_ptr<string> clientToken_ = nullptr;
    // Lingjun Elastic Network Interface ID
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticNetworkInterfaceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
