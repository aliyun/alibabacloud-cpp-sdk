// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteOverviewResults, officeSiteOverviewResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteOverviewResults, officeSiteOverviewResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOfficeSiteOverviewResponseBody() = default ;
    ListOfficeSiteOverviewResponseBody(const ListOfficeSiteOverviewResponseBody &) = default ;
    ListOfficeSiteOverviewResponseBody(ListOfficeSiteOverviewResponseBody &&) = default ;
    ListOfficeSiteOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteOverviewResponseBody() = default ;
    ListOfficeSiteOverviewResponseBody& operator=(const ListOfficeSiteOverviewResponseBody &) = default ;
    ListOfficeSiteOverviewResponseBody& operator=(ListOfficeSiteOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->officeSiteOverviewResults_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOfficeSiteOverviewResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteOverviewResults Field Functions 
    bool hasOfficeSiteOverviewResults() const { return this->officeSiteOverviewResults_ != nullptr;};
    void deleteOfficeSiteOverviewResults() { this->officeSiteOverviewResults_ = nullptr;};
    inline const vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults> & officeSiteOverviewResults() const { DARABONBA_PTR_GET_CONST(officeSiteOverviewResults_, vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults>) };
    inline vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults> officeSiteOverviewResults() { DARABONBA_PTR_GET(officeSiteOverviewResults_, vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults>) };
    inline ListOfficeSiteOverviewResponseBody& setOfficeSiteOverviewResults(const vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults> & officeSiteOverviewResults) { DARABONBA_PTR_SET_VALUE(officeSiteOverviewResults_, officeSiteOverviewResults) };
    inline ListOfficeSiteOverviewResponseBody& setOfficeSiteOverviewResults(vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults> && officeSiteOverviewResults) { DARABONBA_PTR_SET_RVALUE(officeSiteOverviewResults_, officeSiteOverviewResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOfficeSiteOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token that is used to start the next query. If this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The office network information.
    std::shared_ptr<vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults>> officeSiteOverviewResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
