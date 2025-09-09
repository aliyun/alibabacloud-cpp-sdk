// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRDSREADWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRDSREADWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ModifyRdsReadWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRdsReadWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceNames, instanceNames_);
      DARABONBA_PTR_TO_JSON(Weights, weights_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRdsReadWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceNames, instanceNames_);
      DARABONBA_PTR_FROM_JSON(Weights, weights_);
    };
    ModifyRdsReadWeightRequest() = default ;
    ModifyRdsReadWeightRequest(const ModifyRdsReadWeightRequest &) = default ;
    ModifyRdsReadWeightRequest(ModifyRdsReadWeightRequest &&) = default ;
    ModifyRdsReadWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRdsReadWeightRequest() = default ;
    ModifyRdsReadWeightRequest& operator=(const ModifyRdsReadWeightRequest &) = default ;
    ModifyRdsReadWeightRequest& operator=(ModifyRdsReadWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->instanceNames_ != nullptr && this->weights_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyRdsReadWeightRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ModifyRdsReadWeightRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // instanceNames Field Functions 
    bool hasInstanceNames() const { return this->instanceNames_ != nullptr;};
    void deleteInstanceNames() { this->instanceNames_ = nullptr;};
    inline string instanceNames() const { DARABONBA_PTR_GET_DEFAULT(instanceNames_, "") };
    inline ModifyRdsReadWeightRequest& setInstanceNames(string instanceNames) { DARABONBA_PTR_SET_VALUE(instanceNames_, instanceNames) };


    // weights Field Functions 
    bool hasWeights() const { return this->weights_ != nullptr;};
    void deleteWeights() { this->weights_ = nullptr;};
    inline string weights() const { DARABONBA_PTR_GET_DEFAULT(weights_, "") };
    inline ModifyRdsReadWeightRequest& setWeights(string weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };


  protected:
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The names of the ApsaraDB RDS for MySQL instances. Separate the names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceNames_ = nullptr;
    // The weights of the ApsaraDB RDS for MySQL instances. Separate the weights with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> weights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
