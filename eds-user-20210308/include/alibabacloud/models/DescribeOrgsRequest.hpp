// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
      DARABONBA_ANY_TO_JSON(ShowExtras, showExtras_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
      DARABONBA_ANY_FROM_JSON(ShowExtras, showExtras_);
    };
    DescribeOrgsRequest() = default ;
    DescribeOrgsRequest(const DescribeOrgsRequest &) = default ;
    DescribeOrgsRequest(DescribeOrgsRequest &&) = default ;
    DescribeOrgsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgsRequest() = default ;
    DescribeOrgsRequest& operator=(const DescribeOrgsRequest &) = default ;
    DescribeOrgsRequest& operator=(DescribeOrgsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->orgName_ == nullptr && return this->parentOrgId_ == nullptr && return this->showExtras_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeOrgsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOrgsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline DescribeOrgsRequest& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // parentOrgId Field Functions 
    bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
    void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
    inline string parentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
    inline DescribeOrgsRequest& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


    // showExtras Field Functions 
    bool hasShowExtras() const { return this->showExtras_ != nullptr;};
    void deleteShowExtras() { this->showExtras_ = nullptr;};
    inline     const Darabonba::Json & showExtras() const { DARABONBA_GET(showExtras_) };
    Darabonba::Json & showExtras() { DARABONBA_GET(showExtras_) };
    inline DescribeOrgsRequest& setShowExtras(const Darabonba::Json & showExtras) { DARABONBA_SET_VALUE(showExtras_, showExtras) };
    inline DescribeOrgsRequest& setShowExtras(Darabonba::Json & showExtras) { DARABONBA_SET_RVALUE(showExtras_, showExtras) };


  protected:
    // The maximum number of entries to return. Valid values: 1 to 100.\\
    // Default value: 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. The return value is the value of the NextToken response parameter that was returned last time the DescribeOrgs operation was called.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The name of the organization.
    std::shared_ptr<string> orgName_ = nullptr;
    // The parent organization ID.
    std::shared_ptr<string> parentOrgId_ = nullptr;
    Darabonba::Json showExtras_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
