// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODYPRODUCTSRESOURCETYPELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODYPRODUCTSRESOURCETYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListSupportedProductsResponseBodyProductsResourceTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportedProductsResponseBodyProductsResourceTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TypeNameEn, typeNameEn_);
      DARABONBA_PTR_TO_JSON(TypeNameZh, typeNameZh_);
      DARABONBA_PTR_TO_JSON(TypePageLink, typePageLink_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportedProductsResponseBodyProductsResourceTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TypeNameEn, typeNameEn_);
      DARABONBA_PTR_FROM_JSON(TypeNameZh, typeNameZh_);
      DARABONBA_PTR_FROM_JSON(TypePageLink, typePageLink_);
    };
    ListSupportedProductsResponseBodyProductsResourceTypeList() = default ;
    ListSupportedProductsResponseBodyProductsResourceTypeList(const ListSupportedProductsResponseBodyProductsResourceTypeList &) = default ;
    ListSupportedProductsResponseBodyProductsResourceTypeList(ListSupportedProductsResponseBodyProductsResourceTypeList &&) = default ;
    ListSupportedProductsResponseBodyProductsResourceTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportedProductsResponseBodyProductsResourceTypeList() = default ;
    ListSupportedProductsResponseBodyProductsResourceTypeList& operator=(const ListSupportedProductsResponseBodyProductsResourceTypeList &) = default ;
    ListSupportedProductsResponseBodyProductsResourceTypeList& operator=(ListSupportedProductsResponseBodyProductsResourceTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && return this->typeNameEn_ == nullptr && return this->typeNameZh_ == nullptr && return this->typePageLink_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListSupportedProductsResponseBodyProductsResourceTypeList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // typeNameEn Field Functions 
    bool hasTypeNameEn() const { return this->typeNameEn_ != nullptr;};
    void deleteTypeNameEn() { this->typeNameEn_ = nullptr;};
    inline string typeNameEn() const { DARABONBA_PTR_GET_DEFAULT(typeNameEn_, "") };
    inline ListSupportedProductsResponseBodyProductsResourceTypeList& setTypeNameEn(string typeNameEn) { DARABONBA_PTR_SET_VALUE(typeNameEn_, typeNameEn) };


    // typeNameZh Field Functions 
    bool hasTypeNameZh() const { return this->typeNameZh_ != nullptr;};
    void deleteTypeNameZh() { this->typeNameZh_ = nullptr;};
    inline string typeNameZh() const { DARABONBA_PTR_GET_DEFAULT(typeNameZh_, "") };
    inline ListSupportedProductsResponseBodyProductsResourceTypeList& setTypeNameZh(string typeNameZh) { DARABONBA_PTR_SET_VALUE(typeNameZh_, typeNameZh) };


    // typePageLink Field Functions 
    bool hasTypePageLink() const { return this->typePageLink_ != nullptr;};
    void deleteTypePageLink() { this->typePageLink_ = nullptr;};
    inline string typePageLink() const { DARABONBA_PTR_GET_DEFAULT(typePageLink_, "") };
    inline ListSupportedProductsResponseBodyProductsResourceTypeList& setTypePageLink(string typePageLink) { DARABONBA_PTR_SET_VALUE(typePageLink_, typePageLink) };


  protected:
    // The identifier of the resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The English name of the resource type.
    std::shared_ptr<string> typeNameEn_ = nullptr;
    // The Chinese name of the resource type.
    std::shared_ptr<string> typeNameZh_ = nullptr;
    // The URL of the resource type in the console.
    std::shared_ptr<string> typePageLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
