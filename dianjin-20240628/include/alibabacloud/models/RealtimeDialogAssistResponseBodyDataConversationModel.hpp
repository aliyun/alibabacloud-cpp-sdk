// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATACONVERSATIONMODEL_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATACONVERSATIONMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistResponseBodyDataConversationModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistResponseBodyDataConversationModel& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(customerId, customerId_);
      DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistResponseBodyDataConversationModel& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(customerId, customerId_);
      DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RealtimeDialogAssistResponseBodyDataConversationModel() = default ;
    RealtimeDialogAssistResponseBodyDataConversationModel(const RealtimeDialogAssistResponseBodyDataConversationModel &) = default ;
    RealtimeDialogAssistResponseBodyDataConversationModel(RealtimeDialogAssistResponseBodyDataConversationModel &&) = default ;
    RealtimeDialogAssistResponseBodyDataConversationModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistResponseBodyDataConversationModel() = default ;
    RealtimeDialogAssistResponseBodyDataConversationModel& operator=(const RealtimeDialogAssistResponseBodyDataConversationModel &) = default ;
    RealtimeDialogAssistResponseBodyDataConversationModel& operator=(RealtimeDialogAssistResponseBodyDataConversationModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->customerId_ != nullptr && this->customerServiceId_ != nullptr && this->customerServiceType_ != nullptr && this->role_ != nullptr && this->type_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RealtimeDialogAssistResponseBodyDataConversationModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline RealtimeDialogAssistResponseBodyDataConversationModel& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerServiceId Field Functions 
    bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
    void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
    inline string customerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
    inline RealtimeDialogAssistResponseBodyDataConversationModel& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


    // customerServiceType Field Functions 
    bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
    void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
    inline string customerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
    inline RealtimeDialogAssistResponseBodyDataConversationModel& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline RealtimeDialogAssistResponseBodyDataConversationModel& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RealtimeDialogAssistResponseBodyDataConversationModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> customerServiceId_ = nullptr;
    std::shared_ptr<string> customerServiceType_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
