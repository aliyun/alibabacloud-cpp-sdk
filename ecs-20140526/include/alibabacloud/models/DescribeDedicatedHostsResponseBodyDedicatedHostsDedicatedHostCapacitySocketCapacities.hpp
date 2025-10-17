// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTCAPACITYSOCKETCAPACITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTCAPACITYSOCKETCAPACITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities& obj) { 
      DARABONBA_PTR_TO_JSON(SocketCapacity, socketCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities& obj) { 
      DARABONBA_PTR_FROM_JSON(SocketCapacity, socketCapacity_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->socketCapacity_ == nullptr; };
    // socketCapacity Field Functions 
    bool hasSocketCapacity() const { return this->socketCapacity_ != nullptr;};
    void deleteSocketCapacity() { this->socketCapacity_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity> & socketCapacity() const { DARABONBA_PTR_GET_CONST(socketCapacity_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity>) };
    inline vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity> socketCapacity() { DARABONBA_PTR_GET(socketCapacity_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity>) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities& setSocketCapacity(const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity> & socketCapacity) { DARABONBA_PTR_SET_VALUE(socketCapacity_, socketCapacity) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities& setSocketCapacity(vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity> && socketCapacity) { DARABONBA_PTR_SET_RVALUE(socketCapacity_, socketCapacity) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity>> socketCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
