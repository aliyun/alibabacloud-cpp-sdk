// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATADBINSTANCEENDPOINTSDBINSTANCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATADBINSTANCEENDPOINTSDBINSTANCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems.hpp>
#include <alibabacloud/models/DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(NodeItems, nodeItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(NodeItems, nodeItems_);
    };
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint() = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint(const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint &) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint(DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint &&) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint() = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& operator=(const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint &) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& operator=(DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressItems_ == nullptr
        && return this->endpointDescription_ == nullptr && return this->endpointId_ == nullptr && return this->endpointType_ == nullptr && return this->nodeItems_ == nullptr; };
    // addressItems Field Functions 
    bool hasAddressItems() const { return this->addressItems_ != nullptr;};
    void deleteAddressItems() { this->addressItems_ = nullptr;};
    inline const Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems & addressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems) };
    inline Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems addressItems() { DARABONBA_PTR_GET(addressItems_, Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setAddressItems(const Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setAddressItems(Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string endpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // nodeItems Field Functions 
    bool hasNodeItems() const { return this->nodeItems_ != nullptr;};
    void deleteNodeItems() { this->nodeItems_ = nullptr;};
    inline const Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems & nodeItems() const { DARABONBA_PTR_GET_CONST(nodeItems_, Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems) };
    inline Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems nodeItems() { DARABONBA_PTR_GET(nodeItems_, Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setNodeItems(const Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems & nodeItems) { DARABONBA_PTR_SET_VALUE(nodeItems_, nodeItems) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint& setNodeItems(Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems && nodeItems) { DARABONBA_PTR_SET_RVALUE(nodeItems_, nodeItems) };


  protected:
    // The information about the endpoint.
    std::shared_ptr<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointAddressItems> addressItems_ = nullptr;
    // The user-defined description of the endpoint.
    std::shared_ptr<string> endpointDescription_ = nullptr;
    // The endpoint ID of the instance.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // *   **Primary**: the read/write endpoint of the instance
    // *   **Readonly**: the read-only endpoint of the instance
    std::shared_ptr<string> endpointType_ = nullptr;
    // The information about the node that is configured for the endpoint.
    std::shared_ptr<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems> nodeItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
