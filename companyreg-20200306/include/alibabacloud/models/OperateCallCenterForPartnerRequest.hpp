// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATECALLCENTERFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATECALLCENTERFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class OperateCallCenterForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateCallCenterForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CallAction, callAction_);
      DARABONBA_PTR_TO_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateCallCenterForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CallAction, callAction_);
      DARABONBA_PTR_FROM_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    OperateCallCenterForPartnerRequest() = default ;
    OperateCallCenterForPartnerRequest(const OperateCallCenterForPartnerRequest &) = default ;
    OperateCallCenterForPartnerRequest(OperateCallCenterForPartnerRequest &&) = default ;
    OperateCallCenterForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateCallCenterForPartnerRequest() = default ;
    OperateCallCenterForPartnerRequest& operator=(const OperateCallCenterForPartnerRequest &) = default ;
    OperateCallCenterForPartnerRequest& operator=(OperateCallCenterForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->callAction_ == nullptr && return this->employeeCode_ == nullptr && return this->request_ == nullptr && return this->tenantId_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline OperateCallCenterForPartnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // callAction Field Functions 
    bool hasCallAction() const { return this->callAction_ != nullptr;};
    void deleteCallAction() { this->callAction_ = nullptr;};
    inline string callAction() const { DARABONBA_PTR_GET_DEFAULT(callAction_, "") };
    inline OperateCallCenterForPartnerRequest& setCallAction(string callAction) { DARABONBA_PTR_SET_VALUE(callAction_, callAction) };


    // employeeCode Field Functions 
    bool hasEmployeeCode() const { return this->employeeCode_ != nullptr;};
    void deleteEmployeeCode() { this->employeeCode_ = nullptr;};
    inline string employeeCode() const { DARABONBA_PTR_GET_DEFAULT(employeeCode_, "") };
    inline OperateCallCenterForPartnerRequest& setEmployeeCode(string employeeCode) { DARABONBA_PTR_SET_VALUE(employeeCode_, employeeCode) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline string request() const { DARABONBA_PTR_GET_DEFAULT(request_, "") };
    inline OperateCallCenterForPartnerRequest& setRequest(string request) { DARABONBA_PTR_SET_VALUE(request_, request) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline OperateCallCenterForPartnerRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> callAction_ = nullptr;
    std::shared_ptr<string> employeeCode_ = nullptr;
    std::shared_ptr<string> request_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
