// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceTypeResponseBodyResourceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBodyResourceType& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(operations, operations_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(productNameEn, productNameEn_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
      DARABONBA_PTR_TO_JSON(resourceListPageUrl, resourceListPageUrl_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusStartVersion, statusStartVersion_);
      DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
      DARABONBA_PTR_TO_JSON(supportExported, supportExported_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBodyResourceType& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(operations, operations_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(productNameEn, productNameEn_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
      DARABONBA_PTR_FROM_JSON(resourceListPageUrl, resourceListPageUrl_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusStartVersion, statusStartVersion_);
      DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
      DARABONBA_PTR_FROM_JSON(supportExported, supportExported_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    GetResourceTypeResponseBodyResourceType() = default ;
    GetResourceTypeResponseBodyResourceType(const GetResourceTypeResponseBodyResourceType &) = default ;
    GetResourceTypeResponseBodyResourceType(GetResourceTypeResponseBodyResourceType &&) = default ;
    GetResourceTypeResponseBodyResourceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBodyResourceType() = default ;
    GetResourceTypeResponseBodyResourceType& operator=(const GetResourceTypeResponseBodyResourceType &) = default ;
    GetResourceTypeResponseBodyResourceType& operator=(GetResourceTypeResponseBodyResourceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->operations_ != nullptr && this->product_ != nullptr && this->productName_ != nullptr && this->productNameEn_ != nullptr && this->properties_ != nullptr
        && this->resourceDetailPageUrl_ != nullptr && this->resourceListPageUrl_ != nullptr && this->status_ != nullptr && this->statusStartVersion_ != nullptr && this->subcategory_ != nullptr
        && this->supportExported_ != nullptr && this->terraformProviderVersion_ != nullptr && this->terraformResourceType_ != nullptr && this->title_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetResourceTypeResponseBodyResourceType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<Models::GetResourceTypeResponseBodyResourceTypeOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Models::GetResourceTypeResponseBodyResourceTypeOperations>) };
    inline vector<Models::GetResourceTypeResponseBodyResourceTypeOperations> operations() { DARABONBA_PTR_GET(operations_, vector<Models::GetResourceTypeResponseBodyResourceTypeOperations>) };
    inline GetResourceTypeResponseBodyResourceType& setOperations(const vector<Models::GetResourceTypeResponseBodyResourceTypeOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline GetResourceTypeResponseBodyResourceType& setOperations(vector<Models::GetResourceTypeResponseBodyResourceTypeOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetResourceTypeResponseBodyResourceType& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetResourceTypeResponseBodyResourceType& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productNameEn Field Functions 
    bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
    void deleteProductNameEn() { this->productNameEn_ = nullptr;};
    inline string productNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
    inline GetResourceTypeResponseBodyResourceType& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline GetResourceTypeResponseBodyResourceType& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline GetResourceTypeResponseBodyResourceType& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // resourceDetailPageUrl Field Functions 
    bool hasResourceDetailPageUrl() const { return this->resourceDetailPageUrl_ != nullptr;};
    void deleteResourceDetailPageUrl() { this->resourceDetailPageUrl_ = nullptr;};
    inline string resourceDetailPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceDetailPageUrl_, "") };
    inline GetResourceTypeResponseBodyResourceType& setResourceDetailPageUrl(string resourceDetailPageUrl) { DARABONBA_PTR_SET_VALUE(resourceDetailPageUrl_, resourceDetailPageUrl) };


    // resourceListPageUrl Field Functions 
    bool hasResourceListPageUrl() const { return this->resourceListPageUrl_ != nullptr;};
    void deleteResourceListPageUrl() { this->resourceListPageUrl_ = nullptr;};
    inline string resourceListPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceListPageUrl_, "") };
    inline GetResourceTypeResponseBodyResourceType& setResourceListPageUrl(string resourceListPageUrl) { DARABONBA_PTR_SET_VALUE(resourceListPageUrl_, resourceListPageUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceTypeResponseBodyResourceType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusStartVersion Field Functions 
    bool hasStatusStartVersion() const { return this->statusStartVersion_ != nullptr;};
    void deleteStatusStartVersion() { this->statusStartVersion_ = nullptr;};
    inline string statusStartVersion() const { DARABONBA_PTR_GET_DEFAULT(statusStartVersion_, "") };
    inline GetResourceTypeResponseBodyResourceType& setStatusStartVersion(string statusStartVersion) { DARABONBA_PTR_SET_VALUE(statusStartVersion_, statusStartVersion) };


    // subcategory Field Functions 
    bool hasSubcategory() const { return this->subcategory_ != nullptr;};
    void deleteSubcategory() { this->subcategory_ = nullptr;};
    inline string subcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
    inline GetResourceTypeResponseBodyResourceType& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


    // supportExported Field Functions 
    bool hasSupportExported() const { return this->supportExported_ != nullptr;};
    void deleteSupportExported() { this->supportExported_ = nullptr;};
    inline bool supportExported() const { DARABONBA_PTR_GET_DEFAULT(supportExported_, false) };
    inline GetResourceTypeResponseBodyResourceType& setSupportExported(bool supportExported) { DARABONBA_PTR_SET_VALUE(supportExported_, supportExported) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline GetResourceTypeResponseBodyResourceType& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformResourceType Field Functions 
    bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
    void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
    inline string terraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
    inline GetResourceTypeResponseBodyResourceType& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetResourceTypeResponseBodyResourceType& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::GetResourceTypeResponseBodyResourceTypeOperations>> operations_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productNameEn_ = nullptr;
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<string> resourceDetailPageUrl_ = nullptr;
    std::shared_ptr<string> resourceListPageUrl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusStartVersion_ = nullptr;
    std::shared_ptr<string> subcategory_ = nullptr;
    std::shared_ptr<bool> supportExported_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<string> terraformResourceType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
