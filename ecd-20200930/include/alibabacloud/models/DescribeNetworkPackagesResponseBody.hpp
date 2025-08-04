// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkPackagesResponseBodyNetworkPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNetworkPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackages, networkPackages_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackages, networkPackages_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkPackagesResponseBody() = default ;
    DescribeNetworkPackagesResponseBody(const DescribeNetworkPackagesResponseBody &) = default ;
    DescribeNetworkPackagesResponseBody(DescribeNetworkPackagesResponseBody &&) = default ;
    DescribeNetworkPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPackagesResponseBody() = default ;
    DescribeNetworkPackagesResponseBody& operator=(const DescribeNetworkPackagesResponseBody &) = default ;
    DescribeNetworkPackagesResponseBody& operator=(DescribeNetworkPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkPackages_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // networkPackages Field Functions 
    bool hasNetworkPackages() const { return this->networkPackages_ != nullptr;};
    void deleteNetworkPackages() { this->networkPackages_ = nullptr;};
    inline const vector<DescribeNetworkPackagesResponseBodyNetworkPackages> & networkPackages() const { DARABONBA_PTR_GET_CONST(networkPackages_, vector<DescribeNetworkPackagesResponseBodyNetworkPackages>) };
    inline vector<DescribeNetworkPackagesResponseBodyNetworkPackages> networkPackages() { DARABONBA_PTR_GET(networkPackages_, vector<DescribeNetworkPackagesResponseBodyNetworkPackages>) };
    inline DescribeNetworkPackagesResponseBody& setNetworkPackages(const vector<DescribeNetworkPackagesResponseBodyNetworkPackages> & networkPackages) { DARABONBA_PTR_SET_VALUE(networkPackages_, networkPackages) };
    inline DescribeNetworkPackagesResponseBody& setNetworkPackages(vector<DescribeNetworkPackagesResponseBodyNetworkPackages> && networkPackages) { DARABONBA_PTR_SET_RVALUE(networkPackages_, networkPackages) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNetworkPackagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The premium bandwidth plans.
    std::shared_ptr<vector<DescribeNetworkPackagesResponseBodyNetworkPackages>> networkPackages_ = nullptr;
    // The token that is used to start the next query. If the value of this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
