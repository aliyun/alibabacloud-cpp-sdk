// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequestVServerGroupsVServerGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateScalingGroupRequestVServerGroupsVServerGroupAttributes() = default ;
    CreateScalingGroupRequestVServerGroupsVServerGroupAttributes(const CreateScalingGroupRequestVServerGroupsVServerGroupAttributes &) = default ;
    CreateScalingGroupRequestVServerGroupsVServerGroupAttributes(CreateScalingGroupRequestVServerGroupsVServerGroupAttributes &&) = default ;
    CreateScalingGroupRequestVServerGroupsVServerGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequestVServerGroupsVServerGroupAttributes() = default ;
    CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& operator=(const CreateScalingGroupRequestVServerGroupsVServerGroupAttributes &) = default ;
    CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& operator=(CreateScalingGroupRequestVServerGroupsVServerGroupAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->VServerGroupId_ != nullptr && this->weight_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateScalingGroupRequestVServerGroupsVServerGroupAttributes& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The port number used by each ECS instance as a backend server in the vServer group. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The weight of each ECS instance as a backend server in the vServer group. If you increase the weight for an ECS instance, the number of requests that are forwarded to the ECS instance also increases. If you set the weight for an ECS instance to 0, no requests are forwarded to the ECS instance. Valid values: 0 to 100.
    // 
    // Default value: 50.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
