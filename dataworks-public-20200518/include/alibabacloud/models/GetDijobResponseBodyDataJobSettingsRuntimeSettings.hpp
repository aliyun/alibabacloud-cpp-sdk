// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATAJOBSETTINGSRUNTIMESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATAJOBSETTINGSRUNTIMESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIJobResponseBodyDataJobSettingsRuntimeSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyDataJobSettingsRuntimeSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyDataJobSettingsRuntimeSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetDIJobResponseBodyDataJobSettingsRuntimeSettings() = default ;
    GetDIJobResponseBodyDataJobSettingsRuntimeSettings(const GetDIJobResponseBodyDataJobSettingsRuntimeSettings &) = default ;
    GetDIJobResponseBodyDataJobSettingsRuntimeSettings(GetDIJobResponseBodyDataJobSettingsRuntimeSettings &&) = default ;
    GetDIJobResponseBodyDataJobSettingsRuntimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyDataJobSettingsRuntimeSettings() = default ;
    GetDIJobResponseBodyDataJobSettingsRuntimeSettings& operator=(const GetDIJobResponseBodyDataJobSettingsRuntimeSettings &) = default ;
    GetDIJobResponseBodyDataJobSettingsRuntimeSettings& operator=(GetDIJobResponseBodyDataJobSettingsRuntimeSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDIJobResponseBodyDataJobSettingsRuntimeSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetDIJobResponseBodyDataJobSettingsRuntimeSettings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the configuration item. Valid values:
    // 
    // *   runtime.offline.speed.limit.mb: indicates the maximum transmission rate that is allowed for a batch synchronization task. This configuration item takes effect only when runtime.offline.speed.limit.enable is set to true.
    // *   runtime.offline.speed.limit.enable: indicates whether throttling is enabled for a batch synchronization task.
    // *   dst.offline.connection.max: indicates the maximum number of connections that are allowed for writing data to the destination of a batch synchronization task.
    // *   runtime.offline.concurrent: indicates the maximum number of parallel threads that are allowed for a batch synchronization task.
    // *   dst.realtime.connection.max: indicates the maximum number of connections that are allowed for writing data to the destination of a real-time synchronization task.
    // *   runtime.enable.auto.create.schema: indicates whether schemas are automatically created in the destination of a synchronization task.
    // *   src.offline.datasource.max.connection: indicates the maximum number of connections that are allowed for reading data from the source of a batch synchronization task.
    // *   runtime.realtime.concurrent: indicates the maximum number of parallel threads that are allowed for a real-time synchronization task.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
