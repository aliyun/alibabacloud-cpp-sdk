// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceQuotaResponseBody() = default ;
    GetResourceQuotaResponseBody(const GetResourceQuotaResponseBody &) = default ;
    GetResourceQuotaResponseBody(GetResourceQuotaResponseBody &&) = default ;
    GetResourceQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceQuotaResponseBody() = default ;
    GetResourceQuotaResponseBody& operator=(const GetResourceQuotaResponseBody &) = default ;
    GetResourceQuotaResponseBody& operator=(GetResourceQuotaResponseBody &&) = default ;
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
    inline GetResourceQuotaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t getData() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline GetResourceQuotaResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourceQuotaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code returned when the call fails. A normal result is not guaranteed to contain this field. You should not use the return of a specific success code as a prerequisite for obtaining the quota.
    shared_ptr<string> code_ {};
    // The maximum resource count quota applicable under the current query conditions. It is not the usage or remaining quota.
    // 
    // - `ResourceType=AppInstanceGroup`: Unit: groups.
    // - `ResourceType=AppAuthUser`: Unit: users.
    // - `ResourceType=PoolNodeAmount`: Unit: nodes.
    // 
    // If no smaller limit is obtained, `2147483647` is returned. This does not mean that the resource inventory is unlimited.
    shared_ptr<int64_t> data_ {};
    // The error message returned when the call fails. It is used together with the error code to help locate the cause.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
