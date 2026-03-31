// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitOrganizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitOrganizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GitOrgs, gitOrgs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitOrganizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GitOrgs, gitOrgs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGitOrganizationsResponseBody() = default ;
    ListGitOrganizationsResponseBody(const ListGitOrganizationsResponseBody &) = default ;
    ListGitOrganizationsResponseBody(ListGitOrganizationsResponseBody &&) = default ;
    ListGitOrganizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitOrganizationsResponseBody() = default ;
    ListGitOrganizationsResponseBody& operator=(const ListGitOrganizationsResponseBody &) = default ;
    ListGitOrganizationsResponseBody& operator=(ListGitOrganizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GitOrgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GitOrgs& obj) { 
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      };
      friend void from_json(const Darabonba::Json& j, GitOrgs& obj) { 
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      };
      GitOrgs() = default ;
      GitOrgs(const GitOrgs &) = default ;
      GitOrgs(GitOrgs &&) = default ;
      GitOrgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GitOrgs() = default ;
      GitOrgs& operator=(const GitOrgs &) = default ;
      GitOrgs& operator=(GitOrgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orgId_ == nullptr
        && this->orgName_ == nullptr; };
      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline GitOrgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // orgName Field Functions 
      bool hasOrgName() const { return this->orgName_ != nullptr;};
      void deleteOrgName() { this->orgName_ = nullptr;};
      inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
      inline GitOrgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    protected:
      shared_ptr<string> orgId_ {};
      shared_ptr<string> orgName_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->gitOrgs_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitOrganizationsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitOrgs Field Functions 
    bool hasGitOrgs() const { return this->gitOrgs_ != nullptr;};
    void deleteGitOrgs() { this->gitOrgs_ = nullptr;};
    inline const vector<ListGitOrganizationsResponseBody::GitOrgs> & getGitOrgs() const { DARABONBA_PTR_GET_CONST(gitOrgs_, vector<ListGitOrganizationsResponseBody::GitOrgs>) };
    inline vector<ListGitOrganizationsResponseBody::GitOrgs> getGitOrgs() { DARABONBA_PTR_GET(gitOrgs_, vector<ListGitOrganizationsResponseBody::GitOrgs>) };
    inline ListGitOrganizationsResponseBody& setGitOrgs(const vector<ListGitOrganizationsResponseBody::GitOrgs> & gitOrgs) { DARABONBA_PTR_SET_VALUE(gitOrgs_, gitOrgs) };
    inline ListGitOrganizationsResponseBody& setGitOrgs(vector<ListGitOrganizationsResponseBody::GitOrgs> && gitOrgs) { DARABONBA_PTR_SET_RVALUE(gitOrgs_, gitOrgs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitOrganizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<ListGitOrganizationsResponseBody::GitOrgs>> gitOrgs_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
