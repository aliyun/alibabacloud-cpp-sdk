// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMOUNTPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMOUNTPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMountPointsResponseBodyMountPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListMountPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMountPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMountPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMountPointsResponseBody() = default ;
    ListMountPointsResponseBody(const ListMountPointsResponseBody &) = default ;
    ListMountPointsResponseBody(ListMountPointsResponseBody &&) = default ;
    ListMountPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMountPointsResponseBody() = default ;
    ListMountPointsResponseBody& operator=(const ListMountPointsResponseBody &) = default ;
    ListMountPointsResponseBody& operator=(ListMountPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPoints_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<ListMountPointsResponseBodyMountPoints> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<ListMountPointsResponseBodyMountPoints>) };
    inline vector<ListMountPointsResponseBodyMountPoints> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<ListMountPointsResponseBodyMountPoints>) };
    inline ListMountPointsResponseBody& setMountPoints(const vector<ListMountPointsResponseBodyMountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline ListMountPointsResponseBody& setMountPoints(vector<ListMountPointsResponseBodyMountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMountPointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMountPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMountPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListMountPointsResponseBodyMountPoints>> mountPoints_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
