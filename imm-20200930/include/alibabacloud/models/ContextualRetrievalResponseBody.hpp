// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALRETRIEVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALRETRIEVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualRetrievalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualRetrievalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualRetrievalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    ContextualRetrievalResponseBody() = default ;
    ContextualRetrievalResponseBody(const ContextualRetrievalResponseBody &) = default ;
    ContextualRetrievalResponseBody(ContextualRetrievalResponseBody &&) = default ;
    ContextualRetrievalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualRetrievalResponseBody() = default ;
    ContextualRetrievalResponseBody& operator=(const ContextualRetrievalResponseBody &) = default ;
    ContextualRetrievalResponseBody& operator=(ContextualRetrievalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->results_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContextualRetrievalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<File> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<File>) };
    inline vector<File> results() { DARABONBA_PTR_GET(results_, vector<File>) };
    inline ContextualRetrievalResponseBody& setResults(const vector<File> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ContextualRetrievalResponseBody& setResults(vector<File> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<File>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
