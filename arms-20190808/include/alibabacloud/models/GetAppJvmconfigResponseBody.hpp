// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPJVMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPJVMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppJVMConfigResponseBodyJvmInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAppJVMConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppJVMConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(JvmInfoList, jvmInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppJVMConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(JvmInfoList, jvmInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAppJVMConfigResponseBody() = default ;
    GetAppJVMConfigResponseBody(const GetAppJVMConfigResponseBody &) = default ;
    GetAppJVMConfigResponseBody(GetAppJVMConfigResponseBody &&) = default ;
    GetAppJVMConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppJVMConfigResponseBody() = default ;
    GetAppJVMConfigResponseBody& operator=(const GetAppJVMConfigResponseBody &) = default ;
    GetAppJVMConfigResponseBody& operator=(GetAppJVMConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->jvmInfoList_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAppJVMConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // jvmInfoList Field Functions 
    bool hasJvmInfoList() const { return this->jvmInfoList_ != nullptr;};
    void deleteJvmInfoList() { this->jvmInfoList_ = nullptr;};
    inline const vector<GetAppJVMConfigResponseBodyJvmInfoList> & jvmInfoList() const { DARABONBA_PTR_GET_CONST(jvmInfoList_, vector<GetAppJVMConfigResponseBodyJvmInfoList>) };
    inline vector<GetAppJVMConfigResponseBodyJvmInfoList> jvmInfoList() { DARABONBA_PTR_GET(jvmInfoList_, vector<GetAppJVMConfigResponseBodyJvmInfoList>) };
    inline GetAppJVMConfigResponseBody& setJvmInfoList(const vector<GetAppJVMConfigResponseBodyJvmInfoList> & jvmInfoList) { DARABONBA_PTR_SET_VALUE(jvmInfoList_, jvmInfoList) };
    inline GetAppJVMConfigResponseBody& setJvmInfoList(vector<GetAppJVMConfigResponseBodyJvmInfoList> && jvmInfoList) { DARABONBA_PTR_SET_RVALUE(jvmInfoList_, jvmInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAppJVMConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppJVMConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppJVMConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values: 2XX: The request is successful. 3XX: A redirection message is returned. 4XX: The request is invalid. 5XX: A server error occurs.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The list of JVM information.
    std::shared_ptr<vector<GetAppJVMConfigResponseBodyJvmInfoList>> jvmInfoList_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true and false.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
