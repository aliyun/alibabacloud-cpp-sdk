// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublishedAppInfoResponseBodyAppModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class ListPublishedAppInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAppInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppModels, appModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAppInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppModels, appModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPublishedAppInfoResponseBody() = default ;
    ListPublishedAppInfoResponseBody(const ListPublishedAppInfoResponseBody &) = default ;
    ListPublishedAppInfoResponseBody(ListPublishedAppInfoResponseBody &&) = default ;
    ListPublishedAppInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAppInfoResponseBody() = default ;
    ListPublishedAppInfoResponseBody& operator=(const ListPublishedAppInfoResponseBody &) = default ;
    ListPublishedAppInfoResponseBody& operator=(ListPublishedAppInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appModels_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // appModels Field Functions 
    bool hasAppModels() const { return this->appModels_ != nullptr;};
    void deleteAppModels() { this->appModels_ = nullptr;};
    inline const vector<ListPublishedAppInfoResponseBodyAppModels> & appModels() const { DARABONBA_PTR_GET_CONST(appModels_, vector<ListPublishedAppInfoResponseBodyAppModels>) };
    inline vector<ListPublishedAppInfoResponseBodyAppModels> appModels() { DARABONBA_PTR_GET(appModels_, vector<ListPublishedAppInfoResponseBodyAppModels>) };
    inline ListPublishedAppInfoResponseBody& setAppModels(const vector<ListPublishedAppInfoResponseBodyAppModels> & appModels) { DARABONBA_PTR_SET_VALUE(appModels_, appModels) };
    inline ListPublishedAppInfoResponseBody& setAppModels(vector<ListPublishedAppInfoResponseBodyAppModels> && appModels) { DARABONBA_PTR_SET_RVALUE(appModels_, appModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublishedAppInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedAppInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // appModels
    std::shared_ptr<vector<ListPublishedAppInfoResponseBodyAppModels>> appModels_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
