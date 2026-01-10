// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_LOGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class LogConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, LogConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    LogConfiguration() = default ;
    LogConfiguration(const LogConfiguration &) = default ;
    LogConfiguration(LogConfiguration &&) = default ;
    LogConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogConfiguration() = default ;
    LogConfiguration& operator=(const LogConfiguration &) = default ;
    LogConfiguration& operator=(LogConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline LogConfiguration& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline LogConfiguration& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // SLS日志库名称
    shared_ptr<string> logstore_ {};
    // SLS项目名称
    shared_ptr<string> project_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
