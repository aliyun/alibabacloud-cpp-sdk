// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSERVERGROUPSREQUESTVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSERVERGROUPSREQUESTVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes() = default ;
    AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes(const AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes &) = default ;
    AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes(AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes &&) = default ;
    AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes() = default ;
    AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& operator=(const AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes &) = default ;
    AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& operator=(AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes &&) = default ;
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
    inline AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The port number over which Auto Scaling adds ECS instances or elastic container instances to the new vServer group. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The weight of an ECS instance or elastic container instance as a backend server. Valid values: 0 to 100.
    // 
    // Default value: 50.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
