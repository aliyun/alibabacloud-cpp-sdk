// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTCONVERTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTCONVERTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDocumentConvertResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetDocumentConvertResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentConvertResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentConvertResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDocumentConvertResultResponseBody() = default ;
    GetDocumentConvertResultResponseBody(const GetDocumentConvertResultResponseBody &) = default ;
    GetDocumentConvertResultResponseBody(GetDocumentConvertResultResponseBody &&) = default ;
    GetDocumentConvertResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentConvertResultResponseBody() = default ;
    GetDocumentConvertResultResponseBody& operator=(const GetDocumentConvertResultResponseBody &) = default ;
    GetDocumentConvertResultResponseBody& operator=(GetDocumentConvertResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->completed_ == nullptr && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDocumentConvertResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline GetDocumentConvertResultResponseBody& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDocumentConvertResultResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDocumentConvertResultResponseBodyData>) };
    inline vector<GetDocumentConvertResultResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetDocumentConvertResultResponseBodyData>) };
    inline GetDocumentConvertResultResponseBody& setData(const vector<GetDocumentConvertResultResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocumentConvertResultResponseBody& setData(vector<GetDocumentConvertResultResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDocumentConvertResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocumentConvertResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDocumentConvertResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> completed_ = nullptr;
    std::shared_ptr<vector<GetDocumentConvertResultResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
