// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoIncrementUsageStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoIncrementUsageStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RatioFilter, ratioFilter_);
      DARABONBA_PTR_TO_JSON(RealTime, realTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoIncrementUsageStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RatioFilter, ratioFilter_);
      DARABONBA_PTR_FROM_JSON(RealTime, realTime_);
    };
    GetAutoIncrementUsageStatisticRequest() = default ;
    GetAutoIncrementUsageStatisticRequest(const GetAutoIncrementUsageStatisticRequest &) = default ;
    GetAutoIncrementUsageStatisticRequest(GetAutoIncrementUsageStatisticRequest &&) = default ;
    GetAutoIncrementUsageStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoIncrementUsageStatisticRequest() = default ;
    GetAutoIncrementUsageStatisticRequest& operator=(const GetAutoIncrementUsageStatisticRequest &) = default ;
    GetAutoIncrementUsageStatisticRequest& operator=(GetAutoIncrementUsageStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbNames_ == nullptr
        && return this->instanceId_ == nullptr && return this->ratioFilter_ == nullptr && return this->realTime_ == nullptr; };
    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string dbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline GetAutoIncrementUsageStatisticRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAutoIncrementUsageStatisticRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ratioFilter Field Functions 
    bool hasRatioFilter() const { return this->ratioFilter_ != nullptr;};
    void deleteRatioFilter() { this->ratioFilter_ = nullptr;};
    inline double ratioFilter() const { DARABONBA_PTR_GET_DEFAULT(ratioFilter_, 0.0) };
    inline GetAutoIncrementUsageStatisticRequest& setRatioFilter(double ratioFilter) { DARABONBA_PTR_SET_VALUE(ratioFilter_, ratioFilter) };


    // realTime Field Functions 
    bool hasRealTime() const { return this->realTime_ != nullptr;};
    void deleteRealTime() { this->realTime_ = nullptr;};
    inline bool realTime() const { DARABONBA_PTR_GET_DEFAULT(realTime_, false) };
    inline GetAutoIncrementUsageStatisticRequest& setRealTime(bool realTime) { DARABONBA_PTR_SET_VALUE(realTime_, realTime) };


  protected:
    // The database name. If you specify a database, the operation queries the usage of auto-increment table IDs in the specified database. Otherwise, the operation queries the usage of auto-increment table IDs in all databases on the instance.
    // 
    // >  Specify the parameter value as a JSON array, such as [\\"db1\\",\\"db2\\"]. Separate multiple database names with commas (,).
    std::shared_ptr<string> dbNames_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The usage threshold of auto-increment IDs. Only usage that exceeds the threshold can be returned. Valid values are decimals that range from 0 to 1.
    // 
    // This parameter is required.
    std::shared_ptr<double> ratioFilter_ = nullptr;
    // Specifies whether to query real-time data. Valid values:
    // 
    // *   **true**: queries data in real time except for data generated in the last 10 minutes.****
    // *   **false**: queries data generated in the last 2 hours. If no such data exists, queries the latest data.
    // 
    // This parameter is required.
    std::shared_ptr<bool> realTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
