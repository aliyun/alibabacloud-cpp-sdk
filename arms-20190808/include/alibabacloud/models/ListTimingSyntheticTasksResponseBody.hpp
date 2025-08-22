// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTimingSyntheticTasksResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTimingSyntheticTasksResponseBody() = default ;
    ListTimingSyntheticTasksResponseBody(const ListTimingSyntheticTasksResponseBody &) = default ;
    ListTimingSyntheticTasksResponseBody(ListTimingSyntheticTasksResponseBody &&) = default ;
    ListTimingSyntheticTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksResponseBody() = default ;
    ListTimingSyntheticTasksResponseBody& operator=(const ListTimingSyntheticTasksResponseBody &) = default ;
    ListTimingSyntheticTasksResponseBody& operator=(ListTimingSyntheticTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListTimingSyntheticTasksResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTimingSyntheticTasksResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListTimingSyntheticTasksResponseBodyData) };
    inline ListTimingSyntheticTasksResponseBodyData data() { DARABONBA_PTR_GET(data_, ListTimingSyntheticTasksResponseBodyData) };
    inline ListTimingSyntheticTasksResponseBody& setData(const ListTimingSyntheticTasksResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTimingSyntheticTasksResponseBody& setData(ListTimingSyntheticTasksResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTimingSyntheticTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTimingSyntheticTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The returned struct.
    std::shared_ptr<ListTimingSyntheticTasksResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
