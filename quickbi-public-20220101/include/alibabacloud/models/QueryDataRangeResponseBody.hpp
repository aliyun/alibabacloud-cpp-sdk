// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDataRangeResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataRangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDataRangeResponseBody() = default ;
    QueryDataRangeResponseBody(const QueryDataRangeResponseBody &) = default ;
    QueryDataRangeResponseBody(QueryDataRangeResponseBody &&) = default ;
    QueryDataRangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRangeResponseBody() = default ;
    QueryDataRangeResponseBody& operator=(const QueryDataRangeResponseBody &) = default ;
    QueryDataRangeResponseBody& operator=(QueryDataRangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDataRangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDataRangeResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, QueryDataRangeResponseBodyResult) };
    inline QueryDataRangeResponseBodyResult result() { DARABONBA_PTR_GET(result_, QueryDataRangeResponseBodyResult) };
    inline QueryDataRangeResponseBody& setResult(const QueryDataRangeResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDataRangeResponseBody& setResult(QueryDataRangeResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDataRangeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Data range object.
    std::shared_ptr<QueryDataRangeResponseBodyResult> result_ = nullptr;
    // Indicates whether the request was successful. Possible values:
    // - true: The request was successful.
    // - false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
