// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODYSUPPORTRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODYSUPPORTRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListSupportResourceTypesResponseBodySupportResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportResourceTypesResponseBodySupportResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ArnTemplate, arnTemplate_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SupportItems, supportItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportResourceTypesResponseBodySupportResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ArnTemplate, arnTemplate_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SupportItems, supportItems_);
    };
    ListSupportResourceTypesResponseBodySupportResourceTypes() = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypes(const ListSupportResourceTypesResponseBodySupportResourceTypes &) = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypes(ListSupportResourceTypesResponseBodySupportResourceTypes &&) = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportResourceTypesResponseBodySupportResourceTypes() = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypes& operator=(const ListSupportResourceTypesResponseBodySupportResourceTypes &) = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypes& operator=(ListSupportResourceTypesResponseBodySupportResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arnTemplate_ != nullptr
        && this->productCode_ != nullptr && this->resourceType_ != nullptr && this->supportItems_ != nullptr; };
    // arnTemplate Field Functions 
    bool hasArnTemplate() const { return this->arnTemplate_ != nullptr;};
    void deleteArnTemplate() { this->arnTemplate_ = nullptr;};
    inline string arnTemplate() const { DARABONBA_PTR_GET_DEFAULT(arnTemplate_, "") };
    inline ListSupportResourceTypesResponseBodySupportResourceTypes& setArnTemplate(string arnTemplate) { DARABONBA_PTR_SET_VALUE(arnTemplate_, arnTemplate) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListSupportResourceTypesResponseBodySupportResourceTypes& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListSupportResourceTypesResponseBodySupportResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // supportItems Field Functions 
    bool hasSupportItems() const { return this->supportItems_ != nullptr;};
    void deleteSupportItems() { this->supportItems_ = nullptr;};
    inline const vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems> & supportItems() const { DARABONBA_PTR_GET_CONST(supportItems_, vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems>) };
    inline vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems> supportItems() { DARABONBA_PTR_GET(supportItems_, vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems>) };
    inline ListSupportResourceTypesResponseBodySupportResourceTypes& setSupportItems(const vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems> & supportItems) { DARABONBA_PTR_SET_VALUE(supportItems_, supportItems) };
    inline ListSupportResourceTypesResponseBodySupportResourceTypes& setSupportItems(vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems> && supportItems) { DARABONBA_PTR_SET_RVALUE(supportItems_, supportItems) };


  protected:
    // The resource ARN template.
    std::shared_ptr<string> arnTemplate_ = nullptr;
    // The service code.
    std::shared_ptr<string> productCode_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The supported tag-related capability items.
    // 
    // >  This parameter is returned only if the `ShowItems` parameter is set to `true`.
    std::shared_ptr<vector<Models::ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems>> supportItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
