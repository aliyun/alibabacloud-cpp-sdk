// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBundlesResponseBodyBundles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeBundlesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBundlesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bundles, bundles_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBundlesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bundles, bundles_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBundlesResponseBody() = default ;
    DescribeBundlesResponseBody(const DescribeBundlesResponseBody &) = default ;
    DescribeBundlesResponseBody(DescribeBundlesResponseBody &&) = default ;
    DescribeBundlesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBundlesResponseBody() = default ;
    DescribeBundlesResponseBody& operator=(const DescribeBundlesResponseBody &) = default ;
    DescribeBundlesResponseBody& operator=(DescribeBundlesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundles_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // bundles Field Functions 
    bool hasBundles() const { return this->bundles_ != nullptr;};
    void deleteBundles() { this->bundles_ = nullptr;};
    inline const vector<DescribeBundlesResponseBodyBundles> & bundles() const { DARABONBA_PTR_GET_CONST(bundles_, vector<DescribeBundlesResponseBodyBundles>) };
    inline vector<DescribeBundlesResponseBodyBundles> bundles() { DARABONBA_PTR_GET(bundles_, vector<DescribeBundlesResponseBodyBundles>) };
    inline DescribeBundlesResponseBody& setBundles(const vector<DescribeBundlesResponseBodyBundles> & bundles) { DARABONBA_PTR_SET_VALUE(bundles_, bundles) };
    inline DescribeBundlesResponseBody& setBundles(vector<DescribeBundlesResponseBodyBundles> && bundles) { DARABONBA_PTR_SET_RVALUE(bundles_, bundles) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBundlesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBundlesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud computer templates.
    std::shared_ptr<vector<DescribeBundlesResponseBodyBundles>> bundles_ = nullptr;
    // The token that is used for the next query. If this parameter is empty, all results have been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
