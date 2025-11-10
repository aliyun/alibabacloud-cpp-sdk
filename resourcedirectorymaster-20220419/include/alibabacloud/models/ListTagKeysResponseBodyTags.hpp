// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTagKeysResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListTagKeysResponseBodyTags() = default ;
    ListTagKeysResponseBodyTags(const ListTagKeysResponseBodyTags &) = default ;
    ListTagKeysResponseBodyTags(ListTagKeysResponseBodyTags &&) = default ;
    ListTagKeysResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBodyTags() = default ;
    ListTagKeysResponseBodyTags& operator=(const ListTagKeysResponseBodyTags &) = default ;
    ListTagKeysResponseBodyTags& operator=(ListTagKeysResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTagKeysResponseBodyTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
