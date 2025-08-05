// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGBYPARAMRESPONSEBODYDATATAG_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGBYPARAMRESPONSEBODYDATATAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTagByParamResponseBodyDataTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagByParamResponseBodyDataTag& obj) { 
      DARABONBA_PTR_TO_JSON(TagDescription, tagDescription_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagByParamResponseBodyDataTag& obj) { 
      DARABONBA_PTR_FROM_JSON(TagDescription, tagDescription_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    QueryTagByParamResponseBodyDataTag() = default ;
    QueryTagByParamResponseBodyDataTag(const QueryTagByParamResponseBodyDataTag &) = default ;
    QueryTagByParamResponseBodyDataTag(QueryTagByParamResponseBodyDataTag &&) = default ;
    QueryTagByParamResponseBodyDataTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagByParamResponseBodyDataTag() = default ;
    QueryTagByParamResponseBodyDataTag& operator=(const QueryTagByParamResponseBodyDataTag &) = default ;
    QueryTagByParamResponseBodyDataTag& operator=(QueryTagByParamResponseBodyDataTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagDescription_ != nullptr
        && this->tagId_ != nullptr && this->tagName_ != nullptr; };
    // tagDescription Field Functions 
    bool hasTagDescription() const { return this->tagDescription_ != nullptr;};
    void deleteTagDescription() { this->tagDescription_ = nullptr;};
    inline string tagDescription() const { DARABONBA_PTR_GET_DEFAULT(tagDescription_, "") };
    inline QueryTagByParamResponseBodyDataTag& setTagDescription(string tagDescription) { DARABONBA_PTR_SET_VALUE(tagDescription_, tagDescription) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline QueryTagByParamResponseBodyDataTag& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline QueryTagByParamResponseBodyDataTag& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // Tag description
    std::shared_ptr<string> tagDescription_ = nullptr;
    // Tag ID
    std::shared_ptr<string> tagId_ = nullptr;
    // Tag name
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
