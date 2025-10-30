// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountFactoryBaselinesResponseBodyBaselines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Baselines, baselines_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Baselines, baselines_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountFactoryBaselinesResponseBody() = default ;
    ListAccountFactoryBaselinesResponseBody(const ListAccountFactoryBaselinesResponseBody &) = default ;
    ListAccountFactoryBaselinesResponseBody(ListAccountFactoryBaselinesResponseBody &&) = default ;
    ListAccountFactoryBaselinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselinesResponseBody() = default ;
    ListAccountFactoryBaselinesResponseBody& operator=(const ListAccountFactoryBaselinesResponseBody &) = default ;
    ListAccountFactoryBaselinesResponseBody& operator=(ListAccountFactoryBaselinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselines_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // baselines Field Functions 
    bool hasBaselines() const { return this->baselines_ != nullptr;};
    void deleteBaselines() { this->baselines_ = nullptr;};
    inline const vector<ListAccountFactoryBaselinesResponseBodyBaselines> & baselines() const { DARABONBA_PTR_GET_CONST(baselines_, vector<ListAccountFactoryBaselinesResponseBodyBaselines>) };
    inline vector<ListAccountFactoryBaselinesResponseBodyBaselines> baselines() { DARABONBA_PTR_GET(baselines_, vector<ListAccountFactoryBaselinesResponseBodyBaselines>) };
    inline ListAccountFactoryBaselinesResponseBody& setBaselines(const vector<ListAccountFactoryBaselinesResponseBodyBaselines> & baselines) { DARABONBA_PTR_SET_VALUE(baselines_, baselines) };
    inline ListAccountFactoryBaselinesResponseBody& setBaselines(vector<ListAccountFactoryBaselinesResponseBodyBaselines> && baselines) { DARABONBA_PTR_SET_RVALUE(baselines_, baselines) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccountFactoryBaselinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountFactoryBaselinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baselines.
    std::shared_ptr<vector<ListAccountFactoryBaselinesResponseBodyBaselines>> baselines_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
