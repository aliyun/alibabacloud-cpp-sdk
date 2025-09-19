// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageScanNumInPeriodResponseBodyImageScanData.hpp>
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
    virtual bool empty() const override { this->imageScanData_ != nullptr
        && this->requestId_ != nullptr; };
    // imageScanData Field Functions 
    bool hasImageScanData() const { return this->imageScanData_ != nullptr;};
    void deleteImageScanData() { this->imageScanData_ = nullptr;};
    inline const GetImageScanNumInPeriodResponseBodyImageScanData & imageScanData() const { DARABONBA_PTR_GET_CONST(imageScanData_, GetImageScanNumInPeriodResponseBodyImageScanData) };
    inline GetImageScanNumInPeriodResponseBodyImageScanData imageScanData() { DARABONBA_PTR_GET(imageScanData_, GetImageScanNumInPeriodResponseBodyImageScanData) };
    inline GetImageScanNumInPeriodResponseBody& setImageScanData(const GetImageScanNumInPeriodResponseBodyImageScanData & imageScanData) { DARABONBA_PTR_SET_VALUE(imageScanData_, imageScanData) };
    inline GetImageScanNumInPeriodResponseBody& setImageScanData(GetImageScanNumInPeriodResponseBodyImageScanData && imageScanData) { DARABONBA_PTR_SET_RVALUE(imageScanData_, imageScanData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageScanNumInPeriodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GetImageScanNumInPeriodResponseBodyImageScanData> imageScanData_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
