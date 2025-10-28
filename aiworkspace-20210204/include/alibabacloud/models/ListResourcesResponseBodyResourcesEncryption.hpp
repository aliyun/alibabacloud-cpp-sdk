// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESENCRYPTION_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESENCRYPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesResponseBodyResourcesEncryption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyResourcesEncryption& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyResourcesEncryption& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListResourcesResponseBodyResourcesEncryption() = default ;
    ListResourcesResponseBodyResourcesEncryption(const ListResourcesResponseBodyResourcesEncryption &) = default ;
    ListResourcesResponseBodyResourcesEncryption(ListResourcesResponseBodyResourcesEncryption &&) = default ;
    ListResourcesResponseBodyResourcesEncryption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyResourcesEncryption() = default ;
    ListResourcesResponseBodyResourcesEncryption& operator=(const ListResourcesResponseBodyResourcesEncryption &) = default ;
    ListResourcesResponseBodyResourcesEncryption& operator=(ListResourcesResponseBodyResourcesEncryption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->enabled_ == nullptr && return this->key_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListResourcesResponseBodyResourcesEncryption& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListResourcesResponseBodyResourcesEncryption& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListResourcesResponseBodyResourcesEncryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The encryption algorithm.
    std::shared_ptr<string> algorithm_ = nullptr;
    // Indicates whether the resources are encrypted.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The primary key for the encryption.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
