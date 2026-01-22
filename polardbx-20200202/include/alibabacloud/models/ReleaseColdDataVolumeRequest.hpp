// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECOLDDATAVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASECOLDDATAVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ReleaseColdDataVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseColdDataVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseColdDataVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleaseColdDataVolumeRequest() = default ;
    ReleaseColdDataVolumeRequest(const ReleaseColdDataVolumeRequest &) = default ;
    ReleaseColdDataVolumeRequest(ReleaseColdDataVolumeRequest &&) = default ;
    ReleaseColdDataVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseColdDataVolumeRequest() = default ;
    ReleaseColdDataVolumeRequest& operator=(const ReleaseColdDataVolumeRequest &) = default ;
    ReleaseColdDataVolumeRequest& operator=(ReleaseColdDataVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ReleaseColdDataVolumeRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseColdDataVolumeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
