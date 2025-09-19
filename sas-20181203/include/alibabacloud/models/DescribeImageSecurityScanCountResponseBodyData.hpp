// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESECURITYSCANCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESECURITYSCANCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSecurityScanCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSecurityScanCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBaselineCount, imageBaselineCount_);
      DARABONBA_PTR_TO_JSON(ImageCveVulCount, imageCveVulCount_);
      DARABONBA_PTR_TO_JSON(ImageMaliciousFileCount, imageMaliciousFileCount_);
      DARABONBA_PTR_TO_JSON(ImageScaVulCount, imageScaVulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSecurityScanCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBaselineCount, imageBaselineCount_);
      DARABONBA_PTR_FROM_JSON(ImageCveVulCount, imageCveVulCount_);
      DARABONBA_PTR_FROM_JSON(ImageMaliciousFileCount, imageMaliciousFileCount_);
      DARABONBA_PTR_FROM_JSON(ImageScaVulCount, imageScaVulCount_);
    };
    DescribeImageSecurityScanCountResponseBodyData() = default ;
    DescribeImageSecurityScanCountResponseBodyData(const DescribeImageSecurityScanCountResponseBodyData &) = default ;
    DescribeImageSecurityScanCountResponseBodyData(DescribeImageSecurityScanCountResponseBodyData &&) = default ;
    DescribeImageSecurityScanCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSecurityScanCountResponseBodyData() = default ;
    DescribeImageSecurityScanCountResponseBodyData& operator=(const DescribeImageSecurityScanCountResponseBodyData &) = default ;
    DescribeImageSecurityScanCountResponseBodyData& operator=(DescribeImageSecurityScanCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageBaselineCount_ != nullptr
        && this->imageCveVulCount_ != nullptr && this->imageMaliciousFileCount_ != nullptr && this->imageScaVulCount_ != nullptr; };
    // imageBaselineCount Field Functions 
    bool hasImageBaselineCount() const { return this->imageBaselineCount_ != nullptr;};
    void deleteImageBaselineCount() { this->imageBaselineCount_ = nullptr;};
    inline int32_t imageBaselineCount() const { DARABONBA_PTR_GET_DEFAULT(imageBaselineCount_, 0) };
    inline DescribeImageSecurityScanCountResponseBodyData& setImageBaselineCount(int32_t imageBaselineCount) { DARABONBA_PTR_SET_VALUE(imageBaselineCount_, imageBaselineCount) };


    // imageCveVulCount Field Functions 
    bool hasImageCveVulCount() const { return this->imageCveVulCount_ != nullptr;};
    void deleteImageCveVulCount() { this->imageCveVulCount_ = nullptr;};
    inline int32_t imageCveVulCount() const { DARABONBA_PTR_GET_DEFAULT(imageCveVulCount_, 0) };
    inline DescribeImageSecurityScanCountResponseBodyData& setImageCveVulCount(int32_t imageCveVulCount) { DARABONBA_PTR_SET_VALUE(imageCveVulCount_, imageCveVulCount) };


    // imageMaliciousFileCount Field Functions 
    bool hasImageMaliciousFileCount() const { return this->imageMaliciousFileCount_ != nullptr;};
    void deleteImageMaliciousFileCount() { this->imageMaliciousFileCount_ = nullptr;};
    inline int32_t imageMaliciousFileCount() const { DARABONBA_PTR_GET_DEFAULT(imageMaliciousFileCount_, 0) };
    inline DescribeImageSecurityScanCountResponseBodyData& setImageMaliciousFileCount(int32_t imageMaliciousFileCount) { DARABONBA_PTR_SET_VALUE(imageMaliciousFileCount_, imageMaliciousFileCount) };


    // imageScaVulCount Field Functions 
    bool hasImageScaVulCount() const { return this->imageScaVulCount_ != nullptr;};
    void deleteImageScaVulCount() { this->imageScaVulCount_ = nullptr;};
    inline int32_t imageScaVulCount() const { DARABONBA_PTR_GET_DEFAULT(imageScaVulCount_, 0) };
    inline DescribeImageSecurityScanCountResponseBodyData& setImageScaVulCount(int32_t imageScaVulCount) { DARABONBA_PTR_SET_VALUE(imageScaVulCount_, imageScaVulCount) };


  protected:
    // The number of image baseline risks detected on the current asset.
    std::shared_ptr<int32_t> imageBaselineCount_ = nullptr;
    // The number of image system vulnerabilities returned on the current page.
    std::shared_ptr<int32_t> imageCveVulCount_ = nullptr;
    // The number of malicious image samples returned on the current page.
    std::shared_ptr<int32_t> imageMaliciousFileCount_ = nullptr;
    // The number of image application vulnerabilities returned on the current page.
    std::shared_ptr<int32_t> imageScaVulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
