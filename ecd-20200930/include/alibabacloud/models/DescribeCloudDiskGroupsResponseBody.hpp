// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudDiskGroupsResponseBodyCloudDriveGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDiskGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudDriveGroups, cloudDriveGroups_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudDriveGroups, cloudDriveGroups_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudDiskGroupsResponseBody() = default ;
    DescribeCloudDiskGroupsResponseBody(const DescribeCloudDiskGroupsResponseBody &) = default ;
    DescribeCloudDiskGroupsResponseBody(DescribeCloudDiskGroupsResponseBody &&) = default ;
    DescribeCloudDiskGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskGroupsResponseBody() = default ;
    DescribeCloudDiskGroupsResponseBody& operator=(const DescribeCloudDiskGroupsResponseBody &) = default ;
    DescribeCloudDiskGroupsResponseBody& operator=(DescribeCloudDiskGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudDriveGroups_ == nullptr
        && return this->count_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // cloudDriveGroups Field Functions 
    bool hasCloudDriveGroups() const { return this->cloudDriveGroups_ != nullptr;};
    void deleteCloudDriveGroups() { this->cloudDriveGroups_ = nullptr;};
    inline const vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups> & cloudDriveGroups() const { DARABONBA_PTR_GET_CONST(cloudDriveGroups_, vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups>) };
    inline vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups> cloudDriveGroups() { DARABONBA_PTR_GET(cloudDriveGroups_, vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups>) };
    inline DescribeCloudDiskGroupsResponseBody& setCloudDriveGroups(const vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups> & cloudDriveGroups) { DARABONBA_PTR_SET_VALUE(cloudDriveGroups_, cloudDriveGroups) };
    inline DescribeCloudDiskGroupsResponseBody& setCloudDriveGroups(vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups> && cloudDriveGroups) { DARABONBA_PTR_SET_RVALUE(cloudDriveGroups_, cloudDriveGroups) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCloudDiskGroupsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudDiskGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDiskGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudDiskGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<DescribeCloudDiskGroupsResponseBodyCloudDriveGroups>> cloudDriveGroups_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
