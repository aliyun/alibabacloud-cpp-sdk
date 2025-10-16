// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudDriveUsersResponseBodyCloudDriveUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDriveUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDriveUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudDriveUsers, cloudDriveUsers_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDriveUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudDriveUsers, cloudDriveUsers_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudDriveUsersResponseBody() = default ;
    DescribeCloudDriveUsersResponseBody(const DescribeCloudDriveUsersResponseBody &) = default ;
    DescribeCloudDriveUsersResponseBody(DescribeCloudDriveUsersResponseBody &&) = default ;
    DescribeCloudDriveUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDriveUsersResponseBody() = default ;
    DescribeCloudDriveUsersResponseBody& operator=(const DescribeCloudDriveUsersResponseBody &) = default ;
    DescribeCloudDriveUsersResponseBody& operator=(DescribeCloudDriveUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudDriveUsers_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // cloudDriveUsers Field Functions 
    bool hasCloudDriveUsers() const { return this->cloudDriveUsers_ != nullptr;};
    void deleteCloudDriveUsers() { this->cloudDriveUsers_ = nullptr;};
    inline const vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers> & cloudDriveUsers() const { DARABONBA_PTR_GET_CONST(cloudDriveUsers_, vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers>) };
    inline vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers> cloudDriveUsers() { DARABONBA_PTR_GET(cloudDriveUsers_, vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers>) };
    inline DescribeCloudDriveUsersResponseBody& setCloudDriveUsers(const vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers> & cloudDriveUsers) { DARABONBA_PTR_SET_VALUE(cloudDriveUsers_, cloudDriveUsers) };
    inline DescribeCloudDriveUsersResponseBody& setCloudDriveUsers(vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers> && cloudDriveUsers) { DARABONBA_PTR_SET_RVALUE(cloudDriveUsers_, cloudDriveUsers) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudDriveUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDriveUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCloudDriveUsersResponseBodyCloudDriveUsers>> cloudDriveUsers_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
