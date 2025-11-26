// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTAGGROUPSRESPONSEBODYTAGGROUPS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTAGGROUPSRESPONSEBODYTAGGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyTagGroupsResponseBodyTagGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTagGroupsResponseBodyTagGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_TO_JSON(TagGroupId, tagGroupId_);
      DARABONBA_PTR_TO_JSON(TagGroupIndex, tagGroupIndex_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTagGroupsResponseBodyTagGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_FROM_JSON(TagGroupId, tagGroupId_);
      DARABONBA_PTR_FROM_JSON(TagGroupIndex, tagGroupIndex_);
    };
    ModifyTagGroupsResponseBodyTagGroups() = default ;
    ModifyTagGroupsResponseBodyTagGroups(const ModifyTagGroupsResponseBodyTagGroups &) = default ;
    ModifyTagGroupsResponseBodyTagGroups(ModifyTagGroupsResponseBodyTagGroups &&) = default ;
    ModifyTagGroupsResponseBodyTagGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTagGroupsResponseBodyTagGroups() = default ;
    ModifyTagGroupsResponseBodyTagGroups& operator=(const ModifyTagGroupsResponseBodyTagGroups &) = default ;
    ModifyTagGroupsResponseBodyTagGroups& operator=(ModifyTagGroupsResponseBodyTagGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptId_ == nullptr
        && return this->tagGroup_ == nullptr && return this->tagGroupId_ == nullptr && return this->tagGroupIndex_ == nullptr; };
    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyTagGroupsResponseBodyTagGroups& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // tagGroup Field Functions 
    bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
    void deleteTagGroup() { this->tagGroup_ = nullptr;};
    inline string tagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
    inline ModifyTagGroupsResponseBodyTagGroups& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


    // tagGroupId Field Functions 
    bool hasTagGroupId() const { return this->tagGroupId_ != nullptr;};
    void deleteTagGroupId() { this->tagGroupId_ = nullptr;};
    inline string tagGroupId() const { DARABONBA_PTR_GET_DEFAULT(tagGroupId_, "") };
    inline ModifyTagGroupsResponseBodyTagGroups& setTagGroupId(string tagGroupId) { DARABONBA_PTR_SET_VALUE(tagGroupId_, tagGroupId) };


    // tagGroupIndex Field Functions 
    bool hasTagGroupIndex() const { return this->tagGroupIndex_ != nullptr;};
    void deleteTagGroupIndex() { this->tagGroupIndex_ = nullptr;};
    inline int32_t tagGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(tagGroupIndex_, 0) };
    inline ModifyTagGroupsResponseBodyTagGroups& setTagGroupIndex(int32_t tagGroupIndex) { DARABONBA_PTR_SET_VALUE(tagGroupIndex_, tagGroupIndex) };


  protected:
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> tagGroup_ = nullptr;
    std::shared_ptr<string> tagGroupId_ = nullptr;
    std::shared_ptr<int32_t> tagGroupIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
