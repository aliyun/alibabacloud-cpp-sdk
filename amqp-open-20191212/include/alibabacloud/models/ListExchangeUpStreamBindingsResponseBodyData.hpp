// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGEUPSTREAMBINDINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGEUPSTREAMBINDINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExchangeUpStreamBindingsResponseBodyDataBindings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListExchangeUpStreamBindingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangeUpStreamBindingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bindings, bindings_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangeUpStreamBindingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListExchangeUpStreamBindingsResponseBodyData() = default ;
    ListExchangeUpStreamBindingsResponseBodyData(const ListExchangeUpStreamBindingsResponseBodyData &) = default ;
    ListExchangeUpStreamBindingsResponseBodyData(ListExchangeUpStreamBindingsResponseBodyData &&) = default ;
    ListExchangeUpStreamBindingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangeUpStreamBindingsResponseBodyData() = default ;
    ListExchangeUpStreamBindingsResponseBodyData& operator=(const ListExchangeUpStreamBindingsResponseBodyData &) = default ;
    ListExchangeUpStreamBindingsResponseBodyData& operator=(ListExchangeUpStreamBindingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindings_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // bindings Field Functions 
    bool hasBindings() const { return this->bindings_ != nullptr;};
    void deleteBindings() { this->bindings_ = nullptr;};
    inline const vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings> & bindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings>) };
    inline vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings> bindings() { DARABONBA_PTR_GET(bindings_, vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings>) };
    inline ListExchangeUpStreamBindingsResponseBodyData& setBindings(const vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
    inline ListExchangeUpStreamBindingsResponseBodyData& setBindings(vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExchangeUpStreamBindingsResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExchangeUpStreamBindingsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The bindings.
    std::shared_ptr<vector<Models::ListExchangeUpStreamBindingsResponseBodyDataBindings>> bindings_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
