// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHosts& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHosts, dedicatedHosts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHosts, dedicatedHosts_);
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
    virtual bool empty() const override { return this->dedicatedHosts_ == nullptr; };
    // dedicatedHosts Field Functions 
    bool hasDedicatedHosts() const { return this->dedicatedHosts_ != nullptr;};
    void deleteDedicatedHosts() { this->dedicatedHosts_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts> & dedicatedHosts() const { DARABONBA_PTR_GET_CONST(dedicatedHosts_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts>) };
    inline vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts> dedicatedHosts() { DARABONBA_PTR_GET(dedicatedHosts_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts>) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHosts& setDedicatedHosts(const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts> & dedicatedHosts) { DARABONBA_PTR_SET_VALUE(dedicatedHosts_, dedicatedHosts) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHosts& setDedicatedHosts(vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts> && dedicatedHosts) { DARABONBA_PTR_SET_RVALUE(dedicatedHosts_, dedicatedHosts) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts>> dedicatedHosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
