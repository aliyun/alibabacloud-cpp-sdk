// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventSelectorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventSelectorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataEventSelectorInfos, dataEventSelectorInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventSelectorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEventSelectorInfos, dataEventSelectorInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListDataEventSelectorsResponseBodyData() = default ;
    ListDataEventSelectorsResponseBodyData(const ListDataEventSelectorsResponseBodyData &) = default ;
    ListDataEventSelectorsResponseBodyData(ListDataEventSelectorsResponseBodyData &&) = default ;
    ListDataEventSelectorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventSelectorsResponseBodyData() = default ;
    ListDataEventSelectorsResponseBodyData& operator=(const ListDataEventSelectorsResponseBodyData &) = default ;
    ListDataEventSelectorsResponseBodyData& operator=(ListDataEventSelectorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataEventSelectorInfos_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // dataEventSelectorInfos Field Functions 
    bool hasDataEventSelectorInfos() const { return this->dataEventSelectorInfos_ != nullptr;};
    void deleteDataEventSelectorInfos() { this->dataEventSelectorInfos_ = nullptr;};
    inline const vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos> & dataEventSelectorInfos() const { DARABONBA_PTR_GET_CONST(dataEventSelectorInfos_, vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos>) };
    inline vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos> dataEventSelectorInfos() { DARABONBA_PTR_GET(dataEventSelectorInfos_, vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos>) };
    inline ListDataEventSelectorsResponseBodyData& setDataEventSelectorInfos(const vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos> & dataEventSelectorInfos) { DARABONBA_PTR_SET_VALUE(dataEventSelectorInfos_, dataEventSelectorInfos) };
    inline ListDataEventSelectorsResponseBodyData& setDataEventSelectorInfos(vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos> && dataEventSelectorInfos) { DARABONBA_PTR_SET_RVALUE(dataEventSelectorInfos_, dataEventSelectorInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataEventSelectorsResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataEventSelectorsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos>> dataEventSelectorInfos_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
