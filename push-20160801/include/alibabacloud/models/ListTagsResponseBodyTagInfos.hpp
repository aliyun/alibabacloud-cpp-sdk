// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODYTAGINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODYTAGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagsResponseBodyTagInfosTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListTagsResponseBodyTagInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsResponseBodyTagInfos& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsResponseBodyTagInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    ListTagsResponseBodyTagInfos() = default ;
    ListTagsResponseBodyTagInfos(const ListTagsResponseBodyTagInfos &) = default ;
    ListTagsResponseBodyTagInfos(ListTagsResponseBodyTagInfos &&) = default ;
    ListTagsResponseBodyTagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsResponseBodyTagInfos() = default ;
    ListTagsResponseBodyTagInfos& operator=(const ListTagsResponseBodyTagInfos &) = default ;
    ListTagsResponseBodyTagInfos& operator=(ListTagsResponseBodyTagInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagInfo_ != nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::ListTagsResponseBodyTagInfosTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::ListTagsResponseBodyTagInfosTagInfo>) };
    inline vector<Models::ListTagsResponseBodyTagInfosTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::ListTagsResponseBodyTagInfosTagInfo>) };
    inline ListTagsResponseBodyTagInfos& setTagInfo(const vector<Models::ListTagsResponseBodyTagInfosTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline ListTagsResponseBodyTagInfos& setTagInfo(vector<Models::ListTagsResponseBodyTagInfosTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::ListTagsResponseBodyTagInfosTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
