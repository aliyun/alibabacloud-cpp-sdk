// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKHADOOPNETCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKHADOOPNETCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CheckHadoopNetConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckHadoopNetConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckHadoopNetConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CheckHadoopNetConnectionRequest() = default ;
    CheckHadoopNetConnectionRequest(const CheckHadoopNetConnectionRequest &) = default ;
    CheckHadoopNetConnectionRequest(CheckHadoopNetConnectionRequest &&) = default ;
    CheckHadoopNetConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckHadoopNetConnectionRequest() = default ;
    CheckHadoopNetConnectionRequest& operator=(const CheckHadoopNetConnectionRequest &) = default ;
    CheckHadoopNetConnectionRequest& operator=(CheckHadoopNetConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dataSourceId_ == nullptr && this->emrInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CheckHadoopNetConnectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CheckHadoopNetConnectionRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // emrInstanceId Field Functions 
    bool hasEmrInstanceId() const { return this->emrInstanceId_ != nullptr;};
    void deleteEmrInstanceId() { this->emrInstanceId_ = nullptr;};
    inline string getEmrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(emrInstanceId_, "") };
    inline CheckHadoopNetConnectionRequest& setEmrInstanceId(string emrInstanceId) { DARABONBA_PTR_SET_VALUE(emrInstanceId_, emrInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckHadoopNetConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // 1. Either DataSourceId or EmrInstanceId must be specified as input, otherwise an error will occur.
    // 2. If both of the above parameters are specified, EmrInstanceId will be used preferentially.
    // 3. If the data source specified by DataSourceId is a self-built Hadoop cluster, an error will occur directly.
    shared_ptr<string> dataSourceId_ {};
    // EMR instance ID.
    shared_ptr<string> emrInstanceId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
