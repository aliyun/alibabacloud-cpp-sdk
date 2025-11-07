// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATECONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATECONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStateConfigurationsResponseBodyStateConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListStateConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStateConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StateConfigurations, stateConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, ListStateConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StateConfigurations, stateConfigurations_);
    };
    ListStateConfigurationsResponseBody() = default ;
    ListStateConfigurationsResponseBody(const ListStateConfigurationsResponseBody &) = default ;
    ListStateConfigurationsResponseBody(ListStateConfigurationsResponseBody &&) = default ;
    ListStateConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStateConfigurationsResponseBody() = default ;
    ListStateConfigurationsResponseBody& operator=(const ListStateConfigurationsResponseBody &) = default ;
    ListStateConfigurationsResponseBody& operator=(ListStateConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->stateConfigurations_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStateConfigurationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStateConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateConfigurations Field Functions 
    bool hasStateConfigurations() const { return this->stateConfigurations_ != nullptr;};
    void deleteStateConfigurations() { this->stateConfigurations_ = nullptr;};
    inline const vector<ListStateConfigurationsResponseBodyStateConfigurations> & stateConfigurations() const { DARABONBA_PTR_GET_CONST(stateConfigurations_, vector<ListStateConfigurationsResponseBodyStateConfigurations>) };
    inline vector<ListStateConfigurationsResponseBodyStateConfigurations> stateConfigurations() { DARABONBA_PTR_GET(stateConfigurations_, vector<ListStateConfigurationsResponseBodyStateConfigurations>) };
    inline ListStateConfigurationsResponseBody& setStateConfigurations(const vector<ListStateConfigurationsResponseBodyStateConfigurations> & stateConfigurations) { DARABONBA_PTR_SET_VALUE(stateConfigurations_, stateConfigurations) };
    inline ListStateConfigurationsResponseBody& setStateConfigurations(vector<ListStateConfigurationsResponseBodyStateConfigurations> && stateConfigurations) { DARABONBA_PTR_SET_RVALUE(stateConfigurations_, stateConfigurations) };


  protected:
    // The pagination token that was used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the desired-state configurations.
    std::shared_ptr<vector<ListStateConfigurationsResponseBodyStateConfigurations>> stateConfigurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
