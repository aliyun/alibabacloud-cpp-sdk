// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETADATACONFIGCUSTOMMETADATA_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETADATACONFIGCUSTOMMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseMetaDataConfigCustomMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseMetaDataConfigCustomMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_TO_JSON(ValueCount, valueCount_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseMetaDataConfigCustomMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_FROM_JSON(ValueCount, valueCount_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    KnowledgeBaseMetaDataConfigCustomMetaData() = default ;
    KnowledgeBaseMetaDataConfigCustomMetaData(const KnowledgeBaseMetaDataConfigCustomMetaData &) = default ;
    KnowledgeBaseMetaDataConfigCustomMetaData(KnowledgeBaseMetaDataConfigCustomMetaData &&) = default ;
    KnowledgeBaseMetaDataConfigCustomMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseMetaDataConfigCustomMetaData() = default ;
    KnowledgeBaseMetaDataConfigCustomMetaData& operator=(const KnowledgeBaseMetaDataConfigCustomMetaData &) = default ;
    KnowledgeBaseMetaDataConfigCustomMetaData& operator=(KnowledgeBaseMetaDataConfigCustomMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->referenceCount_ == nullptr && return this->valueCount_ == nullptr && return this->valueType_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline KnowledgeBaseMetaDataConfigCustomMetaData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // referenceCount Field Functions 
    bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
    void deleteReferenceCount() { this->referenceCount_ = nullptr;};
    inline int32_t referenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
    inline KnowledgeBaseMetaDataConfigCustomMetaData& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


    // valueCount Field Functions 
    bool hasValueCount() const { return this->valueCount_ != nullptr;};
    void deleteValueCount() { this->valueCount_ = nullptr;};
    inline int32_t valueCount() const { DARABONBA_PTR_GET_DEFAULT(valueCount_, 0) };
    inline KnowledgeBaseMetaDataConfigCustomMetaData& setValueCount(int32_t valueCount) { DARABONBA_PTR_SET_VALUE(valueCount_, valueCount) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline KnowledgeBaseMetaDataConfigCustomMetaData& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // 元数据Key
    std::shared_ptr<string> key_ = nullptr;
    // 引用次数
    std::shared_ptr<int32_t> referenceCount_ = nullptr;
    // 值的个数
    std::shared_ptr<int32_t> valueCount_ = nullptr;
    // 元数据Value类型
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
