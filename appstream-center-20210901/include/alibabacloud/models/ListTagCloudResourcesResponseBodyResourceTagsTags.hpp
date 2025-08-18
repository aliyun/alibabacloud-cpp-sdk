// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGCLOUDRESOURCESRESPONSEBODYRESOURCETAGSTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGCLOUDRESOURCESRESPONSEBODYRESOURCETAGSTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTagCloudResourcesResponseBodyResourceTagsTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagCloudResourcesResponseBodyResourceTagsTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagCloudResourcesResponseBodyResourceTagsTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTagCloudResourcesResponseBodyResourceTagsTags() = default ;
    ListTagCloudResourcesResponseBodyResourceTagsTags(const ListTagCloudResourcesResponseBodyResourceTagsTags &) = default ;
    ListTagCloudResourcesResponseBodyResourceTagsTags(ListTagCloudResourcesResponseBodyResourceTagsTags &&) = default ;
    ListTagCloudResourcesResponseBodyResourceTagsTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagCloudResourcesResponseBodyResourceTagsTags() = default ;
    ListTagCloudResourcesResponseBodyResourceTagsTags& operator=(const ListTagCloudResourcesResponseBodyResourceTagsTags &) = default ;
    ListTagCloudResourcesResponseBodyResourceTagsTags& operator=(ListTagCloudResourcesResponseBodyResourceTagsTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->scope_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTagCloudResourcesResponseBodyResourceTagsTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListTagCloudResourcesResponseBodyResourceTagsTags& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTagCloudResourcesResponseBodyResourceTagsTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag type.
    // 
    // Valid values:
    // 
    // *   Custom: custom tag.
    // *   System: system tag.
    std::shared_ptr<string> scope_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
