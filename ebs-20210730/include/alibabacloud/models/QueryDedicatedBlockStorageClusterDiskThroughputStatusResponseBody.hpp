// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody() = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody(const QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody &) = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody(QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody &&) = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody() = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody& operator=(const QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody &) = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody& operator=(QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the throughput after setting the throughput by SetDedicatedBlockStorageClusterDiskThroughput api.
    // 
    // - SUCCESS: The throughput has been successfully set.
    // - RUNNING: The throughput is currently being set.
    // - WAIT(): The throughput is waiting to be set.
    // - FAIL(): The throughput setting has failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
