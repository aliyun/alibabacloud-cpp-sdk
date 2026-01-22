// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCEPUBLICCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCEPUBLICCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstancePublicConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstancePublicConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
    virtual bool empty() const override { return this->currentConnectionString_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string getCurrentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ReleaseInstancePublicConnectionRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ReleaseInstancePublicConnectionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseInstancePublicConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> currentConnectionString_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
