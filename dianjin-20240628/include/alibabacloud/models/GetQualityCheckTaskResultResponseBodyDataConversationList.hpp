// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATACONVERSATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATACONVERSATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetQualityCheckTaskResultResponseBodyDataConversationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckTaskResultResponseBodyDataConversationList& obj) { 
      DARABONBA_PTR_TO_JSON(callType, callType_);
      DARABONBA_PTR_TO_JSON(customerId, customerId_);
      DARABONBA_PTR_TO_JSON(customerName, customerName_);
      DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_TO_JSON(customerServiceName, customerServiceName_);
      DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_TO_JSON(gmtService, gmtService_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckTaskResultResponseBodyDataConversationList& obj) { 
      DARABONBA_PTR_FROM_JSON(callType, callType_);
      DARABONBA_PTR_FROM_JSON(customerId, customerId_);
      DARABONBA_PTR_FROM_JSON(customerName, customerName_);
      DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
      DARABONBA_PTR_FROM_JSON(customerServiceName, customerServiceName_);
      DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_FROM_JSON(gmtService, gmtService_);
    };
    GetQualityCheckTaskResultResponseBodyDataConversationList() = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationList(const GetQualityCheckTaskResultResponseBodyDataConversationList &) = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationList(GetQualityCheckTaskResultResponseBodyDataConversationList &&) = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckTaskResultResponseBodyDataConversationList() = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationList& operator=(const GetQualityCheckTaskResultResponseBodyDataConversationList &) = default ;
    GetQualityCheckTaskResultResponseBodyDataConversationList& operator=(GetQualityCheckTaskResultResponseBodyDataConversationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callType_ == nullptr
        && return this->customerId_ == nullptr && return this->customerName_ == nullptr && return this->customerServiceId_ == nullptr && return this->customerServiceName_ == nullptr && return this->dialogueList_ == nullptr
        && return this->gmtService_ == nullptr; };
    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string customerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // customerServiceId Field Functions 
    bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
    void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
    inline string customerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


    // customerServiceName Field Functions 
    bool hasCustomerServiceName() const { return this->customerServiceName_ != nullptr;};
    void deleteCustomerServiceName() { this->customerServiceName_ = nullptr;};
    inline string customerServiceName() const { DARABONBA_PTR_GET_DEFAULT(customerServiceName_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setCustomerServiceName(string customerServiceName) { DARABONBA_PTR_SET_VALUE(customerServiceName_, customerServiceName) };


    // dialogueList Field Functions 
    bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
    void deleteDialogueList() { this->dialogueList_ = nullptr;};
    inline const vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList> & dialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList>) };
    inline vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList> dialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList>) };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setDialogueList(const vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setDialogueList(vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


    // gmtService Field Functions 
    bool hasGmtService() const { return this->gmtService_ != nullptr;};
    void deleteGmtService() { this->gmtService_ = nullptr;};
    inline string gmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataConversationList& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


  protected:
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> customerName_ = nullptr;
    std::shared_ptr<string> customerServiceId_ = nullptr;
    std::shared_ptr<string> customerServiceName_ = nullptr;
    std::shared_ptr<vector<Models::GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList>> dialogueList_ = nullptr;
    std::shared_ptr<string> gmtService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
