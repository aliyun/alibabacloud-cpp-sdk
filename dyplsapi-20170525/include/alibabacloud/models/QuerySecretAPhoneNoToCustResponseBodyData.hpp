// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETAPHONENOTOCUSTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETAPHONENOTOCUSTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretAPhoneNoToCustResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretAPhoneNoToCustResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_TO_JSON(CustPhoneNo, custPhoneNo_);
      DARABONBA_PTR_TO_JSON(NoType, noType_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ReportResult, reportResult_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretAPhoneNoToCustResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_FROM_JSON(CustPhoneNo, custPhoneNo_);
      DARABONBA_PTR_FROM_JSON(NoType, noType_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ReportResult, reportResult_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
    };
    QuerySecretAPhoneNoToCustResponseBodyData() = default ;
    QuerySecretAPhoneNoToCustResponseBodyData(const QuerySecretAPhoneNoToCustResponseBodyData &) = default ;
    QuerySecretAPhoneNoToCustResponseBodyData(QuerySecretAPhoneNoToCustResponseBodyData &&) = default ;
    QuerySecretAPhoneNoToCustResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretAPhoneNoToCustResponseBodyData() = default ;
    QuerySecretAPhoneNoToCustResponseBodyData& operator=(const QuerySecretAPhoneNoToCustResponseBodyData &) = default ;
    QuerySecretAPhoneNoToCustResponseBodyData& operator=(QuerySecretAPhoneNoToCustResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ANoWhiteGroupId_ == nullptr
        && return this->custPhoneNo_ == nullptr && return this->noType_ == nullptr && return this->phoneNoA_ == nullptr && return this->remark_ == nullptr && return this->reportResult_ == nullptr
        && return this->reportStatus_ == nullptr; };
    // ANoWhiteGroupId Field Functions 
    bool hasANoWhiteGroupId() const { return this->ANoWhiteGroupId_ != nullptr;};
    void deleteANoWhiteGroupId() { this->ANoWhiteGroupId_ = nullptr;};
    inline string ANoWhiteGroupId() const { DARABONBA_PTR_GET_DEFAULT(ANoWhiteGroupId_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setANoWhiteGroupId(string ANoWhiteGroupId) { DARABONBA_PTR_SET_VALUE(ANoWhiteGroupId_, ANoWhiteGroupId) };


    // custPhoneNo Field Functions 
    bool hasCustPhoneNo() const { return this->custPhoneNo_ != nullptr;};
    void deleteCustPhoneNo() { this->custPhoneNo_ = nullptr;};
    inline string custPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(custPhoneNo_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setCustPhoneNo(string custPhoneNo) { DARABONBA_PTR_SET_VALUE(custPhoneNo_, custPhoneNo) };


    // noType Field Functions 
    bool hasNoType() const { return this->noType_ != nullptr;};
    void deleteNoType() { this->noType_ = nullptr;};
    inline string noType() const { DARABONBA_PTR_GET_DEFAULT(noType_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setNoType(string noType) { DARABONBA_PTR_SET_VALUE(noType_, noType) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // reportResult Field Functions 
    bool hasReportResult() const { return this->reportResult_ != nullptr;};
    void deleteReportResult() { this->reportResult_ = nullptr;};
    inline string reportResult() const { DARABONBA_PTR_GET_DEFAULT(reportResult_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setReportResult(string reportResult) { DARABONBA_PTR_SET_VALUE(reportResult_, reportResult) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline QuerySecretAPhoneNoToCustResponseBodyData& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


  protected:
    // 所属a号码组id
    std::shared_ptr<string> ANoWhiteGroupId_ = nullptr;
    // 固话报备的经办人/法人电话
    std::shared_ptr<string> custPhoneNo_ = nullptr;
    // 号码类型
    std::shared_ptr<string> noType_ = nullptr;
    // A号码
    std::shared_ptr<string> phoneNoA_ = nullptr;
    // 备注（客户自己的业务备注，可编辑）
    std::shared_ptr<string> remark_ = nullptr;
    // 报备失败原因
    std::shared_ptr<string> reportResult_ = nullptr;
    // 报备结果
    std::shared_ptr<string> reportStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
