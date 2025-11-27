// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainSnapshotDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotDataPerInterval, snapshotDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotDataPerInterval, snapshotDataPerInterval_);
    };
    DescribeVsDomainSnapshotDataResponseBody() = default ;
    DescribeVsDomainSnapshotDataResponseBody(const DescribeVsDomainSnapshotDataResponseBody &) = default ;
    DescribeVsDomainSnapshotDataResponseBody(DescribeVsDomainSnapshotDataResponseBody &&) = default ;
    DescribeVsDomainSnapshotDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainSnapshotDataResponseBody() = default ;
    DescribeVsDomainSnapshotDataResponseBody& operator=(const DescribeVsDomainSnapshotDataResponseBody &) = default ;
    DescribeVsDomainSnapshotDataResponseBody& operator=(DescribeVsDomainSnapshotDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->snapshotDataPerInterval_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainSnapshotDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotDataPerInterval Field Functions 
    bool hasSnapshotDataPerInterval() const { return this->snapshotDataPerInterval_ != nullptr;};
    void deleteSnapshotDataPerInterval() { this->snapshotDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval & snapshotDataPerInterval() const { DARABONBA_PTR_GET_CONST(snapshotDataPerInterval_, DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval) };
    inline DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval snapshotDataPerInterval() { DARABONBA_PTR_GET(snapshotDataPerInterval_, DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval) };
    inline DescribeVsDomainSnapshotDataResponseBody& setSnapshotDataPerInterval(const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval & snapshotDataPerInterval) { DARABONBA_PTR_SET_VALUE(snapshotDataPerInterval_, snapshotDataPerInterval) };
    inline DescribeVsDomainSnapshotDataResponseBody& setSnapshotDataPerInterval(DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval && snapshotDataPerInterval) { DARABONBA_PTR_SET_RVALUE(snapshotDataPerInterval_, snapshotDataPerInterval) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval> snapshotDataPerInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
