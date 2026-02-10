// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESECURITYSCANCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESECURITYSCANCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSecurityScanCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSecurityScanCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSecurityScanCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageSecurityScanCountResponseBody() = default ;
    DescribeImageSecurityScanCountResponseBody(const DescribeImageSecurityScanCountResponseBody &) = default ;
    DescribeImageSecurityScanCountResponseBody(DescribeImageSecurityScanCountResponseBody &&) = default ;
    DescribeImageSecurityScanCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSecurityScanCountResponseBody() = default ;
    DescribeImageSecurityScanCountResponseBody& operator=(const DescribeImageSecurityScanCountResponseBody &) = default ;
    DescribeImageSecurityScanCountResponseBody& operator=(DescribeImageSecurityScanCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageBaselineCount, imageBaselineCount_);
        DARABONBA_PTR_TO_JSON(ImageCveVulCount, imageCveVulCount_);
        DARABONBA_PTR_TO_JSON(ImageMaliciousFileCount, imageMaliciousFileCount_);
        DARABONBA_PTR_TO_JSON(ImageScaVulCount, imageScaVulCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageBaselineCount, imageBaselineCount_);
        DARABONBA_PTR_FROM_JSON(ImageCveVulCount, imageCveVulCount_);
        DARABONBA_PTR_FROM_JSON(ImageMaliciousFileCount, imageMaliciousFileCount_);
        DARABONBA_PTR_FROM_JSON(ImageScaVulCount, imageScaVulCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageBaselineCount_ == nullptr
        && this->imageCveVulCount_ == nullptr && this->imageMaliciousFileCount_ == nullptr && this->imageScaVulCount_ == nullptr; };
      // imageBaselineCount Field Functions 
      bool hasImageBaselineCount() const { return this->imageBaselineCount_ != nullptr;};
      void deleteImageBaselineCount() { this->imageBaselineCount_ = nullptr;};
      inline int32_t getImageBaselineCount() const { DARABONBA_PTR_GET_DEFAULT(imageBaselineCount_, 0) };
      inline Data& setImageBaselineCount(int32_t imageBaselineCount) { DARABONBA_PTR_SET_VALUE(imageBaselineCount_, imageBaselineCount) };


      // imageCveVulCount Field Functions 
      bool hasImageCveVulCount() const { return this->imageCveVulCount_ != nullptr;};
      void deleteImageCveVulCount() { this->imageCveVulCount_ = nullptr;};
      inline int32_t getImageCveVulCount() const { DARABONBA_PTR_GET_DEFAULT(imageCveVulCount_, 0) };
      inline Data& setImageCveVulCount(int32_t imageCveVulCount) { DARABONBA_PTR_SET_VALUE(imageCveVulCount_, imageCveVulCount) };


      // imageMaliciousFileCount Field Functions 
      bool hasImageMaliciousFileCount() const { return this->imageMaliciousFileCount_ != nullptr;};
      void deleteImageMaliciousFileCount() { this->imageMaliciousFileCount_ = nullptr;};
      inline int32_t getImageMaliciousFileCount() const { DARABONBA_PTR_GET_DEFAULT(imageMaliciousFileCount_, 0) };
      inline Data& setImageMaliciousFileCount(int32_t imageMaliciousFileCount) { DARABONBA_PTR_SET_VALUE(imageMaliciousFileCount_, imageMaliciousFileCount) };


      // imageScaVulCount Field Functions 
      bool hasImageScaVulCount() const { return this->imageScaVulCount_ != nullptr;};
      void deleteImageScaVulCount() { this->imageScaVulCount_ = nullptr;};
      inline int32_t getImageScaVulCount() const { DARABONBA_PTR_GET_DEFAULT(imageScaVulCount_, 0) };
      inline Data& setImageScaVulCount(int32_t imageScaVulCount) { DARABONBA_PTR_SET_VALUE(imageScaVulCount_, imageScaVulCount) };


    protected:
      // The number of image baseline risks detected on the current asset.
      shared_ptr<int32_t> imageBaselineCount_ {};
      // The number of image system vulnerabilities returned on the current page.
      shared_ptr<int32_t> imageCveVulCount_ {};
      // The number of malicious image samples returned on the current page.
      shared_ptr<int32_t> imageMaliciousFileCount_ {};
      // The number of image application vulnerabilities returned on the current page.
      shared_ptr<int32_t> imageScaVulCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageSecurityScanCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageSecurityScanCountResponseBody::Data) };
    inline DescribeImageSecurityScanCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageSecurityScanCountResponseBody::Data) };
    inline DescribeImageSecurityScanCountResponseBody& setData(const DescribeImageSecurityScanCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageSecurityScanCountResponseBody& setData(DescribeImageSecurityScanCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSecurityScanCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeImageSecurityScanCountResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
