// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute.hpp>
#include <alibabacloud/models/DescribeInstanceClusterInfoResponseBodyInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceClusterAttribute, instanceClusterAttribute_);
      DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_TO_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_TO_JSON(InstanceClusterStatus, instanceClusterStatus_);
      DARABONBA_PTR_TO_JSON(InstanceClusterType, instanceClusterType_);
      DARABONBA_PTR_TO_JSON(InstanceClusterVersion, instanceClusterVersion_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterAttribute, instanceClusterAttribute_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterStatus, instanceClusterStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterType, instanceClusterType_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterVersion, instanceClusterVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceClusterInfoResponseBody() = default ;
    DescribeInstanceClusterInfoResponseBody(const DescribeInstanceClusterInfoResponseBody &) = default ;
    DescribeInstanceClusterInfoResponseBody(DescribeInstanceClusterInfoResponseBody &&) = default ;
    DescribeInstanceClusterInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterInfoResponseBody() = default ;
    DescribeInstanceClusterInfoResponseBody& operator=(const DescribeInstanceClusterInfoResponseBody &) = default ;
    DescribeInstanceClusterInfoResponseBody& operator=(DescribeInstanceClusterInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->instanceClusterAttribute_ == nullptr && return this->instanceClusterId_ == nullptr && return this->instanceClusterName_ == nullptr && return this->instanceClusterStatus_ == nullptr
        && return this->instanceClusterType_ == nullptr && return this->instanceClusterVersion_ == nullptr && return this->instanceList_ == nullptr && return this->modifiedTime_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceClusterAttribute Field Functions 
    bool hasInstanceClusterAttribute() const { return this->instanceClusterAttribute_ != nullptr;};
    void deleteInstanceClusterAttribute() { this->instanceClusterAttribute_ = nullptr;};
    inline const DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute & instanceClusterAttribute() const { DARABONBA_PTR_GET_CONST(instanceClusterAttribute_, DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute instanceClusterAttribute() { DARABONBA_PTR_GET(instanceClusterAttribute_, DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterAttribute(const DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute & instanceClusterAttribute) { DARABONBA_PTR_SET_VALUE(instanceClusterAttribute_, instanceClusterAttribute) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterAttribute(DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute && instanceClusterAttribute) { DARABONBA_PTR_SET_RVALUE(instanceClusterAttribute_, instanceClusterAttribute) };


    // instanceClusterId Field Functions 
    bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
    void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
    inline string instanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


    // instanceClusterName Field Functions 
    bool hasInstanceClusterName() const { return this->instanceClusterName_ != nullptr;};
    void deleteInstanceClusterName() { this->instanceClusterName_ = nullptr;};
    inline string instanceClusterName() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterName_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterName(string instanceClusterName) { DARABONBA_PTR_SET_VALUE(instanceClusterName_, instanceClusterName) };


    // instanceClusterStatus Field Functions 
    bool hasInstanceClusterStatus() const { return this->instanceClusterStatus_ != nullptr;};
    void deleteInstanceClusterStatus() { this->instanceClusterStatus_ = nullptr;};
    inline string instanceClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterStatus_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterStatus(string instanceClusterStatus) { DARABONBA_PTR_SET_VALUE(instanceClusterStatus_, instanceClusterStatus) };


    // instanceClusterType Field Functions 
    bool hasInstanceClusterType() const { return this->instanceClusterType_ != nullptr;};
    void deleteInstanceClusterType() { this->instanceClusterType_ = nullptr;};
    inline string instanceClusterType() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterType_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterType(string instanceClusterType) { DARABONBA_PTR_SET_VALUE(instanceClusterType_, instanceClusterType) };


    // instanceClusterVersion Field Functions 
    bool hasInstanceClusterVersion() const { return this->instanceClusterVersion_ != nullptr;};
    void deleteInstanceClusterVersion() { this->instanceClusterVersion_ = nullptr;};
    inline string instanceClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterVersion_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterVersion(string instanceClusterVersion) { DARABONBA_PTR_SET_VALUE(instanceClusterVersion_, instanceClusterVersion) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const DescribeInstanceClusterInfoResponseBodyInstanceList & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, DescribeInstanceClusterInfoResponseBodyInstanceList) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceList instanceList() { DARABONBA_PTR_GET(instanceList_, DescribeInstanceClusterInfoResponseBodyInstanceList) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceList(const DescribeInstanceClusterInfoResponseBodyInstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceList(DescribeInstanceClusterInfoResponseBodyInstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the cluster was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The cluster description, which can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The cluster details.
    std::shared_ptr<DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute> instanceClusterAttribute_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> instanceClusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> instanceClusterName_ = nullptr;
    // The cluster status.
    std::shared_ptr<string> instanceClusterStatus_ = nullptr;
    // The cluster type.
    std::shared_ptr<string> instanceClusterType_ = nullptr;
    // The cluster version.
    std::shared_ptr<string> instanceClusterVersion_ = nullptr;
    // The dedicated instances contained in the cluster.
    std::shared_ptr<DescribeInstanceClusterInfoResponseBodyInstanceList> instanceList_ = nullptr;
    // The time when the cluster was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
