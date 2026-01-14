// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARSESETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetParseSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
    };
    GetParseSettingsRequest() = default ;
    GetParseSettingsRequest(const GetParseSettingsRequest &) = default ;
    GetParseSettingsRequest(GetParseSettingsRequest &&) = default ;
    GetParseSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseSettingsRequest() = default ;
    GetParseSettingsRequest& operator=(const GetParseSettingsRequest &) = default ;
    GetParseSettingsRequest& operator=(GetParseSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline GetParseSettingsRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


  protected:
    // The category ID, which is the `CategoryId` returned by **AddCategory**. To view the category ID, click the ID icon next to the category name on the Unstructured Data tab of the [Application Data](https://bailian.console.alibabacloud.com/?tab=app#/data-center) page.
    shared_ptr<string> categoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
