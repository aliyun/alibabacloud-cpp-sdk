// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEMOSAICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEMOSAICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddImageMosaicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageMosaicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageMosaicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    AddImageMosaicRequest() = default ;
    AddImageMosaicRequest(const AddImageMosaicRequest &) = default ;
    AddImageMosaicRequest(AddImageMosaicRequest &&) = default ;
    AddImageMosaicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageMosaicRequest() = default ;
    AddImageMosaicRequest& operator=(const AddImageMosaicRequest &) = default ;
    AddImageMosaicRequest& operator=(AddImageMosaicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(BlurRadius, blurRadius_);
        DARABONBA_PTR_TO_JSON(Boundary, boundary_);
        DARABONBA_PTR_TO_JSON(Color, color_);
        DARABONBA_PTR_TO_JSON(MosaicRadius, mosaicRadius_);
        DARABONBA_PTR_TO_JSON(Sigma, sigma_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(BlurRadius, blurRadius_);
        DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
        DARABONBA_PTR_FROM_JSON(Color, color_);
        DARABONBA_PTR_FROM_JSON(MosaicRadius, mosaicRadius_);
        DARABONBA_PTR_FROM_JSON(Sigma, sigma_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Boundary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Boundary& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Boundary& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Boundary() = default ;
        Boundary(const Boundary &) = default ;
        Boundary(Boundary &&) = default ;
        Boundary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Boundary() = default ;
        Boundary& operator=(const Boundary &) = default ;
        Boundary& operator=(Boundary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->height_ == nullptr
        && this->referPos_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Boundary& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // referPos Field Functions 
        bool hasReferPos() const { return this->referPos_ != nullptr;};
        void deleteReferPos() { this->referPos_ = nullptr;};
        inline string getReferPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
        inline Boundary& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Boundary& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Boundary& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Boundary& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        // The height of the bounding box. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
        // 
        // *   An integer value greater than or equal to 0 indicates the height of the bounding box in pixels.
        // *   A decimal value within the range of [0,1) indicates the height of the bounding box as a ratio of its height to the image height.
        // 
        // This parameter is required.
        shared_ptr<float> height_ {};
        // The reference position of the bounding box on the image. Valid values:
        // 
        // *   topright: the upper-right corner.
        // *   topleft: the upper-left corner. This is the default value.
        // *   bottomright: the lower-right corner.
        // *   bottomleft: the lower-left corner.
        shared_ptr<string> referPos_ {};
        // The width of the bounding box. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
        // 
        // *   An integer value greater than or equal to 0 indicates the width of the bounding box in pixels.
        // *   A decimal value within the range of [0,1) indicates the width of the bounding box as a ratio of its width to the image width.
        // 
        // This parameter is required.
        shared_ptr<float> width_ {};
        // The horizontal offset relative to the reference position. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
        // 
        // *   An integer value greater than or equal to 0 indicates the horizontal offset in pixels.
        // *   A decimal value within the range of [0,1) indicates the horizontal offset as a ratio of the offset to the image width.
        // 
        // This parameter is required.
        shared_ptr<float> x_ {};
        // The vertical offset relative to the reference position. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
        // 
        // *   An integer value greater than or equal to 0 indicates the vertical offset in pixels.
        // *   A decimal value within the range of [0,1) indicates the vertical offset as a ratio of the offset to the image height.
        // 
        // This parameter is required.
        shared_ptr<float> y_ {};
      };

      virtual bool empty() const override { return this->blurRadius_ == nullptr
        && this->boundary_ == nullptr && this->color_ == nullptr && this->mosaicRadius_ == nullptr && this->sigma_ == nullptr && this->type_ == nullptr; };
      // blurRadius Field Functions 
      bool hasBlurRadius() const { return this->blurRadius_ != nullptr;};
      void deleteBlurRadius() { this->blurRadius_ = nullptr;};
      inline int32_t getBlurRadius() const { DARABONBA_PTR_GET_DEFAULT(blurRadius_, 0) };
      inline Targets& setBlurRadius(int32_t blurRadius) { DARABONBA_PTR_SET_VALUE(blurRadius_, blurRadius) };


      // boundary Field Functions 
      bool hasBoundary() const { return this->boundary_ != nullptr;};
      void deleteBoundary() { this->boundary_ = nullptr;};
      inline const Targets::Boundary & getBoundary() const { DARABONBA_PTR_GET_CONST(boundary_, Targets::Boundary) };
      inline Targets::Boundary getBoundary() { DARABONBA_PTR_GET(boundary_, Targets::Boundary) };
      inline Targets& setBoundary(const Targets::Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
      inline Targets& setBoundary(Targets::Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


      // color Field Functions 
      bool hasColor() const { return this->color_ != nullptr;};
      void deleteColor() { this->color_ = nullptr;};
      inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
      inline Targets& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


      // mosaicRadius Field Functions 
      bool hasMosaicRadius() const { return this->mosaicRadius_ != nullptr;};
      void deleteMosaicRadius() { this->mosaicRadius_ = nullptr;};
      inline int32_t getMosaicRadius() const { DARABONBA_PTR_GET_DEFAULT(mosaicRadius_, 0) };
      inline Targets& setMosaicRadius(int32_t mosaicRadius) { DARABONBA_PTR_SET_VALUE(mosaicRadius_, mosaicRadius) };


      // sigma Field Functions 
      bool hasSigma() const { return this->sigma_ != nullptr;};
      void deleteSigma() { this->sigma_ = nullptr;};
      inline int32_t getSigma() const { DARABONBA_PTR_GET_DEFAULT(sigma_, 0) };
      inline Targets& setSigma(int32_t sigma) { DARABONBA_PTR_SET_VALUE(sigma_, sigma) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The radius of the Gaussian blur. Valid values: 1 to 50. Default value: 3. Unit: pixels.
      // 
      // >  This parameter takes effect only for a Gaussian blur.
      shared_ptr<int32_t> blurRadius_ {};
      // The position of the bounding box.
      // 
      // This parameter is required.
      shared_ptr<Targets::Boundary> boundary_ {};
      // The color of the color shape. You can specify a color by using a color code such as`#RRGGBB` or preset color names such as `red` and `white`. The default value is #FFFFFF, which is white.
      // 
      // >  This parameter takes effect only for solid color shapes.
      shared_ptr<string> color_ {};
      // The radius of the mosaic. Default value: 5. Unit: pixels.
      // 
      // >  This parameter does not take effect for Gaussian blurs and solid color shapes.
      shared_ptr<int32_t> mosaicRadius_ {};
      // The standard deviation of the Gaussian blur. The value must be greater than 0. Default value: 5.
      // 
      // >  This parameter takes effect only for a Gaussian blur.
      shared_ptr<int32_t> sigma_ {};
      // The type of the mosaic effect. Valid values:
      // 
      // *   square: squares.
      // *   diamond: diamonds.
      // *   hexagon: hexagons.
      // *   blur: Gaussian blurs.
      // *   pure: solid color shapes.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && this->imageFormat_ == nullptr && this->projectName_ == nullptr && this->quality_ == nullptr && this->sourceURI_ == nullptr && this->targetURI_ == nullptr
        && this->targets_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline AddImageMosaicRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline AddImageMosaicRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string getImageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline AddImageMosaicRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline AddImageMosaicRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int32_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
    inline AddImageMosaicRequest& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline AddImageMosaicRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline AddImageMosaicRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<AddImageMosaicRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<AddImageMosaicRequest::Targets>) };
    inline vector<AddImageMosaicRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<AddImageMosaicRequest::Targets>) };
    inline AddImageMosaicRequest& setTargets(const vector<AddImageMosaicRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline AddImageMosaicRequest& setTargets(vector<AddImageMosaicRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The encoding of the output image. By default, the output image uses the same encoding as the input image. Valid values: jpg, png, and webp.
    shared_ptr<string> imageFormat_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The quality of the output image. This parameter applies only to JPG and WebP images. Valid values: 0 to 100. Default value: 80.
    shared_ptr<int32_t> quality_ {};
    // The OSS URI of the input image.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // Supported formats of input images include JPG, PNG, TIFF, JP2, and BMP.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // The OSS URI of the output image.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // This parameter is required.
    shared_ptr<string> targetURI_ {};
    // The bounding boxes and processing parameters.
    // 
    // This parameter is required.
    shared_ptr<vector<AddImageMosaicRequest::Targets>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
