// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSLOGDESTINATION_HPP_
#define ALIBABACLOUD_MODELS_SLSLOGDESTINATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class SLSLogDestination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSLogDestination& obj) { 
      DARABONBA_PTR_TO_JSON(logStore, logStore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, SLSLogDestination& obj) { 
      DARABONBA_PTR_FROM_JSON(logStore, logStore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    SLSLogDestination() = default ;
    SLSLogDestination(const SLSLogDestination &) = default ;
    SLSLogDestination(SLSLogDestination &&) = default ;
    SLSLogDestination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSLogDestination() = default ;
    SLSLogDestination& operator=(const SLSLogDestination &) = default ;
    SLSLogDestination& operator=(SLSLogDestination &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStore_ == nullptr
        && this->project_ == nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline SLSLogDestination& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline SLSLogDestination& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // SLS日志库名称
    shared_ptr<string> logStore_ {};
    // SLS项目名称
    shared_ptr<string> project_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
