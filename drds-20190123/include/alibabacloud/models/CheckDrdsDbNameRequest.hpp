// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDRDSDBNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDRDSDBNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CheckDrdsDbNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDrdsDbNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDrdsDbNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    CheckDrdsDbNameRequest() = default ;
    CheckDrdsDbNameRequest(const CheckDrdsDbNameRequest &) = default ;
    CheckDrdsDbNameRequest(CheckDrdsDbNameRequest &&) = default ;
    CheckDrdsDbNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDrdsDbNameRequest() = default ;
    CheckDrdsDbNameRequest& operator=(const CheckDrdsDbNameRequest &) = default ;
    CheckDrdsDbNameRequest& operator=(CheckDrdsDbNameRequest &&) = default ;
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
    inline CheckDrdsDbNameRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline CheckDrdsDbNameRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // DRDS database name
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // DRDS instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
