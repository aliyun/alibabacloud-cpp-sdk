// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndpointsResponseBodyDataEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeEndpointsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndpointsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndpointsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
    };
    DescribeEndpointsResponseBodyData() = default ;
    DescribeEndpointsResponseBodyData(const DescribeEndpointsResponseBodyData &) = default ;
    DescribeEndpointsResponseBodyData(DescribeEndpointsResponseBodyData &&) = default ;
    DescribeEndpointsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndpointsResponseBodyData() = default ;
    DescribeEndpointsResponseBodyData& operator=(const DescribeEndpointsResponseBodyData &) = default ;
    DescribeEndpointsResponseBodyData& operator=(DescribeEndpointsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoints_ != nullptr
        && this->instanceNetworkType_ != nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::DescribeEndpointsResponseBodyDataEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::DescribeEndpointsResponseBodyDataEndpoints>) };
    inline vector<Models::DescribeEndpointsResponseBodyDataEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::DescribeEndpointsResponseBodyDataEndpoints>) };
    inline DescribeEndpointsResponseBodyData& setEndpoints(const vector<Models::DescribeEndpointsResponseBodyDataEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeEndpointsResponseBodyData& setEndpoints(vector<Models::DescribeEndpointsResponseBodyDataEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeEndpointsResponseBodyData& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


  protected:
    // The details of the endpoints.
    std::shared_ptr<vector<Models::DescribeEndpointsResponseBodyDataEndpoints>> endpoints_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   **VPC**
    // *   **PUBLIC**
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
