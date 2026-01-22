// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYENGINEMIGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYENGINEMIGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyEngineMigrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEngineMigrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStrings, connectionStrings_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NewMasterDBInstanceName, newMasterDBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_TO_JSON(SwapConnectionString, swapConnectionString_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEngineMigrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStrings, connectionStrings_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NewMasterDBInstanceName, newMasterDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(SwapConnectionString, swapConnectionString_);
    };
    ModifyEngineMigrationRequest() = default ;
    ModifyEngineMigrationRequest(const ModifyEngineMigrationRequest &) = default ;
    ModifyEngineMigrationRequest(ModifyEngineMigrationRequest &&) = default ;
    ModifyEngineMigrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEngineMigrationRequest() = default ;
    ModifyEngineMigrationRequest& operator=(const ModifyEngineMigrationRequest &) = default ;
    ModifyEngineMigrationRequest& operator=(ModifyEngineMigrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStrings_ == nullptr
        && this->DBInstanceName_ == nullptr && this->newMasterDBInstanceName_ == nullptr && this->regionId_ == nullptr && this->sourceDBInstanceName_ == nullptr && this->swapConnectionString_ == nullptr; };
    // connectionStrings Field Functions 
    bool hasConnectionStrings() const { return this->connectionStrings_ != nullptr;};
    void deleteConnectionStrings() { this->connectionStrings_ = nullptr;};
    inline string getConnectionStrings() const { DARABONBA_PTR_GET_DEFAULT(connectionStrings_, "") };
    inline ModifyEngineMigrationRequest& setConnectionStrings(string connectionStrings) { DARABONBA_PTR_SET_VALUE(connectionStrings_, connectionStrings) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyEngineMigrationRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // newMasterDBInstanceName Field Functions 
    bool hasNewMasterDBInstanceName() const { return this->newMasterDBInstanceName_ != nullptr;};
    void deleteNewMasterDBInstanceName() { this->newMasterDBInstanceName_ = nullptr;};
    inline string getNewMasterDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(newMasterDBInstanceName_, "") };
    inline ModifyEngineMigrationRequest& setNewMasterDBInstanceName(string newMasterDBInstanceName) { DARABONBA_PTR_SET_VALUE(newMasterDBInstanceName_, newMasterDBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyEngineMigrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceDBInstanceName Field Functions 
    bool hasSourceDBInstanceName() const { return this->sourceDBInstanceName_ != nullptr;};
    void deleteSourceDBInstanceName() { this->sourceDBInstanceName_ = nullptr;};
    inline string getSourceDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBInstanceName_, "") };
    inline ModifyEngineMigrationRequest& setSourceDBInstanceName(string sourceDBInstanceName) { DARABONBA_PTR_SET_VALUE(sourceDBInstanceName_, sourceDBInstanceName) };


    // swapConnectionString Field Functions 
    bool hasSwapConnectionString() const { return this->swapConnectionString_ != nullptr;};
    void deleteSwapConnectionString() { this->swapConnectionString_ = nullptr;};
    inline string getSwapConnectionString() const { DARABONBA_PTR_GET_DEFAULT(swapConnectionString_, "") };
    inline ModifyEngineMigrationRequest& setSwapConnectionString(string swapConnectionString) { DARABONBA_PTR_SET_VALUE(swapConnectionString_, swapConnectionString) };


  protected:
    shared_ptr<string> connectionStrings_ {};
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> newMasterDBInstanceName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sourceDBInstanceName_ {};
    shared_ptr<string> swapConnectionString_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
