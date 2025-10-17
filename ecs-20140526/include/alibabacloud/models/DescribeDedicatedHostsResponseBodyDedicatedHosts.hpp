// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHosts& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHost, dedicatedHost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHost, dedicatedHost_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHosts() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHosts(const DescribeDedicatedHostsResponseBodyDedicatedHosts &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHosts(DescribeDedicatedHostsResponseBodyDedicatedHosts &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHosts() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHosts& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHosts &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHosts& operator=(DescribeDedicatedHostsResponseBodyDedicatedHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHost_ == nullptr; };
    // dedicatedHost Field Functions 
    bool hasDedicatedHost() const { return this->dedicatedHost_ != nullptr;};
    void deleteDedicatedHost() { this->dedicatedHost_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost> & dedicatedHost() const { DARABONBA_PTR_GET_CONST(dedicatedHost_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost>) };
    inline vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost> dedicatedHost() { DARABONBA_PTR_GET(dedicatedHost_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost>) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHosts& setDedicatedHost(const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost> & dedicatedHost) { DARABONBA_PTR_SET_VALUE(dedicatedHost_, dedicatedHost) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHosts& setDedicatedHost(vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost> && dedicatedHost) { DARABONBA_PTR_SET_RVALUE(dedicatedHost_, dedicatedHost) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost>> dedicatedHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
