// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODYAPIVPCACCESSINFOSAPIVPCACCESSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODYAPIVPCACCESSINFOSAPIVPCACCESSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo() = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo(const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo &) = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo(DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo &&) = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo() = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& operator=(const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo &) = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& operator=(DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr
        && return this->method_ == nullptr && return this->path_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr && return this->stageId_ == nullptr
        && return this->stageName_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The description, which can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group to which the API belongs.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group to which the API belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The instance ID or IP address in the VPC access authorization.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The HTTP request method of the API.
    std::shared_ptr<string> method_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> path_ = nullptr;
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> stageId_ = nullptr;
    // The environment to which the API is published. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
    // vpc id
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC access authorization.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
