// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SmartqQueryAbilityResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqQueryAbilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqQueryAbilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqQueryAbilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SmartqQueryAbilityResponseBody() = default ;
    SmartqQueryAbilityResponseBody(const SmartqQueryAbilityResponseBody &) = default ;
    SmartqQueryAbilityResponseBody(SmartqQueryAbilityResponseBody &&) = default ;
    SmartqQueryAbilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqQueryAbilityResponseBody() = default ;
    SmartqQueryAbilityResponseBody& operator=(const SmartqQueryAbilityResponseBody &) = default ;
    SmartqQueryAbilityResponseBody& operator=(SmartqQueryAbilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SmartqQueryAbilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const SmartqQueryAbilityResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, SmartqQueryAbilityResponseBodyResult) };
    inline SmartqQueryAbilityResponseBodyResult result() { DARABONBA_PTR_GET(result_, SmartqQueryAbilityResponseBodyResult) };
    inline SmartqQueryAbilityResponseBody& setResult(const SmartqQueryAbilityResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SmartqQueryAbilityResponseBody& setResult(SmartqQueryAbilityResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SmartqQueryAbilityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return result.
    std::shared_ptr<SmartqQueryAbilityResponseBodyResult> result_ = nullptr;
    // Whether the operation was successful.
    // 
    // This parameter is required.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
