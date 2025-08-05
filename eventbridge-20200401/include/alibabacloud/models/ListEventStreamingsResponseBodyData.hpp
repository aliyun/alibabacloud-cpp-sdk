// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventStreamings, eventStreamings_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventStreamings, eventStreamings_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEventStreamingsResponseBodyData() = default ;
    ListEventStreamingsResponseBodyData(const ListEventStreamingsResponseBodyData &) = default ;
    ListEventStreamingsResponseBodyData(ListEventStreamingsResponseBodyData &&) = default ;
    ListEventStreamingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyData() = default ;
    ListEventStreamingsResponseBodyData& operator=(const ListEventStreamingsResponseBodyData &) = default ;
    ListEventStreamingsResponseBodyData& operator=(ListEventStreamingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventStreamings_ != nullptr
        && this->nextToken_ != nullptr && this->total_ != nullptr; };
    // eventStreamings Field Functions 
    bool hasEventStreamings() const { return this->eventStreamings_ != nullptr;};
    void deleteEventStreamings() { this->eventStreamings_ = nullptr;};
    inline const vector<Models::ListEventStreamingsResponseBodyDataEventStreamings> & eventStreamings() const { DARABONBA_PTR_GET_CONST(eventStreamings_, vector<Models::ListEventStreamingsResponseBodyDataEventStreamings>) };
    inline vector<Models::ListEventStreamingsResponseBodyDataEventStreamings> eventStreamings() { DARABONBA_PTR_GET(eventStreamings_, vector<Models::ListEventStreamingsResponseBodyDataEventStreamings>) };
    inline ListEventStreamingsResponseBodyData& setEventStreamings(const vector<Models::ListEventStreamingsResponseBodyDataEventStreamings> & eventStreamings) { DARABONBA_PTR_SET_VALUE(eventStreamings_, eventStreamings) };
    inline ListEventStreamingsResponseBodyData& setEventStreamings(vector<Models::ListEventStreamingsResponseBodyDataEventStreamings> && eventStreamings) { DARABONBA_PTR_SET_RVALUE(eventStreamings_, eventStreamings) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventStreamingsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListEventStreamingsResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The event streams.
    std::shared_ptr<vector<Models::ListEventStreamingsResponseBodyDataEventStreamings>> eventStreamings_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists. You must specify the pagination token in the next request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of records.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
