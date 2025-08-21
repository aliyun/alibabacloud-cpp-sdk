// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySnapshotShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_TO_JSON(DestinationSnapshotDescription, destinationSnapshotDescription_);
      DARABONBA_PTR_TO_JSON(DestinationSnapshotName, destinationSnapshotName_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DestinationSnapshotDescription, destinationSnapshotDescription_);
      DARABONBA_PTR_FROM_JSON(DestinationSnapshotName, destinationSnapshotName_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    CopySnapshotShrinkRequest() = default ;
    CopySnapshotShrinkRequest(const CopySnapshotShrinkRequest &) = default ;
    CopySnapshotShrinkRequest(CopySnapshotShrinkRequest &&) = default ;
    CopySnapshotShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotShrinkRequest() = default ;
    CopySnapshotShrinkRequest& operator=(const CopySnapshotShrinkRequest &) = default ;
    CopySnapshotShrinkRequest& operator=(CopySnapshotShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRegionIdsShrink_ != nullptr
        && this->destinationSnapshotDescription_ != nullptr && this->destinationSnapshotName_ != nullptr && this->instanceBillingCycle_ != nullptr && this->snapshotId_ != nullptr; };
    // destinationRegionIdsShrink Field Functions 
    bool hasDestinationRegionIdsShrink() const { return this->destinationRegionIdsShrink_ != nullptr;};
    void deleteDestinationRegionIdsShrink() { this->destinationRegionIdsShrink_ = nullptr;};
    inline string destinationRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionIdsShrink_, "") };
    inline CopySnapshotShrinkRequest& setDestinationRegionIdsShrink(string destinationRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(destinationRegionIdsShrink_, destinationRegionIdsShrink) };


    // destinationSnapshotDescription Field Functions 
    bool hasDestinationSnapshotDescription() const { return this->destinationSnapshotDescription_ != nullptr;};
    void deleteDestinationSnapshotDescription() { this->destinationSnapshotDescription_ = nullptr;};
    inline string destinationSnapshotDescription() const { DARABONBA_PTR_GET_DEFAULT(destinationSnapshotDescription_, "") };
    inline CopySnapshotShrinkRequest& setDestinationSnapshotDescription(string destinationSnapshotDescription) { DARABONBA_PTR_SET_VALUE(destinationSnapshotDescription_, destinationSnapshotDescription) };


    // destinationSnapshotName Field Functions 
    bool hasDestinationSnapshotName() const { return this->destinationSnapshotName_ != nullptr;};
    void deleteDestinationSnapshotName() { this->destinationSnapshotName_ = nullptr;};
    inline string destinationSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(destinationSnapshotName_, "") };
    inline CopySnapshotShrinkRequest& setDestinationSnapshotName(string destinationSnapshotName) { DARABONBA_PTR_SET_VALUE(destinationSnapshotName_, destinationSnapshotName) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string instanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CopySnapshotShrinkRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CopySnapshotShrinkRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The IDs of destination nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationRegionIdsShrink_ = nullptr;
    // The description of the snapshot. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> destinationSnapshotDescription_ = nullptr;
    // The name of the snapshot. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> destinationSnapshotName_ = nullptr;
    std::shared_ptr<string> instanceBillingCycle_ = nullptr;
    // The ID of the source snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
