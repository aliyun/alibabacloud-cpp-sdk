// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLISTLISTPUBLISHEDSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLISTLISTPUBLISHEDSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups.hpp>
#include <alibabacloud/models/ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DockerApplication, dockerApplication_);
      DARABONBA_PTR_TO_JSON(Group2Ip, group2Ip_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DockerApplication, dockerApplication_);
      DARABONBA_PTR_FROM_JSON(Group2Ip, group2Ip_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices() = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices(const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices(ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices &&) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices() = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& operator=(const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& operator=(ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dockerApplication_ == nullptr && return this->group2Ip_ == nullptr && return this->groups_ == nullptr && return this->ips_ == nullptr && return this->name_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dockerApplication Field Functions 
    bool hasDockerApplication() const { return this->dockerApplication_ != nullptr;};
    void deleteDockerApplication() { this->dockerApplication_ = nullptr;};
    inline bool dockerApplication() const { DARABONBA_PTR_GET_DEFAULT(dockerApplication_, false) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setDockerApplication(bool dockerApplication) { DARABONBA_PTR_SET_VALUE(dockerApplication_, dockerApplication) };


    // group2Ip Field Functions 
    bool hasGroup2Ip() const { return this->group2Ip_ != nullptr;};
    void deleteGroup2Ip() { this->group2Ip_ = nullptr;};
    inline string group2Ip() const { DARABONBA_PTR_GET_DEFAULT(group2Ip_, "") };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setGroup2Ip(string group2Ip) { DARABONBA_PTR_SET_VALUE(group2Ip_, group2Ip) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups & groups() const { DARABONBA_PTR_GET_CONST(groups_, Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups) };
    inline Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups groups() { DARABONBA_PTR_GET(groups_, Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setGroups(const Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setGroups(Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps & ips() const { DARABONBA_PTR_GET_CONST(ips_, Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps) };
    inline Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps ips() { DARABONBA_PTR_GET(ips_, Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setIps(const Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setIps(Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // Indicates whether the application runs in a Docker container. Valid values:
    // 
    // *   true: The application runs in a Docker container.
    // *   false: The application does not run in a Docker container.
    std::shared_ptr<bool> dockerApplication_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> group2Ip_ = nullptr;
    std::shared_ptr<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups> groups_ = nullptr;
    std::shared_ptr<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps> ips_ = nullptr;
    // The name of the published service.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the published service.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the published services.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
