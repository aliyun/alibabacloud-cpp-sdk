// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueueUpStreamBindingsResponseBodyDataBindings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueueUpStreamBindingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueUpStreamBindingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bindings, bindings_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueUpStreamBindingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListQueueUpStreamBindingsResponseBodyData() = default ;
    ListQueueUpStreamBindingsResponseBodyData(const ListQueueUpStreamBindingsResponseBodyData &) = default ;
    ListQueueUpStreamBindingsResponseBodyData(ListQueueUpStreamBindingsResponseBodyData &&) = default ;
    ListQueueUpStreamBindingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueUpStreamBindingsResponseBodyData() = default ;
    ListQueueUpStreamBindingsResponseBodyData& operator=(const ListQueueUpStreamBindingsResponseBodyData &) = default ;
    ListQueueUpStreamBindingsResponseBodyData& operator=(ListQueueUpStreamBindingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindings_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // bindings Field Functions 
    bool hasBindings() const { return this->bindings_ != nullptr;};
    void deleteBindings() { this->bindings_ = nullptr;};
    inline const vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings> & bindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings>) };
    inline vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings> bindings() { DARABONBA_PTR_GET(bindings_, vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings>) };
    inline ListQueueUpStreamBindingsResponseBodyData& setBindings(const vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
    inline ListQueueUpStreamBindingsResponseBodyData& setBindings(vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListQueueUpStreamBindingsResponseBodyData& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueueUpStreamBindingsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The bindings.
    std::shared_ptr<vector<Models::ListQueueUpStreamBindingsResponseBodyDataBindings>> bindings_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
