// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiDestinationsResponseBodyDataApiDestinations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListApiDestinationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDestinationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinations, apiDestinations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDestinationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinations, apiDestinations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListApiDestinationsResponseBodyData() = default ;
    ListApiDestinationsResponseBodyData(const ListApiDestinationsResponseBodyData &) = default ;
    ListApiDestinationsResponseBodyData(ListApiDestinationsResponseBodyData &&) = default ;
    ListApiDestinationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDestinationsResponseBodyData() = default ;
    ListApiDestinationsResponseBodyData& operator=(const ListApiDestinationsResponseBodyData &) = default ;
    ListApiDestinationsResponseBodyData& operator=(ListApiDestinationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinations_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->total_ != nullptr; };
    // apiDestinations Field Functions 
    bool hasApiDestinations() const { return this->apiDestinations_ != nullptr;};
    void deleteApiDestinations() { this->apiDestinations_ = nullptr;};
    inline const vector<Models::ListApiDestinationsResponseBodyDataApiDestinations> & apiDestinations() const { DARABONBA_PTR_GET_CONST(apiDestinations_, vector<Models::ListApiDestinationsResponseBodyDataApiDestinations>) };
    inline vector<Models::ListApiDestinationsResponseBodyDataApiDestinations> apiDestinations() { DARABONBA_PTR_GET(apiDestinations_, vector<Models::ListApiDestinationsResponseBodyDataApiDestinations>) };
    inline ListApiDestinationsResponseBodyData& setApiDestinations(const vector<Models::ListApiDestinationsResponseBodyDataApiDestinations> & apiDestinations) { DARABONBA_PTR_SET_VALUE(apiDestinations_, apiDestinations) };
    inline ListApiDestinationsResponseBodyData& setApiDestinations(vector<Models::ListApiDestinationsResponseBodyDataApiDestinations> && apiDestinations) { DARABONBA_PTR_SET_RVALUE(apiDestinations_, apiDestinations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline float maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0.0) };
    inline ListApiDestinationsResponseBodyData& setMaxResults(float maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiDestinationsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline float total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline ListApiDestinationsResponseBodyData& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The API destinations.
    std::shared_ptr<vector<Models::ListApiDestinationsResponseBodyDataApiDestinations>> apiDestinations_ = nullptr;
    // The maximum number of entries returned per page.
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
