// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSINRECYCLEBINRESPONSEBODYACCESSKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSINRECYCLEBINRESPONSEBODYACCESSKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAccessKeysInRecycleBinResponseBodyAccessKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysInRecycleBinResponseBodyAccessKeys& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysInRecycleBinResponseBodyAccessKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
    };
    ListAccessKeysInRecycleBinResponseBodyAccessKeys() = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeys(const ListAccessKeysInRecycleBinResponseBodyAccessKeys &) = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeys(ListAccessKeysInRecycleBinResponseBodyAccessKeys &&) = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysInRecycleBinResponseBodyAccessKeys() = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeys& operator=(const ListAccessKeysInRecycleBinResponseBodyAccessKeys &) = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeys& operator=(ListAccessKeysInRecycleBinResponseBodyAccessKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline const vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey> & accessKey() const { DARABONBA_PTR_GET_CONST(accessKey_, vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey>) };
    inline vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey> accessKey() { DARABONBA_PTR_GET(accessKey_, vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey>) };
    inline ListAccessKeysInRecycleBinResponseBodyAccessKeys& setAccessKey(const vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey> & accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };
    inline ListAccessKeysInRecycleBinResponseBodyAccessKeys& setAccessKey(vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey> && accessKey) { DARABONBA_PTR_SET_RVALUE(accessKey_, accessKey) };


  protected:
    std::shared_ptr<vector<Models::ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey>> accessKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
