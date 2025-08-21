// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEIDBYIDENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEIDBYIDENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ResultValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceIdByIdentitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceIdByIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceIdByIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDeviceIdByIdentitiesResponseBody() = default ;
    ListDeviceIdByIdentitiesResponseBody(const ListDeviceIdByIdentitiesResponseBody &) = default ;
    ListDeviceIdByIdentitiesResponseBody(ListDeviceIdByIdentitiesResponseBody &&) = default ;
    ListDeviceIdByIdentitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceIdByIdentitiesResponseBody() = default ;
    ListDeviceIdByIdentitiesResponseBody& operator=(const ListDeviceIdByIdentitiesResponseBody &) = default ;
    ListDeviceIdByIdentitiesResponseBody& operator=(ListDeviceIdByIdentitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListDeviceIdByIdentitiesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDeviceIdByIdentitiesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeviceIdByIdentitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const map<string, ResultValue> & result() const { DARABONBA_PTR_GET_CONST(result_, map<string, ResultValue>) };
    inline map<string, ResultValue> result() { DARABONBA_PTR_GET(result_, map<string, ResultValue>) };
    inline ListDeviceIdByIdentitiesResponseBody& setResult(const map<string, ResultValue> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDeviceIdByIdentitiesResponseBody& setResult(map<string, ResultValue> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<map<string, ResultValue>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
