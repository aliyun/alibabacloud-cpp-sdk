// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResult4QueryInstancePrice4ModifyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetResult4QueryInstancePrice4ModifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResult4QueryInstancePrice4ModifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResult4QueryInstancePrice4ModifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResult4QueryInstancePrice4ModifyResponseBody() = default ;
    GetResult4QueryInstancePrice4ModifyResponseBody(const GetResult4QueryInstancePrice4ModifyResponseBody &) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBody(GetResult4QueryInstancePrice4ModifyResponseBody &&) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResult4QueryInstancePrice4ModifyResponseBody() = default ;
    GetResult4QueryInstancePrice4ModifyResponseBody& operator=(const GetResult4QueryInstancePrice4ModifyResponseBody &) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBody& operator=(GetResult4QueryInstancePrice4ModifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResult4QueryInstancePrice4ModifyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetResult4QueryInstancePrice4ModifyResponseBodyData) };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyData data() { DARABONBA_PTR_GET(data_, GetResult4QueryInstancePrice4ModifyResponseBodyData) };
    inline GetResult4QueryInstancePrice4ModifyResponseBody& setData(const GetResult4QueryInstancePrice4ModifyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResult4QueryInstancePrice4ModifyResponseBody& setData(GetResult4QueryInstancePrice4ModifyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetResult4QueryInstancePrice4ModifyResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
