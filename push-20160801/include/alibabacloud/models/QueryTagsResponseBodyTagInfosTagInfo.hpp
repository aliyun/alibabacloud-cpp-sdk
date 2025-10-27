// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODYTAGINFOSTAGINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODYTAGINFOSTAGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryTagsResponseBodyTagInfosTagInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagsResponseBodyTagInfosTagInfo& obj) { 
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagsResponseBodyTagInfosTagInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    QueryTagsResponseBodyTagInfosTagInfo() = default ;
    QueryTagsResponseBodyTagInfosTagInfo(const QueryTagsResponseBodyTagInfosTagInfo &) = default ;
    QueryTagsResponseBodyTagInfosTagInfo(QueryTagsResponseBodyTagInfosTagInfo &&) = default ;
    QueryTagsResponseBodyTagInfosTagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagsResponseBodyTagInfosTagInfo() = default ;
    QueryTagsResponseBodyTagInfosTagInfo& operator=(const QueryTagsResponseBodyTagInfosTagInfo &) = default ;
    QueryTagsResponseBodyTagInfosTagInfo& operator=(QueryTagsResponseBodyTagInfosTagInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagName_ == nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline QueryTagsResponseBodyTagInfosTagInfo& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
