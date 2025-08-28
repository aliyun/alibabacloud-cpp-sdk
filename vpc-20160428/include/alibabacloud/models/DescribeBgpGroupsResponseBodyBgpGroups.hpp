// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPGROUPSRESPONSEBODYBGPGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPGROUPSRESPONSEBODYBGPGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpGroupsResponseBodyBgpGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpGroupsResponseBodyBgpGroups& obj) { 
      DARABONBA_PTR_TO_JSON(BgpGroup, bgpGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpGroupsResponseBodyBgpGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpGroup, bgpGroup_);
    };
    DescribeBgpGroupsResponseBodyBgpGroups() = default ;
    DescribeBgpGroupsResponseBodyBgpGroups(const DescribeBgpGroupsResponseBodyBgpGroups &) = default ;
    DescribeBgpGroupsResponseBodyBgpGroups(DescribeBgpGroupsResponseBodyBgpGroups &&) = default ;
    DescribeBgpGroupsResponseBodyBgpGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpGroupsResponseBodyBgpGroups() = default ;
    DescribeBgpGroupsResponseBodyBgpGroups& operator=(const DescribeBgpGroupsResponseBodyBgpGroups &) = default ;
    DescribeBgpGroupsResponseBodyBgpGroups& operator=(DescribeBgpGroupsResponseBodyBgpGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgpGroup_ != nullptr; };
    // bgpGroup Field Functions 
    bool hasBgpGroup() const { return this->bgpGroup_ != nullptr;};
    void deleteBgpGroup() { this->bgpGroup_ = nullptr;};
    inline const vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup> & bgpGroup() const { DARABONBA_PTR_GET_CONST(bgpGroup_, vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup>) };
    inline vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup> bgpGroup() { DARABONBA_PTR_GET(bgpGroup_, vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup>) };
    inline DescribeBgpGroupsResponseBodyBgpGroups& setBgpGroup(const vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup> & bgpGroup) { DARABONBA_PTR_SET_VALUE(bgpGroup_, bgpGroup) };
    inline DescribeBgpGroupsResponseBodyBgpGroups& setBgpGroup(vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup> && bgpGroup) { DARABONBA_PTR_SET_RVALUE(bgpGroup_, bgpGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup>> bgpGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
