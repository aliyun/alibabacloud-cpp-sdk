// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    SourceConfig() = default ;
    SourceConfig(const SourceConfig &) = default ;
    SourceConfig(SourceConfig &&) = default ;
    SourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceConfig() = default ;
    SourceConfig& operator=(const SourceConfig &) = default ;
    SourceConfig& operator=(SourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && this->startTime_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline SourceConfig& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SourceConfig& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the Logstore. The trigger periodically subscribes to data from this Logstore and then triggers the function.
    shared_ptr<string> logstore_ {};
    // The start time of consumption. Unit: seconds. If you do not specify this parameter, consumption starts from the latest data. If this parameter is specified, a trigger event is generated for data written after the specified time. For consumption of existing data, the trigger interval is ignored to catch up with the consumption delay until the real-time trigger progress is caught up. When the catch-up is complete, the trigger starts to trigger function invocations based on the specified trigger event interval without delay.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
