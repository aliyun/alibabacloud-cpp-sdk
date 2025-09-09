// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDRDSDBFAILEDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDRDSDBFAILEDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class RemoveDrdsDbFailedRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDrdsDbFailedRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDrdsDbFailedRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    RemoveDrdsDbFailedRecordRequest() = default ;
    RemoveDrdsDbFailedRecordRequest(const RemoveDrdsDbFailedRecordRequest &) = default ;
    RemoveDrdsDbFailedRecordRequest(RemoveDrdsDbFailedRecordRequest &&) = default ;
    RemoveDrdsDbFailedRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDrdsDbFailedRecordRequest() = default ;
    RemoveDrdsDbFailedRecordRequest& operator=(const RemoveDrdsDbFailedRecordRequest &) = default ;
    RemoveDrdsDbFailedRecordRequest& operator=(RemoveDrdsDbFailedRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline RemoveDrdsDbFailedRecordRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline RemoveDrdsDbFailedRecordRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The name of the DRDS database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the ApsaraDB RDS for PostgreSQL instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
