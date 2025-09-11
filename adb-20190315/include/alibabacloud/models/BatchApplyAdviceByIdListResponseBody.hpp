// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHAPPLYADVICEBYIDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHAPPLYADVICEBYIDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class BatchApplyAdviceByIdListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchApplyAdviceByIdListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchApplyAdviceByIdListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchApplyAdviceByIdListResponseBody() = default ;
    BatchApplyAdviceByIdListResponseBody(const BatchApplyAdviceByIdListResponseBody &) = default ;
    BatchApplyAdviceByIdListResponseBody(BatchApplyAdviceByIdListResponseBody &&) = default ;
    BatchApplyAdviceByIdListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchApplyAdviceByIdListResponseBody() = default ;
    BatchApplyAdviceByIdListResponseBody& operator=(const BatchApplyAdviceByIdListResponseBody &) = default ;
    BatchApplyAdviceByIdListResponseBody& operator=(BatchApplyAdviceByIdListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->requestId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchApplyAdviceByIdListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchApplyAdviceByIdListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The message returned for the operation. Valid values:
    // 
    // *   **SUCCESS** is returned if the operation is successful.
    // *   An error message is returned if the operation fails.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
