// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYPHYSICALCONNECTIONLISTPHYSICALCONNECTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYPHYSICALCONNECTIONLISTPHYSICALCONNECTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList(const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList(CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList &&) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList& operator=(const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList& operator=(CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionNo_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    // The ID of the Express Connect circuit.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the Express Connect circuit.
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
