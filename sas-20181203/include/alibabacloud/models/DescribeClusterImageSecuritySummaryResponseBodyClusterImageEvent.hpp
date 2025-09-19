// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODYCLUSTERIMAGEEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODYCLUSTERIMAGEEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline.hpp>
#include <alibabacloud/models/DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul.hpp>
#include <alibabacloud/models/DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile.hpp>
#include <alibabacloud/models/DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBaseline, imageBaseline_);
      DARABONBA_PTR_TO_JSON(ImageCveVul, imageCveVul_);
      DARABONBA_PTR_TO_JSON(ImageMaliciousFile, imageMaliciousFile_);
      DARABONBA_PTR_TO_JSON(ImageScaVul, imageScaVul_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBaseline, imageBaseline_);
      DARABONBA_PTR_FROM_JSON(ImageCveVul, imageCveVul_);
      DARABONBA_PTR_FROM_JSON(ImageMaliciousFile, imageMaliciousFile_);
      DARABONBA_PTR_FROM_JSON(ImageScaVul, imageScaVul_);
    };
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent() = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent(const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent &) = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent(DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent &&) = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent() = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& operator=(const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent &) = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& operator=(DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageBaseline_ != nullptr
        && this->imageCveVul_ != nullptr && this->imageMaliciousFile_ != nullptr && this->imageScaVul_ != nullptr; };
    // imageBaseline Field Functions 
    bool hasImageBaseline() const { return this->imageBaseline_ != nullptr;};
    void deleteImageBaseline() { this->imageBaseline_ = nullptr;};
    inline const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline> & imageBaseline() const { DARABONBA_PTR_GET_CONST(imageBaseline_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline>) };
    inline vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline> imageBaseline() { DARABONBA_PTR_GET(imageBaseline_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline>) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageBaseline(const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline> & imageBaseline) { DARABONBA_PTR_SET_VALUE(imageBaseline_, imageBaseline) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageBaseline(vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline> && imageBaseline) { DARABONBA_PTR_SET_RVALUE(imageBaseline_, imageBaseline) };


    // imageCveVul Field Functions 
    bool hasImageCveVul() const { return this->imageCveVul_ != nullptr;};
    void deleteImageCveVul() { this->imageCveVul_ = nullptr;};
    inline const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul> & imageCveVul() const { DARABONBA_PTR_GET_CONST(imageCveVul_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul>) };
    inline vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul> imageCveVul() { DARABONBA_PTR_GET(imageCveVul_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul>) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageCveVul(const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul> & imageCveVul) { DARABONBA_PTR_SET_VALUE(imageCveVul_, imageCveVul) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageCveVul(vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul> && imageCveVul) { DARABONBA_PTR_SET_RVALUE(imageCveVul_, imageCveVul) };


    // imageMaliciousFile Field Functions 
    bool hasImageMaliciousFile() const { return this->imageMaliciousFile_ != nullptr;};
    void deleteImageMaliciousFile() { this->imageMaliciousFile_ = nullptr;};
    inline const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile> & imageMaliciousFile() const { DARABONBA_PTR_GET_CONST(imageMaliciousFile_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile>) };
    inline vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile> imageMaliciousFile() { DARABONBA_PTR_GET(imageMaliciousFile_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile>) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageMaliciousFile(const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile> & imageMaliciousFile) { DARABONBA_PTR_SET_VALUE(imageMaliciousFile_, imageMaliciousFile) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageMaliciousFile(vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile> && imageMaliciousFile) { DARABONBA_PTR_SET_RVALUE(imageMaliciousFile_, imageMaliciousFile) };


    // imageScaVul Field Functions 
    bool hasImageScaVul() const { return this->imageScaVul_ != nullptr;};
    void deleteImageScaVul() { this->imageScaVul_ = nullptr;};
    inline const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul> & imageScaVul() const { DARABONBA_PTR_GET_CONST(imageScaVul_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul>) };
    inline vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul> imageScaVul() { DARABONBA_PTR_GET(imageScaVul_, vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul>) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageScaVul(const vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul> & imageScaVul) { DARABONBA_PTR_SET_VALUE(imageScaVul_, imageScaVul) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent& setImageScaVul(vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul> && imageScaVul) { DARABONBA_PTR_SET_RVALUE(imageScaVul_, imageScaVul) };


  protected:
    // The information about image baseline risks.
    std::shared_ptr<vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline>> imageBaseline_ = nullptr;
    // The information about image system vulnerabilities.
    std::shared_ptr<vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageCveVul>> imageCveVul_ = nullptr;
    // The information about malicious image samples.
    std::shared_ptr<vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageMaliciousFile>> imageMaliciousFile_ = nullptr;
    // The information about image application vulnerabilities.
    std::shared_ptr<vector<Models::DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageScaVul>> imageScaVul_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
