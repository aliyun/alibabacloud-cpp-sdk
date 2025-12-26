// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEREQUESTMETADATACONFIGCUSTOMMETADATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEREQUESTMETADATACONFIGCUSTOMMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData() = default ;
    UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData(const UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData &) = default ;
    UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData(UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData &&) = default ;
    UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData() = default ;
    UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData& operator=(const UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData &) = default ;
    UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData& operator=(UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->valueType_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline UpdateKnowledgeBaseRequestMetaDataConfigCustomMetaData& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // 元数据Key
    std::shared_ptr<string> key_ = nullptr;
    // 元数据Value类型
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
