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
        && this->precheckItems_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ShieldPrecheckRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // precheckItems Field Functions 
    bool hasPrecheckItems() const { return this->precheckItems_ != nullptr;};
    void deletePrecheckItems() { this->precheckItems_ = nullptr;};
    inline string getPrecheckItems() const { DARABONBA_PTR_GET_DEFAULT(precheckItems_, "") };
    inline ShieldPrecheckRequest& setPrecheckItems(string precheckItems) { DARABONBA_PTR_SET_VALUE(precheckItems_, precheckItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ShieldPrecheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ShieldPrecheckRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the data migration or synchronization instance. You can call the **DescribeMigrationJobs** or DescribeSynchronizationJobs operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> dtsInstanceId_ {};
    // The precheck items to skip. Separate multiple items with commas (,). Valid values:
    // 
    // - **CHECK_SAME_OBJ**: checks whether objects with the same name exist.
    // - **CHECK_SAME_USER**: checks whether accounts with different names exist.
    // - **CHECK_SRC**: checks the source database version.
    // - **CHECK_TOPOLOGY**: checks the topology version.
    // > For the topology versions supported by DTS, see [Topology overview](https://help.aliyun.com/document_detail/124115.html).
    // - **CHECK_SERVER_ID**: checks the server_id of the source database.
    // 
    // This parameter is required.
    shared_ptr<string> precheckItems_ {};
    // The ID of the region where the instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
