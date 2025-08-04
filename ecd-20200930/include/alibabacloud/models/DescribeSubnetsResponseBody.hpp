// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBNETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBNETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubnetsResponseBodySubnets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSubnetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubnetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Subnets, subnets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubnetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Subnets, subnets_);
    };
    DescribeSubnetsResponseBody() = default ;
    DescribeSubnetsResponseBody(const DescribeSubnetsResponseBody &) = default ;
    DescribeSubnetsResponseBody(DescribeSubnetsResponseBody &&) = default ;
    DescribeSubnetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubnetsResponseBody() = default ;
    DescribeSubnetsResponseBody& operator=(const DescribeSubnetsResponseBody &) = default ;
    DescribeSubnetsResponseBody& operator=(DescribeSubnetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->subnets_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSubnetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubnetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subnets Field Functions 
    bool hasSubnets() const { return this->subnets_ != nullptr;};
    void deleteSubnets() { this->subnets_ = nullptr;};
    inline const vector<DescribeSubnetsResponseBodySubnets> & subnets() const { DARABONBA_PTR_GET_CONST(subnets_, vector<DescribeSubnetsResponseBodySubnets>) };
    inline vector<DescribeSubnetsResponseBodySubnets> subnets() { DARABONBA_PTR_GET(subnets_, vector<DescribeSubnetsResponseBodySubnets>) };
    inline DescribeSubnetsResponseBody& setSubnets(const vector<DescribeSubnetsResponseBodySubnets> & subnets) { DARABONBA_PTR_SET_VALUE(subnets_, subnets) };
    inline DescribeSubnetsResponseBody& setSubnets(vector<DescribeSubnetsResponseBodySubnets> && subnets) { DARABONBA_PTR_SET_RVALUE(subnets_, subnets) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSubnetsResponseBodySubnets>> subnets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
