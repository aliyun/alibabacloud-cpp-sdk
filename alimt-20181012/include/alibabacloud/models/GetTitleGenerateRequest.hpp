// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTITLEGENERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTITLEGENERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTitleGenerateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTitleGenerateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(HotWords, hotWords_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetTitleGenerateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(HotWords, hotWords_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetTitleGenerateRequest() = default ;
    GetTitleGenerateRequest(const GetTitleGenerateRequest &) = default ;
    GetTitleGenerateRequest(GetTitleGenerateRequest &&) = default ;
    GetTitleGenerateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTitleGenerateRequest() = default ;
    GetTitleGenerateRequest& operator=(const GetTitleGenerateRequest &) = default ;
    GetTitleGenerateRequest& operator=(GetTitleGenerateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->categoryId_ == nullptr && return this->extra_ == nullptr && return this->hotWords_ == nullptr && return this->language_ == nullptr && return this->platform_ == nullptr
        && return this->title_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline GetTitleGenerateRequest& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline GetTitleGenerateRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetTitleGenerateRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // hotWords Field Functions 
    bool hasHotWords() const { return this->hotWords_ != nullptr;};
    void deleteHotWords() { this->hotWords_ = nullptr;};
    inline string hotWords() const { DARABONBA_PTR_GET_DEFAULT(hotWords_, "") };
    inline GetTitleGenerateRequest& setHotWords(string hotWords) { DARABONBA_PTR_SET_VALUE(hotWords_, hotWords) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetTitleGenerateRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetTitleGenerateRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTitleGenerateRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> attributes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> hotWords_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> language_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
