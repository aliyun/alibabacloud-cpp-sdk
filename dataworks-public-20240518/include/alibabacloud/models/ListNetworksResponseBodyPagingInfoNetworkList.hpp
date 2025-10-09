// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKSRESPONSEBODYPAGINGINFONETWORKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKSRESPONSEBODYPAGINGINFONETWORKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNetworksResponseBodyPagingInfoNetworkList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworksResponseBodyPagingInfoNetworkList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworksResponseBodyPagingInfoNetworkList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ListNetworksResponseBodyPagingInfoNetworkList() = default ;
    ListNetworksResponseBodyPagingInfoNetworkList(const ListNetworksResponseBodyPagingInfoNetworkList &) = default ;
    ListNetworksResponseBodyPagingInfoNetworkList(ListNetworksResponseBodyPagingInfoNetworkList &&) = default ;
    ListNetworksResponseBodyPagingInfoNetworkList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworksResponseBodyPagingInfoNetworkList() = default ;
    ListNetworksResponseBodyPagingInfoNetworkList& operator=(const ListNetworksResponseBodyPagingInfoNetworkList &) = default ;
    ListNetworksResponseBodyPagingInfoNetworkList& operator=(ListNetworksResponseBodyPagingInfoNetworkList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->id_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupId_ != nullptr && this->status_ != nullptr
        && this->vpcId_ != nullptr && this->vswitchId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListNetworksResponseBodyPagingInfoNetworkList& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The time when the network resource was created. The value is a 64-bit timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who creates the network resource.
    std::shared_ptr<string> createUser_ = nullptr;
    // The network ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the serverless resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The status of the network resource. Valid values: Pending, Creating, Running, Deleting, and Deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The VSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
