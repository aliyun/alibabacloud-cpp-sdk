// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
    };
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints(const DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints(DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints &&) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints& operator=(const DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints& operator=(DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint> & endpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint>) };
    inline vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint> endpoint() { DARABONBA_PTR_GET(endpoint_, vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint>) };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints& setEndpoint(const vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint> & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints& setEndpoint(vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint> && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint>> endpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
