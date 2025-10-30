// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceApiGroupsResponseBodyApiGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiGroupList, apiGroupList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiGroupList, apiGroupList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceApiGroupsResponseBody() = default ;
    GetDataServiceApiGroupsResponseBody(const GetDataServiceApiGroupsResponseBody &) = default ;
    GetDataServiceApiGroupsResponseBody(GetDataServiceApiGroupsResponseBody &&) = default ;
    GetDataServiceApiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiGroupsResponseBody() = default ;
    GetDataServiceApiGroupsResponseBody& operator=(const GetDataServiceApiGroupsResponseBody &) = default ;
    GetDataServiceApiGroupsResponseBody& operator=(GetDataServiceApiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiGroupList_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // apiGroupList Field Functions 
    bool hasApiGroupList() const { return this->apiGroupList_ != nullptr;};
    void deleteApiGroupList() { this->apiGroupList_ = nullptr;};
    inline const vector<GetDataServiceApiGroupsResponseBodyApiGroupList> & apiGroupList() const { DARABONBA_PTR_GET_CONST(apiGroupList_, vector<GetDataServiceApiGroupsResponseBodyApiGroupList>) };
    inline vector<GetDataServiceApiGroupsResponseBodyApiGroupList> apiGroupList() { DARABONBA_PTR_GET(apiGroupList_, vector<GetDataServiceApiGroupsResponseBodyApiGroupList>) };
    inline GetDataServiceApiGroupsResponseBody& setApiGroupList(const vector<GetDataServiceApiGroupsResponseBodyApiGroupList> & apiGroupList) { DARABONBA_PTR_SET_VALUE(apiGroupList_, apiGroupList) };
    inline GetDataServiceApiGroupsResponseBody& setApiGroupList(vector<GetDataServiceApiGroupsResponseBodyApiGroupList> && apiGroupList) { DARABONBA_PTR_SET_RVALUE(apiGroupList_, apiGroupList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceApiGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceApiGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceApiGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceApiGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<GetDataServiceApiGroupsResponseBodyApiGroupList>> apiGroupList_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
