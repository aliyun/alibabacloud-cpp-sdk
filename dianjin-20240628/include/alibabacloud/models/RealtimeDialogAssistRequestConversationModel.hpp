// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTREQUESTCONVERSATIONMODEL_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTREQUESTCONVERSATIONMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistRequestConversationModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistRequestConversationModel& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(customerId, customerId_);
      DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistRequestConversationModel& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(customerId, customerId_);
      DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RealtimeDialogAssistRequestConversationModel() = default ;
    RealtimeDialogAssistRequestConversationModel(const RealtimeDialogAssistRequestConversationModel &) = default ;
    RealtimeDialogAssistRequestConversationModel(RealtimeDialogAssistRequestConversationModel &&) = default ;
    RealtimeDialogAssistRequestConversationModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistRequestConversationModel() = default ;
    RealtimeDialogAssistRequestConversationModel& operator=(const RealtimeDialogAssistRequestConversationModel &) = default ;
    RealtimeDialogAssistRequestConversationModel& operator=(RealtimeDialogAssistRequestConversationModel &&) = default ;
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
    inline RealtimeDialogAssistRequestConversationModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline RealtimeDialogAssistRequestConversationModel& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerServiceId Field Functions 
    bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
    void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
    inline string customerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
    inline RealtimeDialogAssistRequestConversationModel& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


    // customerServiceType Field Functions 
    bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
    void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
    inline string customerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
    inline RealtimeDialogAssistRequestConversationModel& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline RealtimeDialogAssistRequestConversationModel& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RealtimeDialogAssistRequestConversationModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> customerServiceId_ = nullptr;
    std::shared_ptr<string> customerServiceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> role_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
