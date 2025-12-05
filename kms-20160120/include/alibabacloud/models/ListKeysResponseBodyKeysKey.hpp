// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYSRESPONSEBODYKEYSKEY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYSRESPONSEBODYKEYSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeysResponseBodyKeysKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeysResponseBodyKeysKey& obj) { 
      DARABONBA_PTR_TO_JSON(KeyArn, keyArn_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeysResponseBodyKeysKey& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyArn, keyArn_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    ListKeysResponseBodyKeysKey() = default ;
    ListKeysResponseBodyKeysKey(const ListKeysResponseBodyKeysKey &) = default ;
    ListKeysResponseBodyKeysKey(ListKeysResponseBodyKeysKey &&) = default ;
    ListKeysResponseBodyKeysKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeysResponseBodyKeysKey() = default ;
    ListKeysResponseBodyKeysKey& operator=(const ListKeysResponseBodyKeysKey &) = default ;
    ListKeysResponseBodyKeysKey& operator=(ListKeysResponseBodyKeysKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyArn_ == nullptr
        && return this->keyId_ == nullptr; };
    // keyArn Field Functions 
    bool hasKeyArn() const { return this->keyArn_ != nullptr;};
    void deleteKeyArn() { this->keyArn_ = nullptr;};
    inline string keyArn() const { DARABONBA_PTR_GET_DEFAULT(keyArn_, "") };
    inline ListKeysResponseBodyKeysKey& setKeyArn(string keyArn) { DARABONBA_PTR_SET_VALUE(keyArn_, keyArn) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ListKeysResponseBodyKeysKey& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the CMK.
    std::shared_ptr<string> keyArn_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
