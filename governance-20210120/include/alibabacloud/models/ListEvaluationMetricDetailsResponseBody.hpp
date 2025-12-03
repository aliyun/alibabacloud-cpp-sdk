// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetricDetailsResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetricDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetricDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetricDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListEvaluationMetricDetailsResponseBody() = default ;
    ListEvaluationMetricDetailsResponseBody(const ListEvaluationMetricDetailsResponseBody &) = default ;
    ListEvaluationMetricDetailsResponseBody(ListEvaluationMetricDetailsResponseBody &&) = default ;
    ListEvaluationMetricDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetricDetailsResponseBody() = default ;
    ListEvaluationMetricDetailsResponseBody& operator=(const ListEvaluationMetricDetailsResponseBody &) = default ;
    ListEvaluationMetricDetailsResponseBody& operator=(ListEvaluationMetricDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->resources_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListEvaluationMetricDetailsResponseBody& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEvaluationMetricDetailsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationMetricDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListEvaluationMetricDetailsResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListEvaluationMetricDetailsResponseBodyResources>) };
    inline vector<ListEvaluationMetricDetailsResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<ListEvaluationMetricDetailsResponseBodyResources>) };
    inline ListEvaluationMetricDetailsResponseBody& setResources(const vector<ListEvaluationMetricDetailsResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListEvaluationMetricDetailsResponseBody& setResources(vector<ListEvaluationMetricDetailsResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the non-compliant resources.
    std::shared_ptr<vector<ListEvaluationMetricDetailsResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
