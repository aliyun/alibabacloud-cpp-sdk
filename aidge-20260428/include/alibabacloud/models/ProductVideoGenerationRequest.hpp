// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTVIDEOGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTVIDEOGENERATIONREQUEST_HPP_
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
  class ProductVideoGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductVideoGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aspect_ratio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(product_images, productImages_);
      DARABONBA_PTR_TO_JSON(product_title, productTitle_);
      DARABONBA_PTR_TO_JSON(resolution, resolution_);
      DARABONBA_PTR_TO_JSON(script, script_);
    };
    friend void from_json(const Darabonba::Json& j, ProductVideoGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aspect_ratio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(product_images, productImages_);
      DARABONBA_PTR_FROM_JSON(product_title, productTitle_);
      DARABONBA_PTR_FROM_JSON(resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(script, script_);
    };
    ProductVideoGenerationRequest() = default ;
    ProductVideoGenerationRequest(const ProductVideoGenerationRequest &) = default ;
    ProductVideoGenerationRequest(ProductVideoGenerationRequest &&) = default ;
    ProductVideoGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductVideoGenerationRequest() = default ;
    ProductVideoGenerationRequest& operator=(const ProductVideoGenerationRequest &) = default ;
    ProductVideoGenerationRequest& operator=(ProductVideoGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->duration_ == nullptr && this->productImages_ == nullptr && this->productTitle_ == nullptr && this->resolution_ == nullptr && this->script_ == nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline ProductVideoGenerationRequest& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ProductVideoGenerationRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // productImages Field Functions 
    bool hasProductImages() const { return this->productImages_ != nullptr;};
    void deleteProductImages() { this->productImages_ = nullptr;};
    inline const vector<string> & getProductImages() const { DARABONBA_PTR_GET_CONST(productImages_, vector<string>) };
    inline vector<string> getProductImages() { DARABONBA_PTR_GET(productImages_, vector<string>) };
    inline ProductVideoGenerationRequest& setProductImages(const vector<string> & productImages) { DARABONBA_PTR_SET_VALUE(productImages_, productImages) };
    inline ProductVideoGenerationRequest& setProductImages(vector<string> && productImages) { DARABONBA_PTR_SET_RVALUE(productImages_, productImages) };


    // productTitle Field Functions 
    bool hasProductTitle() const { return this->productTitle_ != nullptr;};
    void deleteProductTitle() { this->productTitle_ = nullptr;};
    inline string getProductTitle() const { DARABONBA_PTR_GET_DEFAULT(productTitle_, "") };
    inline ProductVideoGenerationRequest& setProductTitle(string productTitle) { DARABONBA_PTR_SET_VALUE(productTitle_, productTitle) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline ProductVideoGenerationRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline ProductVideoGenerationRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    // The aspect ratio. Default value: 9:16. Valid values: 16:9, 1:1, 3:4, and 9:16.
    shared_ptr<string> aspectRatio_ {};
    // The video duration in seconds. Default value: 15. If no script is provided, the value must be an integer from 5 to 15. If a script is provided, the value must be an integer from 5 to 30. A value of 15.0 is treated as 15.
    shared_ptr<int64_t> duration_ {};
    // The public image URLs. At least one image URL is required. Each URL must start with http:// or https:// after leading and trailing whitespaces are removed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> productImages_ {};
    // The product title. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> productTitle_ {};
    // The resolution. Default value: 720P. Valid values: 720P and 1080P. The value is case-insensitive and is automatically converted to uppercase by the service.
    shared_ptr<string> resolution_ {};
    // The existing storyboard script. If this parameter is not provided or is left blank, automatic planning is used.
    shared_ptr<string> script_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
