// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODYTAGINFOSTAGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODYTAGINFOSTAGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListTagsResponseBodyTagInfosTagInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsResponseBodyTagInfosTagInfo& obj) { 
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsResponseBodyTagInfosTagInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    ListTagsResponseBodyTagInfosTagInfo() = default ;
    ListTagsResponseBodyTagInfosTagInfo(const ListTagsResponseBodyTagInfosTagInfo &) = default ;
    ListTagsResponseBodyTagInfosTagInfo(ListTagsResponseBodyTagInfosTagInfo &&) = default ;
    ListTagsResponseBodyTagInfosTagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsResponseBodyTagInfosTagInfo() = default ;
    ListTagsResponseBodyTagInfosTagInfo& operator=(const ListTagsResponseBodyTagInfosTagInfo &) = default ;
    ListTagsResponseBodyTagInfosTagInfo& operator=(ListTagsResponseBodyTagInfosTagInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagName_ == nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListTagsResponseBodyTagInfosTagInfo& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
