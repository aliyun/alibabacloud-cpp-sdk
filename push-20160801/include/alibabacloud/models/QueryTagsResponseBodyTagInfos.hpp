// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODYTAGINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODYTAGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTagsResponseBodyTagInfosTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryTagsResponseBodyTagInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagsResponseBodyTagInfos& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagsResponseBodyTagInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    QueryTagsResponseBodyTagInfos() = default ;
    QueryTagsResponseBodyTagInfos(const QueryTagsResponseBodyTagInfos &) = default ;
    QueryTagsResponseBodyTagInfos(QueryTagsResponseBodyTagInfos &&) = default ;
    QueryTagsResponseBodyTagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagsResponseBodyTagInfos() = default ;
    QueryTagsResponseBodyTagInfos& operator=(const QueryTagsResponseBodyTagInfos &) = default ;
    QueryTagsResponseBodyTagInfos& operator=(QueryTagsResponseBodyTagInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfo_ == nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::QueryTagsResponseBodyTagInfosTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::QueryTagsResponseBodyTagInfosTagInfo>) };
    inline vector<Models::QueryTagsResponseBodyTagInfosTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::QueryTagsResponseBodyTagInfosTagInfo>) };
    inline QueryTagsResponseBodyTagInfos& setTagInfo(const vector<Models::QueryTagsResponseBodyTagInfosTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline QueryTagsResponseBodyTagInfos& setTagInfo(vector<Models::QueryTagsResponseBodyTagInfosTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::QueryTagsResponseBodyTagInfosTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
