// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspaceUserOrg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceAccount& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(accountNotes, accountNotes_);
      DARABONBA_PTR_TO_JSON(aliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(aliyunUserName, aliyunUserName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(orgs, orgs_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(accountNotes, accountNotes_);
      DARABONBA_PTR_FROM_JSON(aliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(aliyunUserName, aliyunUserName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(orgs, orgs_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GrafanaWorkspaceAccount() = default ;
    GrafanaWorkspaceAccount(const GrafanaWorkspaceAccount &) = default ;
    GrafanaWorkspaceAccount(GrafanaWorkspaceAccount &&) = default ;
    GrafanaWorkspaceAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceAccount() = default ;
    GrafanaWorkspaceAccount& operator=(const GrafanaWorkspaceAccount &) = default ;
    GrafanaWorkspaceAccount& operator=(GrafanaWorkspaceAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountNotes_ != nullptr && this->aliyunUid_ != nullptr && this->aliyunUserName_ != nullptr && this->gmtCreate_ != nullptr && this->orgs_ != nullptr
        && this->type_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GrafanaWorkspaceAccount& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountNotes Field Functions 
    bool hasAccountNotes() const { return this->accountNotes_ != nullptr;};
    void deleteAccountNotes() { this->accountNotes_ = nullptr;};
    inline string accountNotes() const { DARABONBA_PTR_GET_DEFAULT(accountNotes_, "") };
    inline GrafanaWorkspaceAccount& setAccountNotes(string accountNotes) { DARABONBA_PTR_SET_VALUE(accountNotes_, accountNotes) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline GrafanaWorkspaceAccount& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // aliyunUserName Field Functions 
    bool hasAliyunUserName() const { return this->aliyunUserName_ != nullptr;};
    void deleteAliyunUserName() { this->aliyunUserName_ = nullptr;};
    inline string aliyunUserName() const { DARABONBA_PTR_GET_DEFAULT(aliyunUserName_, "") };
    inline GrafanaWorkspaceAccount& setAliyunUserName(string aliyunUserName) { DARABONBA_PTR_SET_VALUE(aliyunUserName_, aliyunUserName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline float gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0.0) };
    inline GrafanaWorkspaceAccount& setGmtCreate(float gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // orgs Field Functions 
    bool hasOrgs() const { return this->orgs_ != nullptr;};
    void deleteOrgs() { this->orgs_ = nullptr;};
    inline const vector<GrafanaWorkspaceUserOrg> & orgs() const { DARABONBA_PTR_GET_CONST(orgs_, vector<GrafanaWorkspaceUserOrg>) };
    inline vector<GrafanaWorkspaceUserOrg> orgs() { DARABONBA_PTR_GET(orgs_, vector<GrafanaWorkspaceUserOrg>) };
    inline GrafanaWorkspaceAccount& setOrgs(const vector<GrafanaWorkspaceUserOrg> & orgs) { DARABONBA_PTR_SET_VALUE(orgs_, orgs) };
    inline GrafanaWorkspaceAccount& setOrgs(vector<GrafanaWorkspaceUserOrg> && orgs) { DARABONBA_PTR_SET_RVALUE(orgs_, orgs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrafanaWorkspaceAccount& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> accountNotes_ = nullptr;
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<string> aliyunUserName_ = nullptr;
    std::shared_ptr<float> gmtCreate_ = nullptr;
    std::shared_ptr<vector<GrafanaWorkspaceUserOrg>> orgs_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
