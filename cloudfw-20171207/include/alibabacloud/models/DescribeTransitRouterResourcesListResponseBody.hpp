// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERRESOURCESLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERRESOURCESLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTransitRouterResourcesListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterResourcesListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachedResources, transitRouterAttachedResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterResourcesListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachedResources, transitRouterAttachedResources_);
    };
    DescribeTransitRouterResourcesListResponseBody() = default ;
    DescribeTransitRouterResourcesListResponseBody(const DescribeTransitRouterResourcesListResponseBody &) = default ;
    DescribeTransitRouterResourcesListResponseBody(DescribeTransitRouterResourcesListResponseBody &&) = default ;
    DescribeTransitRouterResourcesListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterResourcesListResponseBody() = default ;
    DescribeTransitRouterResourcesListResponseBody& operator=(const DescribeTransitRouterResourcesListResponseBody &) = default ;
    DescribeTransitRouterResourcesListResponseBody& operator=(DescribeTransitRouterResourcesListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transitRouterAttachedResources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouterResourcesListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterAttachedResources Field Functions 
    bool hasTransitRouterAttachedResources() const { return this->transitRouterAttachedResources_ != nullptr;};
    void deleteTransitRouterAttachedResources() { this->transitRouterAttachedResources_ = nullptr;};
    inline const vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources> & transitRouterAttachedResources() const { DARABONBA_PTR_GET_CONST(transitRouterAttachedResources_, vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources>) };
    inline vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources> transitRouterAttachedResources() { DARABONBA_PTR_GET(transitRouterAttachedResources_, vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources>) };
    inline DescribeTransitRouterResourcesListResponseBody& setTransitRouterAttachedResources(const vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources> & transitRouterAttachedResources) { DARABONBA_PTR_SET_VALUE(transitRouterAttachedResources_, transitRouterAttachedResources) };
    inline DescribeTransitRouterResourcesListResponseBody& setTransitRouterAttachedResources(vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources> && transitRouterAttachedResources) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachedResources_, transitRouterAttachedResources) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources>> transitRouterAttachedResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
