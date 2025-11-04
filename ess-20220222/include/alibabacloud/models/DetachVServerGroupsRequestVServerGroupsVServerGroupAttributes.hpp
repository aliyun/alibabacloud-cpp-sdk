// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSERVERGROUPSREQUESTVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSERVERGROUPSREQUESTVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes() = default ;
    DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes(const DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes &) = default ;
    DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes(DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes &&) = default ;
    DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes() = default ;
    DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes& operator=(const DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes &) = default ;
    DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes& operator=(DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->VServerGroupId_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DetachVServerGroupsRequestVServerGroupsVServerGroupAttributes& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The port number that Auto Scaling employs to incorporate instances into the vServer group. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the backend vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
