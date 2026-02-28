// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->context_ == nullptr && this->customerId_ == nullptr && this->instanceId_ == nullptr && this->source_ == nullptr && this->templateId_ == nullptr
        && this->title_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline CreateTicketRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline CreateTicketRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline CreateTicketRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateTicketRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateTicketRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateTicketRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> contactId_ {};
    shared_ptr<string> context_ {};
    shared_ptr<string> customerId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
