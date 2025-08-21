// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDOCRESPONSEBODYDOCHITSDOCTAGS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDOCRESPONSEBODYDOCHITSDOCTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class SearchDocResponseBodyDocHitsDocTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDocResponseBodyDocHitsDocTags& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultTag, defaultTag_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDocResponseBodyDocHitsDocTags& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultTag, defaultTag_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    SearchDocResponseBodyDocHitsDocTags() = default ;
    SearchDocResponseBodyDocHitsDocTags(const SearchDocResponseBodyDocHitsDocTags &) = default ;
    SearchDocResponseBodyDocHitsDocTags(SearchDocResponseBodyDocHitsDocTags &&) = default ;
    SearchDocResponseBodyDocHitsDocTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDocResponseBodyDocHitsDocTags() = default ;
    SearchDocResponseBodyDocHitsDocTags& operator=(const SearchDocResponseBodyDocHitsDocTags &) = default ;
    SearchDocResponseBodyDocHitsDocTags& operator=(SearchDocResponseBodyDocHitsDocTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultTag_ != nullptr
        && this->groupId_ != nullptr && this->groupName_ != nullptr && this->tagId_ != nullptr && this->tagName_ != nullptr; };
    // defaultTag Field Functions 
    bool hasDefaultTag() const { return this->defaultTag_ != nullptr;};
    void deleteDefaultTag() { this->defaultTag_ = nullptr;};
    inline bool defaultTag() const { DARABONBA_PTR_GET_DEFAULT(defaultTag_, false) };
    inline SearchDocResponseBodyDocHitsDocTags& setDefaultTag(bool defaultTag) { DARABONBA_PTR_SET_VALUE(defaultTag_, defaultTag) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline SearchDocResponseBodyDocHitsDocTags& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline SearchDocResponseBodyDocHitsDocTags& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int64_t tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
    inline SearchDocResponseBodyDocHitsDocTags& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SearchDocResponseBodyDocHitsDocTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<bool> defaultTag_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> tagId_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
