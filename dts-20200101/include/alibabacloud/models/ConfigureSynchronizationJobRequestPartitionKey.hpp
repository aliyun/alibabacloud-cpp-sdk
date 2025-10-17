// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUESTPARTITIONKEY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUESTPARTITIONKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSynchronizationJobRequestPartitionKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSynchronizationJobRequestPartitionKey& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyTime_Day, modifyTimeDay_);
      DARABONBA_PTR_TO_JSON(ModifyTime_Hour, modifyTimeHour_);
      DARABONBA_PTR_TO_JSON(ModifyTime_Minute, modifyTimeMinute_);
      DARABONBA_PTR_TO_JSON(ModifyTime_Month, modifyTimeMonth_);
      DARABONBA_PTR_TO_JSON(ModifyTime_Year, modifyTimeYear_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSynchronizationJobRequestPartitionKey& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyTime_Day, modifyTimeDay_);
      DARABONBA_PTR_FROM_JSON(ModifyTime_Hour, modifyTimeHour_);
      DARABONBA_PTR_FROM_JSON(ModifyTime_Minute, modifyTimeMinute_);
      DARABONBA_PTR_FROM_JSON(ModifyTime_Month, modifyTimeMonth_);
      DARABONBA_PTR_FROM_JSON(ModifyTime_Year, modifyTimeYear_);
    };
    ConfigureSynchronizationJobRequestPartitionKey() = default ;
    ConfigureSynchronizationJobRequestPartitionKey(const ConfigureSynchronizationJobRequestPartitionKey &) = default ;
    ConfigureSynchronizationJobRequestPartitionKey(ConfigureSynchronizationJobRequestPartitionKey &&) = default ;
    ConfigureSynchronizationJobRequestPartitionKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSynchronizationJobRequestPartitionKey() = default ;
    ConfigureSynchronizationJobRequestPartitionKey& operator=(const ConfigureSynchronizationJobRequestPartitionKey &) = default ;
    ConfigureSynchronizationJobRequestPartitionKey& operator=(ConfigureSynchronizationJobRequestPartitionKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyTimeDay_ == nullptr
        && return this->modifyTimeHour_ == nullptr && return this->modifyTimeMinute_ == nullptr && return this->modifyTimeMonth_ == nullptr && return this->modifyTimeYear_ == nullptr; };
    // modifyTimeDay Field Functions 
    bool hasModifyTimeDay() const { return this->modifyTimeDay_ != nullptr;};
    void deleteModifyTimeDay() { this->modifyTimeDay_ = nullptr;};
    inline bool modifyTimeDay() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeDay_, false) };
    inline ConfigureSynchronizationJobRequestPartitionKey& setModifyTimeDay(bool modifyTimeDay) { DARABONBA_PTR_SET_VALUE(modifyTimeDay_, modifyTimeDay) };


    // modifyTimeHour Field Functions 
    bool hasModifyTimeHour() const { return this->modifyTimeHour_ != nullptr;};
    void deleteModifyTimeHour() { this->modifyTimeHour_ = nullptr;};
    inline bool modifyTimeHour() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeHour_, false) };
    inline ConfigureSynchronizationJobRequestPartitionKey& setModifyTimeHour(bool modifyTimeHour) { DARABONBA_PTR_SET_VALUE(modifyTimeHour_, modifyTimeHour) };


    // modifyTimeMinute Field Functions 
    bool hasModifyTimeMinute() const { return this->modifyTimeMinute_ != nullptr;};
    void deleteModifyTimeMinute() { this->modifyTimeMinute_ = nullptr;};
    inline bool modifyTimeMinute() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeMinute_, false) };
    inline ConfigureSynchronizationJobRequestPartitionKey& setModifyTimeMinute(bool modifyTimeMinute) { DARABONBA_PTR_SET_VALUE(modifyTimeMinute_, modifyTimeMinute) };


    // modifyTimeMonth Field Functions 
    bool hasModifyTimeMonth() const { return this->modifyTimeMonth_ != nullptr;};
    void deleteModifyTimeMonth() { this->modifyTimeMonth_ = nullptr;};
    inline bool modifyTimeMonth() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeMonth_, false) };
    inline ConfigureSynchronizationJobRequestPartitionKey& setModifyTimeMonth(bool modifyTimeMonth) { DARABONBA_PTR_SET_VALUE(modifyTimeMonth_, modifyTimeMonth) };


    // modifyTimeYear Field Functions 
    bool hasModifyTimeYear() const { return this->modifyTimeYear_ != nullptr;};
    void deleteModifyTimeYear() { this->modifyTimeYear_ = nullptr;};
    inline bool modifyTimeYear() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeYear_, false) };
    inline ConfigureSynchronizationJobRequestPartitionKey& setModifyTimeYear(bool modifyTimeYear) { DARABONBA_PTR_SET_VALUE(modifyTimeYear_, modifyTimeYear) };


  protected:
    // Specifies whether the incremental data table contains partitions defined by the modifytime_day field. Valid values: **true** and **false**.
    // 
    // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
    std::shared_ptr<bool> modifyTimeDay_ = nullptr;
    // Specifies whether the incremental data table contains partitions defined by the modifytime_hour field. Valid values: **true** and **false**.
    // 
    // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
    std::shared_ptr<bool> modifyTimeHour_ = nullptr;
    // Specifies whether the incremental data table contains partitions defined by the modifytime_minute field. Valid values: **true** and **false**.
    // 
    // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
    std::shared_ptr<bool> modifyTimeMinute_ = nullptr;
    // Specifies whether the incremental data table contains partitions defined by the modifytime_month field. Valid values: **true** and **false**.
    // 
    // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
    std::shared_ptr<bool> modifyTimeMonth_ = nullptr;
    // Specifies whether the incremental data table contains partitions defined by the modifytime_year field. Valid values: **true** and **false**.
    // 
    // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
    std::shared_ptr<bool> modifyTimeYear_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
