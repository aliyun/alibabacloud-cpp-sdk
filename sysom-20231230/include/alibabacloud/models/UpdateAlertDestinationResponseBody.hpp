// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateAlertDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateAlertDestinationResponseBody() = default ;
    UpdateAlertDestinationResponseBody(const UpdateAlertDestinationResponseBody &) = default ;
    UpdateAlertDestinationResponseBody(UpdateAlertDestinationResponseBody &&) = default ;
    UpdateAlertDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertDestinationResponseBody() = default ;
    UpdateAlertDestinationResponseBody& operator=(const UpdateAlertDestinationResponseBody &) = default ;
    UpdateAlertDestinationResponseBody& operator=(UpdateAlertDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateAlertDestinationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline UpdateAlertDestinationResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline UpdateAlertDestinationResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateAlertDestinationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAlertDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    Darabonba::Json data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
