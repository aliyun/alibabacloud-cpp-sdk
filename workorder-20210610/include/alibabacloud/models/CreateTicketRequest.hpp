// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTicketRequestSecretInfo.hpp>
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
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->creatorId_ == nullptr && return this->description_ == nullptr && return this->email_ == nullptr && return this->fileNameList_ == nullptr && return this->secretInfo_ == nullptr
        && return this->severity_ == nullptr && return this->title_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline CreateTicketRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTicketRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTicketRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateTicketRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // fileNameList Field Functions 
    bool hasFileNameList() const { return this->fileNameList_ != nullptr;};
    void deleteFileNameList() { this->fileNameList_ = nullptr;};
    inline const vector<string> & fileNameList() const { DARABONBA_PTR_GET_CONST(fileNameList_, vector<string>) };
    inline vector<string> fileNameList() { DARABONBA_PTR_GET(fileNameList_, vector<string>) };
    inline CreateTicketRequest& setFileNameList(const vector<string> & fileNameList) { DARABONBA_PTR_SET_VALUE(fileNameList_, fileNameList) };
    inline CreateTicketRequest& setFileNameList(vector<string> && fileNameList) { DARABONBA_PTR_SET_RVALUE(fileNameList_, fileNameList) };


    // secretInfo Field Functions 
    bool hasSecretInfo() const { return this->secretInfo_ != nullptr;};
    void deleteSecretInfo() { this->secretInfo_ = nullptr;};
    inline const CreateTicketRequestSecretInfo & secretInfo() const { DARABONBA_PTR_GET_CONST(secretInfo_, CreateTicketRequestSecretInfo) };
    inline CreateTicketRequestSecretInfo secretInfo() { DARABONBA_PTR_GET(secretInfo_, CreateTicketRequestSecretInfo) };
    inline CreateTicketRequest& setSecretInfo(const CreateTicketRequestSecretInfo & secretInfo) { DARABONBA_PTR_SET_VALUE(secretInfo_, secretInfo) };
    inline CreateTicketRequest& setSecretInfo(CreateTicketRequestSecretInfo && secretInfo) { DARABONBA_PTR_SET_RVALUE(secretInfo_, secretInfo) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline int32_t severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
    inline CreateTicketRequest& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the problem category. You can obtain the returned value from the ListCategories operation by using the CategoryId parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    // Submit the Alibaba Cloud UID of the account, which is required for the MPK virtual market scene.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description of the ticket. Only pure text format is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // sdahkjdshga@qq.com
    std::shared_ptr<string> email_ = nullptr;
    // The list of attachment names, GetAttachmentUploadUrl the ObjectKey field returned by the interface.
    std::shared_ptr<vector<string>> fileNameList_ = nullptr;
    // Sensitive information
    std::shared_ptr<CreateTicketRequestSecretInfo> secretInfo_ = nullptr;
    // Enumeration value, 1 for general problem, 2 for urgent problem
    // 
    // Enumeration values:
    // 
    // *   1: regular.
    // *   2: emergency.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> severity_ = nullptr;
    // The title of the ticket.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
