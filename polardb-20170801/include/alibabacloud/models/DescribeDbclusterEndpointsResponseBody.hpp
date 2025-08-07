// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterEndpointsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterEndpointsResponseBody() = default ;
    DescribeDBClusterEndpointsResponseBody(const DescribeDBClusterEndpointsResponseBody &) = default ;
    DescribeDBClusterEndpointsResponseBody(DescribeDBClusterEndpointsResponseBody &&) = default ;
    DescribeDBClusterEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEndpointsResponseBody() = default ;
    DescribeDBClusterEndpointsResponseBody& operator=(const DescribeDBClusterEndpointsResponseBody &) = default ;
    DescribeDBClusterEndpointsResponseBody& operator=(DescribeDBClusterEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->requestId_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBClusterEndpointsResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBClusterEndpointsResponseBodyItems>) };
    inline vector<DescribeDBClusterEndpointsResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeDBClusterEndpointsResponseBodyItems>) };
    inline DescribeDBClusterEndpointsResponseBody& setItems(const vector<DescribeDBClusterEndpointsResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterEndpointsResponseBody& setItems(vector<DescribeDBClusterEndpointsResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the endpoints.
    std::shared_ptr<vector<DescribeDBClusterEndpointsResponseBodyItems>> items_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
