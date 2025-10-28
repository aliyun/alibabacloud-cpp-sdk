// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGSLSCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGSLSCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigSlsConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigSlsConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(LogDir, logDir_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigSlsConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(LogDir, logDir_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AppConfigSlsConfigs() = default ;
    AppConfigSlsConfigs(const AppConfigSlsConfigs &) = default ;
    AppConfigSlsConfigs(AppConfigSlsConfigs &&) = default ;
    AppConfigSlsConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigSlsConfigs() = default ;
    AppConfigSlsConfigs& operator=(const AppConfigSlsConfigs &) = default ;
    AppConfigSlsConfigs& operator=(AppConfigSlsConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logDir_ == nullptr
        && return this->logstore_ == nullptr && return this->project_ == nullptr && return this->type_ == nullptr; };
    // logDir Field Functions 
    bool hasLogDir() const { return this->logDir_ != nullptr;};
    void deleteLogDir() { this->logDir_ = nullptr;};
    inline string logDir() const { DARABONBA_PTR_GET_DEFAULT(logDir_, "") };
    inline AppConfigSlsConfigs& setLogDir(string logDir) { DARABONBA_PTR_SET_VALUE(logDir_, logDir) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline AppConfigSlsConfigs& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline AppConfigSlsConfigs& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppConfigSlsConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> logDir_ = nullptr;
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
