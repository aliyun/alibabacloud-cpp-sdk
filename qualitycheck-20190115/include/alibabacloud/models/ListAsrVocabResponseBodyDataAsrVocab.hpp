// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASRVOCABRESPONSEBODYDATAASRVOCAB_HPP_
#define ALIBABACLOUD_MODELS_LISTASRVOCABRESPONSEBODYDATAASRVOCAB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListAsrVocabResponseBodyDataAsrVocab : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsrVocabResponseBodyDataAsrVocab& obj) { 
      DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModelCustomizationId, modelCustomizationId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsrVocabResponseBodyDataAsrVocab& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModelCustomizationId, modelCustomizationId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
    };
    ListAsrVocabResponseBodyDataAsrVocab() = default ;
    ListAsrVocabResponseBodyDataAsrVocab(const ListAsrVocabResponseBodyDataAsrVocab &) = default ;
    ListAsrVocabResponseBodyDataAsrVocab(ListAsrVocabResponseBodyDataAsrVocab &&) = default ;
    ListAsrVocabResponseBodyDataAsrVocab(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsrVocabResponseBodyDataAsrVocab() = default ;
    ListAsrVocabResponseBodyDataAsrVocab& operator=(const ListAsrVocabResponseBodyDataAsrVocab &) = default ;
    ListAsrVocabResponseBodyDataAsrVocab& operator=(ListAsrVocabResponseBodyDataAsrVocab &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrVersion_ == nullptr
        && return this->createTime_ == nullptr && return this->id_ == nullptr && return this->modelCustomizationId_ == nullptr && return this->name_ == nullptr && return this->updateTime_ == nullptr
        && return this->vocabularyId_ == nullptr; };
    // asrVersion Field Functions 
    bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
    void deleteAsrVersion() { this->asrVersion_ = nullptr;};
    inline int32_t asrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
    inline ListAsrVocabResponseBodyDataAsrVocab& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAsrVocabResponseBodyDataAsrVocab& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAsrVocabResponseBodyDataAsrVocab& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelCustomizationId Field Functions 
    bool hasModelCustomizationId() const { return this->modelCustomizationId_ != nullptr;};
    void deleteModelCustomizationId() { this->modelCustomizationId_ = nullptr;};
    inline string modelCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomizationId_, "") };
    inline ListAsrVocabResponseBodyDataAsrVocab& setModelCustomizationId(string modelCustomizationId) { DARABONBA_PTR_SET_VALUE(modelCustomizationId_, modelCustomizationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAsrVocabResponseBodyDataAsrVocab& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAsrVocabResponseBodyDataAsrVocab& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline ListAsrVocabResponseBodyDataAsrVocab& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


  protected:
    std::shared_ptr<int32_t> asrVersion_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> modelCustomizationId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
