// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODYSCALINGGROUPALBSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODYSCALINGGROUPALBSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroupId, albServerGroupId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroupId, albServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups() = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups(const DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups &) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups(DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups &&) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups() = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& operator=(const DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups &) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& operator=(DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->albServerGroupId_ == nullptr
        && return this->port_ == nullptr && return this->weight_ == nullptr; };
    // albServerGroupId Field Functions 
    bool hasAlbServerGroupId() const { return this->albServerGroupId_ != nullptr;};
    void deleteAlbServerGroupId() { this->albServerGroupId_ = nullptr;};
    inline string albServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(albServerGroupId_, "") };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& setAlbServerGroupId(string albServerGroupId) { DARABONBA_PTR_SET_VALUE(albServerGroupId_, albServerGroupId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupAlbServerGroups& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the Application Load Balancer (ALB) server group.
    std::shared_ptr<string> albServerGroupId_ = nullptr;
    // The port number used by an ECS instance as a backend server in the ALB server group.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The weight of an ECS instance as a backend server in the ALB server group.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
