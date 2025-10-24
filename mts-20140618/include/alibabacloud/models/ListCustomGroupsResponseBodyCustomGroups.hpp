// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMGROUPSRESPONSEBODYCUSTOMGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMGROUPSRESPONSEBODYCUSTOMGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomGroupsResponseBodyCustomGroupsCustomGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomGroupsResponseBodyCustomGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomGroupsResponseBodyCustomGroups& obj) { 
      DARABONBA_PTR_TO_JSON(CustomGroup, customGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomGroupsResponseBodyCustomGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomGroup, customGroup_);
    };
    ListCustomGroupsResponseBodyCustomGroups() = default ;
    ListCustomGroupsResponseBodyCustomGroups(const ListCustomGroupsResponseBodyCustomGroups &) = default ;
    ListCustomGroupsResponseBodyCustomGroups(ListCustomGroupsResponseBodyCustomGroups &&) = default ;
    ListCustomGroupsResponseBodyCustomGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomGroupsResponseBodyCustomGroups() = default ;
    ListCustomGroupsResponseBodyCustomGroups& operator=(const ListCustomGroupsResponseBodyCustomGroups &) = default ;
    ListCustomGroupsResponseBodyCustomGroups& operator=(ListCustomGroupsResponseBodyCustomGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customGroup_ == nullptr; };
    // customGroup Field Functions 
    bool hasCustomGroup() const { return this->customGroup_ != nullptr;};
    void deleteCustomGroup() { this->customGroup_ = nullptr;};
    inline const vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup> & customGroup() const { DARABONBA_PTR_GET_CONST(customGroup_, vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup>) };
    inline vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup> customGroup() { DARABONBA_PTR_GET(customGroup_, vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup>) };
    inline ListCustomGroupsResponseBodyCustomGroups& setCustomGroup(const vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup> & customGroup) { DARABONBA_PTR_SET_VALUE(customGroup_, customGroup) };
    inline ListCustomGroupsResponseBodyCustomGroups& setCustomGroup(vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup> && customGroup) { DARABONBA_PTR_SET_RVALUE(customGroup_, customGroup) };


  protected:
    std::shared_ptr<vector<Models::ListCustomGroupsResponseBodyCustomGroupsCustomGroup>> customGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
