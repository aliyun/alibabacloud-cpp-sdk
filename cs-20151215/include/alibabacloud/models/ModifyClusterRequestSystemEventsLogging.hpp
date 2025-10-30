// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTSYSTEMEVENTSLOGGING_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTSYSTEMEVENTSLOGGING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequestSystemEventsLogging : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequestSystemEventsLogging& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(logging_project, loggingProject_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequestSystemEventsLogging& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(logging_project, loggingProject_);
    };
    ModifyClusterRequestSystemEventsLogging() = default ;
    ModifyClusterRequestSystemEventsLogging(const ModifyClusterRequestSystemEventsLogging &) = default ;
    ModifyClusterRequestSystemEventsLogging(ModifyClusterRequestSystemEventsLogging &&) = default ;
    ModifyClusterRequestSystemEventsLogging(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequestSystemEventsLogging() = default ;
    ModifyClusterRequestSystemEventsLogging& operator=(const ModifyClusterRequestSystemEventsLogging &) = default ;
    ModifyClusterRequestSystemEventsLogging& operator=(ModifyClusterRequestSystemEventsLogging &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->loggingProject_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyClusterRequestSystemEventsLogging& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // loggingProject Field Functions 
    bool hasLoggingProject() const { return this->loggingProject_ != nullptr;};
    void deleteLoggingProject() { this->loggingProject_ = nullptr;};
    inline string loggingProject() const { DARABONBA_PTR_GET_DEFAULT(loggingProject_, "") };
    inline ModifyClusterRequestSystemEventsLogging& setLoggingProject(string loggingProject) { DARABONBA_PTR_SET_VALUE(loggingProject_, loggingProject) };


  protected:
    // Specifies whether to enable system event storage.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the Simple Log Service project that stores system events.
    std::shared_ptr<string> loggingProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
