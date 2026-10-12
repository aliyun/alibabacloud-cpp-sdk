// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketIcon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateProductCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateProductCategoryRequest() = default ;
    CreateProductCategoryRequest(const CreateProductCategoryRequest &) = default ;
    CreateProductCategoryRequest(CreateProductCategoryRequest &&) = default ;
    CreateProductCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductCategoryRequest() = default ;
    CreateProductCategoryRequest& operator=(const CreateProductCategoryRequest &) = default ;
    CreateProductCategoryRequest& operator=(CreateProductCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->icon_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProductCategoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline const HiMarketIcon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, HiMarketIcon) };
    inline HiMarketIcon getIcon() { DARABONBA_PTR_GET(icon_, HiMarketIcon) };
    inline CreateProductCategoryRequest& setIcon(const HiMarketIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
    inline CreateProductCategoryRequest& setIcon(HiMarketIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProductCategoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the product category. Maximum length: 500 characters.
    shared_ptr<string> description_ {};
    // The icon of the product category, which consists of the icon type and icon information fields.
    shared_ptr<HiMarketIcon> icon_ {};
    // The name of the product category. Maximum length: 100 characters.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
