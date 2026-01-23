// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCANRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCANRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateScanRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScanRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanRuleId, scanRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScanRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanRuleId, scanRuleId_);
    };
    UpdateScanRuleResponseBody() = default ;
    UpdateScanRuleResponseBody(const UpdateScanRuleResponseBody &) = default ;
    UpdateScanRuleResponseBody(UpdateScanRuleResponseBody &&) = default ;
    UpdateScanRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScanRuleResponseBody() = default ;
    UpdateScanRuleResponseBody& operator=(const UpdateScanRuleResponseBody &) = default ;
    UpdateScanRuleResponseBody& operator=(UpdateScanRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->requestId_ == nullptr && this->scanRuleId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline UpdateScanRuleResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateScanRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanRuleId Field Functions 
    bool hasScanRuleId() const { return this->scanRuleId_ != nullptr;};
    void deleteScanRuleId() { this->scanRuleId_ = nullptr;};
    inline string getScanRuleId() const { DARABONBA_PTR_GET_DEFAULT(scanRuleId_, "") };
    inline UpdateScanRuleResponseBody& setScanRuleId(string scanRuleId) { DARABONBA_PTR_SET_VALUE(scanRuleId_, scanRuleId) };


  protected:
    // The HTTP status code.
    shared_ptr<int64_t> code_ {};
    // Request Id
    shared_ptr<string> requestId_ {};
    // The rule ID.
    shared_ptr<string> scanRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
