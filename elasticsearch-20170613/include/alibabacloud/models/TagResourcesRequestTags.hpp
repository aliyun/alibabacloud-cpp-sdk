// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class TagResourcesRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    TagResourcesRequestTags() = default ;
    TagResourcesRequestTags(const TagResourcesRequestTags &) = default ;
    TagResourcesRequestTags(TagResourcesRequestTags &&) = default ;
    TagResourcesRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesRequestTags() = default ;
    TagResourcesRequestTags& operator=(const TagResourcesRequestTags &) = default ;
    TagResourcesRequestTags& operator=(TagResourcesRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline TagResourcesRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline TagResourcesRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The returned object.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // Indicates whether tags are added to the clusters. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
