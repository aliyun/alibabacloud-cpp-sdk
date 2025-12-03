// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVServerGroupAttributeResponseBodyBackendServers.hpp>
#include <alibabacloud/models/DescribeVServerGroupAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    DescribeVServerGroupAttributeResponseBody() = default ;
    DescribeVServerGroupAttributeResponseBody(const DescribeVServerGroupAttributeResponseBody &) = default ;
    DescribeVServerGroupAttributeResponseBody(DescribeVServerGroupAttributeResponseBody &&) = default ;
    DescribeVServerGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupAttributeResponseBody() = default ;
    DescribeVServerGroupAttributeResponseBody& operator=(const DescribeVServerGroupAttributeResponseBody &) = default ;
    DescribeVServerGroupAttributeResponseBody& operator=(DescribeVServerGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->createTime_ == nullptr && return this->loadBalancerId_ == nullptr && return this->requestId_ == nullptr && return this->tags_ == nullptr && return this->VServerGroupId_ == nullptr
        && return this->VServerGroupName_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const DescribeVServerGroupAttributeResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, DescribeVServerGroupAttributeResponseBodyBackendServers) };
    inline DescribeVServerGroupAttributeResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, DescribeVServerGroupAttributeResponseBodyBackendServers) };
    inline DescribeVServerGroupAttributeResponseBody& setBackendServers(const DescribeVServerGroupAttributeResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeVServerGroupAttributeResponseBody& setBackendServers(DescribeVServerGroupAttributeResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeVServerGroupAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeVServerGroupAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVServerGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVServerGroupAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVServerGroupAttributeResponseBodyTags) };
    inline DescribeVServerGroupAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeVServerGroupAttributeResponseBodyTags) };
    inline DescribeVServerGroupAttributeResponseBody& setTags(const DescribeVServerGroupAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVServerGroupAttributeResponseBody& setTags(DescribeVServerGroupAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeVServerGroupAttributeResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string VServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline DescribeVServerGroupAttributeResponseBody& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    // The backend servers.
    std::shared_ptr<DescribeVServerGroupAttributeResponseBodyBackendServers> backendServers_ = nullptr;
    // The time when the CLB instance was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tags of the backend server.
    std::shared_ptr<DescribeVServerGroupAttributeResponseBodyTags> tags_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The name of the vServer group.
    std::shared_ptr<string> VServerGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
