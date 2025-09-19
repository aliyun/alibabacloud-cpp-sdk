// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryGroupedSecurityEventMarkMissListResponseBodyList.hpp>
#include <alibabacloud/models/QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGroupedSecurityEventMarkMissListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupedSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupedSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryGroupedSecurityEventMarkMissListResponseBody() = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody(const QueryGroupedSecurityEventMarkMissListResponseBody &) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody(QueryGroupedSecurityEventMarkMissListResponseBody &&) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupedSecurityEventMarkMissListResponseBody() = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody& operator=(const QueryGroupedSecurityEventMarkMissListResponseBody &) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody& operator=(QueryGroupedSecurityEventMarkMissListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->list_ != nullptr && this->message_ != nullptr && this->pageInfo_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<QueryGroupedSecurityEventMarkMissListResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<QueryGroupedSecurityEventMarkMissListResponseBodyList>) };
    inline vector<QueryGroupedSecurityEventMarkMissListResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<QueryGroupedSecurityEventMarkMissListResponseBodyList>) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setList(const vector<QueryGroupedSecurityEventMarkMissListResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setList(vector<QueryGroupedSecurityEventMarkMissListResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo) };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setPageInfo(const QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setPageInfo(QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request is successful. Other status codes indicate that the request fails. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // An array that consists of the whitelist rules.
    std::shared_ptr<vector<QueryGroupedSecurityEventMarkMissListResponseBodyList>> list_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination information.
    std::shared_ptr<QueryGroupedSecurityEventMarkMissListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
