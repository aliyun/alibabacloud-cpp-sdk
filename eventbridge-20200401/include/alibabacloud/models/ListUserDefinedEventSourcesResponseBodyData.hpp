// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListUserDefinedEventSourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefinedEventSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventSourceList, eventSourceList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefinedEventSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSourceList, eventSourceList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListUserDefinedEventSourcesResponseBodyData() = default ;
    ListUserDefinedEventSourcesResponseBodyData(const ListUserDefinedEventSourcesResponseBodyData &) = default ;
    ListUserDefinedEventSourcesResponseBodyData(ListUserDefinedEventSourcesResponseBodyData &&) = default ;
    ListUserDefinedEventSourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefinedEventSourcesResponseBodyData() = default ;
    ListUserDefinedEventSourcesResponseBodyData& operator=(const ListUserDefinedEventSourcesResponseBodyData &) = default ;
    ListUserDefinedEventSourcesResponseBodyData& operator=(ListUserDefinedEventSourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventSourceList_ != nullptr
        && this->nextToken_ != nullptr && this->total_ != nullptr; };
    // eventSourceList Field Functions 
    bool hasEventSourceList() const { return this->eventSourceList_ != nullptr;};
    void deleteEventSourceList() { this->eventSourceList_ = nullptr;};
    inline const vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList> & eventSourceList() const { DARABONBA_PTR_GET_CONST(eventSourceList_, vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList>) };
    inline vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList> eventSourceList() { DARABONBA_PTR_GET(eventSourceList_, vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList>) };
    inline ListUserDefinedEventSourcesResponseBodyData& setEventSourceList(const vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList> & eventSourceList) { DARABONBA_PTR_SET_VALUE(eventSourceList_, eventSourceList) };
    inline ListUserDefinedEventSourcesResponseBodyData& setEventSourceList(vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList> && eventSourceList) { DARABONBA_PTR_SET_RVALUE(eventSourceList_, eventSourceList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserDefinedEventSourcesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListUserDefinedEventSourcesResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The event sources.
    std::shared_ptr<vector<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceList>> eventSourceList_ = nullptr;
    // If excess return values exist when you configure Limit, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
