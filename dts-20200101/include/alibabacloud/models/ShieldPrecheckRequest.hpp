// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHIELDPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHIELDPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ShieldPrecheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShieldPrecheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(PrecheckItems, precheckItems_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ShieldPrecheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrecheckItems, precheckItems_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ShieldPrecheckRequest() = default ;
    ShieldPrecheckRequest(const ShieldPrecheckRequest &) = default ;
    ShieldPrecheckRequest(ShieldPrecheckRequest &&) = default ;
    ShieldPrecheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShieldPrecheckRequest() = default ;
    ShieldPrecheckRequest& operator=(const ShieldPrecheckRequest &) = default ;
    ShieldPrecheckRequest& operator=(ShieldPrecheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && return this->precheckItems_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ShieldPrecheckRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // precheckItems Field Functions 
    bool hasPrecheckItems() const { return this->precheckItems_ != nullptr;};
    void deletePrecheckItems() { this->precheckItems_ = nullptr;};
    inline string precheckItems() const { DARABONBA_PTR_GET_DEFAULT(precheckItems_, "") };
    inline ShieldPrecheckRequest& setPrecheckItems(string precheckItems) { DARABONBA_PTR_SET_VALUE(precheckItems_, precheckItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ShieldPrecheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ShieldPrecheckRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the change tracking instance. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID.
    // 
    // >  You must specify at least one of the **DtsInstanceId** and **DtsJobId** parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The precheck items that you want to ignore. Separate multiple items with commas (,). Valid values:
    //  
    // *   **CHECK_SAME_OBJ**: schema name conflict
    //  
    // *   **CHECK_SAME_USER**: multiple usernames for one instance
    //  
    // *   **CHECK_SRC**: source database version
    //  
    // *   **CHECK_TOPOLOGY**: topology
    //  
    // > For more information about the topologies supported by DTS, see [Synchronization topologies](https://help.aliyun.com/document_detail/124115.html).
    //  
    // *   **CHECK_SERVER_ID**: value of server_id in the source database
    // 
    // This parameter is required.
    std::shared_ptr<string> precheckItems_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
