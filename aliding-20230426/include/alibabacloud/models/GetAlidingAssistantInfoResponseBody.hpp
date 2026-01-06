// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIDINGASSISTANTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIDINGASSISTANTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAlidingAssistantInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlidingAssistantInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(approvalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlidingAssistantInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(approvalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetAlidingAssistantInfoResponseBody() = default ;
    GetAlidingAssistantInfoResponseBody(const GetAlidingAssistantInfoResponseBody &) = default ;
    GetAlidingAssistantInfoResponseBody(GetAlidingAssistantInfoResponseBody &&) = default ;
    GetAlidingAssistantInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlidingAssistantInfoResponseBody() = default ;
    GetAlidingAssistantInfoResponseBody& operator=(const GetAlidingAssistantInfoResponseBody &) = default ;
    GetAlidingAssistantInfoResponseBody& operator=(GetAlidingAssistantInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalStatus_ == nullptr
        && this->processInstanceId_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline int32_t getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, 0) };
    inline GetAlidingAssistantInfoResponseBody& setApprovalStatus(int32_t approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetAlidingAssistantInfoResponseBody& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlidingAssistantInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetAlidingAssistantInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetAlidingAssistantInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int32_t> approvalStatus_ {};
    shared_ptr<string> processInstanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
