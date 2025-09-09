// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUPRECYCLEBINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUPRECYCLEBINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SetupRecycleBinStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetupRecycleBinStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StatusAction, statusAction_);
    };
    friend void from_json(const Darabonba::Json& j, SetupRecycleBinStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StatusAction, statusAction_);
    };
    SetupRecycleBinStatusRequest() = default ;
    SetupRecycleBinStatusRequest(const SetupRecycleBinStatusRequest &) = default ;
    SetupRecycleBinStatusRequest(SetupRecycleBinStatusRequest &&) = default ;
    SetupRecycleBinStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetupRecycleBinStatusRequest() = default ;
    SetupRecycleBinStatusRequest& operator=(const SetupRecycleBinStatusRequest &) = default ;
    SetupRecycleBinStatusRequest& operator=(SetupRecycleBinStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->regionId_ != nullptr && this->statusAction_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SetupRecycleBinStatusRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SetupRecycleBinStatusRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetupRecycleBinStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // statusAction Field Functions 
    bool hasStatusAction() const { return this->statusAction_ != nullptr;};
    void deleteStatusAction() { this->statusAction_ = nullptr;};
    inline string statusAction() const { DARABONBA_PTR_GET_DEFAULT(statusAction_, "") };
    inline SetupRecycleBinStatusRequest& setStatusAction(string statusAction) { DARABONBA_PTR_SET_VALUE(statusAction_, statusAction) };


  protected:
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies the status of the table recycle bin. Valid values:
    // 
    // *   enable: The table recycle bin is enabled.
    // *   disable: The table recycle bin is disabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> statusAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
