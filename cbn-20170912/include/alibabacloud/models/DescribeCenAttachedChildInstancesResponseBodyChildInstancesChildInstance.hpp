// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODYCHILDINSTANCESCHILDINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODYCHILDINSTANCESCHILDINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance() = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance(const DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance &) = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance(DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance &&) = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance() = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& operator=(const DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance &) = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& operator=(DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceAttachTime_ != nullptr && this->childInstanceId_ != nullptr && this->childInstanceOwnerId_ != nullptr && this->childInstanceRegionId_ != nullptr && this->childInstanceType_ != nullptr
        && this->managedService_ != nullptr && this->status_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceAttachTime Field Functions 
    bool hasChildInstanceAttachTime() const { return this->childInstanceAttachTime_ != nullptr;};
    void deleteChildInstanceAttachTime() { this->childInstanceAttachTime_ = nullptr;};
    inline string childInstanceAttachTime() const { DARABONBA_PTR_GET_DEFAULT(childInstanceAttachTime_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setChildInstanceAttachTime(string childInstanceAttachTime) { DARABONBA_PTR_SET_VALUE(childInstanceAttachTime_, childInstanceAttachTime) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceOwnerId Field Functions 
    bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
    void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
    inline int64_t childInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // managedService Field Functions 
    bool hasManagedService() const { return this->managedService_ != nullptr;};
    void deleteManagedService() { this->managedService_ = nullptr;};
    inline string managedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the network instance was attached to the CEN instance.
    // 
    // The time follows the ISO8601 standard in the YYYY-MM-DDThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> childInstanceAttachTime_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network instance belongs.
    std::shared_ptr<int64_t> childInstanceOwnerId_ = nullptr;
    // The ID of the region where the network instance is deployed.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **CCN**: CCN instance
    std::shared_ptr<string> childInstanceType_ = nullptr;
    std::shared_ptr<string> managedService_ = nullptr;
    // The status of the network instance. Valid values:
    // 
    // *   **Attaching**: The network instance is being created on the transit router.
    // *   **Attached**: The network instance has been created on the transit router.
    // *   **Detaching**: The network instance is being deleted from the transit router.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
