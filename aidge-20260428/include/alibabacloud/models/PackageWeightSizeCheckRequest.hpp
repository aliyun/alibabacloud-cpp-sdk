// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PACKAGEWEIGHTSIZECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PACKAGEWEIGHTSIZECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class PackageWeightSizeCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PackageWeightSizeCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotatedImageUrl, annotatedImageUrl_);
      DARABONBA_PTR_TO_JSON(RawImageUrl, rawImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, PackageWeightSizeCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotatedImageUrl, annotatedImageUrl_);
      DARABONBA_PTR_FROM_JSON(RawImageUrl, rawImageUrl_);
    };
    PackageWeightSizeCheckRequest() = default ;
    PackageWeightSizeCheckRequest(const PackageWeightSizeCheckRequest &) = default ;
    PackageWeightSizeCheckRequest(PackageWeightSizeCheckRequest &&) = default ;
    PackageWeightSizeCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PackageWeightSizeCheckRequest() = default ;
    PackageWeightSizeCheckRequest& operator=(const PackageWeightSizeCheckRequest &) = default ;
    PackageWeightSizeCheckRequest& operator=(PackageWeightSizeCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotatedImageUrl_ == nullptr
        && this->rawImageUrl_ == nullptr; };
    // annotatedImageUrl Field Functions 
    bool hasAnnotatedImageUrl() const { return this->annotatedImageUrl_ != nullptr;};
    void deleteAnnotatedImageUrl() { this->annotatedImageUrl_ = nullptr;};
    inline string getAnnotatedImageUrl() const { DARABONBA_PTR_GET_DEFAULT(annotatedImageUrl_, "") };
    inline PackageWeightSizeCheckRequest& setAnnotatedImageUrl(string annotatedImageUrl) { DARABONBA_PTR_SET_VALUE(annotatedImageUrl_, annotatedImageUrl) };


    // rawImageUrl Field Functions 
    bool hasRawImageUrl() const { return this->rawImageUrl_ != nullptr;};
    void deleteRawImageUrl() { this->rawImageUrl_ = nullptr;};
    inline string getRawImageUrl() const { DARABONBA_PTR_GET_DEFAULT(rawImageUrl_, "") };
    inline PackageWeightSizeCheckRequest& setRawImageUrl(string rawImageUrl) { DARABONBA_PTR_SET_VALUE(rawImageUrl_, rawImageUrl) };


  protected:
    // The URL of the annotated image, i.e., the image with blue/red rectangular bounding box lines overlaid on the original image by an operator. The URL must be publicly accessible. The image dimensions must not exceed 4000×4000 pixels, the file size must not exceed 10 MB, and the supported formats are PNG, JPEG, and JPG.
    // 
    // This parameter is required.
    shared_ptr<string> annotatedImageUrl_ {};
    // The URL of the raw image, i.e., the unannotated photo of the parcel on the scanning platform. The URL must be publicly accessible. The image dimensions must not exceed 4000×4000 pixels, the file size must not exceed 10 MB, and the supported formats are PNG, JPEG, and JPG.
    // 
    // This parameter is required.
    shared_ptr<string> rawImageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
