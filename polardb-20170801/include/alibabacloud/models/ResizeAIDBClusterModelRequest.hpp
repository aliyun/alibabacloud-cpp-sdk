// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEAIDBCLUSTERMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEAIDBCLUSTERMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ResizeAIDBClusterModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeAIDBClusterModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetCapacity, targetCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeAIDBClusterModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetCapacity, targetCapacity_);
    };
    ResizeAIDBClusterModelRequest() = default ;
    ResizeAIDBClusterModelRequest(const ResizeAIDBClusterModelRequest &) = default ;
    ResizeAIDBClusterModelRequest(ResizeAIDBClusterModelRequest &&) = default ;
    ResizeAIDBClusterModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeAIDBClusterModelRequest() = default ;
    ResizeAIDBClusterModelRequest& operator=(const ResizeAIDBClusterModelRequest &) = default ;
    ResizeAIDBClusterModelRequest& operator=(ResizeAIDBClusterModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->targetCapacity_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ResizeAIDBClusterModelRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ResizeAIDBClusterModelRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResizeAIDBClusterModelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetCapacity Field Functions 
    bool hasTargetCapacity() const { return this->targetCapacity_ != nullptr;};
    void deleteTargetCapacity() { this->targetCapacity_ = nullptr;};
    inline int64_t getTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(targetCapacity_, 0L) };
    inline ResizeAIDBClusterModelRequest& setTargetCapacity(int64_t targetCapacity) { DARABONBA_PTR_SET_VALUE(targetCapacity_, targetCapacity) };


  protected:
    // The ID of the PolarDB AI 3.0 logical instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to perform only a read-only capacity dry run.
    shared_ptr<bool> dryRun_ {};
    // The region ID. Requests are routed to the region where the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The target total capacity. An abstract capacity unit of 1000 is equivalent to one L20N card. The value must be a positive integer.
    // 
    // This parameter is required.
    shared_ptr<int64_t> targetCapacity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
