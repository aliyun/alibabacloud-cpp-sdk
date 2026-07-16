// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(LeaseId, leaseId_);
      DARABONBA_PTR_TO_JSON(OriginalFileUrl, originalFileUrl_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(ParserConfig, parserConfigShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddFileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(LeaseId, leaseId_);
      DARABONBA_PTR_FROM_JSON(OriginalFileUrl, originalFileUrl_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    AddFileShrinkRequest() = default ;
    AddFileShrinkRequest(const AddFileShrinkRequest &) = default ;
    AddFileShrinkRequest(AddFileShrinkRequest &&) = default ;
    AddFileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFileShrinkRequest() = default ;
    AddFileShrinkRequest& operator=(const AddFileShrinkRequest &) = default ;
    AddFileShrinkRequest& operator=(AddFileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryType_ == nullptr && this->leaseId_ == nullptr && this->originalFileUrl_ == nullptr && this->parser_ == nullptr && this->parserConfigShrink_ == nullptr
        && this->tagsShrink_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFileShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFileShrinkRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // leaseId Field Functions 
    bool hasLeaseId() const { return this->leaseId_ != nullptr;};
    void deleteLeaseId() { this->leaseId_ = nullptr;};
    inline string getLeaseId() const { DARABONBA_PTR_GET_DEFAULT(leaseId_, "") };
    inline AddFileShrinkRequest& setLeaseId(string leaseId) { DARABONBA_PTR_SET_VALUE(leaseId_, leaseId) };


    // originalFileUrl Field Functions 
    bool hasOriginalFileUrl() const { return this->originalFileUrl_ != nullptr;};
    void deleteOriginalFileUrl() { this->originalFileUrl_ = nullptr;};
    inline string getOriginalFileUrl() const { DARABONBA_PTR_GET_DEFAULT(originalFileUrl_, "") };
    inline AddFileShrinkRequest& setOriginalFileUrl(string originalFileUrl) { DARABONBA_PTR_SET_VALUE(originalFileUrl_, originalFileUrl) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline AddFileShrinkRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfigShrink Field Functions 
    bool hasParserConfigShrink() const { return this->parserConfigShrink_ != nullptr;};
    void deleteParserConfigShrink() { this->parserConfigShrink_ = nullptr;};
    inline string getParserConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(parserConfigShrink_, "") };
    inline AddFileShrinkRequest& setParserConfigShrink(string parserConfigShrink) { DARABONBA_PTR_SET_VALUE(parserConfigShrink_, parserConfigShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline AddFileShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // <props="china">
    // 
    // - When CategoryType is set to UNSTRUCTURED, set this parameter to the category ID of the uploaded file, which is the `CategoryId` returned by the **AddCategory** operation. You can also go to [Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center), click the File tab, and then click the ID icon next to the category name to obtain the category ID. You can set this parameter to default to use the system-created default category.
    // 
    // - When CategoryType is set to SESSION_FILE, set this parameter to "default".
    // 
    // 
    // <props="intl">
    // 
    // Set this parameter to the category ID of the uploaded file, which is the `CategoryId` returned by the **AddCategory** operation. You can also go to [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center), click the File tab, and then click the ID icon next to the category name to obtain the category ID. You can set this parameter to default to use the system-created default category.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The category type. This parameter is optional. Default value: UNSTRUCTURED. Valid values:
    // - UNSTRUCTURED: category used for building knowledge base scenarios.
    // 
    // <props="china">
    // - SESSION_FILE: file used for [session interaction](https://www.alibabacloud.com/help/en/model-studio/user-guide/file-interaction) in agent applications.
    // <note>When using `SESSION_FILE`, set the CategoryType parameter to `SESSION_FILE` when calling the ApplyFileUploadLease operation as well.</note>
    // <note>The file is valid only for the current user session. After the user closes the session, the file expires. The maximum validity period is 7 days. Long-term storage is not supported.</note>
    shared_ptr<string> categoryType_ {};
    // The upload lease ID, which corresponds to the `FileUploadLeaseId` returned by the **ApplyFileUploadLease** operation.
    // 
    // This parameter is required.
    shared_ptr<string> leaseId_ {};
    // <props="china">
    // 
    // Specifies a URL for the file. The system records this URL when building a [document search knowledge base](https://help.aliyun.com/document_detail/2807740.html). When you use the Alibaba Cloud Model Studio console to interact with an [agent application](https://help.aliyun.com/document_detail/2842749.html), this URL is returned with the retrieval results of the file through the `docUrl` field.
    // 
    // > The agent application must have **Knowledge Base** enabled and the **Show answer sources** feature turned on. Otherwise, this parameter does not take effect.
    // 
    // 
    // 
    // <props="intl">
    // 
    // Specifies a URL for the file. The system records this URL when building a [document search knowledge base](https://help.aliyun.com/document_detail/2807740.html). When you use the Alibaba Cloud Model Studio console to interact with an [agent application](https://help.aliyun.com/document_detail/2842749.html), this URL is returned with the retrieval results of the file through the `docUrl` field.
    // 
    // > The agent application must have **Knowledge Base** enabled and the **Show answer sources** feature turned on. Otherwise, this parameter does not take effect.
    shared_ptr<string> originalFileUrl_ {};
    // The parser type. Valid values:
    // 
    // - DOCMIND: intelligent document parsing
    // - DOCMIND_DIGITAL: electronic document parsing
    // - DOCMIND_LLM_VERSION: large language model document parsing
    // - DASH_QWEN_VL_PARSER: Qwen VL parsing
    // - DOCMIND_LLM_VERSION_MEDIA: audio and video parsing
    // - AUTO_SELECT: automatic parser selection
    // 
    // <props="intl">
    // <note>The uploaded file is parsed by using the currently specified parser. If you set this parameter to AUTO_SELECT, the parser configured for the category is used.</note>
    // 
    // 
    // <props="china">
    // <note>When CategoryType is set to UNSTRUCTURED, the parser parses the uploaded file based on the data parsing settings of the current category.</note>
    // <note>When CategoryType is set to SESSION_FILE, the system parses the file content by using the default method, which cannot be changed.</note>
    // 
    // This parameter is required.
    shared_ptr<string> parser_ {};
    // The parser configuration. This parameter is required only when the parser type is set to Qwen VL parsing.
    shared_ptr<string> parserConfigShrink_ {};
    // - The list of tags associated with the file. You can specify up to 100 tags, and the total character length of all tags cannot exceed 700.
    // - Default value: empty, which means no tags are set.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
