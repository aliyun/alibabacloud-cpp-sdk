// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneGroupResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateOrUpdateSwimmingLaneGroupResponseBody() = default ;
    CreateOrUpdateSwimmingLaneGroupResponseBody(const CreateOrUpdateSwimmingLaneGroupResponseBody &) = default ;
    CreateOrUpdateSwimmingLaneGroupResponseBody(CreateOrUpdateSwimmingLaneGroupResponseBody &&) = default ;
    CreateOrUpdateSwimmingLaneGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneGroupResponseBody() = default ;
    CreateOrUpdateSwimmingLaneGroupResponseBody& operator=(const CreateOrUpdateSwimmingLaneGroupResponseBody &) = default ;
    CreateOrUpdateSwimmingLaneGroupResponseBody& operator=(CreateOrUpdateSwimmingLaneGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneGroupResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateOrUpdateSwimmingLaneGroupResponseBodyData) };
    inline CreateOrUpdateSwimmingLaneGroupResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateOrUpdateSwimmingLaneGroupResponseBodyData) };
    inline CreateOrUpdateSwimmingLaneGroupResponseBody& setData(const CreateOrUpdateSwimmingLaneGroupResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateOrUpdateSwimmingLaneGroupResponseBody& setData(CreateOrUpdateSwimmingLaneGroupResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateOrUpdateSwimmingLaneGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateOrUpdateSwimmingLaneGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateSwimmingLaneGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateOrUpdateSwimmingLaneGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response parameters.
    std::shared_ptr<CreateOrUpdateSwimmingLaneGroupResponseBodyData> data_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // true: The request was successful. false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
