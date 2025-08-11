// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroupsServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsServerGroups() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsServerGroups(const DescribeScalingGroupsResponseBodyScalingGroupsServerGroups &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsServerGroups(DescribeScalingGroupsResponseBodyScalingGroupsServerGroups &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsServerGroups() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsServerGroups &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& operator=(DescribeScalingGroupsResponseBodyScalingGroupsServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->serverGroupId_ != nullptr && this->type_ != nullptr && this->weight_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsServerGroups& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The port number used by an ECS instance as a backend server in the server group.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The type of the server group. Valid values:
    // 
    // *   ALB
    // *   NLB
    std::shared_ptr<string> type_ = nullptr;
    // The weight of an ECS instance as a backend server in the server group.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
