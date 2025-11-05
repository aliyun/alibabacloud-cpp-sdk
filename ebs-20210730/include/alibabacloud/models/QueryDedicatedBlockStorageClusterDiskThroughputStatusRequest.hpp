// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(QosRequestId, qosRequestId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(QosRequestId, qosRequestId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest() = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest(const QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &) = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest(QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &&) = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest() = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& operator=(const QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &) = default ;
    QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& operator=(QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->qosRequestId_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // qosRequestId Field Functions 
    bool hasQosRequestId() const { return this->qosRequestId_ != nullptr;};
    void deleteQosRequestId() { this->qosRequestId_ = nullptr;};
    inline string qosRequestId() const { DARABONBA_PTR_GET_DEFAULT(qosRequestId_, "") };
    inline QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& setQosRequestId(string qosRequestId) { DARABONBA_PTR_SET_VALUE(qosRequestId_, qosRequestId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the request of SetDedicatedBlockStorageClusterDiskThroughput api.
    // 
    // This parameter is required.
    std::shared_ptr<string> qosRequestId_ = nullptr;
    // The region ID of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
