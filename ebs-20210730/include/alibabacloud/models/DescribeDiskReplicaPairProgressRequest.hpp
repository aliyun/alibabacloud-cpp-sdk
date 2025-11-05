// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaPairProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaPairProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaPairId, replicaPairId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaPairProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaPairId, replicaPairId_);
    };
    DescribeDiskReplicaPairProgressRequest() = default ;
    DescribeDiskReplicaPairProgressRequest(const DescribeDiskReplicaPairProgressRequest &) = default ;
    DescribeDiskReplicaPairProgressRequest(DescribeDiskReplicaPairProgressRequest &&) = default ;
    DescribeDiskReplicaPairProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaPairProgressRequest() = default ;
    DescribeDiskReplicaPairProgressRequest& operator=(const DescribeDiskReplicaPairProgressRequest &) = default ;
    DescribeDiskReplicaPairProgressRequest& operator=(DescribeDiskReplicaPairProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->replicaPairId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiskReplicaPairProgressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaPairId Field Functions 
    bool hasReplicaPairId() const { return this->replicaPairId_ != nullptr;};
    void deleteReplicaPairId() { this->replicaPairId_ = nullptr;};
    inline string replicaPairId() const { DARABONBA_PTR_GET_DEFAULT(replicaPairId_, "") };
    inline DescribeDiskReplicaPairProgressRequest& setReplicaPairId(string replicaPairId) { DARABONBA_PTR_SET_VALUE(replicaPairId_, replicaPairId) };


  protected:
    // The region ID of the replication pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the replication pair. You can call the [DescribeDiskReplicaPairs](https://help.aliyun.com/document_detail/354206.html)operation to query the IDs of existing replication pairs.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicaPairId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
