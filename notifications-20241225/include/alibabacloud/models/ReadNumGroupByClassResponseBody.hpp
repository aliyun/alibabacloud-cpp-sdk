// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READNUMGROUPBYCLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READNUMGROUPBYCLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadNumGroupByClassResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadNumGroupByClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadNumGroupByClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadNumGroupByClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadNumGroupByClassResponseBody() = default ;
    ReadNumGroupByClassResponseBody(const ReadNumGroupByClassResponseBody &) = default ;
    ReadNumGroupByClassResponseBody(ReadNumGroupByClassResponseBody &&) = default ;
    ReadNumGroupByClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadNumGroupByClassResponseBody() = default ;
    ReadNumGroupByClassResponseBody& operator=(const ReadNumGroupByClassResponseBody &) = default ;
    ReadNumGroupByClassResponseBody& operator=(ReadNumGroupByClassResponseBody &&) = default ;
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
    inline ReadNumGroupByClassResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ReadNumGroupByClassResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ReadNumGroupByClassResponseBodyData>) };
    inline vector<ReadNumGroupByClassResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ReadNumGroupByClassResponseBodyData>) };
    inline ReadNumGroupByClassResponseBody& setData(const vector<ReadNumGroupByClassResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadNumGroupByClassResponseBody& setData(vector<ReadNumGroupByClassResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadNumGroupByClassResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadNumGroupByClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadNumGroupByClassResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<ReadNumGroupByClassResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
