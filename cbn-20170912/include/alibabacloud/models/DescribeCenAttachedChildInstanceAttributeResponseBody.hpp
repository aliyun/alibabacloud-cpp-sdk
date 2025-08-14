// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
      DARABONBA_PTR_TO_JSON(ChildInstanceAttributes, childInstanceAttributes_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceName, childInstanceName_);
      DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceAttributes, childInstanceAttributes_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceName, childInstanceName_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenAttachedChildInstanceAttributeResponseBody() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody(const DescribeCenAttachedChildInstanceAttributeResponseBody &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody(DescribeCenAttachedChildInstanceAttributeResponseBody &&) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstanceAttributeResponseBody() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody& operator=(const DescribeCenAttachedChildInstanceAttributeResponseBody &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody& operator=(DescribeCenAttachedChildInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceAttachTime_ != nullptr && this->childInstanceAttributes_ != nullptr && this->childInstanceId_ != nullptr && this->childInstanceName_ != nullptr && this->childInstanceOwnerId_ != nullptr
        && this->childInstanceRegionId_ != nullptr && this->childInstanceType_ != nullptr && this->managedService_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceAttachTime Field Functions 
    bool hasChildInstanceAttachTime() const { return this->childInstanceAttachTime_ != nullptr;};
    void deleteChildInstanceAttachTime() { this->childInstanceAttachTime_ = nullptr;};
    inline string childInstanceAttachTime() const { DARABONBA_PTR_GET_DEFAULT(childInstanceAttachTime_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceAttachTime(string childInstanceAttachTime) { DARABONBA_PTR_SET_VALUE(childInstanceAttachTime_, childInstanceAttachTime) };


    // childInstanceAttributes Field Functions 
    bool hasChildInstanceAttributes() const { return this->childInstanceAttributes_ != nullptr;};
    void deleteChildInstanceAttributes() { this->childInstanceAttributes_ = nullptr;};
    inline const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes & childInstanceAttributes() const { DARABONBA_PTR_GET_CONST(childInstanceAttributes_, DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes childInstanceAttributes() { DARABONBA_PTR_GET(childInstanceAttributes_, DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceAttributes(const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes & childInstanceAttributes) { DARABONBA_PTR_SET_VALUE(childInstanceAttributes_, childInstanceAttributes) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceAttributes(DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes && childInstanceAttributes) { DARABONBA_PTR_SET_RVALUE(childInstanceAttributes_, childInstanceAttributes) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceName Field Functions 
    bool hasChildInstanceName() const { return this->childInstanceName_ != nullptr;};
    void deleteChildInstanceName() { this->childInstanceName_ = nullptr;};
    inline string childInstanceName() const { DARABONBA_PTR_GET_DEFAULT(childInstanceName_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceName(string childInstanceName) { DARABONBA_PTR_SET_VALUE(childInstanceName_, childInstanceName) };


    // childInstanceOwnerId Field Functions 
    bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
    void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
    inline int64_t childInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // managedService Field Functions 
    bool hasManagedService() const { return this->managedService_ != nullptr;};
    void deleteManagedService() { this->managedService_ = nullptr;};
    inline string managedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the network instance was attached to the CEN instance.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> childInstanceAttachTime_ = nullptr;
    // The details about the network instance.
    std::shared_ptr<DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes> childInstanceAttributes_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The name of the network instance.
    std::shared_ptr<string> childInstanceName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network instance belongs.
    std::shared_ptr<int64_t> childInstanceOwnerId_ = nullptr;
    // The region ID of the network instance.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **CCN**: CCN instance
    std::shared_ptr<string> childInstanceType_ = nullptr;
    std::shared_ptr<string> managedService_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the network instance is attached to the CEN instance.
    // 
    // *   **Attaching**: The network instance is being attached to the CEN instance.
    // *   **Attached**: The network instance is attached to the CEN instance.
    // *   **Detaching**: The network instance is being detached from the CEN instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
