// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListConnectionsResponseBodyData() = default ;
    ListConnectionsResponseBodyData(const ListConnectionsResponseBodyData &) = default ;
    ListConnectionsResponseBodyData(ListConnectionsResponseBodyData &&) = default ;
    ListConnectionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBodyData() = default ;
    ListConnectionsResponseBodyData& operator=(const ListConnectionsResponseBodyData &) = default ;
    ListConnectionsResponseBodyData& operator=(ListConnectionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connections_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->total_ != nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<Models::ListConnectionsResponseBodyDataConnections> & connections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Models::ListConnectionsResponseBodyDataConnections>) };
    inline vector<Models::ListConnectionsResponseBodyDataConnections> connections() { DARABONBA_PTR_GET(connections_, vector<Models::ListConnectionsResponseBodyDataConnections>) };
    inline ListConnectionsResponseBodyData& setConnections(const vector<Models::ListConnectionsResponseBodyDataConnections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline ListConnectionsResponseBodyData& setConnections(vector<Models::ListConnectionsResponseBodyDataConnections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline float maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0.0) };
    inline ListConnectionsResponseBodyData& setMaxResults(float maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConnectionsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline float total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline ListConnectionsResponseBodyData& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The connections.
    std::shared_ptr<vector<Models::ListConnectionsResponseBodyDataConnections>> connections_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<float> maxResults_ = nullptr;
    // If excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<float> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
