// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreatePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
    };
    CreatePageRequest() = default ;
    CreatePageRequest(const CreatePageRequest &) = default ;
    CreatePageRequest(CreatePageRequest &&) = default ;
    CreatePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePageRequest() = default ;
    CreatePageRequest& operator=(const CreatePageRequest &) = default ;
    CreatePageRequest& operator=(CreatePageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->siteIds_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreatePageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreatePageRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // siteIds Field Functions 
    bool hasSiteIds() const { return this->siteIds_ != nullptr;};
    void deleteSiteIds() { this->siteIds_ = nullptr;};
    inline const vector<int64_t> & getSiteIds() const { DARABONBA_PTR_GET_CONST(siteIds_, vector<int64_t>) };
    inline vector<int64_t> getSiteIds() { DARABONBA_PTR_GET(siteIds_, vector<int64_t>) };
    inline CreatePageRequest& setSiteIds(const vector<int64_t> & siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };
    inline CreatePageRequest& setSiteIds(vector<int64_t> && siteIds) { DARABONBA_PTR_SET_RVALUE(siteIds_, siteIds) };


  protected:
    // The BASE64-encoded page content. The actual content format must match the value of `ContentType`.
    // 
    // **Encoding method**:
    // 1. Encode the original page content into a byte string by using UTF-8 encoding.
    // 2. Apply standard BASE64 encoding to the byte string.
    // 
    // **Example**:
    // - Original content: `<html>hello page</html>`
    // - BASE64: `PGh0bWw+aGVsbG8gcGFnZTwvaHRtbD4=`
    // 
    // > The maximum size, supported character sets, and security filtering rules are subject to the server-side custom page specifications.
    shared_ptr<string> content_ {};
    // The MIME type of the page content. This value is returned to the client as the HTTP `Content-Type` response header after a match.
    // 
    // **Common values**:
    // - `text/html`: HTML page. The `Content` parameter must be set to the BASE64-encoded value of UTF-8 HTML text.
    // - `application/json`: JSON response. The `Content` parameter must be set to the BASE64-encoded value of a valid JSON string.
    // - `text/plain`: plain text. The `Content` parameter must be set to the BASE64-encoded value of plain text content.
    // 
    // > Note: The complete list of supported ContentType values is subject to the server-side specifications. If the specified `ContentType` does not match the actual format of `Content`, the client may fail to render the page properly.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // The description of the page, used to identify the purpose of the page in the console list.
    // 
    // **Suggested content**: Use the scenarios and identity information of the page, such as "CC protection block page - Chinese version". This is an optional field. If not specified, the value is empty by default.
    // 
    // > The maximum field length is subject to the server-side specifications.
    shared_ptr<string> description_ {};
    // The name of the custom page.
    // 
    // **Naming suggestions**: Use a short name that consists of letters, digits, and underscores, such as `blocked_page_v1`, for easy reference in rules. The specific character set, maximum length, uniqueness, and other constraints are **subject to the server-side custom page naming specifications**.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The list of website IDs to associate with this custom page.
    // 
    // - You can obtain website IDs by calling the `ListSites` operation.
    // - If you pass an empty list (no websites are associated), the page is still created but does not take effect. You can call the `UpdatePage` operation later to associate websites.
    // - If the list contains a website ID that does not belong to the current account, an `InvalidParameter` error is returned.
    shared_ptr<vector<int64_t>> siteIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
