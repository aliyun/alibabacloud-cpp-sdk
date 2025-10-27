// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESCANAUTHCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESCANAUTHCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageScanAuthCountResponseBodyImageScan.hpp>
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
    virtual bool empty() const override { return this->imageScan_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageScan Field Functions 
    bool hasImageScan() const { return this->imageScan_ != nullptr;};
    void deleteImageScan() { this->imageScan_ = nullptr;};
    inline const DescribeImageScanAuthCountResponseBodyImageScan & imageScan() const { DARABONBA_PTR_GET_CONST(imageScan_, DescribeImageScanAuthCountResponseBodyImageScan) };
    inline DescribeImageScanAuthCountResponseBodyImageScan imageScan() { DARABONBA_PTR_GET(imageScan_, DescribeImageScanAuthCountResponseBodyImageScan) };
    inline DescribeImageScanAuthCountResponseBody& setImageScan(const DescribeImageScanAuthCountResponseBodyImageScan & imageScan) { DARABONBA_PTR_SET_VALUE(imageScan_, imageScan) };
    inline DescribeImageScanAuthCountResponseBody& setImageScan(DescribeImageScanAuthCountResponseBodyImageScan && imageScan) { DARABONBA_PTR_SET_RVALUE(imageScan_, imageScan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageScanAuthCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the quota for container image scan.
    std::shared_ptr<DescribeImageScanAuthCountResponseBodyImageScan> imageScan_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
