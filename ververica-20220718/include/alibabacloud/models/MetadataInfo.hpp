// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METADATAINFO_HPP_
#define ALIBABACLOUD_MODELS_METADATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class MetadataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetadataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(virtual, virtual_);
    };
    friend void from_json(const Darabonba::Json& j, MetadataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(virtual, virtual_);
    };
    MetadataInfo() = default ;
    MetadataInfo(const MetadataInfo &) = default ;
    MetadataInfo(MetadataInfo &&) = default ;
    MetadataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetadataInfo() = default ;
    MetadataInfo& operator=(const MetadataInfo &) = default ;
    MetadataInfo& operator=(MetadataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->virtual_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline MetadataInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // virtual Field Functions 
    bool hasVirtual() const { return this->virtual_ != nullptr;};
    void deleteVirtual() { this->virtual_ = nullptr;};
    inline bool _virtual() const { DARABONBA_PTR_GET_DEFAULT(virtual_, false) };
    inline MetadataInfo& setVirtual(bool _virtual) { DARABONBA_PTR_SET_VALUE(virtual_, _virtual) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<bool> virtual_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
