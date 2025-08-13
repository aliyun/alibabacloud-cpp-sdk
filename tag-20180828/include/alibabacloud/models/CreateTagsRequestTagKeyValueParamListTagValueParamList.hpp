// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAGSREQUESTTAGKEYVALUEPARAMLISTTAGVALUEPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAGSREQUESTTAGKEYVALUEPARAMLISTTAGVALUEPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CreateTagsRequestTagKeyValueParamListTagValueParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTagsRequestTagKeyValueParamListTagValueParamList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTagsRequestTagKeyValueParamListTagValueParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateTagsRequestTagKeyValueParamListTagValueParamList() = default ;
    CreateTagsRequestTagKeyValueParamListTagValueParamList(const CreateTagsRequestTagKeyValueParamListTagValueParamList &) = default ;
    CreateTagsRequestTagKeyValueParamListTagValueParamList(CreateTagsRequestTagKeyValueParamListTagValueParamList &&) = default ;
    CreateTagsRequestTagKeyValueParamListTagValueParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTagsRequestTagKeyValueParamListTagValueParamList() = default ;
    CreateTagsRequestTagKeyValueParamListTagValueParamList& operator=(const CreateTagsRequestTagKeyValueParamListTagValueParamList &) = default ;
    CreateTagsRequestTagKeyValueParamListTagValueParamList& operator=(CreateTagsRequestTagKeyValueParamListTagValueParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTagsRequestTagKeyValueParamListTagValueParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateTagsRequestTagKeyValueParamListTagValueParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the value for tag N.
    // 
    // Valid values of N: 1 to 10.
    std::shared_ptr<string> description_ = nullptr;
    // The value of tag N.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
    // 
    // Valid values of N: 1 to 10.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
