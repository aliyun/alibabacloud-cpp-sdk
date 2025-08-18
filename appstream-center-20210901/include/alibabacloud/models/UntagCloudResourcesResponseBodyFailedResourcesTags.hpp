// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGCLOUDRESOURCESRESPONSEBODYFAILEDRESOURCESTAGS_HPP_
#define ALIBABACLOUD_MODELS_UNTAGCLOUDRESOURCESRESPONSEBODYFAILEDRESOURCESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UntagCloudResourcesResponseBodyFailedResourcesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagCloudResourcesResponseBodyFailedResourcesTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, UntagCloudResourcesResponseBodyFailedResourcesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    UntagCloudResourcesResponseBodyFailedResourcesTags() = default ;
    UntagCloudResourcesResponseBodyFailedResourcesTags(const UntagCloudResourcesResponseBodyFailedResourcesTags &) = default ;
    UntagCloudResourcesResponseBodyFailedResourcesTags(UntagCloudResourcesResponseBodyFailedResourcesTags &&) = default ;
    UntagCloudResourcesResponseBodyFailedResourcesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagCloudResourcesResponseBodyFailedResourcesTags() = default ;
    UntagCloudResourcesResponseBodyFailedResourcesTags& operator=(const UntagCloudResourcesResponseBodyFailedResourcesTags &) = default ;
    UntagCloudResourcesResponseBodyFailedResourcesTags& operator=(UntagCloudResourcesResponseBodyFailedResourcesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->scope_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UntagCloudResourcesResponseBodyFailedResourcesTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline UntagCloudResourcesResponseBodyFailedResourcesTags& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
