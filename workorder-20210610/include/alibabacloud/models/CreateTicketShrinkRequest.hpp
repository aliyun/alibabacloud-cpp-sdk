// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class CreateTicketShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(FileNameList, fileNameListShrink_);
      DARABONBA_PTR_TO_JSON(SecretInfo, secretInfoShrink_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(FileNameList, fileNameListShrink_);
      DARABONBA_PTR_FROM_JSON(SecretInfo, secretInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTicketShrinkRequest() = default ;
    CreateTicketShrinkRequest(const CreateTicketShrinkRequest &) = default ;
    CreateTicketShrinkRequest(CreateTicketShrinkRequest &&) = default ;
    CreateTicketShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketShrinkRequest() = default ;
    CreateTicketShrinkRequest& operator=(const CreateTicketShrinkRequest &) = default ;
    CreateTicketShrinkRequest& operator=(CreateTicketShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->creatorId_ == nullptr && this->description_ == nullptr && this->email_ == nullptr && this->fileNameListShrink_ == nullptr && this->secretInfoShrink_ == nullptr
        && this->severity_ == nullptr && this->title_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline CreateTicketShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTicketShrinkRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTicketShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateTicketShrinkRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // fileNameListShrink Field Functions 
    bool hasFileNameListShrink() const { return this->fileNameListShrink_ != nullptr;};
    void deleteFileNameListShrink() { this->fileNameListShrink_ = nullptr;};
    inline string getFileNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(fileNameListShrink_, "") };
    inline CreateTicketShrinkRequest& setFileNameListShrink(string fileNameListShrink) { DARABONBA_PTR_SET_VALUE(fileNameListShrink_, fileNameListShrink) };


    // secretInfoShrink Field Functions 
    bool hasSecretInfoShrink() const { return this->secretInfoShrink_ != nullptr;};
    void deleteSecretInfoShrink() { this->secretInfoShrink_ = nullptr;};
    inline string getSecretInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(secretInfoShrink_, "") };
    inline CreateTicketShrinkRequest& setSecretInfoShrink(string secretInfoShrink) { DARABONBA_PTR_SET_VALUE(secretInfoShrink_, secretInfoShrink) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline int32_t getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
    inline CreateTicketShrinkRequest& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the issue category. Obtain this ID from the ListCategories operation.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The Alibaba Cloud UID of the account that submits the ticket. This parameter is required for Marketplace reseller scenarios.
    shared_ptr<string> creatorId_ {};
    // The description of the issue in the ticket. Only plain text is supported.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The contact email address for the ticket.
    shared_ptr<string> email_ {};
    // A list of attachment names. Use the ObjectKey value returned by the GetAttachmentUploadUrl operation.
    shared_ptr<string> fileNameListShrink_ {};
    // Sensitive information.
    shared_ptr<string> secretInfoShrink_ {};
    // An enumeration value. A value of 1 indicates a normal issue. A value of 2 indicates an urgent issue.
    // 
    // This parameter is required.
    shared_ptr<int32_t> severity_ {};
    // The title of the ticket.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
