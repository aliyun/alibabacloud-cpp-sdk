// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGREQUESTCONVERSATIONMODEL_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGREQUESTCONVERSATIONMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealTimeDialogRequestConversationModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeDialogRequestConversationModel& obj) { 
      DARABONBA_PTR_TO_JSON(begin, begin_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(customerId, customerId_);
      DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeDialogRequestConversationModel& obj) { 
      DARABONBA_PTR_FROM_JSON(begin, begin_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(customerId, customerId_);
      DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RealTimeDialogRequestConversationModel() = default ;
    RealTimeDialogRequestConversationModel(const RealTimeDialogRequestConversationModel &) = default ;
    RealTimeDialogRequestConversationModel(RealTimeDialogRequestConversationModel &&) = default ;
    RealTimeDialogRequestConversationModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeDialogRequestConversationModel() = default ;
    RealTimeDialogRequestConversationModel& operator=(const RealTimeDialogRequestConversationModel &) = default ;
    RealTimeDialogRequestConversationModel& operator=(RealTimeDialogRequestConversationModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->beginTime_ != nullptr && this->content_ != nullptr && this->customerId_ != nullptr && this->customerServiceId_ != nullptr && this->customerServiceType_ != nullptr
        && this->end_ != nullptr && this->role_ != nullptr && this->type_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int32_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
    inline RealTimeDialogRequestConversationModel& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline RealTimeDialogRequestConversationModel& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RealTimeDialogRequestConversationModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline RealTimeDialogRequestConversationModel& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerServiceId Field Functions 
    bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
    void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
    inline string customerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
    inline RealTimeDialogRequestConversationModel& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


    // customerServiceType Field Functions 
    bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
    void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
    inline string customerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
    inline RealTimeDialogRequestConversationModel& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline RealTimeDialogRequestConversationModel& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline RealTimeDialogRequestConversationModel& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RealTimeDialogRequestConversationModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> begin_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> customerServiceId_ = nullptr;
    std::shared_ptr<string> customerServiceType_ = nullptr;
    std::shared_ptr<int32_t> end_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> role_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
