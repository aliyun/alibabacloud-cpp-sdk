// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVscMountPointsResponseBodyMountPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeVscMountPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscMountPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscMountPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVscMountPointsResponseBody() = default ;
    DescribeVscMountPointsResponseBody(const DescribeVscMountPointsResponseBody &) = default ;
    DescribeVscMountPointsResponseBody(DescribeVscMountPointsResponseBody &&) = default ;
    DescribeVscMountPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscMountPointsResponseBody() = default ;
    DescribeVscMountPointsResponseBody& operator=(const DescribeVscMountPointsResponseBody &) = default ;
    DescribeVscMountPointsResponseBody& operator=(DescribeVscMountPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPoints_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<DescribeVscMountPointsResponseBodyMountPoints> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<DescribeVscMountPointsResponseBodyMountPoints>) };
    inline vector<DescribeVscMountPointsResponseBodyMountPoints> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<DescribeVscMountPointsResponseBodyMountPoints>) };
    inline DescribeVscMountPointsResponseBody& setMountPoints(const vector<DescribeVscMountPointsResponseBodyMountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline DescribeVscMountPointsResponseBody& setMountPoints(vector<DescribeVscMountPointsResponseBodyMountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVscMountPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVscMountPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeVscMountPointsResponseBodyMountPoints>> mountPoints_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
