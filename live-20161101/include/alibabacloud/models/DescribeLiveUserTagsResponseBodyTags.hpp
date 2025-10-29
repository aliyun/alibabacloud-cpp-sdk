// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTAGSRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTAGSRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserTagsResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserTagsResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserTagsResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLiveUserTagsResponseBodyTags() = default ;
    DescribeLiveUserTagsResponseBodyTags(const DescribeLiveUserTagsResponseBodyTags &) = default ;
    DescribeLiveUserTagsResponseBodyTags(DescribeLiveUserTagsResponseBodyTags &&) = default ;
    DescribeLiveUserTagsResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserTagsResponseBodyTags() = default ;
    DescribeLiveUserTagsResponseBodyTags& operator=(const DescribeLiveUserTagsResponseBodyTags &) = default ;
    DescribeLiveUserTagsResponseBodyTags& operator=(DescribeLiveUserTagsResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeLiveUserTagsResponseBodyTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeLiveUserTagsResponseBodyTags& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeLiveUserTagsResponseBodyTags& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The key of the tag.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
