// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEPROJECTADDABLEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEPROJECTADDABLEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceProjectAddableUsersResponseBodyUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceProjectAddableUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceProjectAddableUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceProjectAddableUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    GetDataServiceProjectAddableUsersResponseBody() = default ;
    GetDataServiceProjectAddableUsersResponseBody(const GetDataServiceProjectAddableUsersResponseBody &) = default ;
    GetDataServiceProjectAddableUsersResponseBody(GetDataServiceProjectAddableUsersResponseBody &&) = default ;
    GetDataServiceProjectAddableUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceProjectAddableUsersResponseBody() = default ;
    GetDataServiceProjectAddableUsersResponseBody& operator=(const GetDataServiceProjectAddableUsersResponseBody &) = default ;
    GetDataServiceProjectAddableUsersResponseBody& operator=(GetDataServiceProjectAddableUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->userList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceProjectAddableUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceProjectAddableUsersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceProjectAddableUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceProjectAddableUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceProjectAddableUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<GetDataServiceProjectAddableUsersResponseBodyUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<GetDataServiceProjectAddableUsersResponseBodyUserList>) };
    inline vector<GetDataServiceProjectAddableUsersResponseBodyUserList> userList() { DARABONBA_PTR_GET(userList_, vector<GetDataServiceProjectAddableUsersResponseBodyUserList>) };
    inline GetDataServiceProjectAddableUsersResponseBody& setUserList(const vector<GetDataServiceProjectAddableUsersResponseBodyUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline GetDataServiceProjectAddableUsersResponseBody& setUserList(vector<GetDataServiceProjectAddableUsersResponseBodyUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<GetDataServiceProjectAddableUsersResponseBodyUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
