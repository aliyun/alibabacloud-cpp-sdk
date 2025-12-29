// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterAddonInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(logging, logging_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(logging, logging_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetClusterAddonInstanceResponseBody() = default ;
    GetClusterAddonInstanceResponseBody(const GetClusterAddonInstanceResponseBody &) = default ;
    GetClusterAddonInstanceResponseBody(GetClusterAddonInstanceResponseBody &&) = default ;
    GetClusterAddonInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterAddonInstanceResponseBody() = default ;
    GetClusterAddonInstanceResponseBody& operator=(const GetClusterAddonInstanceResponseBody &) = default ;
    GetClusterAddonInstanceResponseBody& operator=(GetClusterAddonInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logging : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logging& obj) { 
        DARABONBA_PTR_TO_JSON(capable, capable_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(log_project, logProject_);
        DARABONBA_PTR_TO_JSON(logstore, logstore_);
      };
      friend void from_json(const Darabonba::Json& j, Logging& obj) { 
        DARABONBA_PTR_FROM_JSON(capable, capable_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(log_project, logProject_);
        DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      };
      Logging() = default ;
      Logging(const Logging &) = default ;
      Logging(Logging &&) = default ;
      Logging(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logging() = default ;
      Logging& operator=(const Logging &) = default ;
      Logging& operator=(Logging &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capable_ == nullptr
        && this->enabled_ == nullptr && this->logProject_ == nullptr && this->logstore_ == nullptr; };
      // capable Field Functions 
      bool hasCapable() const { return this->capable_ != nullptr;};
      void deleteCapable() { this->capable_ = nullptr;};
      inline bool getCapable() const { DARABONBA_PTR_GET_DEFAULT(capable_, false) };
      inline Logging& setCapable(bool capable) { DARABONBA_PTR_SET_VALUE(capable_, capable) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Logging& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // logProject Field Functions 
      bool hasLogProject() const { return this->logProject_ != nullptr;};
      void deleteLogProject() { this->logProject_ = nullptr;};
      inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
      inline Logging& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
      inline Logging& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    protected:
      // Indicates whether Simple Log Service is supported by the component.
      shared_ptr<bool> capable_ {};
      // Indicates whether Simple Log Service is enabled for the component.
      shared_ptr<bool> enabled_ {};
      // The Simple Log Service project that is used to collect logs for the component.
      shared_ptr<string> logProject_ {};
      // The Simple Log Service Logstore that is used to collect logs for the component.
      shared_ptr<string> logstore_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->logging_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetClusterAddonInstanceResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // logging Field Functions 
    bool hasLogging() const { return this->logging_ != nullptr;};
    void deleteLogging() { this->logging_ = nullptr;};
    inline const GetClusterAddonInstanceResponseBody::Logging & getLogging() const { DARABONBA_PTR_GET_CONST(logging_, GetClusterAddonInstanceResponseBody::Logging) };
    inline GetClusterAddonInstanceResponseBody::Logging getLogging() { DARABONBA_PTR_GET(logging_, GetClusterAddonInstanceResponseBody::Logging) };
    inline GetClusterAddonInstanceResponseBody& setLogging(const GetClusterAddonInstanceResponseBody::Logging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
    inline GetClusterAddonInstanceResponseBody& setLogging(GetClusterAddonInstanceResponseBody::Logging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterAddonInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetClusterAddonInstanceResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetClusterAddonInstanceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The custom configurations of the component.
    shared_ptr<string> config_ {};
    // The status of Simple Log Service.
    shared_ptr<GetClusterAddonInstanceResponseBody::Logging> logging_ {};
    // The name of the component instance.
    shared_ptr<string> name_ {};
    // The status of the component. Valid values:
    // 
    // *   active: The component is installed.
    // *   updating: The component is being modified.
    // *   upgrading: The component is being updated.
    // *   deleting: The component is being uninstalled.
    shared_ptr<string> state_ {};
    // The version of the component instance.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
