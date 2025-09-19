// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODRESPONSEBODYIMAGESCANDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODRESPONSEBODYIMAGESCANDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetImageScanNumInPeriodResponseBodyImageScanData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageScanNumInPeriodResponseBodyImageScanData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScanCount, imageScanCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageScanNumInPeriodResponseBodyImageScanData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScanCount, imageScanCount_);
    };
    GetImageScanNumInPeriodResponseBodyImageScanData() = default ;
    GetImageScanNumInPeriodResponseBodyImageScanData(const GetImageScanNumInPeriodResponseBodyImageScanData &) = default ;
    GetImageScanNumInPeriodResponseBodyImageScanData(GetImageScanNumInPeriodResponseBodyImageScanData &&) = default ;
    GetImageScanNumInPeriodResponseBodyImageScanData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageScanNumInPeriodResponseBodyImageScanData() = default ;
    GetImageScanNumInPeriodResponseBodyImageScanData& operator=(const GetImageScanNumInPeriodResponseBodyImageScanData &) = default ;
    GetImageScanNumInPeriodResponseBodyImageScanData& operator=(GetImageScanNumInPeriodResponseBodyImageScanData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageScanCount_ != nullptr; };
    // imageScanCount Field Functions 
    bool hasImageScanCount() const { return this->imageScanCount_ != nullptr;};
    void deleteImageScanCount() { this->imageScanCount_ = nullptr;};
    inline int32_t imageScanCount() const { DARABONBA_PTR_GET_DEFAULT(imageScanCount_, 0) };
    inline GetImageScanNumInPeriodResponseBodyImageScanData& setImageScanCount(int32_t imageScanCount) { DARABONBA_PTR_SET_VALUE(imageScanCount_, imageScanCount) };


  protected:
    // The number of image scans.
    std::shared_ptr<int32_t> imageScanCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
