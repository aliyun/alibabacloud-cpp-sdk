// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ResetSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(StopDesktop, stopDesktop_);
    };
    friend void from_json(const Darabonba::Json& j, ResetSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(StopDesktop, stopDesktop_);
    };
    ResetSnapshotRequest() = default ;
    ResetSnapshotRequest(const ResetSnapshotRequest &) = default ;
    ResetSnapshotRequest(ResetSnapshotRequest &&) = default ;
    ResetSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetSnapshotRequest() = default ;
    ResetSnapshotRequest& operator=(const ResetSnapshotRequest &) = default ;
    ResetSnapshotRequest& operator=(ResetSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->snapshotId_ == nullptr && this->stopDesktop_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ResetSnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // stopDesktop Field Functions 
    bool hasStopDesktop() const { return this->stopDesktop_ != nullptr;};
    void deleteStopDesktop() { this->stopDesktop_ = nullptr;};
    inline bool getStopDesktop() const { DARABONBA_PTR_GET_DEFAULT(stopDesktop_, false) };
    inline ResetSnapshotRequest& setStopDesktop(bool stopDesktop) { DARABONBA_PTR_SET_VALUE(stopDesktop_, stopDesktop) };


  protected:
    // The ID of the region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the snapshot.
    // 
    // This parameter is required.
    shared_ptr<string> snapshotId_ {};
    shared_ptr<bool> stopDesktop_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
