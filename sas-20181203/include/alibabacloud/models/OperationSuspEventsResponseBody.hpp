// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONSUSPEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONSUSPEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperationSuspEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationSuspEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessCode, accessCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OperationSuspEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessCode, accessCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    OperationSuspEventsResponseBody() = default ;
    OperationSuspEventsResponseBody(const OperationSuspEventsResponseBody &) = default ;
    OperationSuspEventsResponseBody(OperationSuspEventsResponseBody &&) = default ;
    OperationSuspEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationSuspEventsResponseBody() = default ;
    OperationSuspEventsResponseBody& operator=(const OperationSuspEventsResponseBody &) = default ;
    OperationSuspEventsResponseBody& operator=(OperationSuspEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessCode_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessCode Field Functions 
    bool hasAccessCode() const { return this->accessCode_ != nullptr;};
    void deleteAccessCode() { this->accessCode_ = nullptr;};
    inline string accessCode() const { DARABONBA_PTR_GET_DEFAULT(accessCode_, "") };
    inline OperationSuspEventsResponseBody& setAccessCode(string accessCode) { DARABONBA_PTR_SET_VALUE(accessCode_, accessCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OperationSuspEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OperationSuspEventsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether you have access permissions. Valid values:
    // 
    // *   **pass**: yes
    // *   **no_permission**: no
    std::shared_ptr<string> accessCode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether exceptions are handled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
