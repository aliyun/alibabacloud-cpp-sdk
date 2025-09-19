// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESCANAUTHCOUNTRESPONSEBODYIMAGESCAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESCANAUTHCOUNTRESPONSEBODYIMAGESCAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageScanAuthCountResponseBodyImageScan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageScanAuthCountResponseBodyImageScan& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScanCount, scanCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageScanAuthCountResponseBodyImageScan& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScanCount, scanCount_);
    };
    DescribeImageScanAuthCountResponseBodyImageScan() = default ;
    DescribeImageScanAuthCountResponseBodyImageScan(const DescribeImageScanAuthCountResponseBodyImageScan &) = default ;
    DescribeImageScanAuthCountResponseBodyImageScan(DescribeImageScanAuthCountResponseBodyImageScan &&) = default ;
    DescribeImageScanAuthCountResponseBodyImageScan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageScanAuthCountResponseBodyImageScan() = default ;
    DescribeImageScanAuthCountResponseBodyImageScan& operator=(const DescribeImageScanAuthCountResponseBodyImageScan &) = default ;
    DescribeImageScanAuthCountResponseBodyImageScan& operator=(DescribeImageScanAuthCountResponseBodyImageScan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageScanCapacity_ != nullptr
        && this->instanceId_ != nullptr && this->scanCount_ != nullptr; };
    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline int64_t imageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
    inline DescribeImageScanAuthCountResponseBodyImageScan& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeImageScanAuthCountResponseBodyImageScan& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scanCount Field Functions 
    bool hasScanCount() const { return this->scanCount_ != nullptr;};
    void deleteScanCount() { this->scanCount_ = nullptr;};
    inline int64_t scanCount() const { DARABONBA_PTR_GET_DEFAULT(scanCount_, 0L) };
    inline DescribeImageScanAuthCountResponseBodyImageScan& setScanCount(int64_t scanCount) { DARABONBA_PTR_SET_VALUE(scanCount_, scanCount) };


  protected:
    // The quota for container image scan.
    std::shared_ptr<int64_t> imageScanCapacity_ = nullptr;
    // The instance ID of Security Center.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The consumed quota for container image scan.
    std::shared_ptr<int64_t> scanCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
