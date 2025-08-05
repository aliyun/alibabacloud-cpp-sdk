// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTBUSESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTBUSESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventBusesResponseBodyDataEventBuses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventBusesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventBusesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventBuses, eventBuses_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventBusesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBuses, eventBuses_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEventBusesResponseBodyData() = default ;
    ListEventBusesResponseBodyData(const ListEventBusesResponseBodyData &) = default ;
    ListEventBusesResponseBodyData(ListEventBusesResponseBodyData &&) = default ;
    ListEventBusesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventBusesResponseBodyData() = default ;
    ListEventBusesResponseBodyData& operator=(const ListEventBusesResponseBodyData &) = default ;
    ListEventBusesResponseBodyData& operator=(ListEventBusesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBuses_ != nullptr
        && this->nextToken_ != nullptr && this->total_ != nullptr; };
    // eventBuses Field Functions 
    bool hasEventBuses() const { return this->eventBuses_ != nullptr;};
    void deleteEventBuses() { this->eventBuses_ = nullptr;};
    inline const vector<Models::ListEventBusesResponseBodyDataEventBuses> & eventBuses() const { DARABONBA_PTR_GET_CONST(eventBuses_, vector<Models::ListEventBusesResponseBodyDataEventBuses>) };
    inline vector<Models::ListEventBusesResponseBodyDataEventBuses> eventBuses() { DARABONBA_PTR_GET(eventBuses_, vector<Models::ListEventBusesResponseBodyDataEventBuses>) };
    inline ListEventBusesResponseBodyData& setEventBuses(const vector<Models::ListEventBusesResponseBodyDataEventBuses> & eventBuses) { DARABONBA_PTR_SET_VALUE(eventBuses_, eventBuses) };
    inline ListEventBusesResponseBodyData& setEventBuses(vector<Models::ListEventBusesResponseBodyDataEventBuses> && eventBuses) { DARABONBA_PTR_SET_RVALUE(eventBuses_, eventBuses) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventBusesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListEventBusesResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The event buses.
    std::shared_ptr<vector<Models::ListEventBusesResponseBodyDataEventBuses>> eventBuses_ = nullptr;
    // If excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
