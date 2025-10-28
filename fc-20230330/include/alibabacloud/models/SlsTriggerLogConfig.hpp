// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSTRIGGERLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SLSTRIGGERLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SLSTriggerLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSTriggerLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, SLSTriggerLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    SLSTriggerLogConfig() = default ;
    SLSTriggerLogConfig(const SLSTriggerLogConfig &) = default ;
    SLSTriggerLogConfig(SLSTriggerLogConfig &&) = default ;
    SLSTriggerLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSTriggerLogConfig() = default ;
    SLSTriggerLogConfig& operator=(const SLSTriggerLogConfig &) = default ;
    SLSTriggerLogConfig& operator=(SLSTriggerLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && return this->project_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline SLSTriggerLogConfig& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline SLSTriggerLogConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
