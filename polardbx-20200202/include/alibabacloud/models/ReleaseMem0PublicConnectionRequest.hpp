// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEMEM0PUBLICCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEMEM0PUBLICCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ReleaseMem0PublicConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseMem0PublicConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseMem0PublicConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleaseMem0PublicConnectionRequest() = default ;
    ReleaseMem0PublicConnectionRequest(const ReleaseMem0PublicConnectionRequest &) = default ;
    ReleaseMem0PublicConnectionRequest(ReleaseMem0PublicConnectionRequest &&) = default ;
    ReleaseMem0PublicConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseMem0PublicConnectionRequest() = default ;
    ReleaseMem0PublicConnectionRequest& operator=(const ReleaseMem0PublicConnectionRequest &) = default ;
    ReleaseMem0PublicConnectionRequest& operator=(ReleaseMem0PublicConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentConnectionString_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string getCurrentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ReleaseMem0PublicConnectionRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ReleaseMem0PublicConnectionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseMem0PublicConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The public endpoint to be released. This parameter is optional. If this parameter is not specified, the public endpoint of Mem0 is automatically released.
    shared_ptr<string> currentConnectionString_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region ID of the instance. > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196841.html) operation to query the details of regions supported by PolarDB-X, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
