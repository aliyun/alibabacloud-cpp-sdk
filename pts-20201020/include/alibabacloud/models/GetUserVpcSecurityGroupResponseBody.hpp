// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERVPCSECURITYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERVPCSECURITYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserVpcSecurityGroupResponseBodySecurityGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetUserVpcSecurityGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserVpcSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupCount, securityGroupCount_);
      DARABONBA_PTR_TO_JSON(SecurityGroupList, securityGroupList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserVpcSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupCount, securityGroupCount_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupList, securityGroupList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserVpcSecurityGroupResponseBody() = default ;
    GetUserVpcSecurityGroupResponseBody(const GetUserVpcSecurityGroupResponseBody &) = default ;
    GetUserVpcSecurityGroupResponseBody(GetUserVpcSecurityGroupResponseBody &&) = default ;
    GetUserVpcSecurityGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserVpcSecurityGroupResponseBody() = default ;
    GetUserVpcSecurityGroupResponseBody& operator=(const GetUserVpcSecurityGroupResponseBody &) = default ;
    GetUserVpcSecurityGroupResponseBody& operator=(GetUserVpcSecurityGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->securityGroupCount_ == nullptr && return this->securityGroupList_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserVpcSecurityGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUserVpcSecurityGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserVpcSecurityGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetUserVpcSecurityGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetUserVpcSecurityGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserVpcSecurityGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupCount Field Functions 
    bool hasSecurityGroupCount() const { return this->securityGroupCount_ != nullptr;};
    void deleteSecurityGroupCount() { this->securityGroupCount_ = nullptr;};
    inline int32_t securityGroupCount() const { DARABONBA_PTR_GET_DEFAULT(securityGroupCount_, 0) };
    inline GetUserVpcSecurityGroupResponseBody& setSecurityGroupCount(int32_t securityGroupCount) { DARABONBA_PTR_SET_VALUE(securityGroupCount_, securityGroupCount) };


    // securityGroupList Field Functions 
    bool hasSecurityGroupList() const { return this->securityGroupList_ != nullptr;};
    void deleteSecurityGroupList() { this->securityGroupList_ = nullptr;};
    inline const vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList> & securityGroupList() const { DARABONBA_PTR_GET_CONST(securityGroupList_, vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList>) };
    inline vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList> securityGroupList() { DARABONBA_PTR_GET(securityGroupList_, vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList>) };
    inline GetUserVpcSecurityGroupResponseBody& setSecurityGroupList(const vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList> & securityGroupList) { DARABONBA_PTR_SET_VALUE(securityGroupList_, securityGroupList) };
    inline GetUserVpcSecurityGroupResponseBody& setSecurityGroupList(vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList> && securityGroupList) { DARABONBA_PTR_SET_RVALUE(securityGroupList_, securityGroupList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserVpcSecurityGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The system status code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message. If the operation is successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of security groups.
    std::shared_ptr<int32_t> securityGroupCount_ = nullptr;
    // The security groups.
    std::shared_ptr<vector<GetUserVpcSecurityGroupResponseBodySecurityGroupList>> securityGroupList_ = nullptr;
    // Indicates whether the operation is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
