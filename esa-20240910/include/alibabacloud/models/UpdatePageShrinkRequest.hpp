// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdatePageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIdsShrink_);
    };
    UpdatePageShrinkRequest() = default ;
    UpdatePageShrinkRequest(const UpdatePageShrinkRequest &) = default ;
    UpdatePageShrinkRequest(UpdatePageShrinkRequest &&) = default ;
    UpdatePageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePageShrinkRequest() = default ;
    UpdatePageShrinkRequest& operator=(const UpdatePageShrinkRequest &) = default ;
    UpdatePageShrinkRequest& operator=(UpdatePageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->siteIdsShrink_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdatePageShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UpdatePageShrinkRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePageShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdatePageShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePageShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // siteIdsShrink Field Functions 
    bool hasSiteIdsShrink() const { return this->siteIdsShrink_ != nullptr;};
    void deleteSiteIdsShrink() { this->siteIdsShrink_ = nullptr;};
    inline string getSiteIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(siteIdsShrink_, "") };
    inline UpdatePageShrinkRequest& setSiteIdsShrink(string siteIdsShrink) { DARABONBA_PTR_SET_VALUE(siteIdsShrink_, siteIdsShrink) };


  protected:
    // The BASE64-encoded page content, which must be consistent with `ContentType`.
    // 
    // **Encoding method**:
    // 1. Convert the original page content to a UTF-8 byte string.
    // 2. Encode the byte string using standard BASE64 encoding.
    // 
    // **Example**: `<html>hello page</html>` → `PGh0bWw+aGVsbG8gcGFnZTwvaHRtbD4=`
    // 
    // > The maximum size limit is subject to the server-side custom page specification. If this parameter is not specified, the original page content is retained.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The MIME type of the page content, which is returned to the client as the HTTP `Content-Type` response header when a rule is matched.
    // 
    // **Common values**:
    // - `text/html`: HTML page
    // - `application/json`: JSON response
    // 
    // > The complete set of supported values is subject to the server-side specification. The actual format of `Content` must match this field. A mismatch may cause browser rendering issues.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // The description of the page after the update. This is used to identify the purpose of the page in the console list. This is an optional field. If this parameter is not specified, the original description is retained. The maximum field length is subject to the server-side limit.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The ID of the custom response page. You can obtain this value by calling the [ListPages](https://help.aliyun.com/document_detail/2850223.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the custom response page after the update.
    // 
    // **Naming suggestion**: Use a combination of letters, digits, and underscores (such as `blocked_page_v2`) for easy reference in rules. The character set, maximum length, and uniqueness constraints are subject to the server-side naming conventions for custom pages. If this parameter is not specified, the original name is retained.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The list of site IDs associated with this page after the update. This parameter uses full overwrite semantics.
    // 
    // - You can obtain site IDs by calling the `ListSites` operation.
    // - Passing an empty list dissociates all sites from the page.
    // - Including a site ID that does not belong to your account returns an `InvalidParameter` error.
    shared_ptr<string> siteIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
