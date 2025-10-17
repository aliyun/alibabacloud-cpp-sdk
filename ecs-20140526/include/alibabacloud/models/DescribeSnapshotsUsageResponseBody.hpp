// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotsUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_TO_JSON(SnapshotSize, snapshotSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_FROM_JSON(SnapshotSize, snapshotSize_);
    };
    DescribeSnapshotsUsageResponseBody() = default ;
    DescribeSnapshotsUsageResponseBody(const DescribeSnapshotsUsageResponseBody &) = default ;
    DescribeSnapshotsUsageResponseBody(DescribeSnapshotsUsageResponseBody &&) = default ;
    DescribeSnapshotsUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsUsageResponseBody() = default ;
    DescribeSnapshotsUsageResponseBody& operator=(const DescribeSnapshotsUsageResponseBody &) = default ;
    DescribeSnapshotsUsageResponseBody& operator=(DescribeSnapshotsUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->snapshotCount_ == nullptr && return this->snapshotSize_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotsUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotCount Field Functions 
    bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
    void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
    inline int32_t snapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, 0) };
    inline DescribeSnapshotsUsageResponseBody& setSnapshotCount(int32_t snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


    // snapshotSize Field Functions 
    bool hasSnapshotSize() const { return this->snapshotSize_ != nullptr;};
    void deleteSnapshotSize() { this->snapshotSize_ = nullptr;};
    inline int64_t snapshotSize() const { DARABONBA_PTR_GET_DEFAULT(snapshotSize_, 0L) };
    inline DescribeSnapshotsUsageResponseBody& setSnapshotSize(int64_t snapshotSize) { DARABONBA_PTR_SET_VALUE(snapshotSize_, snapshotSize) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of snapshots stored in the current region.
    std::shared_ptr<int32_t> snapshotCount_ = nullptr;
    // The total size of snapshots stored in the current region. Unit: bytes.
    std::shared_ptr<int64_t> snapshotSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
