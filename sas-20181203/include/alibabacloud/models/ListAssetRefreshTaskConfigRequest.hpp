// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetRefreshTaskConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetRefreshTaskConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshConfigType, refreshConfigType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetRefreshTaskConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshConfigType, refreshConfigType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    ListAssetRefreshTaskConfigRequest() = default ;
    ListAssetRefreshTaskConfigRequest(const ListAssetRefreshTaskConfigRequest &) = default ;
    ListAssetRefreshTaskConfigRequest(ListAssetRefreshTaskConfigRequest &&) = default ;
    ListAssetRefreshTaskConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetRefreshTaskConfigRequest() = default ;
    ListAssetRefreshTaskConfigRequest& operator=(const ListAssetRefreshTaskConfigRequest &) = default ;
    ListAssetRefreshTaskConfigRequest& operator=(ListAssetRefreshTaskConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->refreshConfigType_ != nullptr
        && this->regionId_ != nullptr && this->targetId_ != nullptr; };
    // refreshConfigType Field Functions 
    bool hasRefreshConfigType() const { return this->refreshConfigType_ != nullptr;};
    void deleteRefreshConfigType() { this->refreshConfigType_ = nullptr;};
    inline int32_t refreshConfigType() const { DARABONBA_PTR_GET_DEFAULT(refreshConfigType_, 0) };
    inline ListAssetRefreshTaskConfigRequest& setRefreshConfigType(int32_t refreshConfigType) { DARABONBA_PTR_SET_VALUE(refreshConfigType_, refreshConfigType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAssetRefreshTaskConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int64_t targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
    inline ListAssetRefreshTaskConfigRequest& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The type of the configuration. Valid values:
    // 
    // *   **0**: server synchronization task
    // *   **1**: cloud service synchronization task
    // *   **2**: scheduled AccessKey pair verification task
    std::shared_ptr<int32_t> refreshConfigType_ = nullptr;
    // The region where the Security Center instance is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the data entry containing the AccessKey pair that you specify when you configure the scheduled AccessKey pair verification task.
    std::shared_ptr<int64_t> targetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
