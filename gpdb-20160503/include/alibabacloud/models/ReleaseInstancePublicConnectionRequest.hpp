// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCEPUBLICCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCEPUBLICCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstancePublicConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstancePublicConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    ReleaseInstancePublicConnectionRequest() = default ;
    ReleaseInstancePublicConnectionRequest(const ReleaseInstancePublicConnectionRequest &) = default ;
    ReleaseInstancePublicConnectionRequest(ReleaseInstancePublicConnectionRequest &&) = default ;
    ReleaseInstancePublicConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstancePublicConnectionRequest() = default ;
    ReleaseInstancePublicConnectionRequest& operator=(const ReleaseInstancePublicConnectionRequest &) = default ;
    ReleaseInstancePublicConnectionRequest& operator=(ReleaseInstancePublicConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && return this->currentConnectionString_ == nullptr && return this->DBInstanceId_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ReleaseInstancePublicConnectionRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string currentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ReleaseInstancePublicConnectionRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ReleaseInstancePublicConnectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The type of the endpoint. Default value: primary. Valid values:
    // 
    // *   **primary**: primary endpoint.
    // *   **cluster**: cluster endpoint. This type of endpoints can be created only for instances that have multiple coordinator nodes.
    std::shared_ptr<string> addressType_ = nullptr;
    // The public endpoint of the instance.
    // 
    // You can log on to the AnalyticDB for PostgreSQL console and go to the **Basic Information** page of the instance to view the **public endpoint** in the **Database Connection** section.
    // 
    // This parameter is required.
    std::shared_ptr<string> currentConnectionString_ = nullptr;
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
