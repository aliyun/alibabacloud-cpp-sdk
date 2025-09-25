// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RealtimeDialogAssistResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    RealtimeDialogAssistResponseBody() = default ;
    RealtimeDialogAssistResponseBody(const RealtimeDialogAssistResponseBody &) = default ;
    RealtimeDialogAssistResponseBody(RealtimeDialogAssistResponseBody &&) = default ;
    RealtimeDialogAssistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistResponseBody() = default ;
    RealtimeDialogAssistResponseBody& operator=(const RealtimeDialogAssistResponseBody &) = default ;
    RealtimeDialogAssistResponseBody& operator=(RealtimeDialogAssistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cost_ != nullptr
        && this->data_ != nullptr && this->dataType_ != nullptr && this->errCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr && this->time_ != nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline RealtimeDialogAssistResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RealtimeDialogAssistResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RealtimeDialogAssistResponseBodyData) };
    inline RealtimeDialogAssistResponseBodyData data() { DARABONBA_PTR_GET(data_, RealtimeDialogAssistResponseBodyData) };
    inline RealtimeDialogAssistResponseBody& setData(const RealtimeDialogAssistResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RealtimeDialogAssistResponseBody& setData(RealtimeDialogAssistResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline RealtimeDialogAssistResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline RealtimeDialogAssistResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RealtimeDialogAssistResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealtimeDialogAssistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RealtimeDialogAssistResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RealtimeDialogAssistResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int64_t> cost_ = nullptr;
    std::shared_ptr<RealtimeDialogAssistResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
