// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODYSNAPSHOTPACKAGESSNAPSHOTPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODYSNAPSHOTPACKAGESSNAPSHOTPACKAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage() = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage(const DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage &) = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage(DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage &&) = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage() = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& operator=(const DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage &) = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& operator=(DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->endTime_ != nullptr && this->initCapacity_ != nullptr && this->startTime_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // initCapacity Field Functions 
    bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
    void deleteInitCapacity() { this->initCapacity_ = nullptr;};
    inline int64_t initCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, 0L) };
    inline DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& setInitCapacity(int64_t initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the OSS storage plan.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the OSS storage plan expires. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The maximum storage capacity offered by the OSS storage plan.
    std::shared_ptr<int64_t> initCapacity_ = nullptr;
    // The time when the OSS storage plan was purchased. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
