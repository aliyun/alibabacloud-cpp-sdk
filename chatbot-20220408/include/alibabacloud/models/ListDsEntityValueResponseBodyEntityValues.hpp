// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDSENTITYVALUERESPONSEBODYENTITYVALUES_HPP_
#define ALIBABACLOUD_MODELS_LISTDSENTITYVALUERESPONSEBODYENTITYVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListDSEntityValueResponseBodyEntityValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDSEntityValueResponseBodyEntityValues& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Synonyms, synonyms_);
    };
    friend void from_json(const Darabonba::Json& j, ListDSEntityValueResponseBodyEntityValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Synonyms, synonyms_);
    };
    ListDSEntityValueResponseBodyEntityValues() = default ;
    ListDSEntityValueResponseBodyEntityValues(const ListDSEntityValueResponseBodyEntityValues &) = default ;
    ListDSEntityValueResponseBodyEntityValues(ListDSEntityValueResponseBodyEntityValues &&) = default ;
    ListDSEntityValueResponseBodyEntityValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDSEntityValueResponseBodyEntityValues() = default ;
    ListDSEntityValueResponseBodyEntityValues& operator=(const ListDSEntityValueResponseBodyEntityValues &) = default ;
    ListDSEntityValueResponseBodyEntityValues& operator=(ListDSEntityValueResponseBodyEntityValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->createTime_ == nullptr && return this->entityId_ == nullptr && return this->entityValueId_ == nullptr && return this->modifyTime_ == nullptr && return this->synonyms_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListDSEntityValueResponseBodyEntityValues& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDSEntityValueResponseBodyEntityValues& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline ListDSEntityValueResponseBodyEntityValues& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityValueId Field Functions 
    bool hasEntityValueId() const { return this->entityValueId_ != nullptr;};
    void deleteEntityValueId() { this->entityValueId_ = nullptr;};
    inline int64_t entityValueId() const { DARABONBA_PTR_GET_DEFAULT(entityValueId_, 0L) };
    inline ListDSEntityValueResponseBodyEntityValues& setEntityValueId(int64_t entityValueId) { DARABONBA_PTR_SET_VALUE(entityValueId_, entityValueId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListDSEntityValueResponseBodyEntityValues& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // synonyms Field Functions 
    bool hasSynonyms() const { return this->synonyms_ != nullptr;};
    void deleteSynonyms() { this->synonyms_ = nullptr;};
    inline const vector<string> & synonyms() const { DARABONBA_PTR_GET_CONST(synonyms_, vector<string>) };
    inline vector<string> synonyms() { DARABONBA_PTR_GET(synonyms_, vector<string>) };
    inline ListDSEntityValueResponseBodyEntityValues& setSynonyms(const vector<string> & synonyms) { DARABONBA_PTR_SET_VALUE(synonyms_, synonyms) };
    inline ListDSEntityValueResponseBodyEntityValues& setSynonyms(vector<string> && synonyms) { DARABONBA_PTR_SET_RVALUE(synonyms_, synonyms) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> entityId_ = nullptr;
    std::shared_ptr<int64_t> entityValueId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<vector<string>> synonyms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
