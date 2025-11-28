// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScanRuleResponseBodyScanRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetScanRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanRule, scanRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanRule, scanRule_);
    };
    GetScanRuleResponseBody() = default ;
    GetScanRuleResponseBody(const GetScanRuleResponseBody &) = default ;
    GetScanRuleResponseBody(GetScanRuleResponseBody &&) = default ;
    GetScanRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanRuleResponseBody() = default ;
    GetScanRuleResponseBody& operator=(const GetScanRuleResponseBody &) = default ;
    GetScanRuleResponseBody& operator=(GetScanRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->isSuccess_ == nullptr && return this->requestId_ == nullptr && return this->scanRule_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScanRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetScanRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScanRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanRule Field Functions 
    bool hasScanRule() const { return this->scanRule_ != nullptr;};
    void deleteScanRule() { this->scanRule_ = nullptr;};
    inline const GetScanRuleResponseBodyScanRule & scanRule() const { DARABONBA_PTR_GET_CONST(scanRule_, GetScanRuleResponseBodyScanRule) };
    inline GetScanRuleResponseBodyScanRule scanRule() { DARABONBA_PTR_GET(scanRule_, GetScanRuleResponseBodyScanRule) };
    inline GetScanRuleResponseBody& setScanRule(const GetScanRuleResponseBodyScanRule & scanRule) { DARABONBA_PTR_SET_VALUE(scanRule_, scanRule) };
    inline GetScanRuleResponseBody& setScanRule(GetScanRuleResponseBodyScanRule && scanRule) { DARABONBA_PTR_SET_RVALUE(scanRule_, scanRule) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<bool> isSuccess_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetScanRuleResponseBodyScanRule> scanRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
