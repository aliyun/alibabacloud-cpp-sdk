// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPAIRDRILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPAIRDRILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class StartPairDrillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPairDrillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(PairId, pairId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartPairDrillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(PairId, pairId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StartPairDrillRequest() = default ;
    StartPairDrillRequest(const StartPairDrillRequest &) = default ;
    StartPairDrillRequest(StartPairDrillRequest &&) = default ;
    StartPairDrillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPairDrillRequest() = default ;
    StartPairDrillRequest& operator=(const StartPairDrillRequest &) = default ;
    StartPairDrillRequest& operator=(StartPairDrillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->pairId_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartPairDrillRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // pairId Field Functions 
    bool hasPairId() const { return this->pairId_ != nullptr;};
    void deletePairId() { this->pairId_ = nullptr;};
    inline string pairId() const { DARABONBA_PTR_GET_DEFAULT(pairId_, "") };
    inline StartPairDrillRequest& setPairId(string pairId) { DARABONBA_PTR_SET_VALUE(pairId_, pairId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartPairDrillRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the replication pair. You can call the [DescribeDiskReplicaPairs](https://help.aliyun.com/document_detail/354206.html) operation to query a list of replication pairs, including replication pair IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> pairId_ = nullptr;
    // The region ID of the secondary disk in the replication pair. You can call the [DescribeDiskReplicaPairs](https://help.aliyun.com/document_detail/354206.html) operation to query the region in which the secondary disk of the replication pair resides.
    // 
    // >  You must enable the disaster recovery drill feature in the region in which the secondary site resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
