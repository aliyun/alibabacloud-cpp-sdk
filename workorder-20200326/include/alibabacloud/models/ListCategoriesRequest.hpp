// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200326
{
namespace Models
{
  class ListCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
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
        && this->productCode_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListCategoriesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListCategoriesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200326
#endif
