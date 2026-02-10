// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetImageScanNumInPeriodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageScanNumInPeriodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScanData, imageScanData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageScanNumInPeriodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScanData, imageScanData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageScanNumInPeriodResponseBody() = default ;
    GetImageScanNumInPeriodResponseBody(const GetImageScanNumInPeriodResponseBody &) = default ;
    GetImageScanNumInPeriodResponseBody(GetImageScanNumInPeriodResponseBody &&) = default ;
    GetImageScanNumInPeriodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageScanNumInPeriodResponseBody() = default ;
    GetImageScanNumInPeriodResponseBody& operator=(const GetImageScanNumInPeriodResponseBody &) = default ;
    GetImageScanNumInPeriodResponseBody& operator=(GetImageScanNumInPeriodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageScanData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageScanData& obj) { 
        DARABONBA_PTR_TO_JSON(ImageScanCount, imageScanCount_);
      };
      friend void from_json(const Darabonba::Json& j, ImageScanData& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageScanCount, imageScanCount_);
      };
      ImageScanData() = default ;
      ImageScanData(const ImageScanData &) = default ;
      ImageScanData(ImageScanData &&) = default ;
      ImageScanData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageScanData() = default ;
      ImageScanData& operator=(const ImageScanData &) = default ;
      ImageScanData& operator=(ImageScanData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageScanCount_ == nullptr; };
      // imageScanCount Field Functions 
      bool hasImageScanCount() const { return this->imageScanCount_ != nullptr;};
      void deleteImageScanCount() { this->imageScanCount_ = nullptr;};
      inline int32_t getImageScanCount() const { DARABONBA_PTR_GET_DEFAULT(imageScanCount_, 0) };
      inline ImageScanData& setImageScanCount(int32_t imageScanCount) { DARABONBA_PTR_SET_VALUE(imageScanCount_, imageScanCount) };


    protected:
      // The number of image scans.
      shared_ptr<int32_t> imageScanCount_ {};
    };

    virtual bool empty() const override { return this->imageScanData_ == nullptr
        && this->requestId_ == nullptr; };
    // imageScanData Field Functions 
    bool hasImageScanData() const { return this->imageScanData_ != nullptr;};
    void deleteImageScanData() { this->imageScanData_ = nullptr;};
    inline const GetImageScanNumInPeriodResponseBody::ImageScanData & getImageScanData() const { DARABONBA_PTR_GET_CONST(imageScanData_, GetImageScanNumInPeriodResponseBody::ImageScanData) };
    inline GetImageScanNumInPeriodResponseBody::ImageScanData getImageScanData() { DARABONBA_PTR_GET(imageScanData_, GetImageScanNumInPeriodResponseBody::ImageScanData) };
    inline GetImageScanNumInPeriodResponseBody& setImageScanData(const GetImageScanNumInPeriodResponseBody::ImageScanData & imageScanData) { DARABONBA_PTR_SET_VALUE(imageScanData_, imageScanData) };
    inline GetImageScanNumInPeriodResponseBody& setImageScanData(GetImageScanNumInPeriodResponseBody::ImageScanData && imageScanData) { DARABONBA_PTR_SET_RVALUE(imageScanData_, imageScanData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageScanNumInPeriodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetImageScanNumInPeriodResponseBody::ImageScanData> imageScanData_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
