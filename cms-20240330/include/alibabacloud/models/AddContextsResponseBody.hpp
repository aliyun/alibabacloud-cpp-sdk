// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTEXTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTEXTSRESPONSEBODY_HPP_
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
  class AddContextsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContextsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, AddContextsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    AddContextsResponseBody() = default ;
    AddContextsResponseBody(const AddContextsResponseBody &) = default ;
    AddContextsResponseBody(AddContextsResponseBody &&) = default ;
    AddContextsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContextsResponseBody() = default ;
    AddContextsResponseBody& operator=(const AddContextsResponseBody &) = default ;
    AddContextsResponseBody& operator=(AddContextsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(contextId, contextId_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(contextId, contextId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contextId_ == nullptr
        && this->status_ == nullptr; };
      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
      inline Results& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> contextId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddContextsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<AddContextsResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<AddContextsResponseBody::Results>) };
    inline vector<AddContextsResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<AddContextsResponseBody::Results>) };
    inline AddContextsResponseBody& setResults(const vector<AddContextsResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline AddContextsResponseBody& setResults(vector<AddContextsResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<AddContextsResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
