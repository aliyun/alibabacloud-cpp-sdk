// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRODUCTCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRODUCTCATEGORYREQUEST_HPP_
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
  class UpdateProductCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProductCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProductCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateProductCategoryRequest() = default ;
    UpdateProductCategoryRequest(const UpdateProductCategoryRequest &) = default ;
    UpdateProductCategoryRequest(UpdateProductCategoryRequest &&) = default ;
    UpdateProductCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProductCategoryRequest() = default ;
    UpdateProductCategoryRequest& operator=(const UpdateProductCategoryRequest &) = default ;
    UpdateProductCategoryRequest& operator=(UpdateProductCategoryRequest &&) = default ;
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
    inline UpdateProductCategoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline const HiMarketIcon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, HiMarketIcon) };
    inline HiMarketIcon getIcon() { DARABONBA_PTR_GET(icon_, HiMarketIcon) };
    inline UpdateProductCategoryRequest& setIcon(const HiMarketIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
    inline UpdateProductCategoryRequest& setIcon(HiMarketIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProductCategoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the product category. The description can be up to 500 characters in length.
    shared_ptr<string> description_ {};
    // The icon of the product category. The icon consists of two fields: icon type (type) and icon information (value).
    shared_ptr<HiMarketIcon> icon_ {};
    // The name of the product category. The name can be up to 100 characters in length.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
