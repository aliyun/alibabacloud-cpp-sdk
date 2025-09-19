// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOpaClusterStrategyNewResponseBodyList.hpp>
#include <alibabacloud/models/ListOpaClusterStrategyNewResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOpaClusterStrategyNewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpaClusterStrategyNewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpaClusterStrategyNewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOpaClusterStrategyNewResponseBody() = default ;
    ListOpaClusterStrategyNewResponseBody(const ListOpaClusterStrategyNewResponseBody &) = default ;
    ListOpaClusterStrategyNewResponseBody(ListOpaClusterStrategyNewResponseBody &&) = default ;
    ListOpaClusterStrategyNewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpaClusterStrategyNewResponseBody() = default ;
    ListOpaClusterStrategyNewResponseBody& operator=(const ListOpaClusterStrategyNewResponseBody &) = default ;
    ListOpaClusterStrategyNewResponseBody& operator=(ListOpaClusterStrategyNewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->list_ != nullptr && this->message_ != nullptr && this->pageInfo_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOpaClusterStrategyNewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOpaClusterStrategyNewResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListOpaClusterStrategyNewResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListOpaClusterStrategyNewResponseBodyList>) };
    inline vector<ListOpaClusterStrategyNewResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListOpaClusterStrategyNewResponseBodyList>) };
    inline ListOpaClusterStrategyNewResponseBody& setList(const vector<ListOpaClusterStrategyNewResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListOpaClusterStrategyNewResponseBody& setList(vector<ListOpaClusterStrategyNewResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOpaClusterStrategyNewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOpaClusterStrategyNewResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOpaClusterStrategyNewResponseBodyPageInfo) };
    inline ListOpaClusterStrategyNewResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOpaClusterStrategyNewResponseBodyPageInfo) };
    inline ListOpaClusterStrategyNewResponseBody& setPageInfo(const ListOpaClusterStrategyNewResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOpaClusterStrategyNewResponseBody& setPageInfo(ListOpaClusterStrategyNewResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpaClusterStrategyNewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOpaClusterStrategyNewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The rules.
    std::shared_ptr<vector<ListOpaClusterStrategyNewResponseBodyList>> list_ = nullptr;
    // The message that shows the export task result. The value is fixed as **success**, which indicates that the export task is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListOpaClusterStrategyNewResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
