// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopOversoldUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    DescribeDesktopOversoldUserGroupRequest() = default ;
    DescribeDesktopOversoldUserGroupRequest(const DescribeDesktopOversoldUserGroupRequest &) = default ;
    DescribeDesktopOversoldUserGroupRequest(DescribeDesktopOversoldUserGroupRequest &&) = default ;
    DescribeDesktopOversoldUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopOversoldUserGroupRequest() = default ;
    DescribeDesktopOversoldUserGroupRequest& operator=(const DescribeDesktopOversoldUserGroupRequest &) = default ;
    DescribeDesktopOversoldUserGroupRequest& operator=(DescribeDesktopOversoldUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->oversoldGroupId_ == nullptr && this->userGroupIds_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopOversoldUserGroupRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopOversoldUserGroupRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline DescribeDesktopOversoldUserGroupRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline DescribeDesktopOversoldUserGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline DescribeDesktopOversoldUserGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> oversoldGroupId_ {};
    shared_ptr<vector<string>> userGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
