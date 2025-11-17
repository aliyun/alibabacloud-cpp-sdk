// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDatasetListResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDatasetListResponseBody() = default ;
    QueryDatasetListResponseBody(const QueryDatasetListResponseBody &) = default ;
    QueryDatasetListResponseBody(QueryDatasetListResponseBody &&) = default ;
    QueryDatasetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetListResponseBody() = default ;
    QueryDatasetListResponseBody& operator=(const QueryDatasetListResponseBody &) = default ;
    QueryDatasetListResponseBody& operator=(QueryDatasetListResponseBody &&) = default ;
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
    inline QueryDatasetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDatasetListResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, QueryDatasetListResponseBodyResult) };
    inline QueryDatasetListResponseBodyResult result() { DARABONBA_PTR_GET(result_, QueryDatasetListResponseBodyResult) };
    inline QueryDatasetListResponseBody& setResult(const QueryDatasetListResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDatasetListResponseBody& setResult(QueryDatasetListResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDatasetListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The keyword used to search for the dataset name.
    std::shared_ptr<string> requestId_ = nullptr;
    // Test dataset
    std::shared_ptr<QueryDatasetListResponseBodyResult> result_ = nullptr;
    // Whether to recursively wrap the dataset in the subdirectory. Valid values:
    // 
    // *   true: returns datasets in all recursive subdirectories in the directoryId directory.
    // *   false: Only datasets in the directory specified by directoryId are returned, excluding subdirectories.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
