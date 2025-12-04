// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODYCONTENTDATASUBNETBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODYCONTENTDATASUBNETBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
    };
    ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo() = default ;
    ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo(const ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo &) = default ;
    ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo(ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo &&) = default ;
    ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo() = default ;
    ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& operator=(const ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo &) = default ;
    ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& operator=(ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo &&) = default ;
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
    inline ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // subnetName Field Functions 
    bool hasSubnetName() const { return this->subnetName_ != nullptr;};
    void deleteSubnetName() { this->subnetName_ = nullptr;};
    inline string subnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


  protected:
    // The network segment of the Subnet.
    // 
    // *   The network segment of the subnet must be a proper subset of the network segment of Lingjun to which it belongs, and the mask must be between 16 bits and 29 bits, which can provide 8 to 65536 addresses. For example, the CIDR block of the Lingjun CIDR block is 192.168.0.0/16, and the CIDR blocks of the subnets under the Lingjun CIDR block are 192.168.0.0/17 to 192.168.0.0/29.
    // *   The first and last three IP addresses of each subnet segment are reserved by the system. For example, the CIDR blocks of the subnet are 192.168.1.0/24,192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
    // 
    // For more information about CIDR blocks, see the [What is CIDR?](https://www.alibabacloud.com/help/doc-detail/40637.htm#title-gu4-uzk-12r) section in the "Network FAQ" topic.
    // 
    // This parameter is left empty by default.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the activation code was created.
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
