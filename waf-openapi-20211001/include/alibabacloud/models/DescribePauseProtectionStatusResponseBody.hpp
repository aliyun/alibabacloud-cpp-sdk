// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAUSEPROTECTIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAUSEPROTECTIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePauseProtectionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePauseProtectionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PauseStatus, pauseStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePauseProtectionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PauseStatus, pauseStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePauseProtectionStatusResponseBody() = default ;
    DescribePauseProtectionStatusResponseBody(const DescribePauseProtectionStatusResponseBody &) = default ;
    DescribePauseProtectionStatusResponseBody(DescribePauseProtectionStatusResponseBody &&) = default ;
    DescribePauseProtectionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePauseProtectionStatusResponseBody() = default ;
    DescribePauseProtectionStatusResponseBody& operator=(const DescribePauseProtectionStatusResponseBody &) = default ;
    DescribePauseProtectionStatusResponseBody& operator=(DescribePauseProtectionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pauseStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // pauseStatus Field Functions 
    bool hasPauseStatus() const { return this->pauseStatus_ != nullptr;};
    void deletePauseStatus() { this->pauseStatus_ = nullptr;};
    inline int32_t pauseStatus() const { DARABONBA_PTR_GET_DEFAULT(pauseStatus_, 0) };
    inline DescribePauseProtectionStatusResponseBody& setPauseStatus(int32_t pauseStatus) { DARABONBA_PTR_SET_VALUE(pauseStatus_, pauseStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePauseProtectionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether WAF protection is paused.
    // 
    // *   **0**: indicates that WAF protection is not paused. This is the default value.
    // *   **1**: indicates that WAF protection is paused.
    std::shared_ptr<int32_t> pauseStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
