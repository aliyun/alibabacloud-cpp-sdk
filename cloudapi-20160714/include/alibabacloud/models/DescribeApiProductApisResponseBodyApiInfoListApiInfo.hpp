// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTAPISRESPONSEBODYAPIINFOLISTAPIINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTAPISRESPONSEBODYAPIINFOLISTAPIINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductApisResponseBodyApiInfoListApiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductApisResponseBodyApiInfoListApiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductApisResponseBodyApiInfoListApiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeApiProductApisResponseBodyApiInfoListApiInfo() = default ;
    DescribeApiProductApisResponseBodyApiInfoListApiInfo(const DescribeApiProductApisResponseBodyApiInfoListApiInfo &) = default ;
    DescribeApiProductApisResponseBodyApiInfoListApiInfo(DescribeApiProductApisResponseBodyApiInfoListApiInfo &&) = default ;
    DescribeApiProductApisResponseBodyApiInfoListApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductApisResponseBodyApiInfoListApiInfo() = default ;
    DescribeApiProductApisResponseBodyApiInfoListApiInfo& operator=(const DescribeApiProductApisResponseBodyApiInfoListApiInfo &) = default ;
    DescribeApiProductApisResponseBodyApiInfoListApiInfo& operator=(DescribeApiProductApisResponseBodyApiInfoListApiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->method_ == nullptr
        && return this->path_ == nullptr && return this->regionId_ == nullptr && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiProductApisResponseBodyApiInfoListApiInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The API description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group to which the API belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The request method of the API.
    std::shared_ptr<string> method_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> path_ = nullptr;
    // The ID of the region where the API is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The environment to which the API is published. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
