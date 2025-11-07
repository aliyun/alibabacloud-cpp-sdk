// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryVerifyFlowPackageResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyFlowPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyFlowPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyFlowPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryVerifyFlowPackageResponseBody() = default ;
    QueryVerifyFlowPackageResponseBody(const QueryVerifyFlowPackageResponseBody &) = default ;
    QueryVerifyFlowPackageResponseBody(QueryVerifyFlowPackageResponseBody &&) = default ;
    QueryVerifyFlowPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyFlowPackageResponseBody() = default ;
    QueryVerifyFlowPackageResponseBody& operator=(const QueryVerifyFlowPackageResponseBody &) = default ;
    QueryVerifyFlowPackageResponseBody& operator=(QueryVerifyFlowPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->items_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVerifyFlowPackageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline QueryVerifyFlowPackageResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryVerifyFlowPackageResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryVerifyFlowPackageResponseBodyItems>) };
    inline vector<QueryVerifyFlowPackageResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<QueryVerifyFlowPackageResponseBodyItems>) };
    inline QueryVerifyFlowPackageResponseBody& setItems(const vector<QueryVerifyFlowPackageResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryVerifyFlowPackageResponseBody& setItems(vector<QueryVerifyFlowPackageResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVerifyFlowPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVerifyFlowPackageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline QueryVerifyFlowPackageResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Return code
    std::shared_ptr<string> code_ = nullptr;
    // HTTP status code.
    std::shared_ptr<int64_t> httpStatusCode_ = nullptr;
    // List of returned data.
    std::shared_ptr<vector<QueryVerifyFlowPackageResponseBodyItems>> items_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the response was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // Total count.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
