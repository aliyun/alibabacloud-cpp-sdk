// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUNTSCANNEDIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUNTSCANNEDIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCountScannedImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCountScannedImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScannedCount, scannedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCountScannedImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScannedCount, scannedCount_);
    };
    DescribeCountScannedImageResponseBody() = default ;
    DescribeCountScannedImageResponseBody(const DescribeCountScannedImageResponseBody &) = default ;
    DescribeCountScannedImageResponseBody(DescribeCountScannedImageResponseBody &&) = default ;
    DescribeCountScannedImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCountScannedImageResponseBody() = default ;
    DescribeCountScannedImageResponseBody& operator=(const DescribeCountScannedImageResponseBody &) = default ;
    DescribeCountScannedImageResponseBody& operator=(DescribeCountScannedImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scannedCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCountScannedImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scannedCount Field Functions 
    bool hasScannedCount() const { return this->scannedCount_ != nullptr;};
    void deleteScannedCount() { this->scannedCount_ = nullptr;};
    inline int32_t getScannedCount() const { DARABONBA_PTR_GET_DEFAULT(scannedCount_, 0) };
    inline DescribeCountScannedImageResponseBody& setScannedCount(int32_t scannedCount) { DARABONBA_PTR_SET_VALUE(scannedCount_, scannedCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of images that are scanned.
    shared_ptr<int32_t> scannedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
