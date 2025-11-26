// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListTagsResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagIndex, tagIndex_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagIndex, tagIndex_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    ListTagsResponseBodyTags() = default ;
    ListTagsResponseBodyTags(const ListTagsResponseBodyTags &) = default ;
    ListTagsResponseBodyTags(ListTagsResponseBodyTags &&) = default ;
    ListTagsResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsResponseBodyTags() = default ;
    ListTagsResponseBodyTags& operator=(const ListTagsResponseBodyTags &) = default ;
    ListTagsResponseBodyTags& operator=(ListTagsResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptId_ == nullptr
        && return this->tagGroup_ == nullptr && return this->tagId_ == nullptr && return this->tagIndex_ == nullptr && return this->tagName_ == nullptr; };
    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListTagsResponseBodyTags& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // tagGroup Field Functions 
    bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
    void deleteTagGroup() { this->tagGroup_ = nullptr;};
    inline string tagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
    inline ListTagsResponseBodyTags& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListTagsResponseBodyTags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagIndex Field Functions 
    bool hasTagIndex() const { return this->tagIndex_ != nullptr;};
    void deleteTagIndex() { this->tagIndex_ = nullptr;};
    inline int32_t tagIndex() const { DARABONBA_PTR_GET_DEFAULT(tagIndex_, 0) };
    inline ListTagsResponseBodyTags& setTagIndex(int32_t tagIndex) { DARABONBA_PTR_SET_VALUE(tagIndex_, tagIndex) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListTagsResponseBodyTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> tagGroup_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
    std::shared_ptr<int32_t> tagIndex_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
