// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreatePageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIdsShrink_);
    };
    CreatePageShrinkRequest() = default ;
    CreatePageShrinkRequest(const CreatePageShrinkRequest &) = default ;
    CreatePageShrinkRequest(CreatePageShrinkRequest &&) = default ;
    CreatePageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePageShrinkRequest() = default ;
    CreatePageShrinkRequest& operator=(const CreatePageShrinkRequest &) = default ;
    CreatePageShrinkRequest& operator=(CreatePageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->siteIdsShrink_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreatePageShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreatePageShrinkRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePageShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePageShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // siteIdsShrink Field Functions 
    bool hasSiteIdsShrink() const { return this->siteIdsShrink_ != nullptr;};
    void deleteSiteIdsShrink() { this->siteIdsShrink_ = nullptr;};
    inline string getSiteIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(siteIdsShrink_, "") };
    inline CreatePageShrinkRequest& setSiteIdsShrink(string siteIdsShrink) { DARABONBA_PTR_SET_VALUE(siteIdsShrink_, siteIdsShrink) };


  protected:
    // The page content, which must be provided in BASE64 encoding. For example, the value PGh0bWw+aGVsbG8gcGFnZTwvaHRtbD4= decodes to \\<html>hello page\\</html>.
    shared_ptr<string> content_ {};
    // The `Content-Type` HTTP header. Examples:
    // 
    // - text/html
    // 
    // - application/json
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // The description of the page.
    shared_ptr<string> description_ {};
    // The name of the custom error page.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> siteIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
