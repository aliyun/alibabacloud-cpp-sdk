// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(LeaseId, leaseId_);
      DARABONBA_PTR_TO_JSON(OriginalFileUrl, originalFileUrl_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AddFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(LeaseId, leaseId_);
      DARABONBA_PTR_FROM_JSON(OriginalFileUrl, originalFileUrl_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AddFileRequest() = default ;
    AddFileRequest(const AddFileRequest &) = default ;
    AddFileRequest(AddFileRequest &&) = default ;
    AddFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFileRequest() = default ;
    AddFileRequest& operator=(const AddFileRequest &) = default ;
    AddFileRequest& operator=(AddFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->categoryType_ != nullptr && this->leaseId_ != nullptr && this->originalFileUrl_ != nullptr && this->parser_ != nullptr && this->tags_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFileRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFileRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // leaseId Field Functions 
    bool hasLeaseId() const { return this->leaseId_ != nullptr;};
    void deleteLeaseId() { this->leaseId_ = nullptr;};
    inline string leaseId() const { DARABONBA_PTR_GET_DEFAULT(leaseId_, "") };
    inline AddFileRequest& setLeaseId(string leaseId) { DARABONBA_PTR_SET_VALUE(leaseId_, leaseId) };


    // originalFileUrl Field Functions 
    bool hasOriginalFileUrl() const { return this->originalFileUrl_ != nullptr;};
    void deleteOriginalFileUrl() { this->originalFileUrl_ = nullptr;};
    inline string originalFileUrl() const { DARABONBA_PTR_GET_DEFAULT(originalFileUrl_, "") };
    inline AddFileRequest& setOriginalFileUrl(string originalFileUrl) { DARABONBA_PTR_SET_VALUE(originalFileUrl_, originalFileUrl) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline AddFileRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline AddFileRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AddFileRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The primary key ID of the category to which the document is uploaded. This parameter corresponds to the `CategoryId` returned by the [AddCategory](https://www.alibabacloud.com/help/eh/model-studio/developer-reference/api-bailian-2023-12-29-addcategory) operation. You can also click the ID icon next to the category name on the Unstructured Data tab of the [Application Data](https://modelstudio.console.alibabacloud.com/#/data-center) page to view the ID. You can set the parameter to default, which specifies the Default Category created by the system.
    // 
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    // The type of the category. Valid values:
    // - UNSTRUCTURED
    // - SESSION_FILE
    std::shared_ptr<string> categoryType_ = nullptr;
    // The lease ID, which corresponds to the `FileUploadLeaseId` parameter returned by the [ApplyFileUploadLease](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-applyfileuploadlease) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> leaseId_ = nullptr;
    std::shared_ptr<string> originalFileUrl_ = nullptr;
    // The parser. Valid value:
    // 
    // *   DASHSCOPE_DOCMIND: Intelligent document parsing by Alibaba Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<string> parser_ = nullptr;
    // A list of tags associated with the document. The default value is null, which means no tags. You can specify up to 10 tags.
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
