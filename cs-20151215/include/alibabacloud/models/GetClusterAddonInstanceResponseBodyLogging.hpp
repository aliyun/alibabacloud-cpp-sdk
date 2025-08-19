// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODYLOGGING_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODYLOGGING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterAddonInstanceResponseBodyLogging : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterAddonInstanceResponseBodyLogging& obj) { 
      DARABONBA_PTR_TO_JSON(capable, capable_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(log_project, logProject_);
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterAddonInstanceResponseBodyLogging& obj) { 
      DARABONBA_PTR_FROM_JSON(capable, capable_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(log_project, logProject_);
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
    };
    GetClusterAddonInstanceResponseBodyLogging() = default ;
    GetClusterAddonInstanceResponseBodyLogging(const GetClusterAddonInstanceResponseBodyLogging &) = default ;
    GetClusterAddonInstanceResponseBodyLogging(GetClusterAddonInstanceResponseBodyLogging &&) = default ;
    GetClusterAddonInstanceResponseBodyLogging(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterAddonInstanceResponseBodyLogging() = default ;
    GetClusterAddonInstanceResponseBodyLogging& operator=(const GetClusterAddonInstanceResponseBodyLogging &) = default ;
    GetClusterAddonInstanceResponseBodyLogging& operator=(GetClusterAddonInstanceResponseBodyLogging &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capable_ != nullptr
        && this->enabled_ != nullptr && this->logProject_ != nullptr && this->logstore_ != nullptr; };
    // capable Field Functions 
    bool hasCapable() const { return this->capable_ != nullptr;};
    void deleteCapable() { this->capable_ = nullptr;};
    inline bool capable() const { DARABONBA_PTR_GET_DEFAULT(capable_, false) };
    inline GetClusterAddonInstanceResponseBodyLogging& setCapable(bool capable) { DARABONBA_PTR_SET_VALUE(capable_, capable) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetClusterAddonInstanceResponseBodyLogging& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline GetClusterAddonInstanceResponseBodyLogging& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline GetClusterAddonInstanceResponseBodyLogging& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


  protected:
    // Indicates whether Simple Log Service is supported by the component.
    std::shared_ptr<bool> capable_ = nullptr;
    // Indicates whether Simple Log Service is enabled for the component.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The Simple Log Service project that is used to collect logs for the component.
    std::shared_ptr<string> logProject_ = nullptr;
    // The Simple Log Service Logstore that is used to collect logs for the component.
    std::shared_ptr<string> logstore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
