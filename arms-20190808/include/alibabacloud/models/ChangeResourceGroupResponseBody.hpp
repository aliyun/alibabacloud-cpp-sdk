// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeResourceGroupResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ChangeResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeResourceGroupResponseBody() = default ;
    ChangeResourceGroupResponseBody(const ChangeResourceGroupResponseBody &) = default ;
    ChangeResourceGroupResponseBody(ChangeResourceGroupResponseBody &&) = default ;
    ChangeResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceGroupResponseBody() = default ;
    ChangeResourceGroupResponseBody& operator=(const ChangeResourceGroupResponseBody &) = default ;
    ChangeResourceGroupResponseBody& operator=(ChangeResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ChangeResourceGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChangeResourceGroupResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ChangeResourceGroupResponseBodyData) };
    inline ChangeResourceGroupResponseBodyData data() { DARABONBA_PTR_GET(data_, ChangeResourceGroupResponseBodyData) };
    inline ChangeResourceGroupResponseBody& setData(const ChangeResourceGroupResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeResourceGroupResponseBody& setData(ChangeResourceGroupResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChangeResourceGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code or error code.
    std::shared_ptr<string> code_ = nullptr;
    // The returned struct.
    std::shared_ptr<ChangeResourceGroupResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
