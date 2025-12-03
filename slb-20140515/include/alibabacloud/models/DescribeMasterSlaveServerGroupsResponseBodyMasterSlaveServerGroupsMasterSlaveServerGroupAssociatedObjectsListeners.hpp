// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPSMASTERSLAVESERVERGROUPASSOCIATEDOBJECTSLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPSMASTERSLAVESERVERGROUPASSOCIATEDOBJECTSLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners& obj) { 
      DARABONBA_PTR_TO_JSON(Listener, listener_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(Listener, listener_);
    };
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners &&) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners& operator=(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners& operator=(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listener_ == nullptr; };
    // listener Field Functions 
    bool hasListener() const { return this->listener_ != nullptr;};
    void deleteListener() { this->listener_ = nullptr;};
    inline const vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener> & listener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener>) };
    inline vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener> listener() { DARABONBA_PTR_GET(listener_, vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener>) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners& setListener(const vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners& setListener(vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


  protected:
    std::shared_ptr<vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener>> listener_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
