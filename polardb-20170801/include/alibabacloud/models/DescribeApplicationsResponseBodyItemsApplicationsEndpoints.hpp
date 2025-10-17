// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMSAPPLICATIONSENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMSAPPLICATIONSENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationsResponseBodyItemsApplicationsEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationsResponseBodyItemsApplicationsEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationsResponseBodyItemsApplicationsEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
    };
    DescribeApplicationsResponseBodyItemsApplicationsEndpoints() = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpoints(const DescribeApplicationsResponseBodyItemsApplicationsEndpoints &) = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpoints(DescribeApplicationsResponseBodyItemsApplicationsEndpoints &&) = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationsResponseBodyItemsApplicationsEndpoints() = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpoints& operator=(const DescribeApplicationsResponseBodyItemsApplicationsEndpoints &) = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpoints& operator=(DescribeApplicationsResponseBodyItemsApplicationsEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint> & endpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint>) };
    inline vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint> endpoint() { DARABONBA_PTR_GET(endpoint_, vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint>) };
    inline DescribeApplicationsResponseBodyItemsApplicationsEndpoints& setEndpoint(const vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint> & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline DescribeApplicationsResponseBodyItemsApplicationsEndpoints& setEndpoint(vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint> && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


  protected:
    std::shared_ptr<vector<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint>> endpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
