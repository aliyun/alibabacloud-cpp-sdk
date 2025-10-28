// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODYVPCLISTVPCENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODYVPCLISTVPCENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListVpcResponseBodyVpcListVpcEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcResponseBodyVpcListVpcEntity& obj) { 
      DARABONBA_PTR_TO_JSON(EcsNum, ecsNum_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcResponseBodyVpcListVpcEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsNum, ecsNum_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    ListVpcResponseBodyVpcListVpcEntity() = default ;
    ListVpcResponseBodyVpcListVpcEntity(const ListVpcResponseBodyVpcListVpcEntity &) = default ;
    ListVpcResponseBodyVpcListVpcEntity(ListVpcResponseBodyVpcListVpcEntity &&) = default ;
    ListVpcResponseBodyVpcListVpcEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcResponseBodyVpcListVpcEntity() = default ;
    ListVpcResponseBodyVpcListVpcEntity& operator=(const ListVpcResponseBodyVpcListVpcEntity &) = default ;
    ListVpcResponseBodyVpcListVpcEntity& operator=(ListVpcResponseBodyVpcListVpcEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsNum_ == nullptr
        && return this->expired_ == nullptr && return this->regionId_ == nullptr && return this->userId_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // ecsNum Field Functions 
    bool hasEcsNum() const { return this->ecsNum_ != nullptr;};
    void deleteEcsNum() { this->ecsNum_ = nullptr;};
    inline int32_t ecsNum() const { DARABONBA_PTR_GET_DEFAULT(ecsNum_, 0) };
    inline ListVpcResponseBodyVpcListVpcEntity& setEcsNum(int32_t ecsNum) { DARABONBA_PTR_SET_VALUE(ecsNum_, ecsNum) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListVpcResponseBodyVpcListVpcEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcResponseBodyVpcListVpcEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListVpcResponseBodyVpcListVpcEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVpcResponseBodyVpcListVpcEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline ListVpcResponseBodyVpcListVpcEntity& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // This operation uses only common request headers. For more information, see [Common parameters for API calls](https://help.aliyun.com/document_detail/123488.html).
    std::shared_ptr<int32_t> ecsNum_ = nullptr;
    // The region ID of the VPC.
    std::shared_ptr<bool> expired_ = nullptr;
    // No request parameters.
    std::shared_ptr<string> regionId_ = nullptr;
    // GET /pop/v5/vpc_list HTTP/1.1
    // Common request headers
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The number of ECS instances associated with the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
