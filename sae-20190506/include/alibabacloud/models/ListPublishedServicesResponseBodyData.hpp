// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListPublishedServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Group2Ip, group2Ip_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Group2Ip, group2Ip_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListPublishedServicesResponseBodyData() = default ;
    ListPublishedServicesResponseBodyData(const ListPublishedServicesResponseBodyData &) = default ;
    ListPublishedServicesResponseBodyData(ListPublishedServicesResponseBodyData &&) = default ;
    ListPublishedServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBodyData() = default ;
    ListPublishedServicesResponseBodyData& operator=(const ListPublishedServicesResponseBodyData &) = default ;
    ListPublishedServicesResponseBodyData& operator=(ListPublishedServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->group2Ip_ == nullptr && return this->groups_ == nullptr && return this->ips_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr
        && return this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedServicesResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // group2Ip Field Functions 
    bool hasGroup2Ip() const { return this->group2Ip_ != nullptr;};
    void deleteGroup2Ip() { this->group2Ip_ = nullptr;};
    inline string group2Ip() const { DARABONBA_PTR_GET_DEFAULT(group2Ip_, "") };
    inline ListPublishedServicesResponseBodyData& setGroup2Ip(string group2Ip) { DARABONBA_PTR_SET_VALUE(group2Ip_, group2Ip) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> groups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline ListPublishedServicesResponseBodyData& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListPublishedServicesResponseBodyData& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline ListPublishedServicesResponseBodyData& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline ListPublishedServicesResponseBodyData& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPublishedServicesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPublishedServicesResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPublishedServicesResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The reserved parameter. This parameter does not take effect.
    std::shared_ptr<string> group2Ip_ = nullptr;
    // The service group that corresponds to the consumed service.
    std::shared_ptr<vector<string>> groups_ = nullptr;
    // The addresses where services can be subscribed to.
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The name of the published service.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the published service.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the published services.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
