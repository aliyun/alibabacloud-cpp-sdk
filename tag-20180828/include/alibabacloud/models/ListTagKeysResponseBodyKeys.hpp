// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagKeysResponseBodyKeysKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagKeysResponseBodyKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListTagKeysResponseBodyKeys() = default ;
    ListTagKeysResponseBodyKeys(const ListTagKeysResponseBodyKeys &) = default ;
    ListTagKeysResponseBodyKeys(ListTagKeysResponseBodyKeys &&) = default ;
    ListTagKeysResponseBodyKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBodyKeys() = default ;
    ListTagKeysResponseBodyKeys& operator=(const ListTagKeysResponseBodyKeys &) = default ;
    ListTagKeysResponseBodyKeys& operator=(ListTagKeysResponseBodyKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const vector<Models::ListTagKeysResponseBodyKeysKey> & key() const { DARABONBA_PTR_GET_CONST(key_, vector<Models::ListTagKeysResponseBodyKeysKey>) };
    inline vector<Models::ListTagKeysResponseBodyKeysKey> key() { DARABONBA_PTR_GET(key_, vector<Models::ListTagKeysResponseBodyKeysKey>) };
    inline ListTagKeysResponseBodyKeys& setKey(const vector<Models::ListTagKeysResponseBodyKeysKey> & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline ListTagKeysResponseBodyKeys& setKey(vector<Models::ListTagKeysResponseBodyKeysKey> && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


  protected:
    std::shared_ptr<vector<Models::ListTagKeysResponseBodyKeysKey>> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
