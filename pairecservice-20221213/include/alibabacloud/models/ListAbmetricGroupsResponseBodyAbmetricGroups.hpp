// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABMETRICGROUPSRESPONSEBODYABMETRICGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTABMETRICGROUPSRESPONSEBODYABMETRICGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListABMetricGroupsResponseBodyABMetricGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABMetricGroupsResponseBodyABMetricGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricGroupId, ABMetricGroupId_);
      DARABONBA_PTR_TO_JSON(ABMetricIds, ABMetricIds_);
      DARABONBA_PTR_TO_JSON(ABMetricNames, ABMetricNames_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Realtime, realtime_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListABMetricGroupsResponseBodyABMetricGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricGroupId, ABMetricGroupId_);
      DARABONBA_PTR_FROM_JSON(ABMetricIds, ABMetricIds_);
      DARABONBA_PTR_FROM_JSON(ABMetricNames, ABMetricNames_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Realtime, realtime_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    ListABMetricGroupsResponseBodyABMetricGroups() = default ;
    ListABMetricGroupsResponseBodyABMetricGroups(const ListABMetricGroupsResponseBodyABMetricGroups &) = default ;
    ListABMetricGroupsResponseBodyABMetricGroups(ListABMetricGroupsResponseBodyABMetricGroups &&) = default ;
    ListABMetricGroupsResponseBodyABMetricGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABMetricGroupsResponseBodyABMetricGroups() = default ;
    ListABMetricGroupsResponseBodyABMetricGroups& operator=(const ListABMetricGroupsResponseBodyABMetricGroups &) = default ;
    ListABMetricGroupsResponseBodyABMetricGroups& operator=(ListABMetricGroupsResponseBodyABMetricGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetricGroupId_ != nullptr
        && this->ABMetricIds_ != nullptr && this->ABMetricNames_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->realtime_ != nullptr && this->sceneId_ != nullptr; };
    // ABMetricGroupId Field Functions 
    bool hasABMetricGroupId() const { return this->ABMetricGroupId_ != nullptr;};
    void deleteABMetricGroupId() { this->ABMetricGroupId_ = nullptr;};
    inline string ABMetricGroupId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricGroupId_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setABMetricGroupId(string ABMetricGroupId) { DARABONBA_PTR_SET_VALUE(ABMetricGroupId_, ABMetricGroupId) };


    // ABMetricIds Field Functions 
    bool hasABMetricIds() const { return this->ABMetricIds_ != nullptr;};
    void deleteABMetricIds() { this->ABMetricIds_ = nullptr;};
    inline string ABMetricIds() const { DARABONBA_PTR_GET_DEFAULT(ABMetricIds_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setABMetricIds(string ABMetricIds) { DARABONBA_PTR_SET_VALUE(ABMetricIds_, ABMetricIds) };


    // ABMetricNames Field Functions 
    bool hasABMetricNames() const { return this->ABMetricNames_ != nullptr;};
    void deleteABMetricNames() { this->ABMetricNames_ = nullptr;};
    inline string ABMetricNames() const { DARABONBA_PTR_GET_DEFAULT(ABMetricNames_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setABMetricNames(string ABMetricNames) { DARABONBA_PTR_SET_VALUE(ABMetricNames_, ABMetricNames) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // realtime Field Functions 
    bool hasRealtime() const { return this->realtime_ != nullptr;};
    void deleteRealtime() { this->realtime_ = nullptr;};
    inline bool realtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, false) };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setRealtime(bool realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListABMetricGroupsResponseBodyABMetricGroups& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> ABMetricGroupId_ = nullptr;
    std::shared_ptr<string> ABMetricIds_ = nullptr;
    std::shared_ptr<string> ABMetricNames_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<bool> realtime_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
