// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    ListCategoriesRequest() = default ;
    ListCategoriesRequest(const ListCategoriesRequest &) = default ;
    ListCategoriesRequest(ListCategoriesRequest &&) = default ;
    ListCategoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoriesRequest() = default ;
    ListCategoriesRequest& operator=(const ListCategoriesRequest &) = default ;
    ListCategoriesRequest& operator=(ListCategoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && return this->name_ == nullptr && return this->productId_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListCategoriesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCategoriesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListCategoriesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // Multi-language, support, Chinese, English. Value definition: zh: Chinese, en: English.
    std::shared_ptr<string> language_ = nullptr;
    // The name of the classification question. Fuzzy search is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the product. You can call the ListProducts operation to obtain the product ID. The ProductId parameter is the ID of an Alibaba Cloud product. Multiple Categories are displayed for each product.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> productId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
