// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataStreamsResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListDataStreamsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataStreamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataStreamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataStreamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDataStreamsResponseBody() = default ;
    ListDataStreamsResponseBody(const ListDataStreamsResponseBody &) = default ;
    ListDataStreamsResponseBody(ListDataStreamsResponseBody &&) = default ;
    ListDataStreamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataStreamsResponseBody() = default ;
    ListDataStreamsResponseBody& operator=(const ListDataStreamsResponseBody &) = default ;
    ListDataStreamsResponseBody& operator=(ListDataStreamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDataStreamsResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListDataStreamsResponseBodyHeaders) };
    inline ListDataStreamsResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListDataStreamsResponseBodyHeaders) };
    inline ListDataStreamsResponseBody& setHeaders(const ListDataStreamsResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDataStreamsResponseBody& setHeaders(ListDataStreamsResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataStreamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDataStreamsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDataStreamsResponseBodyResult>) };
    inline vector<ListDataStreamsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListDataStreamsResponseBodyResult>) };
    inline ListDataStreamsResponseBody& setResult(const vector<ListDataStreamsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDataStreamsResponseBody& setResult(vector<ListDataStreamsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<ListDataStreamsResponseBodyHeaders> headers_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListDataStreamsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
