// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKINTERFACERESPONSEBODYCONTENTSUBNETBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKINTERFACERESPONSEBODYCONTENTSUBNETBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetNetworkInterfaceResponseBodyContentSubnetBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
    };
    GetNetworkInterfaceResponseBodyContentSubnetBaseInfo() = default ;
    GetNetworkInterfaceResponseBodyContentSubnetBaseInfo(const GetNetworkInterfaceResponseBodyContentSubnetBaseInfo &) = default ;
    GetNetworkInterfaceResponseBodyContentSubnetBaseInfo(GetNetworkInterfaceResponseBodyContentSubnetBaseInfo &&) = default ;
    GetNetworkInterfaceResponseBodyContentSubnetBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkInterfaceResponseBodyContentSubnetBaseInfo() = default ;
    GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& operator=(const GetNetworkInterfaceResponseBodyContentSubnetBaseInfo &) = default ;
    GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& operator=(GetNetworkInterfaceResponseBodyContentSubnetBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->createTime_ == nullptr && return this->subnetId_ == nullptr && return this->subnetName_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // subnetName Field Functions 
    bool hasSubnetName() const { return this->subnetName_ != nullptr;};
    void deleteSubnetName() { this->subnetName_ = nullptr;};
    inline string subnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
    inline GetNetworkInterfaceResponseBodyContentSubnetBaseInfo& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


  protected:
    // Network address segment
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the Subnet instance.
    std::shared_ptr<string> subnetId_ = nullptr;
    // The name of the Subnet instance.
    std::shared_ptr<string> subnetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
