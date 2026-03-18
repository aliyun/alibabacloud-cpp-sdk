// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKGRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKGRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class CheckGrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckGrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsSlr, isSlr_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckGrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSlr, isSlr_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CheckGrantRequest() = default ;
    CheckGrantRequest(const CheckGrantRequest &) = default ;
    CheckGrantRequest(CheckGrantRequest &&) = default ;
    CheckGrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckGrantRequest() = default ;
    CheckGrantRequest& operator=(const CheckGrantRequest &) = default ;
    CheckGrantRequest& operator=(CheckGrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isSlr_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // isSlr Field Functions 
    bool hasIsSlr() const { return this->isSlr_ != nullptr;};
    void deleteIsSlr() { this->isSlr_ = nullptr;};
    inline bool getIsSlr() const { DARABONBA_PTR_GET_DEFAULT(isSlr_, false) };
    inline CheckGrantRequest& setIsSlr(bool isSlr) { DARABONBA_PTR_SET_VALUE(isSlr_, isSlr) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckGrantRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CheckGrantRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Specifies whether to allow Anti-DDoS Origin to check the service-linked role. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> isSlr_ {};
    // The ID of the region where the Anti-DDoS Origin instance resides.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the Anti-DDoS Origin instance belongs in Resource Management.
    // 
    // If you do not specify this parameter, the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
