// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMGROUPSRESPONSEBODYCUSTOMGROUPSCUSTOMGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMGROUPSRESPONSEBODYCUSTOMGROUPSCUSTOMGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomGroupsResponseBodyCustomGroupsCustomGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomGroupsResponseBodyCustomGroupsCustomGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CustomGroupDescription, customGroupDescription_);
      DARABONBA_PTR_TO_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_TO_JSON(CustomGroupName, customGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomGroupsResponseBodyCustomGroupsCustomGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomGroupDescription, customGroupDescription_);
      DARABONBA_PTR_FROM_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_FROM_JSON(CustomGroupName, customGroupName_);
    };
    ListCustomGroupsResponseBodyCustomGroupsCustomGroup() = default ;
    ListCustomGroupsResponseBodyCustomGroupsCustomGroup(const ListCustomGroupsResponseBodyCustomGroupsCustomGroup &) = default ;
    ListCustomGroupsResponseBodyCustomGroupsCustomGroup(ListCustomGroupsResponseBodyCustomGroupsCustomGroup &&) = default ;
    ListCustomGroupsResponseBodyCustomGroupsCustomGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomGroupsResponseBodyCustomGroupsCustomGroup() = default ;
    ListCustomGroupsResponseBodyCustomGroupsCustomGroup& operator=(const ListCustomGroupsResponseBodyCustomGroupsCustomGroup &) = default ;
    ListCustomGroupsResponseBodyCustomGroupsCustomGroup& operator=(ListCustomGroupsResponseBodyCustomGroupsCustomGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customGroupDescription_ == nullptr
        && return this->customGroupId_ == nullptr && return this->customGroupName_ == nullptr; };
    // customGroupDescription Field Functions 
    bool hasCustomGroupDescription() const { return this->customGroupDescription_ != nullptr;};
    void deleteCustomGroupDescription() { this->customGroupDescription_ = nullptr;};
    inline string customGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(customGroupDescription_, "") };
    inline ListCustomGroupsResponseBodyCustomGroupsCustomGroup& setCustomGroupDescription(string customGroupDescription) { DARABONBA_PTR_SET_VALUE(customGroupDescription_, customGroupDescription) };


    // customGroupId Field Functions 
    bool hasCustomGroupId() const { return this->customGroupId_ != nullptr;};
    void deleteCustomGroupId() { this->customGroupId_ = nullptr;};
    inline string customGroupId() const { DARABONBA_PTR_GET_DEFAULT(customGroupId_, "") };
    inline ListCustomGroupsResponseBodyCustomGroupsCustomGroup& setCustomGroupId(string customGroupId) { DARABONBA_PTR_SET_VALUE(customGroupId_, customGroupId) };


    // customGroupName Field Functions 
    bool hasCustomGroupName() const { return this->customGroupName_ != nullptr;};
    void deleteCustomGroupName() { this->customGroupName_ = nullptr;};
    inline string customGroupName() const { DARABONBA_PTR_GET_DEFAULT(customGroupName_, "") };
    inline ListCustomGroupsResponseBodyCustomGroupsCustomGroup& setCustomGroupName(string customGroupName) { DARABONBA_PTR_SET_VALUE(customGroupName_, customGroupName) };


  protected:
    std::shared_ptr<string> customGroupDescription_ = nullptr;
    std::shared_ptr<string> customGroupId_ = nullptr;
    std::shared_ptr<string> customGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
