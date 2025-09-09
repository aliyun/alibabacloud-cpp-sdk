// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEENDPOINTSENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEENDPOINTSENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(ReadWeight, readWeight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(ReadWeight, readWeight_);
    };
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint(const DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint(DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint &&) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& operator=(const DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& operator=(DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointId_ != nullptr
        && this->nodeIds_ != nullptr && this->readWeight_ != nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string nodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // readWeight Field Functions 
    bool hasReadWeight() const { return this->readWeight_ != nullptr;};
    void deleteReadWeight() { this->readWeight_ = nullptr;};
    inline int32_t readWeight() const { DARABONBA_PTR_GET_DEFAULT(readWeight_, 0) };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint& setReadWeight(int32_t readWeight) { DARABONBA_PTR_SET_VALUE(readWeight_, readWeight) };


  protected:
    // The ID of the PolarDB connection address.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The ID list of the nodes in the PolarDB connection string. Separate multiple nodes with commas (,).
    std::shared_ptr<string> nodeIds_ = nullptr;
    // The read ratio of this connection address managed by the DRDS database.
    std::shared_ptr<int32_t> readWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
