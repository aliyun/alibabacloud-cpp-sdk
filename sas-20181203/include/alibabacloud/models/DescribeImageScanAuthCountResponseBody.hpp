// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESCANAUTHCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESCANAUTHCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageScanAuthCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageScanAuthCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScan, imageScan_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageScanAuthCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScan, imageScan_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageScanAuthCountResponseBody() = default ;
    DescribeImageScanAuthCountResponseBody(const DescribeImageScanAuthCountResponseBody &) = default ;
    DescribeImageScanAuthCountResponseBody(DescribeImageScanAuthCountResponseBody &&) = default ;
    DescribeImageScanAuthCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageScanAuthCountResponseBody() = default ;
    DescribeImageScanAuthCountResponseBody& operator=(const DescribeImageScanAuthCountResponseBody &) = default ;
    DescribeImageScanAuthCountResponseBody& operator=(DescribeImageScanAuthCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageScan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageScan& obj) { 
        DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ScanCount, scanCount_);
      };
      friend void from_json(const Darabonba::Json& j, ImageScan& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ScanCount, scanCount_);
      };
      ImageScan() = default ;
      ImageScan(const ImageScan &) = default ;
      ImageScan(ImageScan &&) = default ;
      ImageScan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageScan() = default ;
      ImageScan& operator=(const ImageScan &) = default ;
      ImageScan& operator=(ImageScan &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageScanCapacity_ == nullptr
        && this->instanceId_ == nullptr && this->scanCount_ == nullptr; };
      // imageScanCapacity Field Functions 
      bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
      void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
      inline int64_t getImageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
      inline ImageScan& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageScan& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // scanCount Field Functions 
      bool hasScanCount() const { return this->scanCount_ != nullptr;};
      void deleteScanCount() { this->scanCount_ = nullptr;};
      inline int64_t getScanCount() const { DARABONBA_PTR_GET_DEFAULT(scanCount_, 0L) };
      inline ImageScan& setScanCount(int64_t scanCount) { DARABONBA_PTR_SET_VALUE(scanCount_, scanCount) };


    protected:
      // The quota for container image scan.
      shared_ptr<int64_t> imageScanCapacity_ {};
      // The instance ID of Security Center.
      shared_ptr<string> instanceId_ {};
      // The consumed quota for container image scan.
      shared_ptr<int64_t> scanCount_ {};
    };

    virtual bool empty() const override { return this->imageScan_ == nullptr
        && this->requestId_ == nullptr; };
    // imageScan Field Functions 
    bool hasImageScan() const { return this->imageScan_ != nullptr;};
    void deleteImageScan() { this->imageScan_ = nullptr;};
    inline const DescribeImageScanAuthCountResponseBody::ImageScan & getImageScan() const { DARABONBA_PTR_GET_CONST(imageScan_, DescribeImageScanAuthCountResponseBody::ImageScan) };
    inline DescribeImageScanAuthCountResponseBody::ImageScan getImageScan() { DARABONBA_PTR_GET(imageScan_, DescribeImageScanAuthCountResponseBody::ImageScan) };
    inline DescribeImageScanAuthCountResponseBody& setImageScan(const DescribeImageScanAuthCountResponseBody::ImageScan & imageScan) { DARABONBA_PTR_SET_VALUE(imageScan_, imageScan) };
    inline DescribeImageScanAuthCountResponseBody& setImageScan(DescribeImageScanAuthCountResponseBody::ImageScan && imageScan) { DARABONBA_PTR_SET_RVALUE(imageScan_, imageScan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageScanAuthCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the quota for container image scan.
    shared_ptr<DescribeImageScanAuthCountResponseBody::ImageScan> imageScan_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
