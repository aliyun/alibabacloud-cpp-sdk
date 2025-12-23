// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueryProcessorNersResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQueryProcessorNersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorNersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorNersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListQueryProcessorNersResponseBody() = default ;
    ListQueryProcessorNersResponseBody(const ListQueryProcessorNersResponseBody &) = default ;
    ListQueryProcessorNersResponseBody(ListQueryProcessorNersResponseBody &&) = default ;
    ListQueryProcessorNersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorNersResponseBody() = default ;
    ListQueryProcessorNersResponseBody& operator=(const ListQueryProcessorNersResponseBody &) = default ;
    ListQueryProcessorNersResponseBody& operator=(ListQueryProcessorNersResponseBody &&) = default ;
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
    inline ListQueryProcessorNersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListQueryProcessorNersResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListQueryProcessorNersResponseBodyResult>) };
    inline vector<ListQueryProcessorNersResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListQueryProcessorNersResponseBodyResult>) };
    inline ListQueryProcessorNersResponseBody& setResult(const vector<ListQueryProcessorNersResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListQueryProcessorNersResponseBody& setResult(vector<ListQueryProcessorNersResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The priority settings of entity types.
    // 
    // For more information, see [Priority settings of entity types](https://help.aliyun.com/document_detail/173616.html).
    std::shared_ptr<vector<ListQueryProcessorNersResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
