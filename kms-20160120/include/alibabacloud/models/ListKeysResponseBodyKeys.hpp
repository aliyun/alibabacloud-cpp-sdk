// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYSRESPONSEBODYKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYSRESPONSEBODYKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKeysResponseBodyKeysKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeysResponseBodyKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListKeysResponseBodyKeys() = default ;
    ListKeysResponseBodyKeys(const ListKeysResponseBodyKeys &) = default ;
    ListKeysResponseBodyKeys(ListKeysResponseBodyKeys &&) = default ;
    ListKeysResponseBodyKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeysResponseBodyKeys() = default ;
    ListKeysResponseBodyKeys& operator=(const ListKeysResponseBodyKeys &) = default ;
    ListKeysResponseBodyKeys& operator=(ListKeysResponseBodyKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const vector<Models::ListKeysResponseBodyKeysKey> & key() const { DARABONBA_PTR_GET_CONST(key_, vector<Models::ListKeysResponseBodyKeysKey>) };
    inline vector<Models::ListKeysResponseBodyKeysKey> key() { DARABONBA_PTR_GET(key_, vector<Models::ListKeysResponseBodyKeysKey>) };
    inline ListKeysResponseBodyKeys& setKey(const vector<Models::ListKeysResponseBodyKeysKey> & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline ListKeysResponseBodyKeys& setKey(vector<Models::ListKeysResponseBodyKeysKey> && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


  protected:
    std::shared_ptr<vector<Models::ListKeysResponseBodyKeysKey>> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
