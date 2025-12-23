// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueryProcessorsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQueryProcessorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListQueryProcessorsResponseBody() = default ;
    ListQueryProcessorsResponseBody(const ListQueryProcessorsResponseBody &) = default ;
    ListQueryProcessorsResponseBody(ListQueryProcessorsResponseBody &&) = default ;
    ListQueryProcessorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorsResponseBody() = default ;
    ListQueryProcessorsResponseBody& operator=(const ListQueryProcessorsResponseBody &) = default ;
    ListQueryProcessorsResponseBody& operator=(ListQueryProcessorsResponseBody &&) = default ;
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
    inline ListQueryProcessorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListQueryProcessorsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListQueryProcessorsResponseBodyResult>) };
    inline vector<ListQueryProcessorsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListQueryProcessorsResponseBodyResult>) };
    inline ListQueryProcessorsResponseBody& setResult(const vector<ListQueryProcessorsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListQueryProcessorsResponseBody& setResult(vector<ListQueryProcessorsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the query analysis rule.
    // 
    // For more information, see [QueryProcessor](https://help.aliyun.com/document_detail/170014.html).
    std::shared_ptr<vector<ListQueryProcessorsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
