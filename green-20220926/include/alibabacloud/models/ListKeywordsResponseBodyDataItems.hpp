// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListKeywordsResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordsResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(KeywordLibId, keywordLibId_);
      DARABONBA_PTR_TO_JSON(KeywordMd5Id, keywordMd5Id_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordsResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(KeywordLibId, keywordLibId_);
      DARABONBA_PTR_FROM_JSON(KeywordMd5Id, keywordMd5Id_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    ListKeywordsResponseBodyDataItems() = default ;
    ListKeywordsResponseBodyDataItems(const ListKeywordsResponseBodyDataItems &) = default ;
    ListKeywordsResponseBodyDataItems(ListKeywordsResponseBodyDataItems &&) = default ;
    ListKeywordsResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordsResponseBodyDataItems() = default ;
    ListKeywordsResponseBodyDataItems& operator=(const ListKeywordsResponseBodyDataItems &) = default ;
    ListKeywordsResponseBodyDataItems& operator=(ListKeywordsResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->keywordLibId_ == nullptr && return this->keywordMd5Id_ == nullptr && return this->word_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListKeywordsResponseBodyDataItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListKeywordsResponseBodyDataItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListKeywordsResponseBodyDataItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywordLibId Field Functions 
    bool hasKeywordLibId() const { return this->keywordLibId_ != nullptr;};
    void deleteKeywordLibId() { this->keywordLibId_ = nullptr;};
    inline string keywordLibId() const { DARABONBA_PTR_GET_DEFAULT(keywordLibId_, "") };
    inline ListKeywordsResponseBodyDataItems& setKeywordLibId(string keywordLibId) { DARABONBA_PTR_SET_VALUE(keywordLibId_, keywordLibId) };


    // keywordMd5Id Field Functions 
    bool hasKeywordMd5Id() const { return this->keywordMd5Id_ != nullptr;};
    void deleteKeywordMd5Id() { this->keywordMd5Id_ = nullptr;};
    inline int64_t keywordMd5Id() const { DARABONBA_PTR_GET_DEFAULT(keywordMd5Id_, 0L) };
    inline ListKeywordsResponseBodyDataItems& setKeywordMd5Id(int64_t keywordMd5Id) { DARABONBA_PTR_SET_VALUE(keywordMd5Id_, keywordMd5Id) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline ListKeywordsResponseBodyDataItems& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Keyword library ID.
    std::shared_ptr<string> keywordLibId_ = nullptr;
    // Keyword data ID.
    std::shared_ptr<int64_t> keywordMd5Id_ = nullptr;
    // Keyword.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
