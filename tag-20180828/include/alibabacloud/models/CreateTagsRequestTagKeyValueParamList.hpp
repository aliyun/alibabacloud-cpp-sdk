// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAGSREQUESTTAGKEYVALUEPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAGSREQUESTTAGKEYVALUEPARAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTagsRequestTagKeyValueParamListTagValueParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CreateTagsRequestTagKeyValueParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTagsRequestTagKeyValueParamList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(TagValueParamList, tagValueParamList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTagsRequestTagKeyValueParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(TagValueParamList, tagValueParamList_);
    };
    CreateTagsRequestTagKeyValueParamList() = default ;
    CreateTagsRequestTagKeyValueParamList(const CreateTagsRequestTagKeyValueParamList &) = default ;
    CreateTagsRequestTagKeyValueParamList(CreateTagsRequestTagKeyValueParamList &&) = default ;
    CreateTagsRequestTagKeyValueParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTagsRequestTagKeyValueParamList() = default ;
    CreateTagsRequestTagKeyValueParamList& operator=(const CreateTagsRequestTagKeyValueParamList &) = default ;
    CreateTagsRequestTagKeyValueParamList& operator=(CreateTagsRequestTagKeyValueParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->key_ != nullptr && this->tagValueParamList_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTagsRequestTagKeyValueParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateTagsRequestTagKeyValueParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // tagValueParamList Field Functions 
    bool hasTagValueParamList() const { return this->tagValueParamList_ != nullptr;};
    void deleteTagValueParamList() { this->tagValueParamList_ = nullptr;};
    inline const vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList> & tagValueParamList() const { DARABONBA_PTR_GET_CONST(tagValueParamList_, vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList>) };
    inline vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList> tagValueParamList() { DARABONBA_PTR_GET(tagValueParamList_, vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList>) };
    inline CreateTagsRequestTagKeyValueParamList& setTagValueParamList(const vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList> & tagValueParamList) { DARABONBA_PTR_SET_VALUE(tagValueParamList_, tagValueParamList) };
    inline CreateTagsRequestTagKeyValueParamList& setTagValueParamList(vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList> && tagValueParamList) { DARABONBA_PTR_SET_RVALUE(tagValueParamList_, tagValueParamList) };


  protected:
    // The description of the key for tag N.
    // 
    // Valid values of N: 1 to 10.
    std::shared_ptr<string> description_ = nullptr;
    // The value of tag N.
    // 
    // The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
    // 
    // Valid values of N: 1 to 10.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The information about the tag values.
    std::shared_ptr<vector<Models::CreateTagsRequestTagKeyValueParamListTagValueParamList>> tagValueParamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
