// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SearchContextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    SearchContextResponseBody() = default ;
    SearchContextResponseBody(const SearchContextResponseBody &) = default ;
    SearchContextResponseBody(SearchContextResponseBody &&) = default ;
    SearchContextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContextResponseBody() = default ;
    SearchContextResponseBody& operator=(const SearchContextResponseBody &) = default ;
    SearchContextResponseBody& operator=(SearchContextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchContextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Darabonba::Json> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getResults() { DARABONBA_PTR_GET(results_, vector<Darabonba::Json>) };
    inline SearchContextResponseBody& setResults(const vector<Darabonba::Json> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline SearchContextResponseBody& setResults(vector<Darabonba::Json> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Return value
    shared_ptr<vector<Darabonba::Json>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
