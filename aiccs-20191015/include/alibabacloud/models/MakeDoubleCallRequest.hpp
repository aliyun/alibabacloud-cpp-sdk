// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKEDOUBLECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAKEDOUBLECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class MakeDoubleCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakeDoubleCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(BizData, bizData_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberPhone, memberPhone_);
      DARABONBA_PTR_TO_JSON(OutboundCallNumber, outboundCallNumber_);
      DARABONBA_PTR_TO_JSON(ServicerPhone, servicerPhone_);
    };
    friend void from_json(const Darabonba::Json& j, MakeDoubleCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(BizData, bizData_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberPhone, memberPhone_);
      DARABONBA_PTR_FROM_JSON(OutboundCallNumber, outboundCallNumber_);
      DARABONBA_PTR_FROM_JSON(ServicerPhone, servicerPhone_);
    };
    MakeDoubleCallRequest() = default ;
    MakeDoubleCallRequest(const MakeDoubleCallRequest &) = default ;
    MakeDoubleCallRequest(MakeDoubleCallRequest &&) = default ;
    MakeDoubleCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakeDoubleCallRequest() = default ;
    MakeDoubleCallRequest& operator=(const MakeDoubleCallRequest &) = default ;
    MakeDoubleCallRequest& operator=(MakeDoubleCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->bizData_ != nullptr && this->instanceId_ != nullptr && this->memberPhone_ != nullptr && this->outboundCallNumber_ != nullptr && this->servicerPhone_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline MakeDoubleCallRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline string bizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
    inline MakeDoubleCallRequest& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MakeDoubleCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberPhone Field Functions 
    bool hasMemberPhone() const { return this->memberPhone_ != nullptr;};
    void deleteMemberPhone() { this->memberPhone_ = nullptr;};
    inline string memberPhone() const { DARABONBA_PTR_GET_DEFAULT(memberPhone_, "") };
    inline MakeDoubleCallRequest& setMemberPhone(string memberPhone) { DARABONBA_PTR_SET_VALUE(memberPhone_, memberPhone) };


    // outboundCallNumber Field Functions 
    bool hasOutboundCallNumber() const { return this->outboundCallNumber_ != nullptr;};
    void deleteOutboundCallNumber() { this->outboundCallNumber_ = nullptr;};
    inline string outboundCallNumber() const { DARABONBA_PTR_GET_DEFAULT(outboundCallNumber_, "") };
    inline MakeDoubleCallRequest& setOutboundCallNumber(string outboundCallNumber) { DARABONBA_PTR_SET_VALUE(outboundCallNumber_, outboundCallNumber) };


    // servicerPhone Field Functions 
    bool hasServicerPhone() const { return this->servicerPhone_ != nullptr;};
    void deleteServicerPhone() { this->servicerPhone_ = nullptr;};
    inline string servicerPhone() const { DARABONBA_PTR_GET_DEFAULT(servicerPhone_, "") };
    inline MakeDoubleCallRequest& setServicerPhone(string servicerPhone) { DARABONBA_PTR_SET_VALUE(servicerPhone_, servicerPhone) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> bizData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> memberPhone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outboundCallNumber_ = nullptr;
    std::shared_ptr<string> servicerPhone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
