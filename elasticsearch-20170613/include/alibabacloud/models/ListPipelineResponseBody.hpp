// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPipelineResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListPipelineResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListPipelineResponseBody() = default ;
    ListPipelineResponseBody(const ListPipelineResponseBody &) = default ;
    ListPipelineResponseBody(ListPipelineResponseBody &&) = default ;
    ListPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineResponseBody() = default ;
    ListPipelineResponseBody& operator=(const ListPipelineResponseBody &) = default ;
    ListPipelineResponseBody& operator=(ListPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListPipelineResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListPipelineResponseBodyHeaders) };
    inline ListPipelineResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListPipelineResponseBodyHeaders) };
    inline ListPipelineResponseBody& setHeaders(const ListPipelineResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListPipelineResponseBody& setHeaders(ListPipelineResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListPipelineResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListPipelineResponseBodyResult>) };
    inline vector<ListPipelineResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListPipelineResponseBodyResult>) };
    inline ListPipelineResponseBody& setResult(const vector<ListPipelineResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPipelineResponseBody& setResult(vector<ListPipelineResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the ApsaraVideo Media Processing (MPS) queue that is used to run the job.
    std::shared_ptr<ListPipelineResponseBodyHeaders> headers_ = nullptr;
    // The response.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the pipeline was created.
    std::shared_ptr<vector<ListPipelineResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
