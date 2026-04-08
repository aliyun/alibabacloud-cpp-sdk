// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGDESTINATION_HPP_
#define ALIBABACLOUD_MODELS_LOGDESTINATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SLSLogDestination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class LogDestination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogDestination& obj) { 
      DARABONBA_PTR_TO_JSON(slsLogDestination, slsLogDestination_);
    };
    friend void from_json(const Darabonba::Json& j, LogDestination& obj) { 
      DARABONBA_PTR_FROM_JSON(slsLogDestination, slsLogDestination_);
    };
    LogDestination() = default ;
    LogDestination(const LogDestination &) = default ;
    LogDestination(LogDestination &&) = default ;
    LogDestination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogDestination() = default ;
    LogDestination& operator=(const LogDestination &) = default ;
    LogDestination& operator=(LogDestination &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsLogDestination_ == nullptr; };
    // slsLogDestination Field Functions 
    bool hasSlsLogDestination() const { return this->slsLogDestination_ != nullptr;};
    void deleteSlsLogDestination() { this->slsLogDestination_ = nullptr;};
    inline const SLSLogDestination & getSlsLogDestination() const { DARABONBA_PTR_GET_CONST(slsLogDestination_, SLSLogDestination) };
    inline SLSLogDestination getSlsLogDestination() { DARABONBA_PTR_GET(slsLogDestination_, SLSLogDestination) };
    inline LogDestination& setSlsLogDestination(const SLSLogDestination & slsLogDestination) { DARABONBA_PTR_SET_VALUE(slsLogDestination_, slsLogDestination) };
    inline LogDestination& setSlsLogDestination(SLSLogDestination && slsLogDestination) { DARABONBA_PTR_SET_RVALUE(slsLogDestination_, slsLogDestination) };


  protected:
    // 阿里云日志服务（SLS）的日志目标配置
    shared_ptr<SLSLogDestination> slsLogDestination_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
