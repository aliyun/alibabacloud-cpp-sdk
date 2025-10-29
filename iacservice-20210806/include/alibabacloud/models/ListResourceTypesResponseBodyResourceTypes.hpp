// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceTypesResponseBodyResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBodyResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
      DARABONBA_PTR_TO_JSON(resourceListPageUrl, resourceListPageUrl_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusStartVersion, statusStartVersion_);
      DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
      DARABONBA_PTR_TO_JSON(supportTerraformer, supportTerraformer_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBodyResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
      DARABONBA_PTR_FROM_JSON(resourceListPageUrl, resourceListPageUrl_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusStartVersion, statusStartVersion_);
      DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
      DARABONBA_PTR_FROM_JSON(supportTerraformer, supportTerraformer_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ListResourceTypesResponseBodyResourceTypes() = default ;
    ListResourceTypesResponseBodyResourceTypes(const ListResourceTypesResponseBodyResourceTypes &) = default ;
    ListResourceTypesResponseBodyResourceTypes(ListResourceTypesResponseBodyResourceTypes &&) = default ;
    ListResourceTypesResponseBodyResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBodyResourceTypes() = default ;
    ListResourceTypesResponseBodyResourceTypes& operator=(const ListResourceTypesResponseBodyResourceTypes &) = default ;
    ListResourceTypesResponseBodyResourceTypes& operator=(ListResourceTypesResponseBodyResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->product_ == nullptr && return this->productName_ == nullptr && return this->resourceDetailPageUrl_ == nullptr && return this->resourceListPageUrl_ == nullptr && return this->status_ == nullptr
        && return this->statusStartVersion_ == nullptr && return this->subcategory_ == nullptr && return this->supportTerraformer_ == nullptr && return this->terraformProviderVersion_ == nullptr && return this->terraformResourceType_ == nullptr
        && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // resourceDetailPageUrl Field Functions 
    bool hasResourceDetailPageUrl() const { return this->resourceDetailPageUrl_ != nullptr;};
    void deleteResourceDetailPageUrl() { this->resourceDetailPageUrl_ = nullptr;};
    inline string resourceDetailPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceDetailPageUrl_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setResourceDetailPageUrl(string resourceDetailPageUrl) { DARABONBA_PTR_SET_VALUE(resourceDetailPageUrl_, resourceDetailPageUrl) };


    // resourceListPageUrl Field Functions 
    bool hasResourceListPageUrl() const { return this->resourceListPageUrl_ != nullptr;};
    void deleteResourceListPageUrl() { this->resourceListPageUrl_ = nullptr;};
    inline string resourceListPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceListPageUrl_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setResourceListPageUrl(string resourceListPageUrl) { DARABONBA_PTR_SET_VALUE(resourceListPageUrl_, resourceListPageUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusStartVersion Field Functions 
    bool hasStatusStartVersion() const { return this->statusStartVersion_ != nullptr;};
    void deleteStatusStartVersion() { this->statusStartVersion_ = nullptr;};
    inline string statusStartVersion() const { DARABONBA_PTR_GET_DEFAULT(statusStartVersion_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setStatusStartVersion(string statusStartVersion) { DARABONBA_PTR_SET_VALUE(statusStartVersion_, statusStartVersion) };


    // subcategory Field Functions 
    bool hasSubcategory() const { return this->subcategory_ != nullptr;};
    void deleteSubcategory() { this->subcategory_ = nullptr;};
    inline string subcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


    // supportTerraformer Field Functions 
    bool hasSupportTerraformer() const { return this->supportTerraformer_ != nullptr;};
    void deleteSupportTerraformer() { this->supportTerraformer_ = nullptr;};
    inline string supportTerraformer() const { DARABONBA_PTR_GET_DEFAULT(supportTerraformer_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setSupportTerraformer(string supportTerraformer) { DARABONBA_PTR_SET_VALUE(supportTerraformer_, supportTerraformer) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformResourceType Field Functions 
    bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
    void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
    inline string terraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> resourceDetailPageUrl_ = nullptr;
    std::shared_ptr<string> resourceListPageUrl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusStartVersion_ = nullptr;
    std::shared_ptr<string> subcategory_ = nullptr;
    std::shared_ptr<string> supportTerraformer_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<string> terraformResourceType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
