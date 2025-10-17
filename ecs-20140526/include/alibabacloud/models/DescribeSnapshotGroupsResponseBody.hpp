// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSnapshotGroupsResponseBodySnapshotGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotGroups, snapshotGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotGroups, snapshotGroups_);
    };
    DescribeSnapshotGroupsResponseBody() = default ;
    DescribeSnapshotGroupsResponseBody(const DescribeSnapshotGroupsResponseBody &) = default ;
    DescribeSnapshotGroupsResponseBody(DescribeSnapshotGroupsResponseBody &&) = default ;
    DescribeSnapshotGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotGroupsResponseBody() = default ;
    DescribeSnapshotGroupsResponseBody& operator=(const DescribeSnapshotGroupsResponseBody &) = default ;
    DescribeSnapshotGroupsResponseBody& operator=(DescribeSnapshotGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->snapshotGroups_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotGroups Field Functions 
    bool hasSnapshotGroups() const { return this->snapshotGroups_ != nullptr;};
    void deleteSnapshotGroups() { this->snapshotGroups_ = nullptr;};
    inline const DescribeSnapshotGroupsResponseBodySnapshotGroups & snapshotGroups() const { DARABONBA_PTR_GET_CONST(snapshotGroups_, DescribeSnapshotGroupsResponseBodySnapshotGroups) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroups snapshotGroups() { DARABONBA_PTR_GET(snapshotGroups_, DescribeSnapshotGroupsResponseBodySnapshotGroups) };
    inline DescribeSnapshotGroupsResponseBody& setSnapshotGroups(const DescribeSnapshotGroupsResponseBodySnapshotGroups & snapshotGroups) { DARABONBA_PTR_SET_VALUE(snapshotGroups_, snapshotGroups) };
    inline DescribeSnapshotGroupsResponseBody& setSnapshotGroups(DescribeSnapshotGroupsResponseBodySnapshotGroups && snapshotGroups) { DARABONBA_PTR_SET_RVALUE(snapshotGroups_, snapshotGroups) };


  protected:
    // The token used to start the next query.
    // 
    // > If the return value is empty, no more data exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the snapshot-consistent groups.
    std::shared_ptr<DescribeSnapshotGroupsResponseBodySnapshotGroups> snapshotGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
