// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRODUCTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRODUCTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class UpdateProductVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProductVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Guidance, guidance_);
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProductVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
    };
    UpdateProductVersionRequest() = default ;
    UpdateProductVersionRequest(const UpdateProductVersionRequest &) = default ;
    UpdateProductVersionRequest(UpdateProductVersionRequest &&) = default ;
    UpdateProductVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProductVersionRequest() = default ;
    UpdateProductVersionRequest& operator=(const UpdateProductVersionRequest &) = default ;
    UpdateProductVersionRequest& operator=(UpdateProductVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->guidance_ == nullptr && this->productVersionId_ == nullptr && this->productVersionName_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline UpdateProductVersionRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProductVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // guidance Field Functions 
    bool hasGuidance() const { return this->guidance_ != nullptr;};
    void deleteGuidance() { this->guidance_ = nullptr;};
    inline string getGuidance() const { DARABONBA_PTR_GET_DEFAULT(guidance_, "") };
    inline UpdateProductVersionRequest& setGuidance(string guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };


    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline UpdateProductVersionRequest& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


    // productVersionName Field Functions 
    bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
    void deleteProductVersionName() { this->productVersionName_ = nullptr;};
    inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
    inline UpdateProductVersionRequest& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


  protected:
    // Specifies whether to enable the product version. Valid values:
    // 
    // *   true: enables the product version. This is the default value.
    // *   false: disables the product version.
    shared_ptr<bool> active_ {};
    // The description of the product version.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
    // The recommendation information. Valid values:
    // 
    // *   Default: No recommendation information is provided. This is the default value.
    // *   Recommended: the recommended version.
    // *   Latest: the latest version.
    // *   Deprecated: the version that is about to be discontinued.
    shared_ptr<string> guidance_ {};
    // The ID of the product version.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionId_ {};
    // The name of the product version.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
