// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLARDBREADWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLARDBREADWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ModifyPolarDbReadWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolarDbReadWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbNodeIds, dbNodeIds_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(Weights, weights_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolarDbReadWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbNodeIds, dbNodeIds_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Weights, weights_);
    };
    ModifyPolarDbReadWeightRequest() = default ;
    ModifyPolarDbReadWeightRequest(const ModifyPolarDbReadWeightRequest &) = default ;
    ModifyPolarDbReadWeightRequest(ModifyPolarDbReadWeightRequest &&) = default ;
    ModifyPolarDbReadWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolarDbReadWeightRequest() = default ;
    ModifyPolarDbReadWeightRequest& operator=(const ModifyPolarDbReadWeightRequest &) = default ;
    ModifyPolarDbReadWeightRequest& operator=(ModifyPolarDbReadWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstanceId_ != nullptr
        && this->dbName_ != nullptr && this->dbNodeIds_ != nullptr && this->drdsInstanceId_ != nullptr && this->weights_ != nullptr; };
    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ModifyPolarDbReadWeightRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyPolarDbReadWeightRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbNodeIds Field Functions 
    bool hasDbNodeIds() const { return this->dbNodeIds_ != nullptr;};
    void deleteDbNodeIds() { this->dbNodeIds_ = nullptr;};
    inline string dbNodeIds() const { DARABONBA_PTR_GET_DEFAULT(dbNodeIds_, "") };
    inline ModifyPolarDbReadWeightRequest& setDbNodeIds(string dbNodeIds) { DARABONBA_PTR_SET_VALUE(dbNodeIds_, dbNodeIds) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ModifyPolarDbReadWeightRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // weights Field Functions 
    bool hasWeights() const { return this->weights_ != nullptr;};
    void deleteWeights() { this->weights_ = nullptr;};
    inline string weights() const { DARABONBA_PTR_GET_DEFAULT(weights_, "") };
    inline ModifyPolarDbReadWeightRequest& setWeights(string weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };


  protected:
    // Polar cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The node list in the destination apsaradb for PolarDB cluster. The nodes in each cluster are separated with commas (,) and colons (:).
    // 
    // This parameter is required.
    std::shared_ptr<string> dbNodeIds_ = nullptr;
    // The ID of a DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The weight of the PolarDB cluster. Separate multiple weights with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> weights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
