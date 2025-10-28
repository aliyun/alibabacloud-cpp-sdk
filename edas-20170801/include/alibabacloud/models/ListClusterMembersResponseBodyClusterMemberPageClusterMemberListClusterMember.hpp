// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODYCLUSTERMEMBERPAGECLUSTERMEMBERLISTCLUSTERMEMBER_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODYCLUSTERMEMBERPAGECLUSTERMEMBERLISTCLUSTERMEMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterMemberId, clusterMemberId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
      DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterMemberId, clusterMemberId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
      DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember() = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember(const ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember &) = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember(ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember &&) = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember() = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& operator=(const ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember &) = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& operator=(ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterMemberId_ == nullptr && return this->createTime_ == nullptr && return this->ecsId_ == nullptr && return this->ecuId_ == nullptr && return this->privateIp_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterMemberId Field Functions 
    bool hasClusterMemberId() const { return this->clusterMemberId_ != nullptr;};
    void deleteClusterMemberId() { this->clusterMemberId_ = nullptr;};
    inline string clusterMemberId() const { DARABONBA_PTR_GET_DEFAULT(clusterMemberId_, "") };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setClusterMemberId(string clusterMemberId) { DARABONBA_PTR_SET_VALUE(clusterMemberId_, clusterMemberId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ecsId Field Functions 
    bool hasEcsId() const { return this->ecsId_ != nullptr;};
    void deleteEcsId() { this->ecsId_ = nullptr;};
    inline string ecsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


    // ecuId Field Functions 
    bool hasEcuId() const { return this->ecuId_ != nullptr;};
    void deleteEcuId() { this->ecuId_ = nullptr;};
    inline string ecuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the ECS instance in the cluster.
    std::shared_ptr<string> clusterMemberId_ = nullptr;
    // The timestamp when the ECS instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> ecsId_ = nullptr;
    // The unique ID of the elastic compute unit (ECU). You can run the `dmidecode` command on the ECS instance to query the ECU ID.
    std::shared_ptr<string> ecuId_ = nullptr;
    // The private IP address for the ECS instance.
    std::shared_ptr<string> privateIp_ = nullptr;
    // The state of the ECS instance. Valid values:
    // 
    // *   1: The instance is running.
    // *   0: The instance is being converted.
    // *   \\-1: The instance fails to be converted.
    // *   \\-2: The instance is offline.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The timestamp when the ECS instance was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
