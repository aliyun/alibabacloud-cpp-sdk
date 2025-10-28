// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFullRequestSampleByInstanceIdResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestSampleByInstanceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestSampleByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestSampleByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFullRequestSampleByInstanceIdResponseBody() = default ;
    GetFullRequestSampleByInstanceIdResponseBody(const GetFullRequestSampleByInstanceIdResponseBody &) = default ;
    GetFullRequestSampleByInstanceIdResponseBody(GetFullRequestSampleByInstanceIdResponseBody &&) = default ;
    GetFullRequestSampleByInstanceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestSampleByInstanceIdResponseBody() = default ;
    GetFullRequestSampleByInstanceIdResponseBody& operator=(const GetFullRequestSampleByInstanceIdResponseBody &) = default ;
    GetFullRequestSampleByInstanceIdResponseBody& operator=(GetFullRequestSampleByInstanceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetFullRequestSampleByInstanceIdResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetFullRequestSampleByInstanceIdResponseBodyData>) };
    inline vector<GetFullRequestSampleByInstanceIdResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetFullRequestSampleByInstanceIdResponseBodyData>) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setData(const vector<GetFullRequestSampleByInstanceIdResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setData(vector<GetFullRequestSampleByInstanceIdResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The returned data.
    std::shared_ptr<vector<GetFullRequestSampleByInstanceIdResponseBodyData>> data_ = nullptr;
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message that contains information such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
