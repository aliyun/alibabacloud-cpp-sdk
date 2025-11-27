// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Binding.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListBindingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bindings, bindings_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBindingsResponseBody() = default ;
    ListBindingsResponseBody(const ListBindingsResponseBody &) = default ;
    ListBindingsResponseBody(ListBindingsResponseBody &&) = default ;
    ListBindingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindingsResponseBody() = default ;
    ListBindingsResponseBody& operator=(const ListBindingsResponseBody &) = default ;
    ListBindingsResponseBody& operator=(ListBindingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindings_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // bindings Field Functions 
    bool hasBindings() const { return this->bindings_ != nullptr;};
    void deleteBindings() { this->bindings_ = nullptr;};
    inline const vector<Binding> & bindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<Binding>) };
    inline vector<Binding> bindings() { DARABONBA_PTR_GET(bindings_, vector<Binding>) };
    inline ListBindingsResponseBody& setBindings(const vector<Binding> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
    inline ListBindingsResponseBody& setBindings(vector<Binding> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBindingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBindingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bindings between the dataset and OSS buckets.
    std::shared_ptr<vector<Binding>> bindings_ = nullptr;
    // *   The pagination token that is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter.
    // *   The next request returns remaining results starting from the position marked by the NextToken parameter value.
    // *   This parameter has a non-empty value only when not all bindings are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
