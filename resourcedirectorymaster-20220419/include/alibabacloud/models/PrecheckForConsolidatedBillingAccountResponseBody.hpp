// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKFORCONSOLIDATEDBILLINGACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKFORCONSOLIDATEDBILLINGACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PrecheckForConsolidatedBillingAccountResponseBodyReasons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class PrecheckForConsolidatedBillingAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckForConsolidatedBillingAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Reasons, reasons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckForConsolidatedBillingAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Reasons, reasons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    PrecheckForConsolidatedBillingAccountResponseBody() = default ;
    PrecheckForConsolidatedBillingAccountResponseBody(const PrecheckForConsolidatedBillingAccountResponseBody &) = default ;
    PrecheckForConsolidatedBillingAccountResponseBody(PrecheckForConsolidatedBillingAccountResponseBody &&) = default ;
    PrecheckForConsolidatedBillingAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckForConsolidatedBillingAccountResponseBody() = default ;
    PrecheckForConsolidatedBillingAccountResponseBody& operator=(const PrecheckForConsolidatedBillingAccountResponseBody &) = default ;
    PrecheckForConsolidatedBillingAccountResponseBody& operator=(PrecheckForConsolidatedBillingAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reasons_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr; };
    // reasons Field Functions 
    bool hasReasons() const { return this->reasons_ != nullptr;};
    void deleteReasons() { this->reasons_ = nullptr;};
    inline const vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons> & reasons() const { DARABONBA_PTR_GET_CONST(reasons_, vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons>) };
    inline vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons> reasons() { DARABONBA_PTR_GET(reasons_, vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons>) };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setReasons(const vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons> & reasons) { DARABONBA_PTR_SET_VALUE(reasons_, reasons) };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setReasons(vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons> && reasons) { DARABONBA_PTR_SET_RVALUE(reasons_, reasons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The cause of the check failure.
    std::shared_ptr<vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons>> reasons_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the check was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
