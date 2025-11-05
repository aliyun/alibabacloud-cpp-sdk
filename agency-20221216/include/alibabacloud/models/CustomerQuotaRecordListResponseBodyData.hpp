// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CustomerQuotaRecordListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerQuotaRecordListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OperationSubmitType, operationSubmitType_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(OperationTypeCode, operationTypeCode_);
      DARABONBA_PTR_TO_JSON(OperationTypeDesc, operationTypeDesc_);
      DARABONBA_PTR_TO_JSON(OperationUid, operationUid_);
      DARABONBA_PTR_TO_JSON(UpdateAfterAmount, updateAfterAmount_);
      DARABONBA_PTR_TO_JSON(UpdateAmount, updateAmount_);
      DARABONBA_PTR_TO_JSON(UpdateBeforeAmount, updateBeforeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerQuotaRecordListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationSubmitType, operationSubmitType_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(OperationTypeCode, operationTypeCode_);
      DARABONBA_PTR_FROM_JSON(OperationTypeDesc, operationTypeDesc_);
      DARABONBA_PTR_FROM_JSON(OperationUid, operationUid_);
      DARABONBA_PTR_FROM_JSON(UpdateAfterAmount, updateAfterAmount_);
      DARABONBA_PTR_FROM_JSON(UpdateAmount, updateAmount_);
      DARABONBA_PTR_FROM_JSON(UpdateBeforeAmount, updateBeforeAmount_);
    };
    CustomerQuotaRecordListResponseBodyData() = default ;
    CustomerQuotaRecordListResponseBodyData(const CustomerQuotaRecordListResponseBodyData &) = default ;
    CustomerQuotaRecordListResponseBodyData(CustomerQuotaRecordListResponseBodyData &&) = default ;
    CustomerQuotaRecordListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerQuotaRecordListResponseBodyData() = default ;
    CustomerQuotaRecordListResponseBodyData& operator=(const CustomerQuotaRecordListResponseBodyData &) = default ;
    CustomerQuotaRecordListResponseBodyData& operator=(CustomerQuotaRecordListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationSubmitType_ == nullptr
        && return this->operationTime_ == nullptr && return this->operationTypeCode_ == nullptr && return this->operationTypeDesc_ == nullptr && return this->operationUid_ == nullptr && return this->updateAfterAmount_ == nullptr
        && return this->updateAmount_ == nullptr && return this->updateBeforeAmount_ == nullptr; };
    // operationSubmitType Field Functions 
    bool hasOperationSubmitType() const { return this->operationSubmitType_ != nullptr;};
    void deleteOperationSubmitType() { this->operationSubmitType_ = nullptr;};
    inline string operationSubmitType() const { DARABONBA_PTR_GET_DEFAULT(operationSubmitType_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setOperationSubmitType(string operationSubmitType) { DARABONBA_PTR_SET_VALUE(operationSubmitType_, operationSubmitType) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // operationTypeCode Field Functions 
    bool hasOperationTypeCode() const { return this->operationTypeCode_ != nullptr;};
    void deleteOperationTypeCode() { this->operationTypeCode_ = nullptr;};
    inline string operationTypeCode() const { DARABONBA_PTR_GET_DEFAULT(operationTypeCode_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setOperationTypeCode(string operationTypeCode) { DARABONBA_PTR_SET_VALUE(operationTypeCode_, operationTypeCode) };


    // operationTypeDesc Field Functions 
    bool hasOperationTypeDesc() const { return this->operationTypeDesc_ != nullptr;};
    void deleteOperationTypeDesc() { this->operationTypeDesc_ = nullptr;};
    inline string operationTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(operationTypeDesc_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setOperationTypeDesc(string operationTypeDesc) { DARABONBA_PTR_SET_VALUE(operationTypeDesc_, operationTypeDesc) };


    // operationUid Field Functions 
    bool hasOperationUid() const { return this->operationUid_ != nullptr;};
    void deleteOperationUid() { this->operationUid_ = nullptr;};
    inline string operationUid() const { DARABONBA_PTR_GET_DEFAULT(operationUid_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setOperationUid(string operationUid) { DARABONBA_PTR_SET_VALUE(operationUid_, operationUid) };


    // updateAfterAmount Field Functions 
    bool hasUpdateAfterAmount() const { return this->updateAfterAmount_ != nullptr;};
    void deleteUpdateAfterAmount() { this->updateAfterAmount_ = nullptr;};
    inline string updateAfterAmount() const { DARABONBA_PTR_GET_DEFAULT(updateAfterAmount_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setUpdateAfterAmount(string updateAfterAmount) { DARABONBA_PTR_SET_VALUE(updateAfterAmount_, updateAfterAmount) };


    // updateAmount Field Functions 
    bool hasUpdateAmount() const { return this->updateAmount_ != nullptr;};
    void deleteUpdateAmount() { this->updateAmount_ = nullptr;};
    inline string updateAmount() const { DARABONBA_PTR_GET_DEFAULT(updateAmount_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setUpdateAmount(string updateAmount) { DARABONBA_PTR_SET_VALUE(updateAmount_, updateAmount) };


    // updateBeforeAmount Field Functions 
    bool hasUpdateBeforeAmount() const { return this->updateBeforeAmount_ != nullptr;};
    void deleteUpdateBeforeAmount() { this->updateBeforeAmount_ = nullptr;};
    inline string updateBeforeAmount() const { DARABONBA_PTR_GET_DEFAULT(updateBeforeAmount_, "") };
    inline CustomerQuotaRecordListResponseBodyData& setUpdateBeforeAmount(string updateBeforeAmount) { DARABONBA_PTR_SET_VALUE(updateBeforeAmount_, updateBeforeAmount) };


  protected:
    // The way to submit the quota adjustment operation. API/ACPN
    std::shared_ptr<string> operationSubmitType_ = nullptr;
    // The time of submit the quota adjustment operation.
    std::shared_ptr<string> operationTime_ = nullptr;
    // Operation Type Enum</br>
    // all All types</br>
    // quota_create Create quota</br>
    // quota_amount_adjust Adjust the amount of quota</br>
    std::shared_ptr<string> operationTypeCode_ = nullptr;
    // The description of submitted quota adjustment operation.
    std::shared_ptr<string> operationTypeDesc_ = nullptr;
    // The UID of operator(Partner\\"s UID).
    std::shared_ptr<string> operationUid_ = nullptr;
    // Updated quota amount
    std::shared_ptr<string> updateAfterAmount_ = nullptr;
    // The difference amount between updated quota and original quota.
    std::shared_ptr<string> updateAmount_ = nullptr;
    // Original quota amount
    std::shared_ptr<string> updateBeforeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
