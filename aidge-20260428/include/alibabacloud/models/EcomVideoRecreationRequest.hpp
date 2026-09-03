// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOMVIDEORECREATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ECOMVIDEORECREATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class EcomVideoRecreationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcomVideoRecreationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, EcomVideoRecreationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    EcomVideoRecreationRequest() = default ;
    EcomVideoRecreationRequest(const EcomVideoRecreationRequest &) = default ;
    EcomVideoRecreationRequest(EcomVideoRecreationRequest &&) = default ;
    EcomVideoRecreationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcomVideoRecreationRequest() = default ;
    EcomVideoRecreationRequest& operator=(const EcomVideoRecreationRequest &) = default ;
    EcomVideoRecreationRequest& operator=(EcomVideoRecreationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Quality, quality_);
        DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Quality, quality_);
        DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->quality_ == nullptr && this->ratio_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Output& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // quality Field Functions 
      bool hasQuality() const { return this->quality_ != nullptr;};
      void deleteQuality() { this->quality_ = nullptr;};
      inline string getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, "") };
      inline Output& setQuality(string quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
      inline Output& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    protected:
      // The target duration in seconds. `"auto"` (default): determined by the system. For product replacement, an integer from 5 to 60 can be specified. For person replacement, only `"auto"` is supported.
      shared_ptr<int32_t> duration_ {};
      // The output resolution. Default value: `720p`.
      shared_ptr<string> quality_ {};
      // The output aspect ratio. Default value: `auto` (automatically matches the original video).
      shared_ptr<string> ratio_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeDescription, changeDescription_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(PersonReferenceImageUrls, personReferenceImageUrls_);
        DARABONBA_PTR_TO_JSON(ProductImageUrls, productImageUrls_);
        DARABONBA_PTR_TO_JSON(ProductInfo, productInfo_);
        DARABONBA_PTR_TO_JSON(SourceVideoUrl, sourceVideoUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeDescription, changeDescription_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(PersonReferenceImageUrls, personReferenceImageUrls_);
        DARABONBA_PTR_FROM_JSON(ProductImageUrls, productImageUrls_);
        DARABONBA_PTR_FROM_JSON(ProductInfo, productInfo_);
        DARABONBA_PTR_FROM_JSON(SourceVideoUrl, sourceVideoUrl_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        ProductInfo() = default ;
        ProductInfo(const ProductInfo &) = default ;
        ProductInfo(ProductInfo &&) = default ;
        ProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductInfo() = default ;
        ProductInfo& operator=(const ProductInfo &) = default ;
        ProductInfo& operator=(ProductInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->detail_ == nullptr && this->title_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline ProductInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline ProductInfo& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ProductInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The product category.  
        // Example: Women\\"s Clothing/Sun Protection Jacket
        shared_ptr<string> category_ {};
        // The actual product information (SKU, brand, color, material, size, specifications, logo, and usage), used to constrain voiceover facts.  
        // Example: Light moon yellow, cool-touch fabric, sun protection to the back of the hand, UPF50+
        shared_ptr<string> detail_ {};
        // Required for product replacement. The name of the target product. Maximum length: 200 characters.  
        // Example: Light Moon Yellow Cool-touch Sun Protection Jacket
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->changeDescription_ == nullptr
        && this->mode_ == nullptr && this->personReferenceImageUrls_ == nullptr && this->productImageUrls_ == nullptr && this->productInfo_ == nullptr && this->sourceVideoUrl_ == nullptr; };
      // changeDescription Field Functions 
      bool hasChangeDescription() const { return this->changeDescription_ != nullptr;};
      void deleteChangeDescription() { this->changeDescription_ = nullptr;};
      inline string getChangeDescription() const { DARABONBA_PTR_GET_DEFAULT(changeDescription_, "") };
      inline Input& setChangeDescription(string changeDescription) { DARABONBA_PTR_SET_VALUE(changeDescription_, changeDescription) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Input& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // personReferenceImageUrls Field Functions 
      bool hasPersonReferenceImageUrls() const { return this->personReferenceImageUrls_ != nullptr;};
      void deletePersonReferenceImageUrls() { this->personReferenceImageUrls_ = nullptr;};
      inline const vector<string> & getPersonReferenceImageUrls() const { DARABONBA_PTR_GET_CONST(personReferenceImageUrls_, vector<string>) };
      inline vector<string> getPersonReferenceImageUrls() { DARABONBA_PTR_GET(personReferenceImageUrls_, vector<string>) };
      inline Input& setPersonReferenceImageUrls(const vector<string> & personReferenceImageUrls) { DARABONBA_PTR_SET_VALUE(personReferenceImageUrls_, personReferenceImageUrls) };
      inline Input& setPersonReferenceImageUrls(vector<string> && personReferenceImageUrls) { DARABONBA_PTR_SET_RVALUE(personReferenceImageUrls_, personReferenceImageUrls) };


      // productImageUrls Field Functions 
      bool hasProductImageUrls() const { return this->productImageUrls_ != nullptr;};
      void deleteProductImageUrls() { this->productImageUrls_ = nullptr;};
      inline const vector<string> & getProductImageUrls() const { DARABONBA_PTR_GET_CONST(productImageUrls_, vector<string>) };
      inline vector<string> getProductImageUrls() { DARABONBA_PTR_GET(productImageUrls_, vector<string>) };
      inline Input& setProductImageUrls(const vector<string> & productImageUrls) { DARABONBA_PTR_SET_VALUE(productImageUrls_, productImageUrls) };
      inline Input& setProductImageUrls(vector<string> && productImageUrls) { DARABONBA_PTR_SET_RVALUE(productImageUrls_, productImageUrls) };


      // productInfo Field Functions 
      bool hasProductInfo() const { return this->productInfo_ != nullptr;};
      void deleteProductInfo() { this->productInfo_ = nullptr;};
      inline const Input::ProductInfo & getProductInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, Input::ProductInfo) };
      inline Input::ProductInfo getProductInfo() { DARABONBA_PTR_GET(productInfo_, Input::ProductInfo) };
      inline Input& setProductInfo(const Input::ProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
      inline Input& setProductInfo(Input::ProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


      // sourceVideoUrl Field Functions 
      bool hasSourceVideoUrl() const { return this->sourceVideoUrl_ != nullptr;};
      void deleteSourceVideoUrl() { this->sourceVideoUrl_ = nullptr;};
      inline string getSourceVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceVideoUrl_, "") };
      inline Input& setSourceVideoUrl(string sourceVideoUrl) { DARABONBA_PTR_SET_VALUE(sourceVideoUrl_, sourceVideoUrl) };


    protected:
      // The description or supplementary constraints for the target person in person replacement mode. 1 to 500 characters. Required when PersonReferenceImageUrls is not provided.   
      // Example: The target person is an adult male. Retain the original clothing and actions.
      shared_ptr<string> changeDescription_ {};
      // The replacement mode. Valid values: `product_replacement` (default) and `person_replacement`.
      shared_ptr<string> mode_ {};
      // The URLs of target person reference images for person replacement. 1 to 5 images of the same person are supported. Arrange images in the following order: face close-up, front view, 45-degree angle, side view, and back view.  
      // Example: ["https://example.com/person.jpg"]
      shared_ptr<vector<string>> personReferenceImageUrls_ {};
      // The URL of the target product image. Required for product replacement. Exactly one image must be provided. A clear subject with no occlusion and a clean background is recommended.  
      // Example: ["https://example.com/product.png"]
      shared_ptr<vector<string>> productImageUrls_ {};
      // The target product information. Provide this parameter to improve voiceover accuracy.
      shared_ptr<Input::ProductInfo> productInfo_ {};
      // The HTTP(S) URL of the reference video. The video duration must be in the range of 2 to 360 seconds. The URL must remain accessible during task execution. Set the URL validity period to at least 24 hours.
      // 
      // This parameter is required.
      shared_ptr<string> sourceVideoUrl_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->output_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const EcomVideoRecreationRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, EcomVideoRecreationRequest::Input) };
    inline EcomVideoRecreationRequest::Input getInput() { DARABONBA_PTR_GET(input_, EcomVideoRecreationRequest::Input) };
    inline EcomVideoRecreationRequest& setInput(const EcomVideoRecreationRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline EcomVideoRecreationRequest& setInput(EcomVideoRecreationRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const EcomVideoRecreationRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, EcomVideoRecreationRequest::Output) };
    inline EcomVideoRecreationRequest::Output getOutput() { DARABONBA_PTR_GET(output_, EcomVideoRecreationRequest::Output) };
    inline EcomVideoRecreationRequest& setOutput(const EcomVideoRecreationRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline EcomVideoRecreationRequest& setOutput(EcomVideoRecreationRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


  protected:
    // The input parameters for video remix.
    // 
    // This parameter is required.
    shared_ptr<EcomVideoRecreationRequest::Input> input_ {};
    // The output specifications for the final video.
    shared_ptr<EcomVideoRecreationRequest::Output> output_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
