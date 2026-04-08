// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGGINGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_LOGGINGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LogDestination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class LoggingConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoggingConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(destinations, destinations_);
    };
    friend void from_json(const Darabonba::Json& j, LoggingConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(destinations, destinations_);
    };
    LoggingConfiguration() = default ;
    LoggingConfiguration(const LoggingConfiguration &) = default ;
    LoggingConfiguration(LoggingConfiguration &&) = default ;
    LoggingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoggingConfiguration() = default ;
    LoggingConfiguration& operator=(const LoggingConfiguration &) = default ;
    LoggingConfiguration& operator=(LoggingConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinations_ == nullptr; };
    // destinations Field Functions 
    bool hasDestinations() const { return this->destinations_ != nullptr;};
    void deleteDestinations() { this->destinations_ = nullptr;};
    inline const vector<LogDestination> & getDestinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<LogDestination>) };
    inline vector<LogDestination> getDestinations() { DARABONBA_PTR_GET(destinations_, vector<LogDestination>) };
    inline LoggingConfiguration& setDestinations(const vector<LogDestination> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
    inline LoggingConfiguration& setDestinations(vector<LogDestination> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


  protected:
    // 日志输出的目标配置列表
    shared_ptr<vector<LogDestination>> destinations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
