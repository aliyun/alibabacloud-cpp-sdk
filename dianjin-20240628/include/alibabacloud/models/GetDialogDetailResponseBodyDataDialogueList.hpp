// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGDETAILRESPONSEBODYDATADIALOGUELIST_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGDETAILRESPONSEBODYDATADIALOGUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogDetailResponseBodyDataDialogueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogDetailResponseBodyDataDialogueList& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(customerId, customerId_);
      DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_TO_JSON(hangUpDialog, hangUpDialog_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
      DARABONBA_PTR_TO_JSON(intentName, intentName_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogDetailResponseBodyDataDialogueList& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(customerId, customerId_);
      DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_FROM_JSON(hangUpDialog, hangUpDialog_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
      DARABONBA_PTR_FROM_JSON(intentName, intentName_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetDialogDetailResponseBodyDataDialogueList() = default ;
    GetDialogDetailResponseBodyDataDialogueList(const GetDialogDetailResponseBodyDataDialogueList &) = default ;
    GetDialogDetailResponseBodyDataDialogueList(GetDialogDetailResponseBodyDataDialogueList &&) = default ;
    GetDialogDetailResponseBodyDataDialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogDetailResponseBodyDataDialogueList() = default ;
    GetDialogDetailResponseBodyDataDialogueList& operator=(const GetDialogDetailResponseBodyDataDialogueList &) = default ;
    GetDialogDetailResponseBodyDataDialogueList& operator=(GetDialogDetailResponseBodyDataDialogueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->customerId_ == nullptr && return this->customerServiceId_ == nullptr && return this->customerServiceType_ == nullptr && return this->hangUpDialog_ == nullptr && return this->id_ == nullptr
        && return this->intentCode_ == nullptr && return this->intentName_ == nullptr && return this->role_ == nullptr && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerServiceId Field Functions 
    bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
    void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
    inline string customerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


    // customerServiceType Field Functions 
    bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
    void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
    inline string customerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


    // hangUpDialog Field Functions 
    bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
    void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
    inline bool hangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
    inline GetDialogDetailResponseBodyDataDialogueList& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDialogDetailResponseBodyDataDialogueList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intentCode Field Functions 
    bool hasIntentCode() const { return this->intentCode_ != nullptr;};
    void deleteIntentCode() { this->intentCode_ = nullptr;};
    inline string intentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDialogDetailResponseBodyDataDialogueList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> customerServiceId_ = nullptr;
    std::shared_ptr<string> customerServiceType_ = nullptr;
    std::shared_ptr<bool> hangUpDialog_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> intentCode_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
