// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTIDSETS_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTIDSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AllocateDedicatedHostsResponseBodyDedicatedHostIdSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateDedicatedHostsResponseBodyDedicatedHostIdSets& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateDedicatedHostsResponseBodyDedicatedHostIdSets& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
    };
    AllocateDedicatedHostsResponseBodyDedicatedHostIdSets() = default ;
    AllocateDedicatedHostsResponseBodyDedicatedHostIdSets(const AllocateDedicatedHostsResponseBodyDedicatedHostIdSets &) = default ;
    AllocateDedicatedHostsResponseBodyDedicatedHostIdSets(AllocateDedicatedHostsResponseBodyDedicatedHostIdSets &&) = default ;
    AllocateDedicatedHostsResponseBodyDedicatedHostIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateDedicatedHostsResponseBodyDedicatedHostIdSets() = default ;
    AllocateDedicatedHostsResponseBodyDedicatedHostIdSets& operator=(const AllocateDedicatedHostsResponseBodyDedicatedHostIdSets &) = default ;
    AllocateDedicatedHostsResponseBodyDedicatedHostIdSets& operator=(AllocateDedicatedHostsResponseBodyDedicatedHostIdSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedHostId_ != nullptr; };
    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline const vector<string> & dedicatedHostId() const { DARABONBA_PTR_GET_CONST(dedicatedHostId_, vector<string>) };
    inline vector<string> dedicatedHostId() { DARABONBA_PTR_GET(dedicatedHostId_, vector<string>) };
    inline AllocateDedicatedHostsResponseBodyDedicatedHostIdSets& setDedicatedHostId(const vector<string> & dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };
    inline AllocateDedicatedHostsResponseBodyDedicatedHostIdSets& setDedicatedHostId(vector<string> && dedicatedHostId) { DARABONBA_PTR_SET_RVALUE(dedicatedHostId_, dedicatedHostId) };


  protected:
    std::shared_ptr<vector<string>> dedicatedHostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
