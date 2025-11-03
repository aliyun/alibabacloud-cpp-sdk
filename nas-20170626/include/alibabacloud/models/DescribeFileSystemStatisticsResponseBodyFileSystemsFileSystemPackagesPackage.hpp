// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSFILESYSTEMPACKAGESPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSFILESYSTEMPACKAGESPACKAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage(const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage(DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage &&) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& operator=(const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& operator=(DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredTime_ == nullptr
        && return this->packageId_ == nullptr && return this->size_ == nullptr && return this->startTime_ == nullptr; };
    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline string packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the validity period for the storage plan.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the storage plan.
    std::shared_ptr<string> packageId_ = nullptr;
    // The capacity of the storage plan.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The start time of the validity period for the storage plan.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
