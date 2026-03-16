// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Orgs, orgs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Orgs, orgs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOrgsResponseBody() = default ;
    DescribeOrgsResponseBody(const DescribeOrgsResponseBody &) = default ;
    DescribeOrgsResponseBody(DescribeOrgsResponseBody &&) = default ;
    DescribeOrgsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgsResponseBody() = default ;
    DescribeOrgsResponseBody& operator=(const DescribeOrgsResponseBody &) = default ;
    DescribeOrgsResponseBody& operator=(DescribeOrgsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Orgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Orgs& obj) { 
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(OrgName, orgName_);
        DARABONBA_PTR_TO_JSON(OrgNamePath, orgNamePath_);
        DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
      };
      friend void from_json(const Darabonba::Json& j, Orgs& obj) { 
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
        DARABONBA_PTR_FROM_JSON(OrgNamePath, orgNamePath_);
        DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
      };
      Orgs() = default ;
      Orgs(const Orgs &) = default ;
      Orgs(Orgs &&) = default ;
      Orgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Orgs() = default ;
      Orgs& operator=(const Orgs &) = default ;
      Orgs& operator=(Orgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orgId_ == nullptr
        && this->orgName_ == nullptr && this->orgNamePath_ == nullptr && this->parentOrgId_ == nullptr; };
      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Orgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // orgName Field Functions 
      bool hasOrgName() const { return this->orgName_ != nullptr;};
      void deleteOrgName() { this->orgName_ = nullptr;};
      inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
      inline Orgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


      // orgNamePath Field Functions 
      bool hasOrgNamePath() const { return this->orgNamePath_ != nullptr;};
      void deleteOrgNamePath() { this->orgNamePath_ = nullptr;};
      inline string getOrgNamePath() const { DARABONBA_PTR_GET_DEFAULT(orgNamePath_, "") };
      inline Orgs& setOrgNamePath(string orgNamePath) { DARABONBA_PTR_SET_VALUE(orgNamePath_, orgNamePath) };


      // parentOrgId Field Functions 
      bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
      void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
      inline string getParentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
      inline Orgs& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


    protected:
      // The organization ID.
      shared_ptr<string> orgId_ {};
      // The name of the organizational unit.
      shared_ptr<string> orgName_ {};
      shared_ptr<string> orgNamePath_ {};
      // The parent organization ID.
      shared_ptr<string> parentOrgId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->orgs_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOrgsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgs Field Functions 
    bool hasOrgs() const { return this->orgs_ != nullptr;};
    void deleteOrgs() { this->orgs_ = nullptr;};
    inline const vector<DescribeOrgsResponseBody::Orgs> & getOrgs() const { DARABONBA_PTR_GET_CONST(orgs_, vector<DescribeOrgsResponseBody::Orgs>) };
    inline vector<DescribeOrgsResponseBody::Orgs> getOrgs() { DARABONBA_PTR_GET(orgs_, vector<DescribeOrgsResponseBody::Orgs>) };
    inline DescribeOrgsResponseBody& setOrgs(const vector<DescribeOrgsResponseBody::Orgs> & orgs) { DARABONBA_PTR_SET_VALUE(orgs_, orgs) };
    inline DescribeOrgsResponseBody& setOrgs(vector<DescribeOrgsResponseBody::Orgs> && orgs) { DARABONBA_PTR_SET_RVALUE(orgs_, orgs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOrgsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token that determines the start point of the query. The return value is the value of the NextToken response parameter that was returned last time the DescribeOrgs operation was called.
    shared_ptr<string> nextToken_ {};
    // The organizations.
    shared_ptr<vector<DescribeOrgsResponseBody::Orgs>> orgs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
