// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeApplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_passenger_list, changePassengerListShrink_);
      DARABONBA_PTR_TO_JSON(changed_journeys, changedJourneysShrink_);
      DARABONBA_PTR_TO_JSON(contact, contactShrink_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_passenger_list, changePassengerListShrink_);
      DARABONBA_PTR_FROM_JSON(changed_journeys, changedJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(contact, contactShrink_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ChangeApplyShrinkRequest() = default ;
    ChangeApplyShrinkRequest(const ChangeApplyShrinkRequest &) = default ;
    ChangeApplyShrinkRequest(ChangeApplyShrinkRequest &&) = default ;
    ChangeApplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyShrinkRequest() = default ;
    ChangeApplyShrinkRequest& operator=(const ChangeApplyShrinkRequest &) = default ;
    ChangeApplyShrinkRequest& operator=(ChangeApplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changePassengerListShrink_ == nullptr
        && this->changedJourneysShrink_ == nullptr && this->contactShrink_ == nullptr && this->orderNum_ == nullptr && this->remark_ == nullptr && this->type_ == nullptr; };
    // changePassengerListShrink Field Functions 
    bool hasChangePassengerListShrink() const { return this->changePassengerListShrink_ != nullptr;};
    void deleteChangePassengerListShrink() { this->changePassengerListShrink_ = nullptr;};
    inline string getChangePassengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(changePassengerListShrink_, "") };
    inline ChangeApplyShrinkRequest& setChangePassengerListShrink(string changePassengerListShrink) { DARABONBA_PTR_SET_VALUE(changePassengerListShrink_, changePassengerListShrink) };


    // changedJourneysShrink Field Functions 
    bool hasChangedJourneysShrink() const { return this->changedJourneysShrink_ != nullptr;};
    void deleteChangedJourneysShrink() { this->changedJourneysShrink_ = nullptr;};
    inline string getChangedJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(changedJourneysShrink_, "") };
    inline ChangeApplyShrinkRequest& setChangedJourneysShrink(string changedJourneysShrink) { DARABONBA_PTR_SET_VALUE(changedJourneysShrink_, changedJourneysShrink) };


    // contactShrink Field Functions 
    bool hasContactShrink() const { return this->contactShrink_ != nullptr;};
    void deleteContactShrink() { this->contactShrink_ = nullptr;};
    inline string getContactShrink() const { DARABONBA_PTR_GET_DEFAULT(contactShrink_, "") };
    inline ChangeApplyShrinkRequest& setContactShrink(string contactShrink) { DARABONBA_PTR_SET_VALUE(contactShrink_, contactShrink) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline ChangeApplyShrinkRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ChangeApplyShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ChangeApplyShrinkRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of passengers for the change.
    // 
    // This parameter is required.
    shared_ptr<string> changePassengerListShrink_ {};
    // The target journey for the change.
    // 
    // This parameter is required.
    shared_ptr<string> changedJourneysShrink_ {};
    // The contact information for the change.
    // 
    // This parameter is required.
    shared_ptr<string> contactShrink_ {};
    // The order number.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderNum_ {};
    // The buyer remarks.
    shared_ptr<string> remark_ {};
    // The change type. Valid values:
    // - 0: voluntary change
    // - 1: flight schedule change or flight cancellation.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
