// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyActiveOperationTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(ImmediateStart, immediateStart_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(ImmediateStart, immediateStart_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
    };
    ModifyActiveOperationTasksRequest() = default ;
    ModifyActiveOperationTasksRequest(const ModifyActiveOperationTasksRequest &) = default ;
    ModifyActiveOperationTasksRequest(ModifyActiveOperationTasksRequest &&) = default ;
    ModifyActiveOperationTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActiveOperationTasksRequest() = default ;
    ModifyActiveOperationTasksRequest& operator=(const ModifyActiveOperationTasksRequest &) = default ;
    ModifyActiveOperationTasksRequest& operator=(ModifyActiveOperationTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->immediateStart_ == nullptr && return this->regionId_ == nullptr && return this->switchTime_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ModifyActiveOperationTasksRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // immediateStart Field Functions 
    bool hasImmediateStart() const { return this->immediateStart_ != nullptr;};
    void deleteImmediateStart() { this->immediateStart_ = nullptr;};
    inline int64_t immediateStart() const { DARABONBA_PTR_GET_DEFAULT(immediateStart_, 0L) };
    inline ModifyActiveOperationTasksRequest& setImmediateStart(int64_t immediateStart) { DARABONBA_PTR_SET_VALUE(immediateStart_, immediateStart) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyActiveOperationTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyActiveOperationTasksRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ids_ = nullptr;
    std::shared_ptr<int64_t> immediateStart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> switchTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
