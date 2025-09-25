// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATACONVERSATIONLISTDIALOGUELIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATACONVERSATIONLISTDIALOGUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& obj) { 
      DARABONBA_PTR_TO_JSON(begin, begin_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(customerId, customerId_);
      DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& obj) { 
      DARABONBA_PTR_FROM_JSON(begin, begin_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(customerId, customerId_);
      DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList() = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList(const GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList &) = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList(GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList &&) = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList() = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& operator=(const GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList &) = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& operator=(GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->beginTime_ != nullptr && this->content_ != nullptr && this->customerId_ != nullptr && this->customerServiceId_ != nullptr && this->customerServiceType_ != nullptr
        && this->end_ != nullptr && this->id_ != nullptr && this->role_ != nullptr && this->type_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int32_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerServiceId Field Functions 
    bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
    void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
    inline string customerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


    // customerServiceType Field Functions 
    bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
    void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
    inline string customerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> begin_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> customerServiceId_ = nullptr;
    std::shared_ptr<string> customerServiceType_ = nullptr;
    std::shared_ptr<int32_t> end_ = nullptr;
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
