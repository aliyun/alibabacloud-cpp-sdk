// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(FileNameList, fileNameList_);
      DARABONBA_PTR_TO_JSON(SecretInfo, secretInfo_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(FileNameList, fileNameList_);
      DARABONBA_PTR_FROM_JSON(SecretInfo, secretInfo_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTicketRequest() = default ;
    CreateTicketRequest(const CreateTicketRequest &) = default ;
    CreateTicketRequest(CreateTicketRequest &&) = default ;
    CreateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequest() = default ;
    CreateTicketRequest& operator=(const CreateTicketRequest &) = default ;
    CreateTicketRequest& operator=(CreateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(FileNameList, fileNameList_);
      };
      friend void from_json(const Darabonba::Json& j, SecretInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(FileNameList, fileNameList_);
      };
      SecretInfo() = default ;
      SecretInfo(const SecretInfo &) = default ;
      SecretInfo(SecretInfo &&) = default ;
      SecretInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretInfo() = default ;
      SecretInfo& operator=(const SecretInfo &) = default ;
      SecretInfo& operator=(SecretInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->fileNameList_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline SecretInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fileNameList Field Functions 
      bool hasFileNameList() const { return this->fileNameList_ != nullptr;};
      void deleteFileNameList() { this->fileNameList_ = nullptr;};
      inline const vector<string> & getFileNameList() const { DARABONBA_PTR_GET_CONST(fileNameList_, vector<string>) };
      inline vector<string> getFileNameList() { DARABONBA_PTR_GET(fileNameList_, vector<string>) };
      inline SecretInfo& setFileNameList(const vector<string> & fileNameList) { DARABONBA_PTR_SET_VALUE(fileNameList_, fileNameList) };
      inline SecretInfo& setFileNameList(vector<string> && fileNameList) { DARABONBA_PTR_SET_RVALUE(fileNameList_, fileNameList) };


    protected:
      // The text of the sensitive information.
      shared_ptr<string> content_ {};
      // A list of attachment names for the sensitive information.
      shared_ptr<vector<string>> fileNameList_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->creatorId_ == nullptr && this->description_ == nullptr && this->email_ == nullptr && this->fileNameList_ == nullptr && this->secretInfo_ == nullptr
        && this->severity_ == nullptr && this->title_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline CreateTicketRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTicketRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTicketRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateTicketRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // fileNameList Field Functions 
    bool hasFileNameList() const { return this->fileNameList_ != nullptr;};
    void deleteFileNameList() { this->fileNameList_ = nullptr;};
    inline const vector<string> & getFileNameList() const { DARABONBA_PTR_GET_CONST(fileNameList_, vector<string>) };
    inline vector<string> getFileNameList() { DARABONBA_PTR_GET(fileNameList_, vector<string>) };
    inline CreateTicketRequest& setFileNameList(const vector<string> & fileNameList) { DARABONBA_PTR_SET_VALUE(fileNameList_, fileNameList) };
    inline CreateTicketRequest& setFileNameList(vector<string> && fileNameList) { DARABONBA_PTR_SET_RVALUE(fileNameList_, fileNameList) };


    // secretInfo Field Functions 
    bool hasSecretInfo() const { return this->secretInfo_ != nullptr;};
    void deleteSecretInfo() { this->secretInfo_ = nullptr;};
    inline const CreateTicketRequest::SecretInfo & getSecretInfo() const { DARABONBA_PTR_GET_CONST(secretInfo_, CreateTicketRequest::SecretInfo) };
    inline CreateTicketRequest::SecretInfo getSecretInfo() { DARABONBA_PTR_GET(secretInfo_, CreateTicketRequest::SecretInfo) };
    inline CreateTicketRequest& setSecretInfo(const CreateTicketRequest::SecretInfo & secretInfo) { DARABONBA_PTR_SET_VALUE(secretInfo_, secretInfo) };
    inline CreateTicketRequest& setSecretInfo(CreateTicketRequest::SecretInfo && secretInfo) { DARABONBA_PTR_SET_RVALUE(secretInfo_, secretInfo) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline int32_t getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
    inline CreateTicketRequest& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
    shared_ptr<vector<string>> fileNameList_ {};
    // Sensitive information.
    shared_ptr<CreateTicketRequest::SecretInfo> secretInfo_ {};
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
