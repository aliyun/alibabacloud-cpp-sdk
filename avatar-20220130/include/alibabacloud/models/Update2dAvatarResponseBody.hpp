// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATE2DAVATARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATE2DAVATARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Update2dAvatarResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class Update2dAvatarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Update2dAvatarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, Update2dAvatarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    Update2dAvatarResponseBody() = default ;
    Update2dAvatarResponseBody(const Update2dAvatarResponseBody &) = default ;
    Update2dAvatarResponseBody(Update2dAvatarResponseBody &&) = default ;
    Update2dAvatarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Update2dAvatarResponseBody() = default ;
    Update2dAvatarResponseBody& operator=(const Update2dAvatarResponseBody &) = default ;
    Update2dAvatarResponseBody& operator=(Update2dAvatarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Update2dAvatarResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Update2dAvatarResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, Update2dAvatarResponseBodyData) };
    inline Update2dAvatarResponseBodyData data() { DARABONBA_PTR_GET(data_, Update2dAvatarResponseBodyData) };
    inline Update2dAvatarResponseBody& setData(const Update2dAvatarResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline Update2dAvatarResponseBody& setData(Update2dAvatarResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Update2dAvatarResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Update2dAvatarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline Update2dAvatarResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<Update2dAvatarResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
