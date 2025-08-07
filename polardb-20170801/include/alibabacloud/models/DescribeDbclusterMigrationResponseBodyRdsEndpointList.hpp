// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODYRDSENDPOINTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODYRDSENDPOINTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterMigrationResponseBodyRdsEndpointList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterMigrationResponseBodyRdsEndpointList& obj) { 
      DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_TO_JSON(CustinsType, custinsType_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterMigrationResponseBodyRdsEndpointList& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_FROM_JSON(CustinsType, custinsType_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
    };
    DescribeDBClusterMigrationResponseBodyRdsEndpointList() = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointList(const DescribeDBClusterMigrationResponseBodyRdsEndpointList &) = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointList(DescribeDBClusterMigrationResponseBodyRdsEndpointList &&) = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterMigrationResponseBodyRdsEndpointList() = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointList& operator=(const DescribeDBClusterMigrationResponseBodyRdsEndpointList &) = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointList& operator=(DescribeDBClusterMigrationResponseBodyRdsEndpointList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressItems_ != nullptr
        && this->custinsType_ != nullptr && this->DBEndpointId_ != nullptr && this->endpointType_ != nullptr; };
    // addressItems Field Functions 
    bool hasAddressItems() const { return this->addressItems_ != nullptr;};
    void deleteAddressItems() { this->addressItems_ = nullptr;};
    inline const vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems> & addressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems>) };
    inline vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems> addressItems() { DARABONBA_PTR_GET(addressItems_, vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems>) };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointList& setAddressItems(const vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointList& setAddressItems(vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


    // custinsType Field Functions 
    bool hasCustinsType() const { return this->custinsType_ != nullptr;};
    void deleteCustinsType() { this->custinsType_ = nullptr;};
    inline string custinsType() const { DARABONBA_PTR_GET_DEFAULT(custinsType_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointList& setCustinsType(string custinsType) { DARABONBA_PTR_SET_VALUE(custinsType_, custinsType) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string DBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointList& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointList& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


  protected:
    // The VPC ID.
    std::shared_ptr<vector<Models::DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems>> addressItems_ = nullptr;
    // The instance type.
    std::shared_ptr<string> custinsType_ = nullptr;
    // The ID of the endpoint.
    std::shared_ptr<string> DBEndpointId_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // - **Normal**: the standard endpoint
    // - **ReadWriteSplitting**: the read/write splitting endpoint
    std::shared_ptr<string> endpointType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
