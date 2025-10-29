// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSRUNTIMESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSRUNTIMESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings(const GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings(GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings& operator=(const GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings& operator=(GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the configuration item. Valid values:
    // 
    // *   src.offline.datasource.max.connection: indicates the maximum number of connections that are allowed for reading data from the source of a batch synchronization task.
    // *   dst.offline.truncate: indicates whether to clear the destination table before data writing.
    // *   runtime.offline.speed.limit.enable: indicates whether throttling is enabled for a batch synchronization task.
    // *   runtime.offline.concurrent: indicates the maximum number of parallel threads that are allowed for a batch synchronization task.
    // *   runtime.enable.auto.create.schema: indicates whether schemas are automatically created in the destination of a synchronization task.
    // *   runtime.realtime.concurrent: indicates the maximum number of parallel threads that are allowed for a real-time synchronization task.
    // *   runtime.realtime.failover.minute.dataxcdc: indicates the maximum waiting duration before a synchronization task retries the next restart if the previous restart fails after failover occurs. Unit: minutes.
    // *   runtime.realtime.failover.times.dataxcdc: indicates the maximum number of failures that are allowed for restarting a synchronization task after failovers occur.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
