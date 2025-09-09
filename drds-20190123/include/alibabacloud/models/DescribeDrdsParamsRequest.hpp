// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDrdsParamsRequest() = default ;
    DescribeDrdsParamsRequest(const DescribeDrdsParamsRequest &) = default ;
    DescribeDrdsParamsRequest(DescribeDrdsParamsRequest &&) = default ;
    DescribeDrdsParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsParamsRequest() = default ;
    DescribeDrdsParamsRequest& operator=(const DescribeDrdsParamsRequest &) = default ;
    DescribeDrdsParamsRequest& operator=(DescribeDrdsParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->paramLevel_ != nullptr && this->regionId_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsParamsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsParamsRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // paramLevel Field Functions 
    bool hasParamLevel() const { return this->paramLevel_ != nullptr;};
    void deleteParamLevel() { this->paramLevel_ = nullptr;};
    inline string paramLevel() const { DARABONBA_PTR_GET_DEFAULT(paramLevel_, "") };
    inline DescribeDrdsParamsRequest& setParamLevel(string paramLevel) { DARABONBA_PTR_SET_VALUE(paramLevel_, paramLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDrdsParamsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The type of nodes whose parameters you want to query. Valid values:
    // 
    // *   **INSTANCE: the instance level.**
    // *   **DB**: the database level.
    // 
    // This parameter is required.
    std::shared_ptr<string> paramLevel_ = nullptr;
    // The ID of the region where the PolarDB-X 1.0 instance is created.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
