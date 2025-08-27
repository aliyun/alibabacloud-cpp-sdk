// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateDeleteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateDeleteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateDeleteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TravelStandardRelateDeleteResponseBody() = default ;
    TravelStandardRelateDeleteResponseBody(const TravelStandardRelateDeleteResponseBody &) = default ;
    TravelStandardRelateDeleteResponseBody(TravelStandardRelateDeleteResponseBody &&) = default ;
    TravelStandardRelateDeleteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateDeleteResponseBody() = default ;
    TravelStandardRelateDeleteResponseBody& operator=(const TravelStandardRelateDeleteResponseBody &) = default ;
    TravelStandardRelateDeleteResponseBody& operator=(TravelStandardRelateDeleteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->success_ != nullptr && this->traceId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TravelStandardRelateDeleteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TravelStandardRelateDeleteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline int32_t resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
    inline TravelStandardRelateDeleteResponseBody& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TravelStandardRelateDeleteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TravelStandardRelateDeleteResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> resultCode_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    // traceId
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
