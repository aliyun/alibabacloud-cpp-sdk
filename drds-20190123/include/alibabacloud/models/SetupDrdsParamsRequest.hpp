// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUPDRDSPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUPDRDSPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetupDrdsParamsRequestData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SetupDrdsParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetupDrdsParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetupDrdsParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetupDrdsParamsRequest() = default ;
    SetupDrdsParamsRequest(const SetupDrdsParamsRequest &) = default ;
    SetupDrdsParamsRequest(SetupDrdsParamsRequest &&) = default ;
    SetupDrdsParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetupDrdsParamsRequest() = default ;
    SetupDrdsParamsRequest& operator=(const SetupDrdsParamsRequest &) = default ;
    SetupDrdsParamsRequest& operator=(SetupDrdsParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->paramLevel_ != nullptr && this->regionId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SetupDrdsParamsRequestData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<SetupDrdsParamsRequestData>) };
    inline vector<SetupDrdsParamsRequestData> data() { DARABONBA_PTR_GET(data_, vector<SetupDrdsParamsRequestData>) };
    inline SetupDrdsParamsRequest& setData(const vector<SetupDrdsParamsRequestData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SetupDrdsParamsRequest& setData(vector<SetupDrdsParamsRequestData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SetupDrdsParamsRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // paramLevel Field Functions 
    bool hasParamLevel() const { return this->paramLevel_ != nullptr;};
    void deleteParamLevel() { this->paramLevel_ = nullptr;};
    inline string paramLevel() const { DARABONBA_PTR_GET_DEFAULT(paramLevel_, "") };
    inline SetupDrdsParamsRequest& setParamLevel(string paramLevel) { DARABONBA_PTR_SET_VALUE(paramLevel_, paramLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetupDrdsParamsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<SetupDrdsParamsRequestData>> data_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance for which you want to configure parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The resource for which you want to configure parameters. Valid values:
    // 
    // *   **INSTANCE**: Configure parameters for the instance.
    // *   **DB**: Configure parameters for the databases of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> paramLevel_ = nullptr;
    // The ID of the region in which the PolarDB-X 1.0 instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
