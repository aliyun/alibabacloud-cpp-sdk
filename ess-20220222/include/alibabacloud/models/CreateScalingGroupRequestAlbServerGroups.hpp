// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTALBSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTALBSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequestAlbServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequestAlbServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroupId, albServerGroupId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequestAlbServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroupId, albServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateScalingGroupRequestAlbServerGroups() = default ;
    CreateScalingGroupRequestAlbServerGroups(const CreateScalingGroupRequestAlbServerGroups &) = default ;
    CreateScalingGroupRequestAlbServerGroups(CreateScalingGroupRequestAlbServerGroups &&) = default ;
    CreateScalingGroupRequestAlbServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequestAlbServerGroups() = default ;
    CreateScalingGroupRequestAlbServerGroups& operator=(const CreateScalingGroupRequestAlbServerGroups &) = default ;
    CreateScalingGroupRequestAlbServerGroups& operator=(CreateScalingGroupRequestAlbServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albServerGroupId_ != nullptr
        && this->port_ != nullptr && this->weight_ != nullptr; };
    // albServerGroupId Field Functions 
    bool hasAlbServerGroupId() const { return this->albServerGroupId_ != nullptr;};
    void deleteAlbServerGroupId() { this->albServerGroupId_ = nullptr;};
    inline string albServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(albServerGroupId_, "") };
    inline CreateScalingGroupRequestAlbServerGroups& setAlbServerGroupId(string albServerGroupId) { DARABONBA_PTR_SET_VALUE(albServerGroupId_, albServerGroupId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateScalingGroupRequestAlbServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateScalingGroupRequestAlbServerGroups& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the ALB server group.
    // 
    // You can attach only a limited number of ALB server groups to a scaling group. To view the predefined quota limit or manually request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<string> albServerGroupId_ = nullptr;
    // The port number used by each ECS instance as a backend server in the ALB server group. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The weight of an ECS instance as a backend server in the ALB server group. If you increase the weight for an ECS instance, the number of requests that are forwarded to the ECS instance also increases. If you set the weight for an ECS instance to 0, no requests are forwarded to the ECS instance. Valid values: 0 to 100.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
