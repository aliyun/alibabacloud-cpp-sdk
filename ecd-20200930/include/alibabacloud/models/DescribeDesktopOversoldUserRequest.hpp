// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDUSERREQUEST_HPP_
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
  class DescribeDesktopOversoldUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopOversoldUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(UserDesktopIds, userDesktopIds_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopOversoldUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(UserDesktopIds, userDesktopIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DescribeDesktopOversoldUserRequest() = default ;
    DescribeDesktopOversoldUserRequest(const DescribeDesktopOversoldUserRequest &) = default ;
    DescribeDesktopOversoldUserRequest(DescribeDesktopOversoldUserRequest &&) = default ;
    DescribeDesktopOversoldUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopOversoldUserRequest() = default ;
    DescribeDesktopOversoldUserRequest& operator=(const DescribeDesktopOversoldUserRequest &) = default ;
    DescribeDesktopOversoldUserRequest& operator=(DescribeDesktopOversoldUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endUserId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->oversoldGroupId_ == nullptr && this->userDesktopIds_ == nullptr
        && this->userGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeDesktopOversoldUserRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopOversoldUserRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopOversoldUserRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopOversoldUserRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline DescribeDesktopOversoldUserRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // userDesktopIds Field Functions 
    bool hasUserDesktopIds() const { return this->userDesktopIds_ != nullptr;};
    void deleteUserDesktopIds() { this->userDesktopIds_ = nullptr;};
    inline const vector<string> & getUserDesktopIds() const { DARABONBA_PTR_GET_CONST(userDesktopIds_, vector<string>) };
    inline vector<string> getUserDesktopIds() { DARABONBA_PTR_GET(userDesktopIds_, vector<string>) };
    inline DescribeDesktopOversoldUserRequest& setUserDesktopIds(const vector<string> & userDesktopIds) { DARABONBA_PTR_SET_VALUE(userDesktopIds_, userDesktopIds) };
    inline DescribeDesktopOversoldUserRequest& setUserDesktopIds(vector<string> && userDesktopIds) { DARABONBA_PTR_SET_RVALUE(userDesktopIds_, userDesktopIds) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DescribeDesktopOversoldUserRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> endUserId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> oversoldGroupId_ {};
    shared_ptr<vector<string>> userDesktopIds_ {};
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
