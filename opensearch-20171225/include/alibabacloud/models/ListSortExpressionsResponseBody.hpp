// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSORTEXPRESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSORTEXPRESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSortExpressionsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListSortExpressionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSortExpressionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSortExpressionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListSortExpressionsResponseBody() = default ;
    ListSortExpressionsResponseBody(const ListSortExpressionsResponseBody &) = default ;
    ListSortExpressionsResponseBody(ListSortExpressionsResponseBody &&) = default ;
    ListSortExpressionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSortExpressionsResponseBody() = default ;
    ListSortExpressionsResponseBody& operator=(const ListSortExpressionsResponseBody &) = default ;
    ListSortExpressionsResponseBody& operator=(ListSortExpressionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSortExpressionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListSortExpressionsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListSortExpressionsResponseBodyResult>) };
    inline vector<ListSortExpressionsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListSortExpressionsResponseBodyResult>) };
    inline ListSortExpressionsResponseBody& setResult(const vector<ListSortExpressionsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSortExpressionsResponseBody& setResult(vector<ListSortExpressionsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the rough sort or fine sort expressions that are returned.
    // 
    // For more information, see [FirstRank](https://help.aliyun.com/document_detail/170007.html) and [SecondRank](https://help.aliyun.com/document_detail/170008.html).
    std::shared_ptr<vector<ListSortExpressionsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
