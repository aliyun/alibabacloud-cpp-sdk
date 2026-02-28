// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLENIPRIVATEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLENIPRIVATEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetLeniPrivateIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLeniPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLeniPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetLeniPrivateIpAddressRequest() = default ;
    GetLeniPrivateIpAddressRequest(const GetLeniPrivateIpAddressRequest &) = default ;
    GetLeniPrivateIpAddressRequest(GetLeniPrivateIpAddressRequest &&) = default ;
    GetLeniPrivateIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLeniPrivateIpAddressRequest() = default ;
    GetLeniPrivateIpAddressRequest& operator=(const GetLeniPrivateIpAddressRequest &) = default ;
    GetLeniPrivateIpAddressRequest& operator=(GetLeniPrivateIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticNetworkInterfaceId_ == nullptr
        && this->ipName_ == nullptr && this->regionId_ == nullptr; };
    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline GetLeniPrivateIpAddressRequest& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline GetLeniPrivateIpAddressRequest& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLeniPrivateIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Lingjun Elastic Network Interface ID.
    // 
    // This parameter is required.
    shared_ptr<string> elasticNetworkInterfaceId_ {};
    // Lingjun Elastic Network Interface secondary private IP unique identifier.
    // 
    // This parameter is required.
    shared_ptr<string> ipName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
