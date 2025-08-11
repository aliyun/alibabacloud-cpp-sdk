// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDatasetInfoResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDatasetInfoResponseBody() = default ;
    QueryDatasetInfoResponseBody(const QueryDatasetInfoResponseBody &) = default ;
    QueryDatasetInfoResponseBody(QueryDatasetInfoResponseBody &&) = default ;
    QueryDatasetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBody() = default ;
    QueryDatasetInfoResponseBody& operator=(const QueryDatasetInfoResponseBody &) = default ;
    QueryDatasetInfoResponseBody& operator=(QueryDatasetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDatasetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDatasetInfoResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, QueryDatasetInfoResponseBodyResult) };
    inline QueryDatasetInfoResponseBodyResult result() { DARABONBA_PTR_GET(result_, QueryDatasetInfoResponseBodyResult) };
    inline QueryDatasetInfoResponseBody& setResult(const QueryDatasetInfoResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDatasetInfoResponseBody& setResult(QueryDatasetInfoResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDatasetInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Whether the operation is successfully returned. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<string> requestId_ = nullptr;
    // The dataset information.
    std::shared_ptr<QueryDatasetInfoResponseBodyResult> result_ = nullptr;
    // The unique ID of the dataset.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
