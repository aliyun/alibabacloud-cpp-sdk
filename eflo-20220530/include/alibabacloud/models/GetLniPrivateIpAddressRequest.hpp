// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLNIPRIVATEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLNIPRIVATEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetLniPrivateIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLniPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLniPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetLniPrivateIpAddressRequest() = default ;
    GetLniPrivateIpAddressRequest(const GetLniPrivateIpAddressRequest &) = default ;
    GetLniPrivateIpAddressRequest(GetLniPrivateIpAddressRequest &&) = default ;
    GetLniPrivateIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLniPrivateIpAddressRequest() = default ;
    GetLniPrivateIpAddressRequest& operator=(const GetLniPrivateIpAddressRequest &) = default ;
    GetLniPrivateIpAddressRequest& operator=(GetLniPrivateIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipName_ == nullptr
        && return this->networkInterfaceId_ == nullptr && return this->regionId_ == nullptr; };
    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string ipName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline GetLniPrivateIpAddressRequest& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline GetLniPrivateIpAddressRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLniPrivateIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // IP unique identifier
    // 
    // This parameter is required.
    std::shared_ptr<string> ipName_ = nullptr;
    // Lingjun network interface controller ID
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
