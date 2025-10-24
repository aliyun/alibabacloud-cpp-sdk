// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVirtualResourceResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeVirtualResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    DescribeVirtualResourceResponseBody() = default ;
    DescribeVirtualResourceResponseBody(const DescribeVirtualResourceResponseBody &) = default ;
    DescribeVirtualResourceResponseBody(DescribeVirtualResourceResponseBody &&) = default ;
    DescribeVirtualResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualResourceResponseBody() = default ;
    DescribeVirtualResourceResponseBody& operator=(const DescribeVirtualResourceResponseBody &) = default ;
    DescribeVirtualResourceResponseBody& operator=(DescribeVirtualResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->disableSpotProtectionPeriod_ == nullptr && return this->features_ == nullptr && return this->requestId_ == nullptr && return this->resources_ == nullptr && return this->serviceCount_ == nullptr
        && return this->updateTime_ == nullptr && return this->virtualResourceId_ == nullptr && return this->virtualResourceName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeVirtualResourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // disableSpotProtectionPeriod Field Functions 
    bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
    void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
    inline bool disableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
    inline DescribeVirtualResourceResponseBody& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<string> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
    inline vector<string> features() { DARABONBA_PTR_GET(features_, vector<string>) };
    inline DescribeVirtualResourceResponseBody& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline DescribeVirtualResourceResponseBody& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeVirtualResourceResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeVirtualResourceResponseBodyResources>) };
    inline vector<DescribeVirtualResourceResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<DescribeVirtualResourceResponseBodyResources>) };
    inline DescribeVirtualResourceResponseBody& setResources(const vector<DescribeVirtualResourceResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeVirtualResourceResponseBody& setResources(vector<DescribeVirtualResourceResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline int32_t serviceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0) };
    inline DescribeVirtualResourceResponseBody& setServiceCount(int32_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeVirtualResourceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // virtualResourceId Field Functions 
    bool hasVirtualResourceId() const { return this->virtualResourceId_ != nullptr;};
    void deleteVirtualResourceId() { this->virtualResourceId_ = nullptr;};
    inline string virtualResourceId() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceId_, "") };
    inline DescribeVirtualResourceResponseBody& setVirtualResourceId(string virtualResourceId) { DARABONBA_PTR_SET_VALUE(virtualResourceId_, virtualResourceId) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string virtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline DescribeVirtualResourceResponseBody& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    // The time when the virtual resource group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the retention period of preemptible instances was disabled.
    std::shared_ptr<bool> disableSpotProtectionPeriod_ = nullptr;
    std::shared_ptr<vector<string>> features_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of resources in the virtual resource group.
    std::shared_ptr<vector<DescribeVirtualResourceResponseBodyResources>> resources_ = nullptr;
    // The number of deployed services.
    std::shared_ptr<int32_t> serviceCount_ = nullptr;
    // The time when the virtual resource group was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the virtual resource group.
    std::shared_ptr<string> virtualResourceId_ = nullptr;
    // The name of the virtual resource group.
    std::shared_ptr<string> virtualResourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
