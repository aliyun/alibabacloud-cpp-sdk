// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNOREHCCHECKWARNINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IGNOREHCCHECKWARNINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class IgnoreHcCheckWarningsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreHcCheckWarningsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(CheckWarningIds, checkWarningIds_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreHcCheckWarningsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(CheckWarningIds, checkWarningIds_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    IgnoreHcCheckWarningsRequest() = default ;
    IgnoreHcCheckWarningsRequest(const IgnoreHcCheckWarningsRequest &) = default ;
    IgnoreHcCheckWarningsRequest(IgnoreHcCheckWarningsRequest &&) = default ;
    IgnoreHcCheckWarningsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreHcCheckWarningsRequest() = default ;
    IgnoreHcCheckWarningsRequest& operator=(const IgnoreHcCheckWarningsRequest &) = default ;
    IgnoreHcCheckWarningsRequest& operator=(IgnoreHcCheckWarningsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr
        && this->checkWarningIds_ == nullptr && this->reason_ == nullptr && this->riskId_ == nullptr && this->source_ == nullptr && this->sourceIp_ == nullptr
        && this->type_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline string getCheckIds() const { DARABONBA_PTR_GET_DEFAULT(checkIds_, "") };
    inline IgnoreHcCheckWarningsRequest& setCheckIds(string checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };


    // checkWarningIds Field Functions 
    bool hasCheckWarningIds() const { return this->checkWarningIds_ != nullptr;};
    void deleteCheckWarningIds() { this->checkWarningIds_ = nullptr;};
    inline string getCheckWarningIds() const { DARABONBA_PTR_GET_DEFAULT(checkWarningIds_, "") };
    inline IgnoreHcCheckWarningsRequest& setCheckWarningIds(string checkWarningIds) { DARABONBA_PTR_SET_VALUE(checkWarningIds_, checkWarningIds) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline IgnoreHcCheckWarningsRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline string getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, "") };
    inline IgnoreHcCheckWarningsRequest& setRiskId(string riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IgnoreHcCheckWarningsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline IgnoreHcCheckWarningsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline IgnoreHcCheckWarningsRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [DescribeCheckWarnings](https://help.aliyun.com/document_detail/116182.html) operation to query the IDs of check items.
    shared_ptr<string> checkIds_ {};
    // The ID of the alert that is triggered by the check item. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [DescribeCheckWarnings](https://help.aliyun.com/document_detail/116182.html) operation to query the IDs of alerts that are triggered by check items.
    shared_ptr<string> checkWarningIds_ {};
    // The reason for the current operation.
    shared_ptr<string> reason_ {};
    // The ID of the risk item that you want to ignore or cancel ignoring.
    // 
    // >  You can call the [DescribeCheckWarningSummary](https://help.aliyun.com/document_detail/116179.html) operation to query the IDs of risk items.
    shared_ptr<string> riskId_ {};
    // The data source. If this parameter is left empty, the server baseline results are queried by default. Valid values:
    // * **default**: server
    // * **agentless**
    shared_ptr<string> source_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The type of the operation that you want to perform. Valid values:
    // 
    // *   **1**: ignores a risk item
    // *   **2**: cancels ignoring a risk item
    // 
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
