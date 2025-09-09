// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMOOTHEXPANDPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMOOTHEXPANDPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitSmoothExpandPreCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmoothExpandPreCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmoothExpandPreCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    SubmitSmoothExpandPreCheckRequest() = default ;
    SubmitSmoothExpandPreCheckRequest(const SubmitSmoothExpandPreCheckRequest &) = default ;
    SubmitSmoothExpandPreCheckRequest(SubmitSmoothExpandPreCheckRequest &&) = default ;
    SubmitSmoothExpandPreCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmoothExpandPreCheckRequest() = default ;
    SubmitSmoothExpandPreCheckRequest& operator=(const SubmitSmoothExpandPreCheckRequest &) = default ;
    SubmitSmoothExpandPreCheckRequest& operator=(SubmitSmoothExpandPreCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstType_ != nullptr
        && this->dbName_ != nullptr && this->drdsInstanceId_ != nullptr; };
    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline SubmitSmoothExpandPreCheckRequest& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SubmitSmoothExpandPreCheckRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SubmitSmoothExpandPreCheckRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The type of the database. Valid values:
    // 
    // *   RDS
    // *   POLARDB
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The name of the PolarDB-X database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
