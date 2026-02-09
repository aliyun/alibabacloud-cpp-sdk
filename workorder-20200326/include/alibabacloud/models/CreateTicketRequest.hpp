// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200326
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(NotifyTimeRange, notifyTimeRange_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SecretContent, secretContent_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(NotifyTimeRange, notifyTimeRange_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SecretContent, secretContent_);
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
    virtual bool empty() const override { return this->category_ == nullptr
        && this->content_ == nullptr && this->email_ == nullptr && this->language_ == nullptr && this->notifyTimeRange_ == nullptr && this->phone_ == nullptr
        && this->productCode_ == nullptr && this->secretContent_ == nullptr && this->title_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateTicketRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateTicketRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateTicketRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateTicketRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // notifyTimeRange Field Functions 
    bool hasNotifyTimeRange() const { return this->notifyTimeRange_ != nullptr;};
    void deleteNotifyTimeRange() { this->notifyTimeRange_ = nullptr;};
    inline string getNotifyTimeRange() const { DARABONBA_PTR_GET_DEFAULT(notifyTimeRange_, "") };
    inline CreateTicketRequest& setNotifyTimeRange(string notifyTimeRange) { DARABONBA_PTR_SET_VALUE(notifyTimeRange_, notifyTimeRange) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateTicketRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateTicketRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // secretContent Field Functions 
    bool hasSecretContent() const { return this->secretContent_ != nullptr;};
    void deleteSecretContent() { this->secretContent_ = nullptr;};
    inline string getSecretContent() const { DARABONBA_PTR_GET_DEFAULT(secretContent_, "") };
    inline CreateTicketRequest& setSecretContent(string secretContent) { DARABONBA_PTR_SET_VALUE(secretContent_, secretContent) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<string> category_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
    // This parameter is required.
    shared_ptr<string> email_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> notifyTimeRange_ {};
    shared_ptr<string> phone_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    shared_ptr<string> secretContent_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200326
#endif
