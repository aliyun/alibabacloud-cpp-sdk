// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODYDBCLUSTERENDPOINTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODYDBCLUSTERENDPOINTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterMigrationResponseBodyDBClusterEndpointList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& obj) { 
      DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
    };
    DescribeDBClusterMigrationResponseBodyDBClusterEndpointList() = default ;
    DescribeDBClusterMigrationResponseBodyDBClusterEndpointList(const DescribeDBClusterMigrationResponseBodyDBClusterEndpointList &) = default ;
    DescribeDBClusterMigrationResponseBodyDBClusterEndpointList(DescribeDBClusterMigrationResponseBodyDBClusterEndpointList &&) = default ;
    DescribeDBClusterMigrationResponseBodyDBClusterEndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterMigrationResponseBodyDBClusterEndpointList() = default ;
    DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& operator=(const DescribeDBClusterMigrationResponseBodyDBClusterEndpointList &) = default ;
    DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& operator=(DescribeDBClusterMigrationResponseBodyDBClusterEndpointList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressItems_ != nullptr
        && this->DBEndpointId_ != nullptr && this->endpointType_ != nullptr && this->readWriteMode_ != nullptr; };
    // addressItems Field Functions 
    bool hasAddressItems() const { return this->addressItems_ != nullptr;};
    void deleteAddressItems() { this->addressItems_ = nullptr;};
    inline const vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems> & addressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems>) };
    inline vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems> addressItems() { DARABONBA_PTR_GET(addressItems_, vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems>) };
    inline DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& setAddressItems(const vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
    inline DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& setAddressItems(vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string DBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string readWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline DescribeDBClusterMigrationResponseBodyDBClusterEndpointList& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


  protected:
    // The VPC ID.
    std::shared_ptr<vector<Models::DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems>> addressItems_ = nullptr;
    // The expiration time of the replication between ApsaraDB RDS and PolarDB. The time is in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> DBEndpointId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> endpointType_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **RDS2POLARDB**: Data is replicated from an ApsaraDB RDS instance to a PolarDB cluster.
    // *   **POLARDB2RDS**: Data is replicated from a PolarDB cluster to an ApsaraDB RDS instance.
    std::shared_ptr<string> readWriteMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
