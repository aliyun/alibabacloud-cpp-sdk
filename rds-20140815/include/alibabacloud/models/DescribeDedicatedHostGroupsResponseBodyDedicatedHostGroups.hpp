// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODYDEDICATEDHOSTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODYDEDICATEDHOSTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGroups, dedicatedHostGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroups, dedicatedHostGroups_);
    };
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups() = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups &) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups &&) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups() = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups& operator=(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups &) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups& operator=(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostGroups_ == nullptr; };
    // dedicatedHostGroups Field Functions 
    bool hasDedicatedHostGroups() const { return this->dedicatedHostGroups_ != nullptr;};
    void deleteDedicatedHostGroups() { this->dedicatedHostGroups_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups> & dedicatedHostGroups() const { DARABONBA_PTR_GET_CONST(dedicatedHostGroups_, vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups>) };
    inline vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups> dedicatedHostGroups() { DARABONBA_PTR_GET(dedicatedHostGroups_, vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups>) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups& setDedicatedHostGroups(const vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups> & dedicatedHostGroups) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroups_, dedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups& setDedicatedHostGroups(vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups> && dedicatedHostGroups) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGroups_, dedicatedHostGroups) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups>> dedicatedHostGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
