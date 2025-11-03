// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExchangesResponseBodyDataExchanges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListExchangesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Exchanges, exchanges_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Exchanges, exchanges_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListExchangesResponseBodyData() = default ;
    ListExchangesResponseBodyData(const ListExchangesResponseBodyData &) = default ;
    ListExchangesResponseBodyData(ListExchangesResponseBodyData &&) = default ;
    ListExchangesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangesResponseBodyData() = default ;
    ListExchangesResponseBodyData& operator=(const ListExchangesResponseBodyData &) = default ;
    ListExchangesResponseBodyData& operator=(ListExchangesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchanges_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // exchanges Field Functions 
    bool hasExchanges() const { return this->exchanges_ != nullptr;};
    void deleteExchanges() { this->exchanges_ = nullptr;};
    inline const vector<Models::ListExchangesResponseBodyDataExchanges> & exchanges() const { DARABONBA_PTR_GET_CONST(exchanges_, vector<Models::ListExchangesResponseBodyDataExchanges>) };
    inline vector<Models::ListExchangesResponseBodyDataExchanges> exchanges() { DARABONBA_PTR_GET(exchanges_, vector<Models::ListExchangesResponseBodyDataExchanges>) };
    inline ListExchangesResponseBodyData& setExchanges(const vector<Models::ListExchangesResponseBodyDataExchanges> & exchanges) { DARABONBA_PTR_SET_VALUE(exchanges_, exchanges) };
    inline ListExchangesResponseBodyData& setExchanges(vector<Models::ListExchangesResponseBodyDataExchanges> && exchanges) { DARABONBA_PTR_SET_RVALUE(exchanges_, exchanges) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExchangesResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExchangesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The exchanges.
    std::shared_ptr<vector<Models::ListExchangesResponseBodyDataExchanges>> exchanges_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page.``
    // 
    // *   If the value of this parameter is empty, the next query is not required and the token used to start the next query is unavailable.``
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.``
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
