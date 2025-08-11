// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERTAGVALUELISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERTAGVALUELISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserTagValueListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserTagValueListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserTagValueListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    QueryUserTagValueListResponseBodyResult() = default ;
    QueryUserTagValueListResponseBodyResult(const QueryUserTagValueListResponseBodyResult &) = default ;
    QueryUserTagValueListResponseBodyResult(QueryUserTagValueListResponseBodyResult &&) = default ;
    QueryUserTagValueListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserTagValueListResponseBodyResult() = default ;
    QueryUserTagValueListResponseBodyResult& operator=(const QueryUserTagValueListResponseBodyResult &) = default ;
    QueryUserTagValueListResponseBodyResult& operator=(QueryUserTagValueListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagId_ != nullptr
        && this->tagName_ != nullptr && this->tagValue_ != nullptr; };
    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline QueryUserTagValueListResponseBodyResult& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline QueryUserTagValueListResponseBodyResult& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline QueryUserTagValueListResponseBodyResult& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // Tag ID.
    std::shared_ptr<string> tagId_ = nullptr;
    // Tag name.
    std::shared_ptr<string> tagName_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
