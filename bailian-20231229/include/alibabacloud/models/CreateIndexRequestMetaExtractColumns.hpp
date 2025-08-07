// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXREQUESTMETAEXTRACTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXREQUESTMETAEXTRACTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateIndexRequestMetaExtractColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexRequestMetaExtractColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(EnableLlm, enableLlm_);
      DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexRequestMetaExtractColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(EnableLlm, enableLlm_);
      DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateIndexRequestMetaExtractColumns() = default ;
    CreateIndexRequestMetaExtractColumns(const CreateIndexRequestMetaExtractColumns &) = default ;
    CreateIndexRequestMetaExtractColumns(CreateIndexRequestMetaExtractColumns &&) = default ;
    CreateIndexRequestMetaExtractColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexRequestMetaExtractColumns() = default ;
    CreateIndexRequestMetaExtractColumns& operator=(const CreateIndexRequestMetaExtractColumns &) = default ;
    CreateIndexRequestMetaExtractColumns& operator=(CreateIndexRequestMetaExtractColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->enableLlm_ != nullptr && this->enableSearch_ != nullptr && this->key_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateIndexRequestMetaExtractColumns& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enableLlm Field Functions 
    bool hasEnableLlm() const { return this->enableLlm_ != nullptr;};
    void deleteEnableLlm() { this->enableLlm_ = nullptr;};
    inline bool enableLlm() const { DARABONBA_PTR_GET_DEFAULT(enableLlm_, false) };
    inline CreateIndexRequestMetaExtractColumns& setEnableLlm(bool enableLlm) { DARABONBA_PTR_SET_VALUE(enableLlm_, enableLlm) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline CreateIndexRequestMetaExtractColumns& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateIndexRequestMetaExtractColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateIndexRequestMetaExtractColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateIndexRequestMetaExtractColumns& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<bool> enableLlm_ = nullptr;
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
