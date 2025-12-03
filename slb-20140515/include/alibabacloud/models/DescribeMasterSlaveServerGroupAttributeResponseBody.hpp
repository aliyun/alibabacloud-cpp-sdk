// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers.hpp>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeMasterSlaveServerGroupAttributeResponseBody() = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody(const DescribeMasterSlaveServerGroupAttributeResponseBody &) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody(DescribeMasterSlaveServerGroupAttributeResponseBody &&) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupAttributeResponseBody() = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody& operator=(const DescribeMasterSlaveServerGroupAttributeResponseBody &) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody& operator=(DescribeMasterSlaveServerGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->masterSlaveBackendServers_ == nullptr && return this->masterSlaveServerGroupId_ == nullptr && return this->masterSlaveServerGroupName_ == nullptr && return this->requestId_ == nullptr
        && return this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // masterSlaveBackendServers Field Functions 
    bool hasMasterSlaveBackendServers() const { return this->masterSlaveBackendServers_ != nullptr;};
    void deleteMasterSlaveBackendServers() { this->masterSlaveBackendServers_ = nullptr;};
    inline const DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers & masterSlaveBackendServers() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServers_, DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers masterSlaveBackendServers() { DARABONBA_PTR_GET(masterSlaveBackendServers_, DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveBackendServers(const DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers & masterSlaveBackendServers) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveBackendServers(DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers && masterSlaveBackendServers) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // masterSlaveServerGroupName Field Functions 
    bool hasMasterSlaveServerGroupName() const { return this->masterSlaveServerGroupName_ != nullptr;};
    void deleteMasterSlaveServerGroupName() { this->masterSlaveServerGroupName_ = nullptr;};
    inline string masterSlaveServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupName_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveServerGroupName(string masterSlaveServerGroupName) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupName_, masterSlaveServerGroupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeMasterSlaveServerGroupAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeMasterSlaveServerGroupAttributeResponseBodyTags) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeMasterSlaveServerGroupAttributeResponseBodyTags) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setTags(const DescribeMasterSlaveServerGroupAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setTags(DescribeMasterSlaveServerGroupAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the CLB instance was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the associated CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // A list of backend servers in the primary/secondary server group.
    std::shared_ptr<DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers> masterSlaveBackendServers_ = nullptr;
    // The ID of the primary/secondary server group.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    // The name of the primary/secondary server group.
    std::shared_ptr<string> masterSlaveServerGroupName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tag list.
    std::shared_ptr<DescribeMasterSlaveServerGroupAttributeResponseBodyTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
