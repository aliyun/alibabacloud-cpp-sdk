// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULAUTOREPAIRCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVULAUTOREPAIRCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVulAutoRepairConfigResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVulAutoRepairConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulAutoRepairConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VulAutoRepairConfigList, vulAutoRepairConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulAutoRepairConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VulAutoRepairConfigList, vulAutoRepairConfigList_);
    };
    ListVulAutoRepairConfigResponseBody() = default ;
    ListVulAutoRepairConfigResponseBody(const ListVulAutoRepairConfigResponseBody &) = default ;
    ListVulAutoRepairConfigResponseBody(ListVulAutoRepairConfigResponseBody &&) = default ;
    ListVulAutoRepairConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulAutoRepairConfigResponseBody() = default ;
    ListVulAutoRepairConfigResponseBody& operator=(const ListVulAutoRepairConfigResponseBody &) = default ;
    ListVulAutoRepairConfigResponseBody& operator=(ListVulAutoRepairConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->pageInfo_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->vulAutoRepairConfigList_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVulAutoRepairConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVulAutoRepairConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVulAutoRepairConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListVulAutoRepairConfigResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListVulAutoRepairConfigResponseBodyPageInfo) };
    inline ListVulAutoRepairConfigResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListVulAutoRepairConfigResponseBodyPageInfo) };
    inline ListVulAutoRepairConfigResponseBody& setPageInfo(const ListVulAutoRepairConfigResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListVulAutoRepairConfigResponseBody& setPageInfo(ListVulAutoRepairConfigResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVulAutoRepairConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVulAutoRepairConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vulAutoRepairConfigList Field Functions 
    bool hasVulAutoRepairConfigList() const { return this->vulAutoRepairConfigList_ != nullptr;};
    void deleteVulAutoRepairConfigList() { this->vulAutoRepairConfigList_ = nullptr;};
    inline const vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList> & vulAutoRepairConfigList() const { DARABONBA_PTR_GET_CONST(vulAutoRepairConfigList_, vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList>) };
    inline vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList> vulAutoRepairConfigList() { DARABONBA_PTR_GET(vulAutoRepairConfigList_, vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList>) };
    inline ListVulAutoRepairConfigResponseBody& setVulAutoRepairConfigList(const vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList> & vulAutoRepairConfigList) { DARABONBA_PTR_SET_VALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };
    inline ListVulAutoRepairConfigResponseBody& setVulAutoRepairConfigList(vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList> && vulAutoRepairConfigList) { DARABONBA_PTR_SET_RVALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListVulAutoRepairConfigResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // An array consisting of the existing configurations of vulnerabilities that can be automatically fixed.
    std::shared_ptr<vector<ListVulAutoRepairConfigResponseBodyVulAutoRepairConfigList>> vulAutoRepairConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
