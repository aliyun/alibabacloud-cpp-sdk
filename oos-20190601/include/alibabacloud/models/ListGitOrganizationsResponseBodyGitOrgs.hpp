// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSRESPONSEBODYGITORGS_HPP_
#define ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSRESPONSEBODYGITORGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitOrganizationsResponseBodyGitOrgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitOrganizationsResponseBodyGitOrgs& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitOrganizationsResponseBodyGitOrgs& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
    };
    ListGitOrganizationsResponseBodyGitOrgs() = default ;
    ListGitOrganizationsResponseBodyGitOrgs(const ListGitOrganizationsResponseBodyGitOrgs &) = default ;
    ListGitOrganizationsResponseBodyGitOrgs(ListGitOrganizationsResponseBodyGitOrgs &&) = default ;
    ListGitOrganizationsResponseBodyGitOrgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitOrganizationsResponseBodyGitOrgs() = default ;
    ListGitOrganizationsResponseBodyGitOrgs& operator=(const ListGitOrganizationsResponseBodyGitOrgs &) = default ;
    ListGitOrganizationsResponseBodyGitOrgs& operator=(ListGitOrganizationsResponseBodyGitOrgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgId_ == nullptr
        && return this->orgName_ == nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline ListGitOrganizationsResponseBodyGitOrgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline ListGitOrganizationsResponseBodyGitOrgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


  protected:
    std::shared_ptr<string> orgId_ = nullptr;
    std::shared_ptr<string> orgName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
